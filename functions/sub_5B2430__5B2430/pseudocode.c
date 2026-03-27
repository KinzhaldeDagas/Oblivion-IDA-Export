int __cdecl sub_5B2430(int a1, int a2)
{
  int v3; // esi
  int v4; // ebx
  int v5; // ecx
  int (__fastcall *v6)(int); // edx
  char v7; // al
  const char *v8; // ecx
  _DWORD *v9; // esi
  char v10; // al
  char v11; // al
  const char *v12; // ecx
  const char *v13; // esi
  int v15; // ebp
  char v16; // bl
  int v17; // esi
  char v18; // al
  double v19; // st7
  int v20; // esi
  double v21; // st7
  int v22; // eax
  int v23; // [esp+10h] [ebp-84h]
  unsigned __int8 v24[60]; // [esp+18h] [ebp-7Ch] BYREF
  unsigned __int8 v25[60]; // [esp+54h] [ebp-40h] BYREF

  v3 = a1 + 0x18;
  v4 = 2 * ((unsigned __int8)byte_B3B404 >> 7 == 0) - 1;
  v23 = v4;
  v5 = a1 + 0x18;
  if ( (byte_B3B404 & 0x7F) == 0 )
  {
    v6 = *(int (__fastcall **)(int))(*(_DWORD *)v3 + 0x18);
    if ( byte_B3B404 < 0 )
    {
      if ( v6(v5) == 2 )
      {
        v11 = 0x45;
      }
      else if ( (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 0x18))(v3) == 3 )
      {
        v11 = 0x44;
      }
      else if ( !(*(int (__thiscall **)(int))(*(_DWORD *)v3 + 0x18))(v3)
             || (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 0x18))(v3) == 5 )
      {
        v11 = 0x43;
      }
      else
      {
        v11 = ((*(int (__thiscall **)(int))(*(_DWORD *)v3 + 0x18))(v3) == 6) + 0x41;
      }
      v12 = *(const char **)(a1 + 0x1C);
      if ( !v12 )
        v12 = EmptyString;
      _sprintf((char *)v25, "%c%.50s", v11, v12);
      v9 = (_DWORD *)(a2 + 0x18);
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)(a2 + 0x18) + 0x18))(a2 + 0x18) == 2 )
      {
        v10 = 0x45;
        goto LABEL_38;
      }
      if ( (*(int (__thiscall **)(int))(*v9 + 0x18))(a2 + 0x18) == 3 )
      {
        v10 = 0x44;
        goto LABEL_38;
      }
      if ( (*(int (__thiscall **)(int))(*v9 + 0x18))(a2 + 0x18)
        && (*(int (__thiscall **)(int))(*v9 + 0x18))(a2 + 0x18) != 5 )
      {
        v10 = ((*(int (__thiscall **)(int))(*v9 + 0x18))(a2 + 0x18) == 6) + 0x41;
        goto LABEL_38;
      }
    }
    else
    {
      if ( v6(v5) == 2 )
      {
        v7 = 0x41;
      }
      else if ( (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 0x18))(v3) == 3 )
      {
        v7 = 0x42;
      }
      else if ( !(*(int (__thiscall **)(int))(*(_DWORD *)v3 + 0x18))(v3)
             || (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 0x18))(v3) == 5 )
      {
        v7 = 0x43;
      }
      else
      {
        v7 = ((*(int (__thiscall **)(int))(*(_DWORD *)v3 + 0x18))(v3) != 6) + 0x44;
      }
      v8 = *(const char **)(a1 + 0x1C);
      if ( !v8 )
        v8 = EmptyString;
      _sprintf((char *)v25, "%c%.50s", v7, v8);
      v9 = (_DWORD *)(a2 + 0x18);
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)(a2 + 0x18) + 0x18))(a2 + 0x18) == 2 )
      {
        v10 = 0x41;
LABEL_38:
        v13 = (const char *)v9[1];
        if ( !v13 )
          v13 = EmptyString;
        _sprintf((char *)v24, "%c%.50s", v10, v13);
        return v4 * _mbsicmp(v25, v24);
      }
      if ( (*(int (__thiscall **)(int))(*v9 + 0x18))(a2 + 0x18) == 3 )
      {
        v10 = 0x42;
        goto LABEL_38;
      }
      if ( (*(int (__thiscall **)(int))(*v9 + 0x18))(a2 + 0x18)
        && (*(int (__thiscall **)(int))(*v9 + 0x18))(a2 + 0x18) != 5 )
      {
        v10 = ((*(int (__thiscall **)(int))(*v9 + 0x18))(a2 + 0x18) != 6) + 0x44;
        goto LABEL_38;
      }
    }
    v10 = 0x43;
    goto LABEL_38;
  }
  v15 = 0;
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 0x18))(v5) == 2 )
  {
    v16 = 0x41;
  }
  else if ( (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 0x18))(v3) == 3 )
  {
    v16 = 0x42;
  }
  else if ( !(*(int (__thiscall **)(int))(*(_DWORD *)v3 + 0x18))(v3)
         || (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 0x18))(v3) == 5 )
  {
    v16 = 0x43;
  }
  else
  {
    v16 = ((*(int (__thiscall **)(int))(*(_DWORD *)v3 + 0x18))(v3) != 6) + 0x44;
  }
  v17 = a2 + 0x18;
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)(a2 + 0x18) + 0x18))(a2 + 0x18) == 2 )
  {
    v18 = 0x41;
  }
  else if ( (*(int (__thiscall **)(int))(*(_DWORD *)v17 + 0x18))(v17) == 3 )
  {
    v18 = 0x42;
  }
  else if ( !(*(int (__thiscall **)(int))(*(_DWORD *)v17 + 0x18))(v17)
         || (*(int (__thiscall **)(int))(*(_DWORD *)v17 + 0x18))(v17) == 5 )
  {
    v18 = 0x43;
  }
  else
  {
    v18 = ((*(int (__thiscall **)(int))(*(_DWORD *)v17 + 0x18))(v17) != 6) + 0x44;
  }
  if ( v16 >= v18 )
  {
    if ( v16 <= v18 )
    {
      v19 = ((double (__thiscall *)(int, PlayerCharacter *))**(_DWORD **)(a1 + 0x24))(
              a1 + 0x24,
              TESDataHandler_g_PlayerRef);
      v20 = Double_To_SInt32(v19);
      v21 = ((double (__thiscall *)(int, PlayerCharacter *))**(_DWORD **)(a2 + 0x24))(
              a2 + 0x24,
              TESDataHandler_g_PlayerRef);
      v22 = Double_To_SInt32(v21);
      if ( v20 >= v22 )
      {
        if ( v20 > v22 )
          v15 = 1;
      }
      else
      {
        v15 = 0xFFFFFFFF;
      }
    }
    else
    {
      v15 = v23;
    }
  }
  else
  {
    v15 = -v23;
  }
  return v23 * v15;
}
