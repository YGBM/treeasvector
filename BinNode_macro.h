#pragma once

#define __max(a,b) ((a)>(b)?(a):(b))
#define HeightUpdated(x) /*高度更新常规条件*/ \
((x).height == 1 + __max(stature((x).lc),stature((x).rc)))

#define IsRoot(x) (!((x).parent))
#define IsLChild(x) ( ! IsRoot(x) && ( & (x) == (x).parent->lc))
#define IsRChild(x) ( ! IsRoot(x) && ( & (x) == (x).parent->rc))
#define HasParent(x) ( !IsRoot(x))
#define HasLChild(x) ( (x).lc )
#define HasRChild(x) ( (x).rc )
#define HasChild(x) ( HasLChild(x) || HasRChild(x) )
#define HasBothChild(x) ( HasLChild(x) && HasRChild(x) ) 
#define IsLeaf(x) ( !HasChild(x) )

#define sibling(p) \
    (IsLChild( *(p)) ? (p)->parent->rc : (p)->parent->lc )

#define uncle(x)\
    ( IsLChild( * ( (x)->parent )) ? (x)->parent->parent->rc : (x)->parent->parent->lc)

#define FromParentTo(x)\
    (IsRoot(x) ? _root : (IsLChild(x) ? (x).parent->lc : (x).parent-> rc ))