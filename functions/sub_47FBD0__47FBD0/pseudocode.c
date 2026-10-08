char __cdecl sub_47FBD0(int a1, float *a2, float *a3, float a4, int a5)
{
  char result; // al
  int v7; // eax
  int v8; // edi
  unsigned int v9; // esi
  int v10; // eax
  char v11; // [esp+1Bh] [ebp-1Dh]
  float v12; // [esp+1Ch] [ebp-1Ch]
  float v13; // [esp+20h] [ebp-18h]
  float v14; // [esp+24h] [ebp-14h]
  float v15; // [esp+3Ch] [ebp+4h]
  float v16; // [esp+3Ch] [ebp+4h]
  int v17; // [esp+3Ch] [ebp+4h]

  result = 0; /*0x47fbd8*/
  v11 = 0; /*0x47fbdc*/
  if ( a1 && a5 && (!*(_BYTE *)(a1 + 0x11) || (*(_BYTE *)(a5 + 0x18) & 1) == 0) ) /*0x47fbfc*/
  {
    v12 = *(float *)(a5 + 0x20) - *a2; /*0x47fc25*/
    v13 = *(float *)(a5 + 0x24) - a2[1]; /*0x47fc34*/
    v14 = *(float *)(a5 + 0x28) - a2[2]; /*0x47fc3f*/
    v15 = v13 * v13 + v12 * v12 + v14 * v14; /*0x47fc5f*/
    v16 = sqrt(v15); /*0x47fc6c*/
    if ( *(float *)(a5 + 0x2C) + a4 <= v16 ) /*0x47fc83*/
    {
      return 0; /*0x47fd23*/
    }
    else
    {
      v7 = (*(int (__thiscall **)(int))(*(_DWORD *)a5 + 8))(a5); /*0x47fc91*/
      v8 = v7; /*0x47fc93*/
      if ( v7 ) /*0x47fc97*/
      {
        v9 = 0; /*0x47fca0*/
        v17 = *(unsigned __int16 *)(v7 + 0xB6); /*0x47fca4*/
        if ( *(_WORD *)(v7 + 0xB6) ) /*0x47fc99*/
        {
          do /*0x47fcf0*/
          {
            if ( *(unsigned __int16 *)(v8 + 0xB6) > v9 ) /*0x47fcb9*/
              v10 = *(_DWORD *)(*(_DWORD *)(v8 + 0xB0) + 4 * v9); /*0x47fcc5*/
            else
              v10 = 0; /*0x47fcbb*/
            if ( sub_47FBD0(a1, a2, a3, a4, v10) ) /*0x47fcd8*/
              v11 = 1; /*0x47fce4*/
            ++v9; /*0x47fce9*/
          }
          while ( (int)v9 < v17 ); /*0x47fcf0*/
        }
      }
      else
      {
        sub_441920((_DWORD *)a1, a5); /*0x47fd01*/
        if ( NiPick_ExecuteAndSort((_WORD *)a1, a2, a3, (int *)1) ) /*0x47fd10*/
          return 1; /*0x47fd22*/
      }
      return v11; /*0x47fcf2*/
    }
  }
  return result; /*0x47fcf9*/
}
