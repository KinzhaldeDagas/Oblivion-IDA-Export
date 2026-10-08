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

  LOBYTE(v3) = sub_446B10((_DWORD *)g_TESDataHandler); /*0x45c87d*/
  v4 = *(this + 0x10) == 0; /*0x45c882*/
  v5 = (_DWORD *)a2; /*0x45c886*/
  v14 = v3; /*0x45c88a*/
  v16 = 0; /*0x45c88e*/
  if ( !v4 ) /*0x45c896*/
  {
    v3 = *(_DWORD *)(a2 + 0x30); /*0x45c898*/
    if ( v3 == 0xFFFFFFFF ) /*0x45c89e*/
      v3 = *(_DWORD *)(a2 + 0x148); /*0x45c8a0*/
    v16 = v3; /*0x45c8a6*/
  }
  if ( (*(this + 6) & 0x200) != 0 ) /*0x45c8b8*/
  {
    ++*(this + 0x24); /*0x45c8ba*/
  }
  else
  {
    v6 = *(int (__cdecl **)(int, unsigned __int8 *, int, int *, int))(a2 + 8); /*0x45c8c2*/
    v13 = a2; /*0x45c8d1*/
    a2 = 1; /*0x45c8d2*/
    LOBYTE(v3) = v6(v13, &v14, 1, &a2, 1); /*0x45c8d6*/
  }
  LOBYTE(a2) = 0; /*0x45c8e0*/
  if ( v14 ) /*0x45c8e5*/
  {
    do /*0x45c984*/
    {
      v7 = (const char *)(sub_446B20((_DWORD *)g_TESDataHandler, (unsigned __int8)a2) + 0x1C); /*0x45c903*/
      v15 = strlen(v7); /*0x45c91b*/
      if ( (*(this + 6) & 0x200) != 0 ) /*0x45c927*/
      {
        ++*(this + 0x24); /*0x45c929*/
      }
      else
      {
        v8 = (void (__cdecl *)(_DWORD *, unsigned __int8 *, int, int *, int))v5[2]; /*0x45c931*/
        v17 = 1; /*0x45c941*/
        v8(v5, &v15, 1, &v17, 1); /*0x45c945*/
      }
      if ( (*(this + 6) & 0x200) != 0 ) /*0x45c957*/
      {
        *(this + 0x24) += v15; /*0x45c959*/
      }
      else
      {
        v9 = (void (__cdecl *)(_DWORD *, const char *, _DWORD, int *, int))v5[2]; /*0x45c968*/
        v17 = 1; /*0x45c96d*/
        v9(v5, v7, v15, &v17, 1); /*0x45c971*/
      }
      LOBYTE(v3) = a2 + 1; /*0x45c97a*/
      LOBYTE(a2) = a2 + 1; /*0x45c980*/
    }
    while ( (unsigned __int8)a2 < v14 ); /*0x45c984*/
  }
  v10 = (_DWORD *)*(this + 0x10); /*0x45c98b*/
  if ( v10 ) /*0x45c991*/
  {
    v11 = v5[0xC]; /*0x45c993*/
    if ( v11 == 0xFFFFFFFF ) /*0x45c999*/
      v11 = v5[0x52]; /*0x45c99b*/
    LOBYTE(v3) = sub_4531B0(v10, (char)v5, v11 - v16, "Plugin List"); /*0x45c9ab*/
  }
  return v3; /*0x45c9b0*/
}
