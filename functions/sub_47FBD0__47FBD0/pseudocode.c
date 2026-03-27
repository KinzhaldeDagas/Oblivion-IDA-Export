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

  result = 0;
  v11 = 0;
  if ( a1 && a5 && (!*(_BYTE *)(a1 + 0x11) || (*(_BYTE *)(a5 + 0x18) & 1) == 0) )
  {
    v12 = *(float *)(a5 + 0x20) - *a2;
    v13 = *(float *)(a5 + 0x24) - a2[1];
    v14 = *(float *)(a5 + 0x28) - a2[2];
    v15 = v13 * v13 + v12 * v12 + v14 * v14;
    v16 = sqrt(v15);
    if ( *(float *)(a5 + 0x2C) + a4 <= v16 )
    {
      return 0;
    }
    else
    {
      v7 = (*(int (__thiscall **)(int))(*(_DWORD *)a5 + 8))(a5);
      v8 = v7;
      if ( v7 )
      {
        v9 = 0;
        v17 = *(unsigned __int16 *)(v7 + 0xB6);
        if ( *(_WORD *)(v7 + 0xB6) )
        {
          do
          {
            if ( *(unsigned __int16 *)(v8 + 0xB6) > v9 )
              v10 = *(_DWORD *)(*(_DWORD *)(v8 + 0xB0) + 4 * v9);
            else
              v10 = 0;
            if ( sub_47FBD0(a1, (int)a2, (int)a3, a4, v10) )
              v11 = 1;
            ++v9;
          }
          while ( (int)v9 < v17 );
        }
      }
      else
      {
        sub_441920((_DWORD *)a1, a5);
        if ( sub_959D60((_WORD *)a1, a2, a3, (int *)1) )
          return 1;
      }
      return v11;
    }
  }
  return result;
}
