void __thiscall sub_521DA0(_DWORD *this)
{
  LONG (__stdcall *v2)(volatile LONG *); // ebp
  int v3; // esi
  int v4; // esi

  if ( !sub_45A500(SaveLoad_CurrentSavegame) )
  {
    v2 = InterlockedDecrement;
    v3 = *(this + 0x75);
    if ( v3 )
    {
      if ( !v2((volatile LONG *)(v3 + 4)) )
        (**(void (__thiscall ***)(int, int))v3)(v3, 1);
      *(this + 0x75) = 0;
    }
    sub_55E2A0(this + 0x76, this + 0x75);
    v4 = *(this + 0x77);
    if ( v4 )
    {
      if ( !v2((volatile LONG *)(v4 + 4)) )
        (**(void (__thiscall ***)(int, int))v4)(v4, 1);
      *(this + 0x77) = 0;
    }
  }
  *((_WORD *)this + 0xF0) = 0xFF;
  j_TESForm_ClearComponentReferences((TESForm *)this);
}
