// Resets ActorAnimData root-motion state: zeroes the cached accumulation vector at +0x18, restores the accumulation/root node transform fields, then finds the matching accumulation controllers and resets them. Used before sequence play and by full actor/animation reset paths.
float *__fastcall sub_4728C0(int a1)
{
  float *result; // eax
  int v2; // ecx
  float *v3; // ecx
  _DWORD *i; // edi
  int v5; // eax
  char v6; // al
  float *v7; // esi
  int v8; // eax
  char v9; // al

  result = (float *)a1; /*0x4728c0*/
  v2 = *(_DWORD *)(a1 + 8); /*0x4728c2*/
  if ( v2 )
  {
    result[6] = g_zeroNiPoint3; /*0x4728d3*/
    result[7] = *(&g_zeroNiPoint3 + 1); /*0x4728dc*/
    result[8] = MEMORY[0xB3F9B0][0]; /*0x4728e5*/
    qmemcpy((void *)(v2 + 0x30), &stru_B26AF0[0xA].unk2C, 0x24u); /*0x4728f7*/
    v3 = (float *)(*((_DWORD *)result + 2) + 0x54); /*0x472902*/
    *v3 = g_zeroNiPoint3; /*0x472905*/
    v3[1] = *(&g_zeroNiPoint3 + 1); /*0x47290d*/
    v3[2] = MEMORY[0xB3F9B0][0]; /*0x472916*/
    result = *((float **)result + 2); /*0x472919*/
    for ( i = *((_DWORD **)result + 3); i; i = (_DWORD *)i[0xD] )
    {
      v5 = (*(int (__thiscall **)(_DWORD *))(*i + 4))(i); /*0x47292a*/
      if ( v5 ) /*0x47292e*/
      {
        while ( (char *)v5 != stru_B3CCB0 ) /*0x472935*/
        {
          v5 = *(_DWORD *)(v5 + 4); /*0x472937*/
          if ( !v5 ) /*0x47293c*/
            goto LABEL_6; /*0x47293c*/
        }
        v6 = 1; /*0x472999*/
      }
      else
      {
LABEL_6:
        v6 = 0; /*0x47293e*/
      }
      result = v6 != 0 ? (float *)i : 0;
      if ( result )
      {
        result = (float *)(*(int (__thiscall **)(float *, _DWORD))(*(_DWORD *)result + 0x80))(result, 0); /*0x472954*/
        v7 = result; /*0x472956*/
        if ( result )
        {
          v8 = (*(int (__thiscall **)(float *))(*(_DWORD *)result + 4))(result); /*0x472963*/
          if ( v8 ) /*0x472967*/
          {
            while ( (char *)v8 != stru_B3CD1C ) /*0x472975*/
            {
              v8 = *(_DWORD *)(v8 + 4); /*0x472977*/
              if ( !v8 ) /*0x47297c*/
                goto LABEL_12; /*0x47297c*/
            }
            v9 = 1; /*0x47299d*/
          }
          else
          {
LABEL_12:
            v9 = 0; /*0x47297e*/
          }
          result = v9 != 0 ? v7 : 0;
          if ( result ) /*0x472986*/
            result = (float *)sub_471640(result); /*0x47298a*/
        }
      }
    }
  }
  return result; /*0x472998*/
}
