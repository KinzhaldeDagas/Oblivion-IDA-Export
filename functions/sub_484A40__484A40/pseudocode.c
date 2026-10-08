void __thiscall sub_484A40(ExtraDataList ***this, TESForm *owner)
{
  ExtraDataList **v3; // eax
  _DWORD *v4; // eax
  ExtraDataList *v5; // edi
  int v6; // eax
  int *v7; // ecx
  void (__thiscall ***v8)(_DWORD, int); // esi

  if ( owner ) /*0x484a6b*/
  {
    v3 = *this; /*0x484a71*/
    if ( *this && *v3 ) /*0x484a77*/
    {
      ExtraDataList::SetOrRemoveExtraOwnership(*v3, owner); /*0x484a7f*/
      return; /*0x484a96*/
    }
    v4 = (_DWORD *)FormHeapAlloc(0x14u); /*0x484a9b*/
    if ( v4 ) /*0x484ab1*/
      v5 = (ExtraDataList *)ExtraDataList_constr(v4); /*0x484aba*/
    else
      v5 = 0; /*0x484abe*/
    ExtraDataList::SetOrRemoveExtraOwnership(v5, owner); /*0x484acb*/
    if ( !*this ) /*0x484ad0*/
    {
      v6 = FormHeapAlloc(8u); /*0x484ad7*/
      if ( v6 ) /*0x484ae1*/
      {
        *(_DWORD *)v6 = 0; /*0x484ae3*/
        *(_DWORD *)(v6 + 4) = 0; /*0x484ae9*/
        *this = (ExtraDataList **)v6; /*0x484af3*/
        BSSimpleList_PushFront((_DWORD *)v6, (int)v5); /*0x484af5*/
        return; /*0x484b0c*/
      }
      *this = 0; /*0x484b11*/
    }
    BSSimpleList_PushFront(*this, (int)v5); /*0x484b16*/
  }
  else
  {
    v7 = (int *)*this; /*0x484b30*/
    if ( *this ) /*0x484b30*/
    {
      v8 = (void (__thiscall ***)(_DWORD, int))*v7; /*0x484b36*/
      if ( *v7 ) /*0x484b36*/
      {
        BSSimpleList_Remove(v7, *v7); /*0x484b3d*/
        (**v8)(v8, 1); /*0x484b4a*/
      }
    }
  }
}
