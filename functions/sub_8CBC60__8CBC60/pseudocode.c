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

  if ( !a3 )
  {
    v10 = *(float **)(a1 + 0x50);
    v11 = *(_DWORD *)dword_BA7D98;
    if ( a2 == 7 )
    {
      v12 = (*(int (__stdcall **)(int, int))(v11 + 0x10))(0x100, 0x2B);
      *(_WORD *)(v12 + 4) = 0x100;
      v13 = sub_8EA030(
              (float *)v12,
              (_OWORD *)(*(_DWORD *)(a1 + 0x50) + 0x40),
              (float *)(*(_DWORD *)(a1 + 0x50) + 0x80));
      sub_89DF00((_OWORD *)v13 + 1, (int)(v10 + 4));
      if ( v13[0x1B] != *(float *)&SrcStr )
      {
        v14 = *(_DWORD *)(a1 + 8);
        if ( v14 )
        {
          sub_8DD750(*(float *)(v14 + 0xC), (int)(v13 + 4));
        }
        else
        {
          v21 = fConstant_1 / v13[0x1B] + v13[0x17];
          sub_8DD750(v21, (int)(v13 + 4));
        }
      }
    }
    else
    {
      v15 = (*(int (__stdcall **)(int, int))(v11 + 0x10))(0x100, 0x2B);
      *(_WORD *)(v15 + 4) = 0x100;
      v13 = sub_8EA140(
              (float *)v15,
              (_OWORD *)(*(_DWORD *)(a1 + 0x50) + 0x40),
              (float *)(*(_DWORD *)(a1 + 0x50) + 0x80));
      (*(void (__thiscall **)(float *, float *))(*(_DWORD *)v10 + 0x74))(v10, v13);
    }
    if ( a4 )
    {
      *((_DWORD *)v13 + 0x3C) = v10;
      *((_DWORD *)v13 + 0x3D) = *(unsigned __int16 *)(a1 + 0x2E);
      *(_DWORD *)(a1 + 0x50) = v13;
    }
    else
    {
      v13[0x3C] = v10[0x3C];
      v13[0x3D] = v10[0x3D];
      *(_DWORD *)(a1 + 0x50) = v13;
      (**(void (__thiscall ***)(float *, int))v10)(v10, 1);
    }
    *(_WORD *)(a1 + 0x2E) = (a2 != 7) + 1;
    goto LABEL_18;
  }
  if ( !a4 )
  {
    v4 = *(_DWORD *)(a1 + 0x50);
    v5 = *(_DWORD *)(v4 + 0xF0);
    *(_DWORD *)(a1 + 0x50) = v5;
    *(_WORD *)(a1 + 0x2E) = *(_WORD *)(v4 + 0xF4);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 0x74))(v4, v5);
    *(_DWORD *)(v4 + 0xF0) = 0;
    (**(void (__thiscall ***)(int, int))v4)(v4, 1);
  }
  v6 = a2;
  if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 0x50) + 8))(*(_DWORD *)(a1 + 0x50)) != a2 && a2 != 1 )
  {
    v7 = *(float **)(a1 + 0x50);
    (*(void (__thiscall **)(float *, float *))(*(_DWORD *)v7 + 0x28))(v7, v22);
    v19 = *((_OWORD **)v7 + 0x2E);
    v18 = *((_DWORD *)v7 + 0x2D);
    *(float *)&v17 = sub_89DA90(v7);
    sub_8A9630(a2, (int)(v7 + 0x10), (int)(v7 + 0x20), v17, v22, (int)(v7 + 0x24), v18, v19, v20);
    v9 = v8;
    (*(void (__thiscall **)(float *, int))(*(_DWORD *)v7 + 0x74))(v7, v8);
    *(float *)(v9 + 0xC8) = v7[0x32];
    *(float *)(v9 + 0xCC) = v7[0x33];
    *(_DWORD *)(a1 + 0x50) = v9;
    (**(void (__thiscall ***)(float *, int))v7)(v7, 1);
LABEL_18:
    v6 = a2;
  }
  *(_DWORD *)(a1 + 0x1C) = *(_DWORD *)(a1 + 0x50) + 0x10;
  *(_BYTE *)(a1 + 0x91) = v6 == 7;
  if ( v6 == 7 || v6 == 6 )
  {
    *(_BYTE *)(a1 + 0x92) = 1;
    return 1;
  }
  else
  {
    *(_BYTE *)(a1 + 0x92) = 0;
    return 0;
  }
}
