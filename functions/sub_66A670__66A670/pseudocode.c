void __thiscall sub_66A670(TESObjectREFR *this)
{
  TESObjectCELL *ParentCell; // eax
  ExtraDataList *v3; // edi
  BSExtraDataVtbl *v4; // edi
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // edi

  if ( *((_DWORD *)this + 0x15D) )
  {
    ParentCell = TESObjectREFR_GetParentCell(this);
    v3 = (ExtraDataList *)ParentCell;
    if ( ParentCell )
    {
      if ( TESObjectCELL_IsInterior(ParentCell) )
        v4 = sub_424180(v3 + 2);
      else
        v4 = (BSExtraDataVtbl *)bhkWorldM;
    }
    else
    {
      v4 = 0;
    }
    (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 0x15D) + 0x60))(*((_DWORD *)this + 0x15D));
    if ( v4 )
      (*((void (__thiscall **)(BSExtraDataVtbl *))v4->Destructor + 0x16))(v4);
    v5 = *((_DWORD *)this + 0x15D);
    if ( v5 && (v6 = *(_DWORD *)(v5 + 8)) != 0 )
      v7 = *(_DWORD *)(v6 + 0x18);
    else
      v7 = 0;
    if ( v7 )
      sub_8A6410(v7);
    if ( v4 )
      (*((void (__thiscall **)(BSExtraDataVtbl *))v4->Destructor + 0x16))(v4);
  }
  v8 = *((_DWORD *)this + 0x15D);
  if ( v8 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v8 + 4)) )
      (**(void (__thiscall ***)(int, int))v8)(v8, 1);
    *((_DWORD *)this + 0x15D) = 0;
  }
  *((_DWORD *)this + 0x15E) = 0;
  *((_DWORD *)this + 0x15F) = 0;
}
