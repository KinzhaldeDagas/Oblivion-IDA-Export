void __thiscall sub_6D2B70(float *this, float a2)
{
  int v3; // esi

  v3 = *((_DWORD *)this + 4); /*0x6d2b74*/
  if ( v3 ) /*0x6d2b79*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) ) /*0x6d2b7f*/
      (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x6d2b95*/
    *(this + 4) = 0.0; /*0x6d2b97*/
  }
  *(this + 3) = a2; /*0x6d2ba2*/
}
