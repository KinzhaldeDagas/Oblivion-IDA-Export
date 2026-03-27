int __thiscall sub_6E9BA0(int *this, unsigned int a2)
{
  int *v2; // esi
  unsigned int *v3; // ebp
  void (__cdecl *v4)(unsigned int, int *, int, unsigned int *, int); // eax
  void (__cdecl *v5)(unsigned int, int *, int, unsigned int *, int); // eax
  unsigned int v6; // eax
  unsigned int v7; // ebx
  void (__cdecl *v8)(unsigned int, unsigned int *, int, unsigned int *, int); // eax
  int *v9; // edi
  unsigned int *v10; // eax
  unsigned int *v11; // esi
  unsigned int v12; // ecx
  unsigned int v13; // eax
  void (__cdecl *v14)(unsigned int, unsigned int *, int, int *, int); // edx
  unsigned int i; // ebx
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // eax
  void (__cdecl *v19)(unsigned int, unsigned int *, int, unsigned int *, int); // eax
  unsigned int v20; // edi
  int *v21; // ebx
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

  v2 = this;
  v3 = (unsigned int *)a2;
  sub_715F40(this, a2);
  v40 = v3[0x87];
  v4 = *(void (__cdecl **)(unsigned int, int *, int, unsigned int *, int))(v40 + 4);
  a2 = 4;
  v4(v40, v2 + 0xF, 4, &a2, 1);
  v39 = v3[0x87];
  v5 = *(void (__cdecl **)(unsigned int, int *, int, unsigned int *, int))(v39 + 4);
  a2 = 4;
  v5(v39, v2 + 0x10, 4, &a2, 1);
  v6 = v3[0x87];
  v7 = 0;
  v45 = 0;
  v38 = v6;
  v8 = *(void (__cdecl **)(unsigned int, unsigned int *, int, unsigned int *, int))(v6 + 4);
  a2 = 4;
  v8(v38, &v45, 4, &a2, 1);
  a2 = 0;
  if ( v45 )
  {
    v9 = v2 + 0x11;
    while ( 1 )
    {
      v10 = (unsigned int *)FormHeapAlloc(0xCu);
      v11 = 0;
      if ( v10 )
      {
        *v10 = 0;
        v10[1] = 0;
        v10[2] = 0;
        v11 = v10;
      }
      v12 = *((unsigned __int16 *)v9 + 4);
      v50 = 0xFFFFFFFF;
      if ( v7 >= v12 )
        NiTArray_SetSize((unsigned __int16 *)v9, v7 + *((unsigned __int16 *)v9 + 7));
      if ( v7 < *((unsigned __int16 *)v9 + 5) )
      {
        if ( v11 )
        {
          if ( !*(_DWORD *)(v9[1] + 4 * v7) )
            ++*((_WORD *)v9 + 6);
        }
        else if ( *(_DWORD *)(v9[1] + 4 * v7) )
        {
          --*((_WORD *)v9 + 6);
        }
      }
      else
      {
        *((_WORD *)v9 + 5) = v7 + 1;
        if ( v11 )
          ++*((_WORD *)v9 + 6);
      }
      *(_DWORD *)(v9[1] + 4 * v7) = v11;
      v13 = v3[0x87];
      v44 = 0;
      v14 = *(void (__cdecl **)(unsigned int, unsigned int *, int, int *, int))(v13 + 4);
      v48 = 4;
      v14(v13, &v44, 4, &v48, 1);
      for ( i = 0; i < v44; ++i )
      {
        v16 = v11[1];
        if ( v11[2] == v16 )
        {
          if ( v16 )
            v17 = 2 * v16;
          else
            v17 = 1;
          sub_6E8CA0(v11, v17);
        }
        *(_DWORD *)(*v11 + 4 * v11[2]++) = this;
        sub_712A20(v3);
      }
      if ( ++a2 >= v45 )
        break;
      v7 = a2;
    }
    v2 = this;
  }
  v18 = v3[0x87];
  v46 = 0;
  v41 = v18;
  v19 = *(void (__cdecl **)(unsigned int, unsigned int *, int, unsigned int *, int))(v18 + 4);
  a2 = 4;
  v19(v41, &v46, 4, &a2, 1);
  v20 = 0;
  a2 = 0;
  if ( v46 )
  {
    v21 = v2 + 0x15;
    while ( 1 )
    {
      v22 = (unsigned int *)FormHeapAlloc(0xCu);
      v23 = 0;
      if ( v22 )
      {
        *v22 = 0;
        v22[1] = 0;
        v22[2] = 0;
        v23 = v22;
      }
      v24 = *((unsigned __int16 *)v21 + 4);
      v50 = 0xFFFFFFFF;
      if ( v20 >= v24 )
        NiTArray_SetSize((unsigned __int16 *)v21, v20 + *((unsigned __int16 *)v21 + 7));
      if ( v20 < *((unsigned __int16 *)v21 + 5) )
      {
        if ( v23 )
        {
          if ( !*(_DWORD *)(v21[1] + 4 * v20) )
            ++*((_WORD *)v21 + 6);
        }
        else if ( *(_DWORD *)(v21[1] + 4 * v20) )
        {
          --*((_WORD *)v21 + 6);
        }
      }
      else
      {
        *((_WORD *)v21 + 5) = v20 + 1;
        if ( v23 )
          ++*((_WORD *)v21 + 6);
      }
      *(_DWORD *)(v21[1] + 4 * v20) = v23;
      v25 = v3[0x87];
      v44 = 0;
      v26 = *(void (__cdecl **)(unsigned int, unsigned int *, int, int *, int))(v25 + 4);
      v48 = 4;
      v26(v25, &v44, 4, &v48, 1);
      for ( j = 0; j < v44; ++j )
      {
        v28 = FormHeapAlloc(8u);
        if ( v28 )
        {
          *(_DWORD *)(v28 + 4) = 0;
          v48 = v28;
        }
        else
        {
          v48 = 0;
        }
        v29 = v23[1];
        if ( v23[2] == v29 )
        {
          if ( v29 )
            v30 = 2 * v29;
          else
            v30 = 1;
          sub_6E8CA0(v23, v30);
        }
        *(_DWORD *)(*v23 + 4 * v23[2]++) = v48;
        sub_712A20(v3);
        sub_712A20(v3);
      }
      if ( ++a2 >= v46 )
        break;
      v20 = a2;
    }
    v2 = this;
  }
  v31 = v3[0x87];
  v47 = 0;
  v42 = v31;
  v32 = *(int (__cdecl **)(unsigned int, unsigned int *, int, int *, int))(v31 + 4);
  v49 = 4;
  result = v32(v42, &v47, 4, &v49, 1);
  v34 = 0;
  if ( v47 )
  {
    v35 = (unsigned int *)(v2 + 0x19);
    do
    {
      v36 = v35[1];
      if ( v35[2] == v36 )
      {
        if ( v36 )
          v37 = 2 * v36;
        else
          v37 = 1;
        sub_6E8CA0(v35, v37);
      }
      *(_DWORD *)(*v35 + 4 * v35[2]++) = this;
      result = sub_712A20(v3);
      ++v34;
    }
    while ( v34 < v47 );
  }
  return result;
}
