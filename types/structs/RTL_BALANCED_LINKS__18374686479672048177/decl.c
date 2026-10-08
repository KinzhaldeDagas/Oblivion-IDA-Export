struct __declspec(align(8)) _RTL_BALANCED_LINKS
{
_RTL_BALANCED_LINKS *Parent;
_RTL_BALANCED_LINKS *LeftChild;
_RTL_BALANCED_LINKS *RightChild;
CHAR Balance;
UCHAR Reserved[3];
};
