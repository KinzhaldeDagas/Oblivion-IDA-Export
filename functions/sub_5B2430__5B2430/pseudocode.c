int __cdecl sub_5B2430(int a1, int a2)
{
  int v2; // esi
  int v3; // ebx
  int v4; // ecx
  int (__fastcall *v5)(int); // edx
  char v6; // al
  const char *v7; // ecx
  _DWORD *v8; // esi
  char v9; // al
  char v10; // al
  const char *v11; // ecx
  const char *v12; // esi
  int v14; // ebp
  char v15; // bl
  int v16; // esi
  char v17; // al
  double v18; // st7
  int v19; // esi
  double v20; // st7
  int v21; // eax
  int v22; // [esp+10h] [ebp-84h]
  unsigned __int8 v23[60]; // [esp+18h] [ebp-7Ch] BYREF
  unsigned __int8 v24[60]; // [esp+54h] [ebp-40h] BYREF

  v2 = a1 + 0x18; /*0x5b246d*/
  v3 = 2 * (LOBYTE(dword_B3B0B4[0xD4]) >> 7 == 0) - 1; /*0x5b2477*/
  v22 = v3; /*0x5b247b*/
  v4 = a1 + 0x18; /*0x5b247f*/
  if ( (dword_B3B0B4[0xD4] & 0x7F) == 0 ) /*0x5b2481*/
  {
    v5 = *(int (__fastcall **)(int))(*(_DWORD *)v2 + 0x18); /*0x5b248b*/
    if ( SLOBYTE(dword_B3B0B4[0xD4]) < 0 ) /*0x5b248e*/
    {
      if ( v5(v4) == 2 ) /*0x5b2570*/
      {
        v10 = 0x45; /*0x5b2572*/
      }
      else if ( (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 0x18))(v2) == 3 ) /*0x5b2582*/
      {
        v10 = 0x44; /*0x5b2584*/
      }
      else if ( !(*(int (__thiscall **)(int))(*(_DWORD *)v2 + 0x18))(v2) /*0x5b25a1*/
             || (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 0x18))(v2) == 5 )
      {
        v10 = 0x43; /*0x5b25b6*/
      }
      else
      {
        v10 = ((*(int (__thiscall **)(int))(*(_DWORD *)v2 + 0x18))(v2) == 6) + 0x41; /*0x5b25b2*/
      }
      v11 = *(const char **)(a1 + 0x1C); /*0x5b25b8*/
      if ( !v11 ) /*0x5b25bd*/
        v11 = EmptyString; /*0x5b25bf*/
      _sprintf((char *)v24, "%c%.50s", v10, v11); /*0x5b25d3*/
      v8 = (_DWORD *)(a2 + 0x18); /*0x5b25de*/
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)(a2 + 0x18) + 0x18))(a2 + 0x18) == 2 ) /*0x5b25eb*/
      {
        v9 = 0x45; /*0x5b25ed*/
        goto LABEL_38; /*0x5b25ef*/
      }
      if ( (*(int (__thiscall **)(int))(*v8 + 0x18))(a2 + 0x18) == 3 ) /*0x5b25fd*/
      {
        v9 = 0x44; /*0x5b25ff*/
        goto LABEL_38; /*0x5b2601*/
      }
      if ( (*(int (__thiscall **)(int))(*v8 + 0x18))(a2 + 0x18) /*0x5b261c*/
        && (*(int (__thiscall **)(int))(*v8 + 0x18))(a2 + 0x18) != 5 )
      {
        v9 = ((*(int (__thiscall **)(int))(*v8 + 0x18))(a2 + 0x18) == 6) + 0x41; /*0x5b262d*/
        goto LABEL_38; /*0x5b262f*/
      }
    }
    else
    {
      if ( v5(v4) == 2 ) /*0x5b2499*/
      {
        v6 = 0x41; /*0x5b249b*/
      }
      else if ( (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 0x18))(v2) == 3 ) /*0x5b24ab*/
      {
        v6 = 0x42; /*0x5b24ad*/
      }
      else if ( !(*(int (__thiscall **)(int))(*(_DWORD *)v2 + 0x18))(v2) /*0x5b24ca*/
             || (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 0x18))(v2) == 5 )
      {
        v6 = 0x43; /*0x5b24df*/
      }
      else
      {
        v6 = ((*(int (__thiscall **)(int))(*(_DWORD *)v2 + 0x18))(v2) != 6) + 0x44; /*0x5b24db*/
      }
      v7 = *(const char **)(a1 + 0x1C); /*0x5b24e1*/
      if ( !v7 ) /*0x5b24e6*/
        v7 = EmptyString; /*0x5b24e8*/
      _sprintf((char *)v24, "%c%.50s", v6, v7); /*0x5b24fc*/
      v8 = (_DWORD *)(a2 + 0x18); /*0x5b2507*/
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)(a2 + 0x18) + 0x18))(a2 + 0x18) == 2 ) /*0x5b2514*/
      {
        v9 = 0x41; /*0x5b2516*/
LABEL_38:
        v12 = (const char *)v8[1]; /*0x5b2633*/
        if ( !v12 ) /*0x5b2638*/
          v12 = EmptyString; /*0x5b263a*/
        _sprintf((char *)v23, "%c%.50s", v9, v12); /*0x5b264e*/
        return v3 * _mbsicmp(v24, v23); /*0x5b266b*/
      }
      if ( (*(int (__thiscall **)(int))(*v8 + 0x18))(a2 + 0x18) == 3 ) /*0x5b2529*/
      {
        v9 = 0x42; /*0x5b252b*/
        goto LABEL_38; /*0x5b252d*/
      }
      if ( (*(int (__thiscall **)(int))(*v8 + 0x18))(a2 + 0x18) /*0x5b254f*/
        && (*(int (__thiscall **)(int))(*v8 + 0x18))(a2 + 0x18) != 5 )
      {
        v9 = ((*(int (__thiscall **)(int))(*v8 + 0x18))(a2 + 0x18) != 6) + 0x44; /*0x5b2564*/
        goto LABEL_38; /*0x5b2566*/
      }
    }
    v9 = 0x43; /*0x5b2631*/
    goto LABEL_38; /*0x5b2631*/
  }
  v14 = 0; /*0x5b2675*/
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 0x18))(v4) == 2 ) /*0x5b267c*/
  {
    v15 = 0x41; /*0x5b267e*/
  }
  else if ( (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 0x18))(v2) == 3 ) /*0x5b268e*/
  {
    v15 = 0x42; /*0x5b2690*/
  }
  else if ( !(*(int (__thiscall **)(int))(*(_DWORD *)v2 + 0x18))(v2) /*0x5b26ad*/
         || (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 0x18))(v2) == 5 )
  {
    v15 = 0x43; /*0x5b26c3*/
  }
  else
  {
    v15 = ((*(int (__thiscall **)(int))(*(_DWORD *)v2 + 0x18))(v2) != 6) + 0x44; /*0x5b26be*/
  }
  v16 = a2 + 0x18; /*0x5b26cf*/
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)(a2 + 0x18) + 0x18))(a2 + 0x18) == 2 ) /*0x5b26d9*/
  {
    v17 = 0x41; /*0x5b26db*/
  }
  else if ( (*(int (__thiscall **)(int))(*(_DWORD *)v16 + 0x18))(v16) == 3 ) /*0x5b26eb*/
  {
    v17 = 0x42; /*0x5b26ed*/
  }
  else if ( !(*(int (__thiscall **)(int))(*(_DWORD *)v16 + 0x18))(v16) /*0x5b270a*/
         || (*(int (__thiscall **)(int))(*(_DWORD *)v16 + 0x18))(v16) == 5 )
  {
    v17 = 0x43; /*0x5b271f*/
  }
  else
  {
    v17 = ((*(int (__thiscall **)(int))(*(_DWORD *)v16 + 0x18))(v16) != 6) + 0x44; /*0x5b271b*/
  }
  if ( v15 >= v17 ) /*0x5b2723*/
  {
    if ( v15 <= v17 ) /*0x5b272d*/
    {
      v18 = ((double (__thiscall *)(int, PlayerCharacter *))**(_DWORD **)(a1 + 0x24))(a1 + 0x24, reference); /*0x5b2743*/
      v19 = Double_To_SInt32(v18); /*0x5b2754*/
      v20 = ((double (__thiscall *)(int, PlayerCharacter *))**(_DWORD **)(a2 + 0x24))(a2 + 0x24, reference); /*0x5b275f*/
      v21 = Double_To_SInt32(v20); /*0x5b2761*/
      if ( v19 >= v21 ) /*0x5b2768*/
      {
        if ( v19 > v21 ) /*0x5b276f*/
          v14 = 1; /*0x5b2771*/
      }
      else
      {
        v14 = 0xFFFFFFFF; /*0x5b276a*/
      }
    }
    else
    {
      v14 = v22; /*0x5b272f*/
    }
  }
  else
  {
    v14 = -v22; /*0x5b2729*/
  }
  return v22 * v14; /*0x5b277d*/
}
