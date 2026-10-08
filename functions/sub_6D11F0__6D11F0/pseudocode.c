void __thiscall sub_6D11F0(unsigned __int16 *this, int a2, char a3)
{
  int v4; // esi
  int v5; // eax
  float v6; // eax

  v4 = *((_DWORD *)this + 0x14); /*0x6d11f9*/
  if ( v4 != a2 ) /*0x6d11fe*/
  {
    if ( v4 ) /*0x6d1202*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) ) /*0x6d1208*/
        (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x6d121e*/
    }
    *((_DWORD *)this + 0x14) = a2; /*0x6d1222*/
    if ( a2 ) /*0x6d1225*/
      InterlockedIncrement((volatile LONG *)(a2 + 4)); /*0x6d122b*/
  }
  v5 = *((_DWORD *)this + 0x14); /*0x6d1231*/
  if ( !v5 || (v6 = *(float *)(v5 + 8), v6 == 0.0) ) /*0x6d123d*/
    sub_6D10F0(this, 0.0); /*0x6d1246*/
  else
    sub_6D10F0(this, v6); /*0x6d1240*/
  if ( a3 ) /*0x6d1250*/
    (*(void (__thiscall **)(unsigned __int16 *))(*(_DWORD *)this + 0xA8))(this); /*0x6d125c*/
}
