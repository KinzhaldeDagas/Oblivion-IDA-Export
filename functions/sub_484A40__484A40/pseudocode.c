void __thiscall sub_484A40(ExtraDataList ***this, TESForm *a2)
{
  ExtraDataList **v3; // eax
  _DWORD *v4; // eax
  ExtraDataList *v5; // edi
  ExtraDataList **v6; // eax
  int *v7; // ecx
  void (__thiscall ***v8)(_DWORD, int); // esi

  if ( a2 )
  {
    v3 = *this;
    if ( *this && *v3 )
    {
      ExtraDataList::SetOrRemoveExtraOwnership(*v3, a2);
      return;
    }
    v4 = (_DWORD *)FormHeapAlloc(0x14u);
    if ( v4 )
      v5 = (ExtraDataList *)ExtraDataList_constr(v4);
    else
      v5 = 0;
    ExtraDataList::SetOrRemoveExtraOwnership(v5, a2);
    if ( !*this )
    {
      v6 = (ExtraDataList **)FormHeapAlloc(8u);
      if ( v6 )
      {
        *v6 = 0;
        v6[1] = 0;
        *this = v6;
        BSSimpleList_PushFront(v6, (int)v5);
        return;
      }
      *this = 0;
    }
    BSSimpleList_PushFront(*this, (int)v5);
  }
  else
  {
    v7 = (int *)*this;
    if ( *this )
    {
      v8 = (void (__thiscall ***)(_DWORD, int))*v7;
      if ( *v7 )
      {
        BSSimpleList_Remove(v7, *v7);
        (**v8)(v8, 1);
      }
    }
  }
}
