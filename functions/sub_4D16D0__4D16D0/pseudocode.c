char __cdecl sub_4D16D0(_BYTE *arg0, _DWORD *a2, int a3)
{
  char result; // al
  _WORD *v4; // esi
  int (__cdecl *v5)(_BYTE *, unsigned int *, int, int *, int); // edx
  unsigned int v6; // edi
  int (__cdecl *v7)(_BYTE *, int *, int, int *, int); // edx
  _BYTE *v8; // edi
  TESForm *v9; // eax
  int (__cdecl *v10)(_BYTE *, unsigned int *, int, int *, int); // edx
  bool v11; // zf
  _WORD *v12; // eax
  int (__cdecl *v13)(_BYTE *, int, unsigned int, int *, int); // edx
  unsigned int v14; // edi
  int (__cdecl *v15)(_BYTE *, int, unsigned int, int *, int); // edx
  unsigned int v16; // edi
  int (__cdecl *v17)(_BYTE *, int, unsigned int, int *, int); // ecx
  unsigned int v18; // edi
  int v19; // [esp-10h] [ebp-4Ch]
  int v20; // [esp-10h] [ebp-4Ch]
  int v21; // [esp-10h] [ebp-4Ch]
  bool v22; // [esp+16h] [ebp-26h]
  char v23; // [esp+17h] [ebp-25h]
  unsigned int v24; // [esp+18h] [ebp-24h] BYREF
  int v25; // [esp+1Ch] [ebp-20h] BYREF
  unsigned int v26; // [esp+20h] [ebp-1Ch] BYREF
  int a1; // [esp+24h] [ebp-18h] BYREF
  int v28; // [esp+28h] [ebp-14h] BYREF
  int v29; // [esp+2Ch] [ebp-10h] BYREF
  unsigned int v30; // [esp+38h] [ebp-4h]

  result = 0;
  v4 = 0;
  v23 = 0;
  if ( a2 && arg0 )
  {
    (*(void (__thiscall **)(_BYTE *, _DWORD, _DWORD))(*(_DWORD *)arg0 + 0x18))(arg0, 0, 0);
    if ( arg0[0x24] )
    {
      v5 = *((int (__cdecl **)(_BYTE *, unsigned int *, int, int *, int))arg0 + 1);
      v26 = 0;
      v25 = 1;
      v22 = v5(arg0, &v26, 4, &v25, 1) != 4;
      v6 = 0;
      v25 = 0;
      if ( !v22 )
      {
        while ( 1 )
        {
          if ( v6 >= v26 )
          {
            if ( v26 )
            {
              if ( v6 == v26 )
                v23 = 1;
            }
            break;
          }
          v7 = *((int (__cdecl **)(_BYTE *, int *, int, int *, int))arg0 + 1);
          a1 = 0;
          v8 = 0;
          v28 = 1;
          if ( v7(arg0, &a1, 4, &v28, 1) != 4
            || !a1
            || (v9 = TESForm_LookupByFormID(a1),
                (v8 = OblivionDynamicCast(
                        v9,
                        0,
                        (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                        (struct TypeDescriptor *)&TESBoundObject `RTTI Type Descriptor',
                        0)) == 0) )
          {
            v22 = 1;
          }
          v10 = *((int (__cdecl **)(_BYTE *, unsigned int *, int, int *, int))arg0 + 1);
          v24 = 0;
          v28 = 1;
          if ( v10(arg0, &v24, 4, &v28, 1) != 4 )
            v22 = 1;
          if ( v8 && v8[4] == 0x1E )
          {
            if ( a3 != 4 )
            {
              v11 = a3 == 1;
              goto LABEL_20;
            }
          }
          else if ( a3 != 4 )
          {
            v11 = a3 == 2;
LABEL_20:
            if ( !v11 )
              goto LABEL_31;
          }
          if ( v8 )
          {
            if ( v24 )
            {
              v12 = (_WORD *)FormHeapAlloc(0x34u);
              v28 = (int)v12;
              v30 = 0;
              if ( v12 )
                v4 = sub_4CC7C0(v12);
              *((_DWORD *)v4 + 0xC) = v24;
              v30 = 0xFFFFFFFF;
              sub_4CA040(v4 + 8, 3 * v24);
              sub_4CA040(v4, 3 * v24);
              sub_4CA040(v4 + 0x10, v24);
              NiTMap_SetAt(a2, (int)v8, (int)v4);
              v13 = *((int (__cdecl **)(_BYTE *, int, unsigned int, int *, int))arg0 + 1);
              v14 = 0xC * v24;
              v19 = *((_DWORD *)v4 + 5);
              v28 = 1;
              if ( v13(arg0, v19, 0xC * v24, &v28, 1) != v14 )
                v22 = 1;
              v15 = *((int (__cdecl **)(_BYTE *, int, unsigned int, int *, int))arg0 + 1);
              v16 = 0xC * v24;
              v20 = *((_DWORD *)v4 + 1);
              v28 = 1;
              if ( v15(arg0, v20, 0xC * v24, &v28, 1) != v16 )
                v22 = 1;
              v17 = *((int (__cdecl **)(_BYTE *, int, unsigned int, int *, int))arg0 + 1);
              v18 = 4 * v24;
              v21 = *((_DWORD *)v4 + 9);
              v29 = 1;
              v4 = 0;
              if ( v17(arg0, v21, 4 * v24, &v29, 1) != v18 )
                v22 = 1;
            }
            goto LABEL_33;
          }
LABEL_31:
          if ( v24 )
            (*(void (__thiscall **)(_BYTE *, unsigned int, int))(*(_DWORD *)arg0 + 0xC))(
              arg0,
              0x1C * v24,
              BSFile_FilePos_Cur);
LABEL_33:
          ++v25;
          if ( v22 )
            break;
          v6 = v25;
        }
      }
    }
    (**(void (__thiscall ***)(_BYTE *, int))arg0)(arg0, 1);
    return v23;
  }
  return result;
}
