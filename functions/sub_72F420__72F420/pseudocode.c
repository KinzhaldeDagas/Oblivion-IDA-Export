int __thiscall sub_72F420(NiRenderer *this, signed int a2)
{
  NiRenderer *v2; // ebx
  void (__cdecl *v3)(int, UInt32 *, int, int *, int); // edx
  int v4; // ebp
  void *v5; // eax
  UInt32 v6; // edi
  unsigned int v7; // eax
  void (__cdecl *v8)(int, char *, int, int *, int); // eax
  int result; // eax
  bool v10; // zf
  int v11; // edi
  void (__cdecl *v12)(int, int, int, int *, int); // eax
  int v13; // ebp
  int v14; // eax
  int v15; // edx
  _WORD *i; // ecx
  unsigned int v17; // ebp
  int v18; // ebx
  void (__cdecl *v19)(int, int, int, int *, int); // edx
  void (__cdecl *v20)(int, int, int, int *, int); // edx
  int v22; // esi
  int (__cdecl *v23)(int, char *, int, int *, int); // eax
  int v24; // [esp-28h] [ebp-264h]
  int v25; // [esp-14h] [ebp-250h]
  int v26; // [esp-14h] [ebp-250h]
  int v27; // [esp-14h] [ebp-250h]
  int v28; // [esp-14h] [ebp-250h]
  const char *v29; // [esp-4h] [ebp-240h]
  char v30; // [esp+17h] [ebp-225h] BYREF
  int v31; // [esp+18h] [ebp-224h] BYREF
  int v32; // [esp+1Ch] [ebp-220h] BYREF
  int v33; // [esp+20h] [ebp-21Ch] BYREF
  char v34; // [esp+27h] [ebp-215h] BYREF
  NiRenderer *v35; // [esp+28h] [ebp-214h]
  CHAR Text[512]; // [esp+2Ch] [ebp-210h] BYREF
  unsigned int v37; // [esp+238h] [ebp-4h]

  v2 = this; /*0x72f462*/
  v35 = this; /*0x72f465*/
  sub_7008A0(this, a2); /*0x72f469*/
  sub_718B70((char *)&v2->members.propertyState, a2); /*0x72f472*/
  v3 = *(void (__cdecl **)(int, UInt32 *, int, int *, int))(*(_DWORD *)(a2 + 0x21C) + 4); /*0x72f47d*/
  v25 = *(_DWORD *)(a2 + 0x21C); /*0x72f48d*/
  v31 = 4; /*0x72f48e*/
  v3(v25, &v2->members.pad014[0xB], 4, &v31, 1); /*0x72f496*/
  v4 = v2->members.pad014[0xB]; /*0x72f498*/
  v5 = (void *)FormHeapAlloc((0x4C * (unsigned __int64)(unsigned int)v4) >> 0x20 != 0 ? 0xFFFFFFFF : 0x4C * v4);
  v6 = (UInt32)v5; /*0x72f4b2*/
  v32 = (int)v5; /*0x72f4b7*/
  v37 = 0; /*0x72f4bd*/
  if ( v5 ) /*0x72f4c8*/
    sub_401080(v5, 0x4C, v4, (void *(__thiscall *)(void *))sub_72EF90); /*0x72f4d3*/
  else
    v6 = 0; /*0x72f4da*/
  v2->members.pad014[0xC] = v6; /*0x72f4dc*/
  v7 = *(_DWORD *)(a2 + 0xD8); /*0x72f4df*/
  v37 = 0xFFFFFFFF; /*0x72f4ea*/
  if ( v7 >= 0x4000001 && v7 < 0xA010065 ) /*0x72f4fc*/
    sub_712A20((unsigned int *)a2); /*0x72f500*/
  if ( *(_DWORD *)(a2 + 0xD8) < 0x401000Du ) /*0x72f50f*/
  {
    v30 = 1; /*0x72f538*/
  }
  else
  {
    v26 = *(_DWORD *)(a2 + 0x21C); /*0x72f525*/
    v8 = *(void (__cdecl **)(int, char *, int, int *, int))(v26 + 4); /*0x72f526*/
    v31 = 1; /*0x72f529*/
    v8(v26, &v30, 1, &v31, 1); /*0x72f531*/
  }
  if ( *(_DWORD *)(a2 + 0xDC) < 0xBu && !*(_DWORD *)(a2 + 0x380) )
  {
    if ( v2->members.pad014[0xB] )
    {
      if ( CRT_StricmpLocaleDispatch((unsigned __int8 *)(a2 + 0xE0), "Meshes\\Creatures\\Rat\\mange.NIF") )
      {
        sub_711FB0((_DWORD *)a2, 3); /*0x72f571*/
        v29 = (const char *)(a2 + 0xE0); /*0x72f57d*/
        if ( *(_BYTE *)(a2 + 8) )
          _sprintf(Text, "%s: %s contains old skin info and needs to be re-exported.", (const char *)(a2 + 8), v29);
        else
          _sprintf(Text, "%s contains old skin info and needs to be re-exported.", v29); /*0x72f59f*/
        if ( off_B27E60 ) /*0x72f5a7*/
          ((void (__cdecl *)(LPCSTR, LPCSTR))off_B27E60)(Text, "Old Version"); /*0x72f5bc*/
      }
    }
  }
  result = 0; /*0x72f5c1*/
  v10 = v2->members.pad014[0xB] == 0; /*0x72f5c3*/
  v31 = 0; /*0x72f5c6*/
  if ( !v10 )
  {
    v33 = 0; /*0x72f5d0*/
    do
    {
      v11 = v33 + v2->members.pad014[0xC]; /*0x72f5d7*/
      sub_718B70((char *)v11, a2); /*0x72f5de*/
      sub_716EA0((char *)(v11 + 0x34), a2); /*0x72f5e7*/
      v27 = *(_DWORD *)(a2 + 0x21C); /*0x72f5ff*/
      v12 = *(void (__cdecl **)(int, int, int, int *, int))(v27 + 4); /*0x72f600*/
      v32 = 2; /*0x72f603*/
      v12(v27, v11 + 0x48, 2, &v32, 1); /*0x72f60b*/
      if ( v30 )
      {
        v13 = *(unsigned __int16 *)(v11 + 0x48); /*0x72f61b*/
        v14 = FormHeapAlloc((unsigned __int64)*(unsigned __int16 *)(v11 + 0x48) >> 0x1D != 0 ? 0xFFFFFFFF : 8 * v13);
        if ( v14 ) /*0x72f63c*/
        {
          v15 = v13 - 1; /*0x72f63e*/
          for ( i = (_WORD *)v14; v15 >= 0; --v15 ) /*0x72f645*/
          {
            *i = 0; /*0x72f650*/
            i += 4; /*0x72f655*/
          }
        }
        else
        {
          v14 = 0; /*0x72f65f*/
        }
        v17 = 0; /*0x72f661*/
        v10 = *(_WORD *)(v11 + 0x48) == 0; /*0x72f663*/
        *(_DWORD *)(v11 + 0x44) = v14; /*0x72f667*/
        if ( !v10 ) /*0x72f66a*/
        {
          do /*0x72f6c1*/
          {
            v18 = *(_DWORD *)(v11 + 0x44) + 8 * v17; /*0x72f67a*/
            v19 = *(void (__cdecl **)(int, int, int, int *, int))(*(_DWORD *)(a2 + 0x21C) + 4); /*0x72f683*/
            v28 = *(_DWORD *)(a2 + 0x21C); /*0x72f689*/
            v32 = 2; /*0x72f68a*/
            v19(v28, v18, 2, &v32, 1); /*0x72f692*/
            v20 = *(void (__cdecl **)(int, int, int, int *, int))(*(_DWORD *)(a2 + 0x21C) + 4); /*0x72f69a*/
            v24 = *(_DWORD *)(a2 + 0x21C); /*0x72f6aa*/
            v32 = 4; /*0x72f6ab*/
            v20(v24, v18 + 4, 4, &v32, 1); /*0x72f6b3*/
            ++v17; /*0x72f6b9*/
          }
          while ( v17 < *(unsigned __int16 *)(v11 + 0x48) ); /*0x72f6c1*/
          v2 = v35; /*0x72f6c3*/
        }
      }
      else
      {
        *(_DWORD *)(v11 + 0x44) = 0; /*0x72f6c9*/
      }
      v33 += 0x4C; /*0x72f6d4*/
      result = v31 + 1; /*0x72f6d9*/
    }
    while ( ++v31 < v2->members.pad014[0xB] );
  }
  if ( *(_DWORD *)(a2 + 0xD8) == 0x4010009 ) /*0x72f6f3*/
  {
    v22 = *(_DWORD *)(a2 + 0x21C); /*0x72f6f5*/
    v23 = *(int (__cdecl **)(int, char *, int, int *, int))(v22 + 4); /*0x72f6fb*/
    v33 = 1; /*0x72f70d*/
    return v23(v22, &v34, 1, &v33, 1); /*0x72f715*/
  }
  return result; /*0x72f71a*/
}
