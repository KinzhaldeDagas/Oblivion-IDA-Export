void __thiscall sub_4C2000(_DWORD *this, int a2, int a3, int a4)
{
  _DWORD *v4; // eax
  int v5; // ecx
  _DWORD *v6; // eax
  bool v7; // zf
  int *v8; // eax
  int v9; // eax
  int v10; // eax
  _DWORD *v11; // esi
  _DWORD *v12; // eax
  int v13; // ecx
  _DWORD v14[2]; // [esp+0h] [ebp-Ch] BYREF
  char v15; // [esp+8h] [ebp-4h]

  v4 = (_DWORD *)*(this + 9);
  if ( !v4 || !v4[1] )
    goto LABEL_18;
  v5 = v4[3];
  if ( v5 && *(_DWORD *)(v5 + 4 * a2) )
  {
    v6 = (_DWORD *)(*(_DWORD *)(v5 + 4 * a2) + 0x10 * a3);
    *(_DWORD *)a4 = *v6;
    *(_DWORD *)(a4 + 4) = v6[1];
    *(_DWORD *)(a4 + 8) = v6[2];
    *(_DWORD *)(a4 + 0xC) = v6[3];
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
  v11 = *(_DWORD **)(v10 + 0xB4);
  if ( v11[8] )
  {
    v12 = (_DWORD *)(v11[9] + 0x10 * a3);
    *(_DWORD *)a4 = *v12;
    *(_DWORD *)(a4 + 4) = v12[1];
    *(_DWORD *)(a4 + 8) = v12[2];
    *(_DWORD *)(a4 + 0xC) = v12[3];
    return;
  }
  v14[0] = 0;
  v14[1] = 0;
  v15 = 0;
  v13 = v11[0xD];
  if ( v13 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v13 + 0x4C))(v13) && sub_728AB0((int)v11, 1) )
  {
    sub_728DB0((int)v11, (int)v14);
    sub_4C1440(v14, a3, (float *)a4);
    sub_728B20((int)v11);
  }
  else
  {
LABEL_18:
    *(_DWORD *)a4 = dword_B25AE0;
    *(_DWORD *)(a4 + 4) = dword_B25AE4;
    *(_DWORD *)(a4 + 8) = dword_B25AE8;
    *(_DWORD *)(a4 + 0xC) = dword_B25AEC;
  }
}
