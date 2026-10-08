int __thiscall sub_91C150(_DWORD *this, int a2)
{
  int result; // eax
  int v4; // ecx
  int v5; // edx
  int v6; // esi
  _WORD *v7; // eax
  _WORD *v8; // eax
  int i; // esi
  int v10; // eax
  int *v11; // eax
  _DWORD *v12; // esi
  int *v13; // edi
  _DWORD *v14; // esi
  int v15; // eax
  int j; // esi
  void (__thiscall ***v17)(_DWORD, int); // ecx
  int v18; // ecx
  int v19; // [esp+20h] [ebp-268h] BYREF
  _DWORD v20[2]; // [esp+28h] [ebp-260h] BYREF
  _DWORD *v21; // [esp+30h] [ebp-258h]
  char *v22; // [esp+34h] [ebp-254h] BYREF
  int v23; // [esp+38h] [ebp-250h]
  int v24; // [esp+3Ch] [ebp-24Ch]
  char v25; // [esp+40h] [ebp-248h] BYREF
  int *v26[3]; // [esp+60h] [ebp-228h] BYREF
  int v27[5]; // [esp+6Ch] [ebp-21Ch] BYREF
  char v28[516]; // [esp+80h] [ebp-208h] BYREF

  result = *(_DWORD *)(a2 + 0x14); /*0x91c16c*/
  v21 = this; /*0x91c175*/
  if ( result ) /*0x91c179*/
  {
    if ( *(this + 0xFFFFFFFA) || *(this + 0xFFFFFFFB) || (sub_47F990((int *)a2, &v19, 0x1234), (result = v19) == 0) ) /*0x91c1a4*/
    {
      v4 = *(this + 3); /*0x91c1aa*/
      v5 = *(_DWORD *)(a2 + 8); /*0x91c1ad*/
      result = 0; /*0x91c1b0*/
      if ( v4 > 0 ) /*0x91c1b4*/
      {
        v19 = *(this + 2); /*0x91c1bd*/
        while ( **(_DWORD **)v19 != v5 ) /*0x91c1c9*/
        {
          ++result; /*0x91c1cf*/
          v19 += 4; /*0x91c1d5*/
          if ( result >= v4 ) /*0x91c1d9*/
            return result; /*0x91c1d9*/
        }
        if ( result >= 0 ) /*0x91c1f2*/
        {
          v19 = *(_DWORD *)(*(this + 2) + 4 * result); /*0x91c20e*/
          v22 = &v25; /*0x91c212*/
          v23 = 0; /*0x91c216*/
          v24 = 0x80000008; /*0x91c21e*/
          v6 = *sub_47F990((int *)a2, v20, 0x1131); /*0x91c22b*/
          if ( v6 ) /*0x91c22f*/
          {
            sub_8BC7B0((int *)a2, v20, 0x1131); /*0x91c23d*/
            v7 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x60, 8); /*0x91c24e*/
            v7[2] = 0x60; /*0x91c254*/
            v8 = sub_94CCB0(v7, v6); /*0x91c25a*/
            *((_OWORD *)v8 + 1) = 0; /*0x91c262*/
            *((_OWORD *)v8 + 2) = 0; /*0x91c266*/
            *((_OWORD *)v8 + 3) = 0; /*0x91c26a*/
            *((_DWORD *)v8 + 4) = 0x3F800000; /*0x91c273*/
            *((_DWORD *)v8 + 9) = 0x3F800000; /*0x91c276*/
            *((_DWORD *)v8 + 0xE) = 0x3F800000; /*0x91c279*/
            *((_OWORD *)v8 + 4) = 0; /*0x91c27c*/
            *(_DWORD *)&v22[4 * v23++] = v8; /*0x91c288*/
          }
          else
          {
            sub_94A520(v20); /*0x91c298*/
            sub_94A530(v27, v20); /*0x91c2a6*/
            sub_94B7E0(v27, *(__m128 **)(a2 + 0x14), (const void **)&v22); /*0x91c2b8*/
            for ( i = v23 - 1; i >= 0; --i ) /*0x91c2c2*/
            {
              v10 = *(_DWORD *)&v22[4 * i]; /*0x91c2d4*/
              if ( *(_DWORD *)(v10 + 0x54) == 6 && !*(_DWORD *)(v10 + 0x50) ) /*0x91c2dc*/
              {
                sub_8BBFB0((int)v26, a2, v28, 0x200u, 1); /*0x91c2fa*/
                sub_8BBDB0(v26, "Unable to build display geometry from hkShape geometry data"); /*0x91c308*/
                (*(void (__thiscall **)(int, _DWORD, unsigned int, char *, const char *, int))(*(_DWORD *)unk_BA7FB0 + 8))( /*0x91c32b*/
                  unk_BA7FB0,
                  0,
                  0xFFFFFFFF,
                  v28,
                  ".\\visualdebugger\\viewer\\hkShapeDisplayViewer.cpp",
                  0xC4);
                sub_8BC000(v26); /*0x91c332*/
                --v23; /*0x91c340*/
                *(_DWORD *)&v22[4 * i] = *(_DWORD *)&v22[4 * v23]; /*0x91c347*/
              }
            }
          }
          if ( v23 > 0 ) /*0x91c353*/
          {
            v11 = sub_91BA70((int *)a2); /*0x91c35a*/
            v12 = (_DWORD *)(v19 + 4); /*0x91c366*/
            v13 = v11; /*0x91c369*/
            if ( *(_DWORD *)(v19 + 8) == (*(_DWORD *)(v19 + 0xC) & 0x3FFFFFFF) ) /*0x91c378*/
              sub_8A6EE0((const void **)(v19 + 4), 4); /*0x91c37d*/
            *(_DWORD *)(*v12 + 4 * v12[1]++) = v13; /*0x91c38a*/
            v14 = v21; /*0x91c396*/
            (*(void (__thiscall **)(_DWORD, char **, int, int *, int))(*(_DWORD *)v21[0xFFFFFFFC] + 4))( /*0x91c3ad*/
              v21[0xFFFFFFFC],
              &v22,
              *(_DWORD *)(a2 + 0x50) + 0x10,
              v13,
              unk_BA8438);
            v15 = *sub_47F990((int *)a2, v20, 0x1130); /*0x91c3c1*/
            if ( !v15 ) /*0x91c3c5*/
            {
              v15 = unk_BA843C; /*0x91c3cf*/
              if ( !*(_BYTE *)(a2 + 0x91) ) /*0x91c3c7*/
                v15 = unk_BA8440; /*0x91c3d6*/
            }
            (*(void (__thiscall **)(_DWORD, int, int *, int))(*(_DWORD *)v14[0xFFFFFFFC] + 8))( /*0x91c3e9*/
              v14[0xFFFFFFFC],
              v15,
              v13,
              unk_BA8438);
          }
          for ( j = 0; j < v23; ++j ) /*0x91c3f4*/
          {
            v17 = *(void (__thiscall ****)(_DWORD, int))&v22[4 * j]; /*0x91c3fa*/
            if ( v17 ) /*0x91c3ff*/
              (**v17)(v17, 1); /*0x91c405*/
          }
          result = v24; /*0x91c410*/
          if ( v24 >= 0 ) /*0x91c416*/
          {
            v18 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x91c428*/
            if ( !v18 ) /*0x91c430*/
              v18 = unk_BA7D9C; /*0x91c432*/
            return sub_8A75D0(v18, v22, 4 * v24, 0x14); /*0x91c448*/
          }
        }
      }
    }
  }
  return result; /*0x91c1db*/
}
