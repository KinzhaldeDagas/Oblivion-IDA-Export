char __thiscall TESObjectREFR_MatchGroupRecord(TESChildCELL *this, void *a2, bool a3, bool a4)
{
  char v4; // bl
  _DWORD *v6; // eax
  unsigned int v7; // edx
  bool v9; // zf

  v4 = 0;
  if ( a2 && *(_DWORD *)a2 == dword_B05E20 )
  {
    v6 = (_DWORD *)(**((int (__thiscall ***)(TESChildCELL *))this + 6))(this + 6);
    v7 = *((_DWORD *)a2 + 3);
    if ( v7 == 6 )
    {
      if ( !a3 )
        return 0;
    }
    else if ( v7 <= 7 || v7 > 0xA )
    {
      if ( a3 )
        return (*(char (__thiscall **)(_DWORD *, void *, bool, bool))(*v6 + 0xBC))(v6, a2, a3, a4);
      return v4;
    }
    if ( sub_46AF50(v6, *((_DWORD *)a2 + 2)) )
    {
      if ( !a4 )
        return 1;
      if ( *((_DWORD *)a2 + 3) == 6 )
        return 1;
      if ( TESObjectREFR_IsPersistent_((TESObjectREFR *)this) )
        v9 = *((_DWORD *)a2 + 3) == 8;
      else
        v9 = (*(_DWORD *)(this + 2) & 0x8000) != 0 ? *((_DWORD *)a2 + 3) == 0xA : *((_DWORD *)a2 + 3) == 9;
      if ( v9 )
        return 1;
    }
  }
  return v4;
}
