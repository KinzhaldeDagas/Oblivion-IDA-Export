char __cdecl sub_8CBC60(int a1, int a2, char a3, char a4)
{
  int v4; // esi
  int v5; // eax
  int v6; // ebx
  float *v7; // esi
  int v8; // eax
  int v9; // ebx
  float *v10; // ebx
  int v11; // eax
  int v12; // eax
  float *v13; // esi
  int v14; // eax
  int v15; // eax
  int v17; // [esp+Ch] [ebp-54h]
  int v18; // [esp+18h] [ebp-48h]
  _OWORD *v19; // [esp+1Ch] [ebp-44h]
  float *v20; // [esp+20h] [ebp-40h]
  float v21; // [esp+2Ch] [ebp-34h]
  float v22[12]; // [esp+30h] [ebp-30h] BYREF

  if ( !a3 ) /*0x8cbc74*/
  {
    v10 = *(float **)(a1 + 0x50); /*0x8cbd51*/
    v11 = *(_DWORD *)unk_BA7D98; /*0x8cbd59*/
    if ( a2 == 7 ) /*0x8cbd60*/
    {
      v12 = (*(int (__stdcall **)(int, int))(v11 + 0x10))(0x100, 0x2B); /*0x8cbd62*/
      *(_WORD *)(v12 + 4) = 0x100; /*0x8cbd65*/
      v13 = sub_8EA030( /*0x8cbd80*/
              (float *)v12,
              (_OWORD *)(*(_DWORD *)(a1 + 0x50) + 0x40),
              (float *)(*(_DWORD *)(a1 + 0x50) + 0x80));
      sub_89DF00((_OWORD *)v13 + 1, (int)(v10 + 4)); /*0x8cbd89*/
      if ( v13[0x1B] != *(float *)&SrcStr ) /*0x8cbd9e*/
      {
        v14 = *(_DWORD *)(a1 + 8); /*0x8cbda0*/
        if ( v14 ) /*0x8cbda5*/
        {
          sub_8DD750(*(float *)(v14 + 0xC), (__m128 *)v13 + 1); /*0x8cbdae*/
        }
        else
        {
          v21 = fConstant_1 / v13[0x1B] + v13[0x17]; /*0x8cbe00*/
          sub_8DD750(v21, (__m128 *)v13 + 1); /*0x8cbe0d*/
        }
      }
    }
    else
    {
      v15 = (*(int (__stdcall **)(int, int))(v11 + 0x10))(0x100, 0x2B); /*0x8cbdb0*/
      *(_WORD *)(v15 + 4) = 0x100; /*0x8cbdb3*/
      v13 = sub_8EA140( /*0x8cbdce*/
              (float *)v15,
              (_OWORD *)(*(_DWORD *)(a1 + 0x50) + 0x40),
              (float *)(*(_DWORD *)(a1 + 0x50) + 0x80));
      (*(void (__thiscall **)(float *, float *))(*(_DWORD *)v10 + 0x74))(v10, v13); /*0x8cbdd5*/
    }
    if ( a4 ) /*0x8cbddd*/
    {
      *((_DWORD *)v13 + 0x3C) = v10; /*0x8cbddf*/
      *((_DWORD *)v13 + 0x3D) = *(unsigned __int16 *)(a1 + 0x2E); /*0x8cbde9*/
      *(_DWORD *)(a1 + 0x50) = v13; /*0x8cbdef*/
    }
    else
    {
      v13[0x3C] = v10[0x3C]; /*0x8cbe1d*/
      v13[0x3D] = v10[0x3D]; /*0x8cbe29*/
      *(_DWORD *)(a1 + 0x50) = v13; /*0x8cbe2f*/
      (**(void (__thiscall ***)(float *, int))v10)(v10, 1); /*0x8cbe38*/
    }
    *(_WORD *)(a1 + 0x2E) = (a2 != 7) + 1; /*0x8cbe46*/
    goto LABEL_18; /*0x8cbe46*/
  }
  if ( !a4 ) /*0x8cbc7f*/
  {
    v4 = *(_DWORD *)(a1 + 0x50); /*0x8cbc81*/
    v5 = *(_DWORD *)(v4 + 0xF0); /*0x8cbc84*/
    *(_DWORD *)(a1 + 0x50) = v5; /*0x8cbc8a*/
    *(_WORD *)(a1 + 0x2E) = *(_WORD *)(v4 + 0xF4); /*0x8cbc94*/
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 0x74))(v4, v5); /*0x8cbc9d*/
    *(_DWORD *)(v4 + 0xF0) = 0; /*0x8cbca0*/
    (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x8cbcb0*/
  }
  v6 = a2; /*0x8cbcba*/
  if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 0x50) + 8))(*(_DWORD *)(a1 + 0x50)) != a2 && a2 != 1 ) /*0x8cbcc8*/
  {
    v7 = *(float **)(a1 + 0x50); /*0x8cbcce*/
    (*(void (__thiscall **)(float *, float *))(*(_DWORD *)v7 + 0x28))(v7, v22); /*0x8cbcda*/
    v19 = *((_OWORD **)v7 + 0x2E); /*0x8cbce9*/
    v18 = *((_DWORD *)v7 + 0x2D); /*0x8cbcea*/
    *(float *)&v17 = sub_89DA90(v7); /*0x8cbcff*/
    sub_8A9630(a2, (int)(v7 + 0x10), (int)(v7 + 0x20), v17, v22, (int)(v7 + 0x24), v18, v19, v20); /*0x8cbd0e*/
    v9 = v8; /*0x8cbd18*/
    (*(void (__thiscall **)(float *, int))(*(_DWORD *)v7 + 0x74))(v7, v8); /*0x8cbd1d*/
    *(float *)(v9 + 0xC8) = v7[0x32]; /*0x8cbd26*/
    *(float *)(v9 + 0xCC) = v7[0x33]; /*0x8cbd32*/
    *(_DWORD *)(a1 + 0x50) = v9; /*0x8cbd38*/
    (**(void (__thiscall ***)(float *, int))v7)(v7, 1); /*0x8cbd41*/
LABEL_18:
    v6 = a2; /*0x8cbe4a*/
  }
  *(_DWORD *)(a1 + 0x1C) = *(_DWORD *)(a1 + 0x50) + 0x10; /*0x8cbe4d*/
  *(_BYTE *)(a1 + 0x91) = v6 == 7; /*0x8cbe5f*/
  if ( v6 == 7 || v6 == 6 ) /*0x8cbe6a*/
  {
    *(_BYTE *)(a1 + 0x92) = 1; /*0x8cbe7d*/
    return 1; /*0x8cbe7b*/
  }
  else
  {
    *(_BYTE *)(a1 + 0x92) = 0; /*0x8cbe6e*/
    return 0; /*0x8cbe6c*/
  }
}
