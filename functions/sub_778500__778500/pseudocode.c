_DWORD *__userpurge sub_778500@<eax>(
        _DWORD *a1@<ecx>,
        int a2@<edi>,
        int a3,
        int a4,
        _DWORD *a5,
        int a6,
        int a7,
        _WORD *a8)
{
  _DWORD *v10; // esi
  int v11; // edi
  int v12; // ecx
  _DWORD *v13; // edi
  _DWORD *v14; // esi
  int (__stdcall *v15)(_DWORD *, _DWORD, unsigned int, int *, _DWORD, int); // eax
  void *v16; // ecx
  _WORD *v17; // eax
  unsigned int v18; // ebp
  unsigned int v19; // edx
  void *v20; // ecx
  _DWORD *v22; // [esp+24h] [ebp-18h]
  int v23; // [esp+28h] [ebp-14h] BYREF
  int v24; // [esp+2Ch] [ebp-10h]
  int v25; // [esp+30h] [ebp-Ch]
  int v26; // [esp+34h] [ebp-8h]
  unsigned int v27; // [esp+38h] [ebp-4h]
  unsigned int v28; // [esp+40h] [ebp+4h]

  v22 = a1;
  if ( !a1[2] )
    return 0;
  if ( !a3 || !a4 )
    return 0;
  v10 = (_DWORD *)a1[5];
  v11 = a7;
  v28 = 4 * a3 + 4;
  if ( v10 )
  {
    v12 = *v10;
    v23 = 0;
    v24 = 0;
    v25 = 0;
    v26 = 0;
    v27 = 0;
    if ( (*(int (__stdcall **)(_DWORD *, int *))(v12 + 0x34))(v10, &v23) >= 0 )
    {
      if ( v23 == 0x65 && v24 == 7 && v25 == a6 && v26 == v11 && v27 >= v28 )
      {
        v13 = v10;
        goto LABEL_14;
      }
      (*(void (__stdcall **)(_DWORD *))(*v10 + 8))(v10);
    }
    a1 = v22;
  }
  v13 = sub_778180(a1, v28, a6, 0x65, v11, 0);
  if ( !v13 )
  {
    TESTexture::ClearComponentReferences(v20);
    return 0;
  }
LABEL_14:
  v14 = a5;
  *a5 = 0;
  v15 = *(int (__stdcall **)(_DWORD *, _DWORD, unsigned int, int *, _DWORD, int))(*v13 + 0x2C);
  a7 = 0;
  if ( v15(v13, 0, v28, &a7, 0, a2) < 0 )
  {
    TESTexture::ClearComponentReferences(v16);
    (*(void (**)(void))(*v13 + 0x30))();
    (*(void (__stdcall **)(_DWORD *))(*v13 + 8))(v13);
    v13 = 0;
  }
  else
  {
    v17 = a8;
    v18 = a3 - 1;
    v19 = 0;
    if ( a3 != 1 )
    {
      do
      {
        if ( *(_BYTE *)a5 )
        {
          *v17 = v19;
          v17[1] = v19 + 1;
          v17 += 2;
          *v14 += 2;
        }
        a5 = (_DWORD *)((char *)a5 + 1);
        ++v19;
      }
      while ( v19 < v18 );
    }
    if ( *(_BYTE *)a5 )
    {
      *(_DWORD *)v17 = (unsigned __int16)v18;
      *v14 += 2;
    }
    (*(void (**)(void))(*v13 + 0x30))();
  }
  v22[5] = v13;
  v22[6] = v28;
  return v13;
}
