int __thiscall sub_484740(int *this)
{
  int v1; // esi
  int i; // ebx
  TESForm *v3; // edi

  v1 = *this;
  for ( i = 0; v1; v1 = *(_DWORD *)(v1 + 4) )
  {
    v3 = *(TESForm **)v1;
    if ( !*(_DWORD *)v1 )
      break;
    if ( sub_41DEF0(*(TESForm **)v1) )
      i += ExtraDataList_GetExtraCount((ExtraDataList *)v3);
  }
  return i;
}
