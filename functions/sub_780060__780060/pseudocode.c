void __thiscall sub_780060(_DWORD *this)
{
  unsigned int v1; // esi
  _DWORD *v2; // edx
  _DWORD *v3; // eax

  v1 = 0;
  if ( dword_B28CB0 )
  {
    v2 = this + 0x34B;
    v3 = this + 0x24B;
    do
    {
      v3[0xFFFFFFFE] = v3[0xFFFFFFFD];
      *v3 = v3[0xFFFFFFFF];
      v3[2] = v3[1];
      v3[4] = v3[3];
      v3[6] = v3[5];
      v3[8] = v3[7];
      v3[0xA] = v3[9];
      v3[0xC] = v3[0xB];
      v2[0xFFFFFFFE] = v2[0xFFFFFFFD];
      *v2 = v2[0xFFFFFFFF];
      v2[2] = v2[1];
      v2[4] = v2[3];
      v2[6] = v2[5];
      ++v1;
      v3 += 0x10;
      v2 += 0xA;
    }
    while ( v1 < dword_B28CB0 );
  }
}
