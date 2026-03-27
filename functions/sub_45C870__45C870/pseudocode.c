char __thiscall sub_45C870(_DWORD *this, int a2)
{
  int v3; // eax
  bool v4; // zf
  _DWORD *v5; // ebp
  int (__cdecl *v6)(int, unsigned __int8 *, int, int *, int); // ecx
  const char *v7; // edi
  void (__cdecl *v8)(_DWORD *, unsigned __int8 *, int, int *, int); // eax
  void (__cdecl *v9)(_DWORD *, const char *, _DWORD, int *, int); // eax
  _DWORD *v10; // ecx
  int v11; // eax
  int v13; // [esp-18h] [ebp-2Ch]
  unsigned __int8 v14; // [esp+Ah] [ebp-Ah] BYREF
  unsigned __int8 v15; // [esp+Bh] [ebp-9h] BYREF
  int v16; // [esp+Ch] [ebp-8h]
  int v17; // [esp+10h] [ebp-4h] BYREF

  LOBYTE(v3) = sub_446B10((_DWORD *)TESDataHandler);
  v4 = *(this + 0x10) == 0;
  v5 = (_DWORD *)a2;
  v14 = v3;
  v16 = 0;
  if ( !v4 )
  {
    v3 = *(_DWORD *)(a2 + 0x30);
    if ( v3 == 0xFFFFFFFF )
      v3 = *(_DWORD *)(a2 + 0x148);
    v16 = v3;
  }
  if ( (*(this + 6) & 0x200) != 0 )
  {
    ++*(this + 0x24);
  }
  else
  {
    v6 = *(int (__cdecl **)(int, unsigned __int8 *, int, int *, int))(a2 + 8);
    v13 = a2;
    a2 = 1;
    LOBYTE(v3) = v6(v13, &v14, 1, &a2, 1);
  }
  LOBYTE(a2) = 0;
  if ( v14 )
  {
    do
    {
      v7 = (const char *)(sub_446B20((_DWORD *)TESDataHandler, (unsigned __int8)a2) + 0x1C);
      v15 = strlen(v7);
      if ( (*(this + 6) & 0x200) != 0 )
      {
        ++*(this + 0x24);
      }
      else
      {
        v8 = (void (__cdecl *)(_DWORD *, unsigned __int8 *, int, int *, int))v5[2];
        v17 = 1;
        v8(v5, &v15, 1, &v17, 1);
      }
      if ( (*(this + 6) & 0x200) != 0 )
      {
        *(this + 0x24) += v15;
      }
      else
      {
        v9 = (void (__cdecl *)(_DWORD *, const char *, _DWORD, int *, int))v5[2];
        v17 = 1;
        v9(v5, v7, v15, &v17, 1);
      }
      LOBYTE(v3) = a2 + 1;
      LOBYTE(a2) = a2 + 1;
    }
    while ( (unsigned __int8)a2 < v14 );
  }
  v10 = (_DWORD *)*(this + 0x10);
  if ( v10 )
  {
    v11 = v5[0xC];
    if ( v11 == 0xFFFFFFFF )
      v11 = v5[0x52];
    LOBYTE(v3) = sub_4531B0(v10, (char)v5, v11 - v16, "Plugin List");
  }
  return v3;
}
