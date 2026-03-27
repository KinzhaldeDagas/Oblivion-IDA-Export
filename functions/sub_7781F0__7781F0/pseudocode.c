int __userpurge sub_7781F0@<eax>(
        int a1@<ecx>,
        NiGeometryBufferData *a2@<edi>,
        int a3@<esi>,
        int a4,
        void *Src,
        int a6,
        int a7,
        unsigned int *a8,
        int a9,
        void *Dst)
{
  void *v11; // ebp
  int v12; // esi
  unsigned int v13; // edi
  int v14; // ebx
  int v15; // eax
  void *v16; // ecx
  int (__stdcall *v17)(int, _DWORD, int, int *, _DWORD, _DWORD); // eax
  void *v18; // ecx
  size_t v19; // [esp+Ch] [ebp-28h]
  int v21; // [esp+20h] [ebp-14h] BYREF
  int v22; // [esp+24h] [ebp-10h]
  void *v23; // [esp+28h] [ebp-Ch]
  int v24; // [esp+2Ch] [ebp-8h]
  unsigned int v25; // [esp+30h] [ebp-4h]

  if ( !*(_DWORD *)(a1 + 8) || !a4 )
    return 0;
  v11 = Dst;
  HIDWORD(v19) = a3;
  v12 = a7;
  LODWORD(v19) = a2;
  v13 = 2 * a6;
  v14 = 2 * (_DWORD)Src;
  if ( !a7
    || (v21 = 0,
        v22 = 0,
        v23 = 0,
        v24 = 0,
        v25 = 0,
        (*(int (__stdcall **)(int, int *))(*(_DWORD *)a7 + 0x34))(a7, &v21) < 0)
    || v21 != 0x65
    || v22 != 7
    || v23 != v11
    || v24 != a9
    || v25 < v13 )
  {
    v15 = *(_DWORD *)(a1 + 8);
    a6 = 0;
    if ( (*(int (__stdcall **)(int, unsigned int, void *, int, int, int *, _DWORD))(*(_DWORD *)v15 + 0x6C))(
           v15,
           v13,
           v11,
           0x65,
           a9,
           &a6,
           0) >= 0 )
    {
      v12 = a6;
    }
    else
    {
      TESTexture::ClearComponentReferences(v16);
      v12 = 0;
      a6 = 0;
    }
    if ( !v12 )
    {
      TESTexture::ClearComponentReferences(v16);
      return 0;
    }
    *a8 = v13;
  }
  if ( v14 )
  {
    v17 = *(int (__stdcall **)(int, _DWORD, int, int *, _DWORD, _DWORD))(*(_DWORD *)v12 + 0x2C);
    a9 = 0;
    if ( v17(v12, 0, v14, &a9, 0, v19) >= 0 )
    {
      LODWORD(v19) = 2 * (_DWORD)Src;
      memcpy(Dst, Src, v19);
      (*(void (__cdecl **)(int))(*(_DWORD *)v12 + 0x30))(v12);
      return v12;
    }
    TESTexture::ClearComponentReferences(v18);
    (*(void (__cdecl **)(int))(*(_DWORD *)v12 + 0x30))(v12);
    (*(void (__stdcall **)(int))(*(_DWORD *)v12 + 8))(v12);
  }
  return v12;
}
