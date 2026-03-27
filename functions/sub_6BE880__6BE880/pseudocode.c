bool __cdecl sub_6BE880(float a1, int *a2, _DWORD *a3)
{
  _DWORD *v3; // ebx
  int *v4; // edi
  _DWORD *v5; // eax
  _DWORD *v6; // esi
  int v7; // edi
  unsigned int i; // ebx
  int v9; // eax
  int v11; // [esp+1Ch] [ebp-10h] BYREF
  unsigned int v12; // [esp+28h] [ebp-4h]

  v3 = a3;
  v4 = a2;
  if ( !*a3 )
  {
    v5 = (_DWORD *)FormHeapAlloc(0x4Cu);
    a3 = v5;
    v12 = 0;
    if ( v5 )
    {
      v6 = v5 + 1;
      *v5 = 1;
      ArrayConstructor(v5 + 1, 0x48u, 1, (int)sub_6BE430, TESTexture::ClearComponentReferences);
    }
    else
    {
      v6 = 0;
    }
    *v4 = (int)v6;
    v12 = 0xFFFFFFFF;
    *v3 = 1;
  }
  v7 = *v4;
  LOBYTE(a3) = 0;
  for ( i = 0; i < 3; ++i )
  {
    v11 = *(_DWORD *)(v7 + 4 * (unsigned __int8)i + 0x30);
    a2 = *(int **)(v7 + 4 * (unsigned __int8)i + 0x14);
    if ( a2 )
    {
      if ( (*(unsigned __int8 (__cdecl **)(_DWORD, int *, int **))(4 * *(_DWORD *)(v7 + 4 * (unsigned __int8)i + 0x20)
                                                                 + 0xB3D1A8))(
             LODWORD(a1),
             &v11,
             &a2) )
      {
        LOBYTE(a3) = 1;
      }
      v9 = v11;
      *(_DWORD *)(v7 + 4 * (unsigned __int8)i + 0x14) = a2;
      *(_DWORD *)(v7 + 4 * (unsigned __int8)i + 0x30) = v9;
      *(_DWORD *)(v7 + 4 * (unsigned __int8)i + 0x3C) = 0;
    }
  }
  return (_BYTE)a3 != 0;
}
