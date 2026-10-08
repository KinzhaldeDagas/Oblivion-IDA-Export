_DWORD *__cdecl sub_584F10(const char *a1, const char *a2)
{
  _DWORD *v2; // eax
  _DWORD *v3; // esi
  int v4; // eax
  unsigned int v5; // edi
  const char *v6; // eax
  void (__cdecl *v7)(_DWORD *, const char *, unsigned int, unsigned int *, int); // edx
  _DWORD *result; // eax
  int v9; // ebp
  int v10; // esi
  char v11; // al
  char v12; // dl
  unsigned int v13; // edi
  char v14; // cl
  const char *v15; // ecx
  char v16; // bl
  char i; // [esp+Fh] [ebp-119h]
  char v18; // [esp+10h] [ebp-118h]
  char v19; // [esp+11h] [ebp-117h]
  char v20; // [esp+12h] [ebp-116h]
  char v21; // [esp+13h] [ebp-115h]
  unsigned int v22; // [esp+14h] [ebp-114h] BYREF
  const char *v23; // [esp+18h] [ebp-110h]
  unsigned int v24; // [esp+1Ch] [ebp-10Ch]
  CHAR OutputString[260]; // [esp+20h] [ebp-108h] BYREF

  v21 = 0; /*0x584f39*/
  if ( a2 ) /*0x584f3d*/
  {
    v23 = a2; /*0x584fe1*/
    v24 = strlen(a2); /*0x584ff3*/
    v5 = v24; /*0x584ff7*/
    goto LABEL_8; /*0x584ff7*/
  }
  v2 = sub_431130(a1, 0, 0x2800, 4); /*0x584f4c*/
  v3 = v2; /*0x584f51*/
  if ( !v2 )
  {
LABEL_6:
    _sprintf(OutputString, "XML : error opening XML file : %s", a1);
    OutputDebugStringA(OutputString); /*0x584fc1*/
    return 0; /*0x584fe0*/
  }
  v4 = *v2; /*0x584f5d*/
  if ( !*((_BYTE *)v3 + 0x24) ) /*0x584f61*/
  {
    (*(void (__thiscall **)(_DWORD *, int))v4)(v3, 1); /*0x584fa7*/
    goto LABEL_6; /*0x584fa7*/
  }
  v5 = (*(int (__thiscall **)(_DWORD *))(v4 + 0x1C))(v3); /*0x584f68*/
  v24 = v5; /*0x584f6b*/
  v6 = (const char *)FormHeapAlloc(v5); /*0x584f6f*/
  v7 = (void (__cdecl *)(_DWORD *, const char *, unsigned int, unsigned int *, int))v3[1]; /*0x584f74*/
  v23 = v6; /*0x584f81*/
  v21 = 1; /*0x584f85*/
  v22 = 1; /*0x584f8a*/
  v7(v3, v6, v5, &v22, 1); /*0x584f92*/
  (*(void (__thiscall **)(_DWORD *, int))*v3)(v3, 1); /*0x584f9f*/
LABEL_8:
  v9 = FormHeapAlloc(v5); /*0x584ff9*/
  v10 = 0; /*0x585005*/
  v11 = 0; /*0x585007*/
  v12 = 0; /*0x585009*/
  v13 = 0; /*0x58500b*/
  v22 = 0; /*0x585011*/
  v19 = 0; /*0x585015*/
  v20 = 0; /*0x585019*/
  v18 = 0; /*0x58501d*/
  for ( i = 0; v13 < v24; ++v13 ) /*0x585025*/
  {
    v14 = v23[v13]; /*0x58502b*/
    if ( !v14 ) /*0x585030*/
      break; /*0x585030*/
    if ( v14 != 9 && v14 != 0xA && v14 != 0xD ) /*0x58503f*/
    {
      if ( v18 ) /*0x585046*/
      {
        if ( v12 == 0x2D && v11 == 0x2D && v14 == 0x3E ) /*0x585054*/
          v18 = 0; /*0x585056*/
        i = v12; /*0x58505b*/
        v12 = v11; /*0x58505f*/
        v11 = v23[v13]; /*0x585061*/
      }
      else
      {
        if ( v14 == 0x20 ) /*0x5850a3*/
        {
          if ( v11 == 0x20 || v11 == 0x3E ) /*0x5850ab*/
            continue; /*0x5850ab*/
          goto LABEL_27; /*0x5850ab*/
        }
        if ( v11 == 0x20 && (v14 == 0x3C || v14 == 0x3E) ) /*0x5850db*/
        {
          --v10; /*0x5850dd*/
LABEL_27:
          v15 = v23; /*0x5850ad*/
          if ( v22 > 0x186A0 ) /*0x5850b9*/
          {
            if ( v19 && v23[v13] == 0x3E ) /*0x5850c6*/
            {
              v20 = 1; /*0x5850c8*/
            }
            else if ( v11 == 0x3C && v23[v13] == 0x2F ) /*0x58512c*/
            {
              v19 = 1; /*0x58512e*/
            }
          }
          v16 = v23[v13]; /*0x585133*/
          ++v22; /*0x585136*/
          *(_BYTE *)(v10 + v9) = v16; /*0x58513b*/
          ++v10; /*0x585140*/
          i = v12; /*0x585147*/
          v12 = v11; /*0x58514b*/
          v11 = v15[v13]; /*0x58514d*/
          if ( v20 ) /*0x585150*/
          {
            *(_BYTE *)(v10 + v9) = 0xA; /*0x585156*/
            v19 = 0; /*0x58515a*/
            v20 = 0; /*0x58515e*/
            ++v10; /*0x585162*/
            v22 = 0; /*0x585165*/
          }
          continue; /*0x585169*/
        }
        if ( v12 == 0x20 && v11 == 0x2F && v14 == 0x3E ) /*0x5850ee*/
        {
          *(_BYTE *)(--v10 + v9 - 1) = 0x2F; /*0x5850f3*/
          goto LABEL_27; /*0x5850f7*/
        }
        if ( i != 0x3C || v12 != 0x21 || v11 != 0x2D || v14 != 0x2D ) /*0x58510b*/
          goto LABEL_27; /*0x58510b*/
        v11 = 0; /*0x58510f*/
        v12 = 0; /*0x585111*/
        i = 0; /*0x585113*/
        v10 -= 3; /*0x585117*/
        v18 = 1; /*0x58511a*/
      }
    }
  }
  *(_BYTE *)(v10 + v9) = 0; /*0x58506e*/
  if ( v21 ) /*0x585075*/
    FormHeapFree((unsigned int)v23); /*0x58507c*/
  result = (_DWORD *)FormHeapAlloc(8u); /*0x585086*/
  if ( !result ) /*0x585090*/
    return 0; /*0x58516e*/
  *result = v10; /*0x585096*/
  result[1] = v9; /*0x585098*/
  return result; /*0x584fc7*/
}
