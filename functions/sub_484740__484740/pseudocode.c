int __thiscall sub_484740(int *this)
{
  int v1; // esi
  int i; // ebx
  TESForm *v3; // edi

  v1 = *this; /*0x484742*/
  for ( i = 0; v1; v1 = *(_DWORD *)(v1 + 4) ) /*0x484742*/
  {
    v3 = *(TESForm **)v1; /*0x484750*/
    if ( !*(_DWORD *)v1 ) /*0x484750*/
      break; /*0x484754*/
    if ( sub_41DEF0(*(TESForm **)v1) ) /*0x484758*/
      i += ExtraDataList_GetExtraCount((ExtraDataList *)v3); /*0x48476b*/
  }
  return i; /*0x484775*/
}
