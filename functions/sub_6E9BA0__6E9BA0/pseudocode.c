int __thiscall sub_6E9BA0(NiRenderer *this, signed int a2)
{
  NiRenderer *v2; // esi
  unsigned int *v3; // ebp
  void (__cdecl *v4)(unsigned int, UInt32 *, int, signed int *, int); // eax
  void (__cdecl *v5)(unsigned int, UInt32 *, int, signed int *, int); // eax
  unsigned int v6; // eax
  unsigned int v7; // ebx
  void (__cdecl *v8)(unsigned int, unsigned int *, int, signed int *, int); // eax
  UInt32 *v9; // edi
  unsigned int *v10; // eax
  unsigned int *v11; // esi
  unsigned int v12; // ecx
  unsigned int v13; // eax
  void (__cdecl *v14)(unsigned int, unsigned int *, int, int *, int); // edx
  unsigned int i; // ebx
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // eax
  void (__cdecl *v19)(unsigned int, unsigned int *, int, signed int *, int); // eax
  unsigned int v20; // edi
  UInt32 *v21; // ebx
  unsigned int *v22; // eax
  unsigned int *v23; // esi
  unsigned int v24; // ecx
  unsigned int v25; // eax
  void (__cdecl *v26)(unsigned int, unsigned int *, int, int *, int); // edx
  unsigned int j; // edi
  int v28; // eax
  unsigned int v29; // eax
  unsigned int v30; // eax
  unsigned int v31; // eax
  int (__cdecl *v32)(unsigned int, unsigned int *, int, int *, int); // eax
  int result; // eax
  unsigned int v34; // edi
  unsigned int *v35; // esi
  unsigned int v36; // eax
  unsigned int v37; // eax
  unsigned int v38; // [esp-3Ch] [ebp-80h]
  unsigned int v39; // [esp-28h] [ebp-6Ch]
  unsigned int v40; // [esp-14h] [ebp-58h]
  unsigned int v41; // [esp-14h] [ebp-58h]
  unsigned int v42; // [esp-14h] [ebp-58h]
  unsigned int v44; // [esp+20h] [ebp-24h] BYREF
  unsigned int v45; // [esp+24h] [ebp-20h] BYREF
  unsigned int v46; // [esp+28h] [ebp-1Ch] BYREF
  unsigned int v47; // [esp+2Ch] [ebp-18h] BYREF
  int v48; // [esp+30h] [ebp-14h] BYREF
  int v49; // [esp+34h] [ebp-10h] BYREF
  unsigned int v50; // [esp+40h] [ebp-4h]

  v2 = this; /*0x6e9bc7*/
  v3 = (unsigned int *)a2; /*0x6e9bcd*/
  NiTimeController_LoadBinary(this, a2); /*0x6e9bd2*/
  v40 = v3[0x87]; /*0x6e9bee*/
  v4 = *(void (__cdecl **)(unsigned int, UInt32 *, int, signed int *, int))(v40 + 4); /*0x6e9bef*/
  a2 = 4; /*0x6e9bf2*/
  v4(v40, &v2->members.pad014[0xA], 4, &a2, 1); /*0x6e9bf6*/
  v39 = v3[0x87]; /*0x6e9c0a*/
  v5 = *(void (__cdecl **)(unsigned int, UInt32 *, int, signed int *, int))(v39 + 4); /*0x6e9c0b*/
  a2 = 4; /*0x6e9c0e*/
  v5(v39, &v2->members.pad014[0xB], 4, &a2, 1); /*0x6e9c12*/
  v6 = v3[0x87]; /*0x6e9c14*/
  v7 = 0; /*0x6e9c27*/
  v45 = 0; /*0x6e9c29*/
  v38 = v6; /*0x6e9c2d*/
  v8 = *(void (__cdecl **)(unsigned int, unsigned int *, int, signed int *, int))(v6 + 4); /*0x6e9c2e*/
  a2 = 4; /*0x6e9c31*/
  v8(v38, &v45, 4, &a2, 1); /*0x6e9c38*/
  a2 = 0; /*0x6e9c41*/
  if ( v45 ) /*0x6e9c45*/
  {
    v9 = &v2->members.pad014[0xC]; /*0x6e9c4b*/
    while ( 1 ) /*0x6e9c56*/
    {
      v10 = (unsigned int *)FormHeapAlloc(0xCu); /*0x6e9c56*/
      v11 = 0; /*0x6e9c5e*/
      if ( v10 ) /*0x6e9c62*/
      {
        *v10 = 0; /*0x6e9c64*/
        v10[1] = 0; /*0x6e9c66*/
        v10[2] = 0; /*0x6e9c69*/
        v11 = v10; /*0x6e9c6c*/
      }
      v12 = *((unsigned __int16 *)v9 + 4); /*0x6e9c6e*/
      v50 = 0xFFFFFFFF; /*0x6e9c74*/
      if ( v7 >= v12 ) /*0x6e9c7c*/
        NiTArray_SetSize((unsigned __int16 *)v9, v7 + *((unsigned __int16 *)v9 + 7)); /*0x6e9c87*/
      if ( v7 < *((unsigned __int16 *)v9 + 5) ) /*0x6e9c92*/
      {
        if ( v11 ) /*0x6e9ca8*/
        {
          if ( !*(_DWORD *)(v9[1] + 4 * v7) ) /*0x6e9cad*/
            ++*((_WORD *)v9 + 6); /*0x6e9cb3*/
        }
        else if ( *(_DWORD *)(v9[1] + 4 * v7) ) /*0x6e9cbd*/
        {
          --*((_WORD *)v9 + 6); /*0x6e9cc3*/
        }
      }
      else
      {
        *((_WORD *)v9 + 5) = v7 + 1; /*0x6e9c99*/
        if ( v11 ) /*0x6e9c9d*/
          ++*((_WORD *)v9 + 6); /*0x6e9c9f*/
      }
      *(_DWORD *)(v9[1] + 4 * v7) = v11; /*0x6e9cce*/
      v13 = v3[0x87]; /*0x6e9cd1*/
      v44 = 0; /*0x6e9ce3*/
      v14 = *(void (__cdecl **)(unsigned int, unsigned int *, int, int *, int))(v13 + 4); /*0x6e9ceb*/
      v48 = 4; /*0x6e9cef*/
      v14(v13, &v44, 4, &v48, 1); /*0x6e9cf7*/
      for ( i = 0; i < v44; ++i ) /*0x6e9d02*/
      {
        v16 = v11[1]; /*0x6e9d04*/
        if ( v11[2] == v16 ) /*0x6e9d0a*/
        {
          if ( v16 ) /*0x6e9d0e*/
            v17 = 2 * v16; /*0x6e9d10*/
          else
            v17 = 1; /*0x6e9d14*/
          sub_6E8CA0(v11, v17); /*0x6e9d1c*/
        }
        *(_DWORD *)(*v11 + 4 * v11[2]++) = this; /*0x6e9d2a*/
        sub_712A20(v3); /*0x6e9d33*/
      }
      if ( ++a2 >= v45 ) /*0x6e9d50*/
        break; /*0x6e9d50*/
      v7 = a2; /*0x6e9c50*/
    }
    v2 = this; /*0x6e9d56*/
  }
  v18 = v3[0x87]; /*0x6e9d5f*/
  v46 = 0; /*0x6e9d72*/
  v41 = v18; /*0x6e9d7a*/
  v19 = *(void (__cdecl **)(unsigned int, unsigned int *, int, signed int *, int))(v18 + 4); /*0x6e9d7b*/
  a2 = 4; /*0x6e9d7e*/
  v19(v41, &v46, 4, &a2, 1); /*0x6e9d82*/
  v20 = 0; /*0x6e9d84*/
  a2 = 0; /*0x6e9d8d*/
  if ( v46 ) /*0x6e9d91*/
  {
    v21 = &v2->members.pad014[0x10]; /*0x6e9d97*/
    while ( 1 ) /*0x6e9da6*/
    {
      v22 = (unsigned int *)FormHeapAlloc(0xCu); /*0x6e9da6*/
      v23 = 0; /*0x6e9dae*/
      if ( v22 ) /*0x6e9db2*/
      {
        *v22 = 0; /*0x6e9db4*/
        v22[1] = 0; /*0x6e9db6*/
        v22[2] = 0; /*0x6e9db9*/
        v23 = v22; /*0x6e9dbc*/
      }
      v24 = *((unsigned __int16 *)v21 + 4); /*0x6e9dbe*/
      v50 = 0xFFFFFFFF; /*0x6e9dc4*/
      if ( v20 >= v24 ) /*0x6e9dcc*/
        NiTArray_SetSize((unsigned __int16 *)v21, v20 + *((unsigned __int16 *)v21 + 7)); /*0x6e9dd7*/
      if ( v20 < *((unsigned __int16 *)v21 + 5) ) /*0x6e9de2*/
      {
        if ( v23 ) /*0x6e9df8*/
        {
          if ( !*(_DWORD *)(v21[1] + 4 * v20) ) /*0x6e9dfd*/
            ++*((_WORD *)v21 + 6); /*0x6e9e03*/
        }
        else if ( *(_DWORD *)(v21[1] + 4 * v20) ) /*0x6e9e0d*/
        {
          --*((_WORD *)v21 + 6); /*0x6e9e13*/
        }
      }
      else
      {
        *((_WORD *)v21 + 5) = v20 + 1; /*0x6e9de9*/
        if ( v23 ) /*0x6e9ded*/
          ++*((_WORD *)v21 + 6); /*0x6e9def*/
      }
      *(_DWORD *)(v21[1] + 4 * v20) = v23; /*0x6e9e1e*/
      v25 = v3[0x87]; /*0x6e9e21*/
      v44 = 0; /*0x6e9e33*/
      v26 = *(void (__cdecl **)(unsigned int, unsigned int *, int, int *, int))(v25 + 4); /*0x6e9e3b*/
      v48 = 4; /*0x6e9e3f*/
      v26(v25, &v44, 4, &v48, 1); /*0x6e9e47*/
      for ( j = 0; j < v44; ++j ) /*0x6e9e52*/
      {
        v28 = FormHeapAlloc(8u); /*0x6e9e56*/
        if ( v28 ) /*0x6e9e62*/
        {
          *(_DWORD *)(v28 + 4) = 0; /*0x6e9e64*/
          v48 = v28; /*0x6e9e67*/
        }
        else
        {
          v48 = 0; /*0x6e9e6d*/
        }
        v29 = v23[1]; /*0x6e9e71*/
        if ( v23[2] == v29 ) /*0x6e9e77*/
        {
          if ( v29 ) /*0x6e9e7b*/
            v30 = 2 * v29; /*0x6e9e7d*/
          else
            v30 = 1; /*0x6e9e81*/
          sub_6E8CA0(v23, v30); /*0x6e9e89*/
        }
        *(_DWORD *)(*v23 + 4 * v23[2]++) = v48; /*0x6e9e97*/
        sub_712A20(v3); /*0x6e9ea0*/
        sub_712A20(v3); /*0x6e9ea7*/
      }
      if ( ++a2 >= v46 ) /*0x6e9ec4*/
        break; /*0x6e9ec4*/
      v20 = a2; /*0x6e9da0*/
    }
    v2 = this; /*0x6e9eca*/
  }
  v31 = v3[0x87]; /*0x6e9ece*/
  v47 = 0; /*0x6e9ee2*/
  v42 = v31; /*0x6e9eea*/
  v32 = *(int (__cdecl **)(unsigned int, unsigned int *, int, int *, int))(v31 + 4); /*0x6e9eeb*/
  v49 = 4; /*0x6e9eee*/
  result = v32(v42, &v47, 4, &v49, 1); /*0x6e9ef6*/
  v34 = 0; /*0x6e9ef8*/
  if ( v47 ) /*0x6e9f01*/
  {
    v35 = &v2->members.pad014[0x14]; /*0x6e9f03*/
    do /*0x6e9f41*/
    {
      v36 = v35[1]; /*0x6e9f06*/
      if ( v35[2] == v36 ) /*0x6e9f0c*/
      {
        if ( v36 ) /*0x6e9f10*/
          v37 = 2 * v36; /*0x6e9f12*/
        else
          v37 = 1; /*0x6e9f16*/
        sub_6E8CA0(v35, v37); /*0x6e9f1e*/
      }
      *(_DWORD *)(*v35 + 4 * v35[2]++) = this; /*0x6e9f2c*/
      result = sub_712A20(v3); /*0x6e9f35*/
      ++v34; /*0x6e9f3a*/
    }
    while ( v34 < v47 ); /*0x6e9f41*/
  }
  return result; /*0x6e9f43*/
}
