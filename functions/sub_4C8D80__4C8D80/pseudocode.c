void __thiscall sub_4C8D80(_DWORD *this)
{
  int v2; // edi

  v2 = *(this + 9);
  if ( v2 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) )
      (**(void (__thiscall ***)(int, int))v2)(v2, 1);
    *(this + 9) = 0;
  }
  *((_BYTE *)this + 0x28) = 2;
  *((_BYTE *)this + 0x29) = 0x1E;
  *((_BYTE *)this + 0x2A) = 0x1E;
  *((_BYTE *)this + 0x2B) = 0x1E;
  j_TESForm_InitializeComponents((TESForm *)this);
}
