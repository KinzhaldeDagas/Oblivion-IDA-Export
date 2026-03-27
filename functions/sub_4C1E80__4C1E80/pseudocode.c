void __thiscall sub_4C1E80(_DWORD *this, int a2, int a3, float *a4)
{
  _DWORD *v4; // eax
  int v5; // ecx
  float *v6; // eax
  bool v7; // zf
  int *v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // esi
  int v12; // ecx
  float *v13; // eax
  int v14; // ecx
  float *v15; // eax
  float v16; // [esp+0h] [ebp-Ch] BYREF
  float v17; // [esp+4h] [ebp-8h]
  float v18; // [esp+8h] [ebp-4h]

  v4 = (_DWORD *)*(this + 9);
  if ( !v4 || !v4[1] )
    goto LABEL_18;
  v5 = v4[2];
  if ( v5 && *(_DWORD *)(v5 + 4 * a2) )
  {
    v6 = (float *)(*(_DWORD *)(v5 + 4 * a2) + 0xC * a3);
    *a4 = *v6;
    a4[1] = v6[1];
    a4[2] = v6[2];
    return;
  }
  if ( !*v4 )
    goto LABEL_18;
  v7 = *(_DWORD *)(*v4 + 4 * a2) == 0;
  v8 = (int *)(*v4 + 4 * a2);
  if ( v7 )
    goto LABEL_18;
  v9 = *v8;
  if ( *(_WORD *)(v9 + 0xB6) )
    v10 = **(_DWORD **)(v9 + 0xB0);
  else
    v10 = 0;
  v11 = *(_DWORD *)(v10 + 0xB4);
  v12 = *(_DWORD *)(v11 + 0x20);
  if ( v12 )
  {
    v13 = (float *)(v12 + 0xC * a3);
    *a4 = *v13;
    a4[1] = v13[1];
    a4[2] = v13[2];
    return;
  }
  v16 = 0.0;
  v17 = 0.0;
  LOBYTE(v18) = 0;
  v14 = *(_DWORD *)(v11 + 0x34);
  if ( v14 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v14 + 0x4C))(v14) && sub_728AB0(v11, 1) )
  {
    sub_728D00(v11, (int)&v16);
    v15 = (float *)(LODWORD(v16) + a3 * LODWORD(v17));
    *a4 = *v15;
    a4[1] = v15[1];
    a4[2] = v15[2];
    sub_728B20(v11);
  }
  else
  {
LABEL_18:
    *a4 = 0.0;
    v18 = 1.0;
    a4[1] = 0.0;
    a4[2] = v18;
  }
}
