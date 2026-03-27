// positive sp value has been detected, the output may be wrong!
int __usercall MagicItem_GetFormID_::NotAForm@<eax>(int a1@<eax>)
{
  if ( a1 )
    return *(_DWORD *)(a1 + 0xC);
  else
    return MagicItem_GetFormID_::NotABoundObj();
}
