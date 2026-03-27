int __thiscall sub_6FDC30(int *this, unsigned int *a2)
{
  unsigned int *v3; // ebx
  void (__cdecl *v4)(unsigned int, int *, int, int *, int); // eax
  void (__cdecl *v5)(unsigned int, int *, int, int *, int); // eax
  unsigned int v6; // eax
  unsigned int *v7; // esi
  int (__cdecl *v8)(unsigned int, unsigned int *, int, int *, int); // eax
  int result; // eax
  unsigned int v10; // ebp
  int *v11; // edi
  unsigned int *v12; // eax
  unsigned int v13; // ecx
  unsigned int v14; // eax
  int (__cdecl *v15)(unsigned int, unsigned int *, int, int *, int); // edx
  unsigned int i; // ebx
  unsigned int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // [esp-3Ch] [ebp-74h]
  unsigned int v20; // [esp-28h] [ebp-60h]
  unsigned int v21; // [esp-14h] [ebp-4Ch]
  unsigned int v22; // [esp+18h] [ebp-20h] BYREF
  unsigned int v23; // [esp+1Ch] [ebp-1Ch] BYREF
  int v24; // [esp+20h] [ebp-18h] BYREF
  int v25; // [esp+24h] [ebp-14h] BYREF
  int *v26; // [esp+28h] [ebp-10h]
  unsigned int v27; // [esp+34h] [ebp-4h]

  v26 = this;
  v3 = a2;
  sub_715F40(this, (signed int)a2);
  v21 = a2[0x87];
  v4 = *(void (__cdecl **)(unsigned int, int *, int, int *, int))(v21 + 4);
  v24 = 4;
  v4(v21, this + 0xF, 4, &v24, 1);
  v20 = a2[0x87];
  v5 = *(void (__cdecl **)(unsigned int, int *, int, int *, int))(v20 + 4);
  v24 = 4;
  v5(v20, this + 0x10, 4, &v24, 1);
  v6 = a2[0x87];
  v7 = 0;
  v23 = 0;
  v19 = v6;
  v8 = *(int (__cdecl **)(unsigned int, unsigned int *, int, int *, int))(v6 + 4);
  v24 = 4;
  result = v8(v19, &v23, 4, &v24, 1);
  v10 = 0;
  if ( v23 )
  {
    v11 = this + 0x11;
    while ( 1 )
    {
      v12 = (unsigned int *)FormHeapAlloc(0xCu);
      if ( v12 )
      {
        *v12 = 0;
        v12[1] = 0;
        v12[2] = 0;
        v7 = v12;
      }
      v13 = *((unsigned __int16 *)v11 + 4);
      v27 = 0xFFFFFFFF;
      if ( v10 >= v13 )
        NiTArray_SetSize((unsigned __int16 *)v11, v10 + *((unsigned __int16 *)v11 + 7));
      if ( v10 < *((unsigned __int16 *)v11 + 5) )
      {
        if ( v7 )
        {
          if ( !*(_DWORD *)(v11[1] + 4 * v10) )
            ++*((_WORD *)v11 + 6);
        }
        else if ( *(_DWORD *)(v11[1] + 4 * v10) )
        {
          --*((_WORD *)v11 + 6);
        }
      }
      else
      {
        *((_WORD *)v11 + 5) = v10 + 1;
        if ( v7 )
          ++*((_WORD *)v11 + 6);
      }
      *(_DWORD *)(v11[1] + 4 * v10) = v7;
      v14 = v3[0x87];
      v22 = 0;
      v15 = *(int (__cdecl **)(unsigned int, unsigned int *, int, int *, int))(v14 + 4);
      v25 = 4;
      result = v15(v14, &v22, 4, &v25, 1);
      for ( i = 0; i < v22; ++i )
      {
        v17 = v7[1];
        if ( v7[2] == v17 )
        {
          if ( v17 )
            v18 = 2 * v17;
          else
            v18 = 1;
          sub_6E8CA0(v7, v18);
        }
        *(_DWORD *)(*v7 + 4 * v7[2]++) = v26;
        result = sub_712A20(a2);
      }
      if ( ++v10 >= v23 )
        break;
      v3 = a2;
      v7 = 0;
    }
  }
  return result;
}
