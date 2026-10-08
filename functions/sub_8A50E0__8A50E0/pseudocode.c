void __thiscall sub_8A50E0(int *this, _DWORD *a2)
{
  int v3; // eax
  int v4; // ebx
  volatile LONG *v5; // eax

  sub_89F350(this, a2); /*0x8a50e9*/
  v3 = sub_7124D0(a2); /*0x8a50f0*/
  if ( v3 ) /*0x8a50f7*/
  {
    v4 = v3; /*0x8a50fa*/
    do /*0x8a5116*/
    {
      v5 = (volatile LONG *)sub_7124A0(a2); /*0x8a5102*/
      if ( v5 ) /*0x8a5109*/
        sub_8A46C0(this, v5); /*0x8a510e*/
      --v4; /*0x8a5113*/
    }
    while ( v4 ); /*0x8a5116*/
  }
}
