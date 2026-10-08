void __thiscall sub_8C4950(int this, int a2)
{
  int v3; // edi
  int v4; // eax

  *(float *)(a2 + 8) = *(float *)(this + 0x30); /*0x8c4962*/
  *(_OWORD *)(a2 + 0x10) = *(_OWORD *)(this + 0x20); /*0x8c4969*/
  v3 = *(_DWORD *)(a2 + 4); /*0x8c496d*/
  if ( v3 != *(_DWORD *)(this + 0x10) ) /*0x8c4973*/
  {
    if ( v3 ) /*0x8c4977*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) ) /*0x8c497d*/
        (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x8c4993*/
    }
    v4 = *(_DWORD *)(this + 0x10); /*0x8c4995*/
    *(_DWORD *)(a2 + 4) = v4; /*0x8c499a*/
    if ( v4 ) /*0x8c499d*/
      InterlockedIncrement((volatile LONG *)(v4 + 4)); /*0x8c49a3*/
  }
}
