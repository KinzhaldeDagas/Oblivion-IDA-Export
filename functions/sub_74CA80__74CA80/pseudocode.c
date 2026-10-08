void __thiscall sub_74CA80(unsigned __int16 *this, _DWORD *a2)
{
  unsigned int v3; // eax
  unsigned int v4; // edi
  _DWORD *v5; // eax

  sub_74E220(a2); /*0x74ca8a*/
  v3 = sub_7124D0(a2); /*0x74ca91*/
  v4 = v3; /*0x74ca96*/
  if ( v3 ) /*0x74ca9a*/
  {
    sub_74A8C0(this + 0x28, v3); /*0x74caa0*/
    do /*0x74cac2*/
    {
      v5 = (_DWORD *)sub_7124A0(a2); /*0x74cab2*/
      sub_74C910(this, v5); /*0x74caba*/
      --v4; /*0x74cabf*/
    }
    while ( v4 ); /*0x74cac2*/
  }
}
