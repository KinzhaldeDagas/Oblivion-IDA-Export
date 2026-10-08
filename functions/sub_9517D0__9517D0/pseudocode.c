float *__thiscall sub_9517D0(int this)
{
  double v1; // st7
  float *v2; // edx
  int v3; // ecx
  unsigned int v4; // eax
  float *v5; // esi
  unsigned int v6; // edi
  int v7; // ecx
  double v8; // st6
  float v10; // [esp+0h] [ebp-4h]

  v1 = *(float *)(this + 0xF80); /*0x9517d1*/
  v2 = (float *)(this + 0xF70); /*0x9517d7*/
  v3 = *(_DWORD *)(this + 0x10) - 2; /*0x9517e0*/
  v4 = v3 + 1; /*0x9517e3*/
  v5 = v2; /*0x9517ea*/
  if ( v3 + 1 >= 4 ) /*0x9517ec*/
  {
    v6 = v4 >> 2; /*0x9517f6*/
    v3 -= 4 * (v4 >> 2); /*0x9517fa*/
    do /*0x95187d*/
    {
      if ( v2[0x18] < v1 ) /*0x95180e*/
      {
        v5 = v2 + 0x14; /*0x951812*/
        v1 = v2[0x18]; /*0x951815*/
      }
      if ( v2[0x2C] < v1 ) /*0x95182a*/
      {
        v5 = v2 + 0x28; /*0x95182e*/
        v1 = v2[0x2C]; /*0x951834*/
      }
      if ( v2[0x40] < v1 ) /*0x951849*/
      {
        v5 = v2 + 0x3C; /*0x95184d*/
        v1 = v2[0x40]; /*0x951853*/
      }
      if ( v2[0x54] < v1 ) /*0x951868*/
      {
        v5 = v2 + 0x50; /*0x95186c*/
        v1 = v2[0x54]; /*0x951872*/
      }
      v2 += 0x50; /*0x951876*/
      --v6; /*0x95187c*/
    }
    while ( v6 ); /*0x95187d*/
  }
  if ( v3 >= 0 ) /*0x951882*/
  {
    v7 = v3 + 1; /*0x951884*/
    do /*0x9518a1*/
    {
      v8 = v2[0x18]; /*0x951885*/
      v2 += 0x14; /*0x951888*/
      if ( v8 < v1 ) /*0x951896*/
      {
        v5 = v2; /*0x95189a*/
        v10 = v8; /*0x95188b*/
        v1 = v10; /*0x95189c*/
      }
      --v7; /*0x9518a0*/
    }
    while ( v7 ); /*0x9518a1*/
  }
  return v5; /*0x9518a9*/
}
