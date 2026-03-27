// local variable allocation has failed, the output may be wrong!
char __cdecl sub_54BA90(float a1, _DWORD *a2, int *a3, int a4)
{
  int v4; // eax
  int v5; // edi
  int v7; // edi
  int v8; // edi
  int *v9; // ecx
  int v10; // eax
  bool v11; // zf
  int v12; // ebx
  double v13; // kr00_8
  char v14; // [esp+33h] [ebp-11h]
  int v15; // [esp+34h] [ebp-10h]
  float v16; // [esp+34h] [ebp-10h]
  double v17; // [esp+34h] [ebp-10h]
  double v18; // [esp+3Ch] [ebp-8h]
  int v19; // [esp+3Ch] [ebp-8h]
  int vars0; // [esp+44h] [ebp+0h]
  float vars0a; // [esp+44h] [ebp+0h]
  _UNKNOWN *retaddr; // [esp+48h] [ebp+4h]

  v14 = 0;
  if ( !a3 || !a2 )
    return 0;
  if ( !a2[3] )
    goto LABEL_7;
  v4 = a2[1];
  if ( *(_DWORD *)(v4 + 8) )
  {
    v5 = *(_DWORD *)(v4 + 8);
    v15 = (*(int (__thiscall **)(int *))(*a3 + 4))(a3);
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 4))(v5) != v15 )
      return 0;
  }
  if ( !a2[3] )
  {
LABEL_7:
    (*(void (__thiscall **)(int *, _DWORD))(*a3 + 0x10))(a3, 0.0);
    return 0;
  }
  v7 = *a3;
  v16 = ((double (__thiscall *)(int *))*(_DWORD *)(*a3 + 0xC))(a3) + a1;
  (*(void (__thiscall **)(int *, _DWORD))(v7 + 0x10))(a3, LODWORD(v16));
  v8 = *(_DWORD *)(a2[1] + 8);
  if ( v8 )
  {
    while ( 1 )
    {
      v18 = ((double (__thiscall *)(int *))*(_DWORD *)(*a3 + 0xC))(a3);
      if ( ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v8 + 0xC))(v8) > v18 )
        break;
      v14 |= (*(int (__thiscall **)(int *, int, _DWORD, int, int))(*a3 + 0x1C))(a3, v8, 1.0, 1, a4);
      v19 = *a3;
      v17 = ((double (__thiscall *)(int *))*(_DWORD *)(*a3 + 0xC))(a3);
      *(float *)&v17 = v17 - ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v8 + 0xC))(v8);
      (*(void (__thiscall **)(int *, _DWORD))(v19 + 0x10))(a3, LODWORD(v17));
      v9 = (int *)a2[1];
      v10 = *v9;
      v11 = *v9 == 0;
      a2[1] = *v9;
      if ( v11 )
        a2[2] = 0;
      else
        *(_DWORD *)(v10 + 4) = 0;
      (*(void (__thiscall **)(_DWORD *, int *))(*a2 + 8))(a2, v9);
      --a2[3];
      (**(void (__thiscall ***)(int, int))v8)(v8, 1);
      if ( a2[3] )
      {
        v8 = *(_DWORD *)(a2[1] + 8);
        if ( v8 )
          continue;
      }
      goto LABEL_16;
    }
    v12 = *a3;
    (*(void (__thiscall **)(int *))(*a3 + 0xC))(a3);
    LODWORD(v13) = vars0;
    HIDWORD(v13) = retaddr;
    vars0a = v13 / ((double (__thiscall *)(int, int, int))*(_DWORD *)(*(_DWORD *)v8 + 0xC))(v8, 1, a4);
    return (*(int (__thiscall **)(int *, int, _DWORD))(v12 + 0x1C))(a3, v8, LODWORD(vars0a)) | v14;
  }
  else
  {
LABEL_16:
    (*(void (__thiscall **)(int *, _DWORD))(*a3 + 0x10))(a3, 0.0);
    return v14;
  }
}
