void __thiscall sub_8C4010(void *this, float *a2)
{
  int v3; // edi
  double v4; // st7
  float v5; // [esp+Ch] [ebp-44h]
  __int128 v6; // [esp+10h] [ebp-40h]
  __int128 v7; // [esp+20h] [ebp-30h]
  __int128 v8; // [esp+30h] [ebp-20h]

  if ( a2 ) /*0x8c402e*/
  {
    v3 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x40, 0x24); /*0x8c4045*/
    *(_WORD *)(v3 + 4) = 0x40; /*0x8c4047*/
    *(float *)&v8 = a2[0xC]; /*0x8c4050*/
    *((float *)&v8 + 1) = a2[0xD]; /*0x8c405a*/
    *((float *)&v8 + 2) = a2[0xE]; /*0x8c4061*/
    *((float *)&v8 + 3) = a2[0xF]; /*0x8c4068*/
    *(float *)&v7 = a2[8]; /*0x8c406f*/
    *((float *)&v7 + 1) = a2[9]; /*0x8c4076*/
    *((float *)&v7 + 2) = a2[0xA]; /*0x8c407d*/
    *((float *)&v7 + 3) = a2[0xB]; /*0x8c4084*/
    *(float *)&v6 = a2[4]; /*0x8c408b*/
    *((float *)&v6 + 1) = a2[5]; /*0x8c4092*/
    *((float *)&v6 + 2) = a2[6]; /*0x8c4099*/
    *((float *)&v6 + 3) = a2[7]; /*0x8c40a0*/
    v4 = flt_B2FFE4; /*0x8c40a9*/
    *(__int128 *)(v3 + 0x10) = v6; /*0x8c40af*/
    v5 = v4; /*0x8c40b8*/
    *(__int128 *)(v3 + 0x20) = v7; /*0x8c40c0*/
    *(float *)(v3 + 0xC) = v5; /*0x8c40c9*/
    *(_WORD *)(v3 + 6) = 1; /*0x8c40cc*/
    *(_DWORD *)(v3 + 8) = 0; /*0x8c40d2*/
    *(_DWORD *)v3 = &hkTriangleShape::`vftable'; /*0x8c40d9*/
    *(__int128 *)(v3 + 0x30) = v8; /*0x8c40df*/
    *(float *)(v3 + 0xC) = a2[1]; /*0x8c40e6*/
    (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 0x4C))(this, v3); /*0x8c40ee*/
    if ( *(_WORD *)(v3 + 4) ) /*0x8c40f0*/
    {
      if ( !--*(_WORD *)(v3 + 6) ) /*0x8c40fc*/
        (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x8c410d*/
    }
    (*(void (__thiscall **)(void *, float *))(*(_DWORD *)this + 0x7C))(this, a2); /*0x8c4117*/
  }
}
