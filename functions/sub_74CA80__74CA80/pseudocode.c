void __thiscall sub_74CA80(unsigned __int16 *this, _DWORD *a2)
{
  unsigned int v3; // eax
  unsigned int v4; // edi
  _DWORD *v5; // eax

  sub_74E220(a2);
  v3 = sub_7124D0(a2);
  v4 = v3;
  if ( v3 )
  {
    sub_74A8C0(this + 0x28, v3);
    do
    {
      v5 = (_DWORD *)sub_7124A0(a2);
      sub_74C910(this, v5);
      --v4;
    }
    while ( v4 );
  }
}
