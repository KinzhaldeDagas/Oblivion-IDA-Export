void __thiscall sub_4E4BD0(_DWORD *this)
{
  int v2; // edi

  v2 = *(this + 7);
  if ( v2 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) )
      (**(void (__thiscall ***)(int, int))v2)(v2, 1);
    *(this + 7) = 0;
  }
  *(this + 8) = 0;
  *(this + 9) = 0;
  *((_WORD *)this + 0x18) = 0;
  j_TESForm_InitializeComponents((TESForm *)this);
}
