void __thiscall sub_68C9B0(NiDX92DBufferData **this)
{
  int v2; // esi

  sub_68C0F0(this, *this); /*0x68c9b3*/
  if ( dword_B3C094[2]-- == 1 ) /*0x68c9b8*/
  {
    v2 = dword_B3C094[3]; /*0x68c9c2*/
    if ( dword_B3C094[3] ) /*0x68c9c2*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) ) /*0x68c9d0*/
      {
        if ( v2 ) /*0x68c9dc*/
          (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x68c9e6*/
      }
      dword_B3C094[3] = 0; /*0x68c9e8*/
    }
  }
}
