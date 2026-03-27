void __thiscall TESPathGrid::~TESPathGrid(TESPathGrid *this)
{
  bool v2; // zf
  LONG (__stdcall *v3)(volatile LONG *); // ebp
  UInt32 v4; // edi
  int v5; // edi
  int v6; // edi

  *(_DWORD *)this = &TESPathGrid::`vftable'{for `TESPathGrid'};
  *((_DWORD *)this + 6) = &TESPathGrid::`vftable'{for `TESChildCell'};
  sub_4E5400((int)this);
  sub_4E6CA0(this);
  sub_4E4ED0((unsigned int *)this);
  sub_4E5280(this);
  j_TESForm_ClearComponentReferences((TESForm *)this);
  v2 = dword_B35F80-- == 1;
  v3 = InterlockedDecrement;
  if ( v2 )
  {
    v4 = dword_B35F88;
    if ( dword_B35F88 )
    {
      if ( !v3((volatile LONG *)(v4 + 4)) )
      {
        if ( v4 )
          (**(void (__thiscall ***)(UInt32, int))v4)(v4, 1);
      }
      dword_B35F88 = 0;
    }
    v5 = dword_B35F8C;
    if ( dword_B35F8C )
    {
      if ( !v3((volatile LONG *)(v5 + 4)) )
      {
        if ( v5 )
          (**(void (__thiscall ***)(int, int))v5)(v5, 1);
      }
      dword_B35F8C = 0;
    }
  }
  NiTPointerMap<unsigned int,BSSimpleList<TESPathGridPoint *> *>::~NiTPointerMap<unsigned int,BSSimpleList<TESPathGridPoint *> *>((unsigned int *)this + 0x11);
  NiTPointerMap<TESObjectREFR *,BSSimpleList<TESPathGridPoint *> *>::~NiTPointerMap<TESObjectREFR *,BSSimpleList<TESPathGridPoint *> *>((unsigned int *)this + 0xD);
  v6 = *((_DWORD *)this + 7);
  if ( v6 )
  {
    if ( !v3((volatile LONG *)(v6 + 4)) )
      (**(void (__thiscall ***)(int, int))v6)(v6, 1);
  }
  TESForm_destr((TESForm *)this);
}
