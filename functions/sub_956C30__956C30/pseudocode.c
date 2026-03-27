int __userpurge sub_956C30@<eax>(int a1@<ecx>, double a2@<st0>, int a3, int a4, int *a5, _DWORD *a6, _DWORD *a7)
{
  int v7; // eax
  int v8; // ebp
  int v9; // esi
  int *v11; // eax
  int v12; // ecx
  int v13; // ebx
  int v14; // edx
  int v15; // eax
  int v16; // eax
  int *v17; // eax
  int v18; // eax
  double v19; // st7
  float v22; // [esp+14h] [ebp-10h]
  float v23; // [esp+18h] [ebp-Ch]
  int v24; // [esp+1Ch] [ebp-8h]
  int v25; // [esp+20h] [ebp-4h]
  int v26; // [esp+34h] [ebp+10h]

  v7 = *(_DWORD *)(a1 + 8);
  v8 = *(_DWORD *)(a1 + 0x20);
  v9 = *(_DWORD *)(v7 + 0xC);
  v24 = *(_DWORD *)(v7 + 0x10);
  (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)v8 + 8))(v8, a6);
  v22 = a2;
  v11 = *(int **)(a1 + 0xC);
  v12 = *v11;
  v13 = 0;
  v14 = v9 >> 1;
  v23 = 10000000.0;
  v26 = 0;
  v25 = v9 >> 1;
  if ( *v11 )
  {
    if ( v22 <= (double)*(float *)(a4 + 0xC4) )
    {
      if ( v24 <= 0 )
      {
        v13 = *v11;
      }
      else
      {
        v16 = *a5;
        v13 = *a5 + v14;
        if ( v13 > v12 )
          v13 = v12;
        v26 = v16 - v14;
        if ( v16 - v14 < 0 )
          v26 = 0;
      }
      goto LABEL_11;
    }
  }
  else
  {
    v15 = v11[3];
    if ( v15 )
    {
      for ( a6[0xE] = *(_DWORD *)(v15 + 0xC); ; a6[0xE] = *(_DWORD *)(v18 + 0xC) )
      {
        a6[0xC] = v13;
        a6[0xD] = v13 + a7[1] - a3;
        v19 = ((double (__thiscall *)(int, _DWORD *))*(_DWORD *)(*(_DWORD *)v8 + 0xC))(v8, a6) + v22;
        if ( v19 < v23 )
        {
          v23 = v19;
          *a5 = v13;
          if ( v19 < *(float *)(a4 + 0xC4) )
          {
            *(float *)(a4 + 0xC4) = v19;
            *(_DWORD *)(a4 + 0xB8) = a6[9];
            *(_DWORD *)(a4 + 0xBC) = a6[8];
            *(_DWORD *)(a4 + 0xC0) = a6[0xE];
            if ( v13 - v25 < v26 )
            {
              v26 = v13 - v25;
              if ( v13 - v25 < 0 )
                v26 = 0;
            }
            (*(void (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)v8 + 0x14))(v8, a6, a4 + 0xC8);
          }
        }
LABEL_11:
        if ( --v13 < v26 )
          break;
        v17 = *(int **)(a1 + 0xC);
        if ( v13 > *v17 )
          v18 = 0;
        else
          v18 = *(_DWORD *)(v17[2] + 4 * v13);
      }
      --*a5;
    }
  }
  return sub_9569F0(*(int **)(a1 + 0xC), *a7 + 0x10 * a3);
}
