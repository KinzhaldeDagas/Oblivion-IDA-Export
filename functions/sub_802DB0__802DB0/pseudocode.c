void __thiscall sub_802DB0(int this)
{
  int v1; // eax
  int v2; // edx

  v1 = 0; /*0x802db0*/
  if ( *(_WORD *)(this + 0xE) ) /*0x802db2*/
  {
    v2 = 0; /*0x802dba*/
    do /*0x802de1*/
    {
      *(float *)(*(_DWORD *)(this + 0x10) + v2 + 8) = 0.0; /*0x802dc0*/
      *(float *)(*(_DWORD *)(this + 0x10) + v2 + 0xC) = 0.0; /*0x802dc7*/
      *(_DWORD *)(*(_DWORD *)(this + 0x14) + 4 * v1++) = 0; /*0x802dce*/
      v2 += 0x10; /*0x802ddc*/
    }
    while ( v1 < *(unsigned __int16 *)(this + 0xE) ); /*0x802de1*/
  }
  *(_WORD *)(this + 0xE) = 0; /*0x802de6*/
  sub_802AE0(this); /*0x802dec*/
}
