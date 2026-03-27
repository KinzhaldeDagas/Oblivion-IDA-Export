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
  _DWORD v27[5]; // [esp+6Ch] [ebp-21Ch] BYREF
  char v28[516]; // [esp+80h] [ebp-208h] BYREF

  result = *(_DWORD *)(a2 + 0x14);
  v21 = this;
  if ( result )
  {
    if ( *(this + 0xFFFFFFFA) || *(this + 0xFFFFFFFB) || (sub_47F990((int *)a2, &v19, 0x1234), (result = v19) == 0) )
    {
      v4 = *(this + 3);
      v5 = *(_DWORD *)(a2 + 8);
      result = 0;
      if ( v4 > 0 )
      {
        v19 = *(this + 2);
        while ( **(_DWORD **)v19 != v5 )
        {
          ++result;
          v19 += 4;
          if ( result >= v4 )
            return result;
        }
        if ( result >= 0 )
        {
          v19 = *(_DWORD *)(*(this + 2) + 4 * result);
          v22 = &v25;
          v23 = 0;
          v24 = 0x80000008;
          v6 = *sub_47F990((int *)a2, v20, 0x1131);
          if ( v6 )
          {
            sub_8BC7B0((int *)a2, v20, 0x1131);
            v7 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x60, 8);
            v7[2] = 0x60;
            v8 = sub_94CCB0(v7, v6);
            *((_OWORD *)v8 + 1) = 0;
            *((_OWORD *)v8 + 2) = 0;
            *((_OWORD *)v8 + 3) = 0;
            *((_DWORD *)v8 + 4) = 0x3F800000;
            *((_DWORD *)v8 + 9) = 0x3F800000;
            *((_DWORD *)v8 + 0xE) = 0x3F800000;
            *((_OWORD *)v8 + 4) = 0;
            *(_DWORD *)&v22[4 * v23++] = v8;
          }
          else
          {
            sub_94A520(v20);
            sub_94A530(v27, v20);
            sub_94B7E0(v27, *(__m128 **)(a2 + 0x14), &v22);
            for ( i = v23 - 1; i >= 0; --i )
            {
              v10 = *(_DWORD *)&v22[4 * i];
              if ( *(_DWORD *)(v10 + 0x54) == 6 && !*(_DWORD *)(v10 + 0x50) )
              {
                sub_8BBFB0((int)v26, a2, v28, 0x200u, 1);
                sub_8BBDB0(v26, "Unable to build display geometry from hkShape geometry data");
                (*(void (__thiscall **)(int, _DWORD, unsigned int, char *, const char *, int))(*(_DWORD *)dword_BA7FB0
                                                                                             + 8))(
                  dword_BA7FB0,
                  0,
                  0xFFFFFFFF,
                  v28,
                  ".\\visualdebugger\\viewer\\hkShapeDisplayViewer.cpp",
                  0xC4);
                sub_8BC000(v26);
                --v23;
                *(_DWORD *)&v22[4 * i] = *(_DWORD *)&v22[4 * v23];
              }
            }
          }
          if ( v23 > 0 )
          {
            v11 = sub_91BA70((int *)a2);
            v12 = (_DWORD *)(v19 + 4);
            v13 = v11;
            if ( *(_DWORD *)(v19 + 8) == (*(_DWORD *)(v19 + 0xC) & 0x3FFFFFFF) )
              sub_8A6EE0((const void **)(v19 + 4), 4);
            *(_DWORD *)(*v12 + 4 * v12[1]++) = v13;
            v14 = v21;
            (*(void (__thiscall **)(_DWORD, char **, int, int *, int))(*(_DWORD *)v21[0xFFFFFFFC] + 4))(
              v21[0xFFFFFFFC],
              &v22,
              *(_DWORD *)(a2 + 0x50) + 0x10,
              v13,
              dword_BA8438);
            v15 = *sub_47F990((int *)a2, v20, 0x1130);
            if ( !v15 )
            {
              v15 = dword_BA843C;
              if ( !*(_BYTE *)(a2 + 0x91) )
                v15 = dword_BA8440;
            }
            (*(void (__thiscall **)(_DWORD, int, int *, int))(*(_DWORD *)v14[0xFFFFFFFC] + 8))(
              v14[0xFFFFFFFC],
              v15,
              v13,
              dword_BA8438);
          }
          for ( j = 0; j < v23; ++j )
          {
            v17 = *(void (__thiscall ****)(_DWORD, int))&v22[4 * j];
            if ( v17 )
              (**v17)(v17, 1);
          }
          result = v24;
          if ( v24 >= 0 )
          {
            v18 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
            if ( !v18 )
              v18 = dword_BA7D9C;
            return sub_8A75D0(v18, v22, 4 * v24, 0x14);
          }
        }
      }
    }
  }
  return result;
}
