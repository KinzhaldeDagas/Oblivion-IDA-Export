char __thiscall sub_764FE0(_BYTE *this, int a2, _DWORD *a3, int *a4, int a5, int a6)
{
  _DWORD *v8; // ecx
  _DWORD *v9; // esi
  _DWORD *v10; // edi
  _DWORD *v11; // eax
  int v12; // edi
  int *v13; // eax
  int v14; // edx
  signed int v15; // eax
  void *v16; // ecx
  int v17; // [esp-Ch] [ebp-30h]
  _DWORD v18[2]; // [esp+4h] [ebp-20h] BYREF
  int v19; // [esp+Ch] [ebp-18h]
  int v20; // [esp+10h] [ebp-14h]
  _DWORD v21[4]; // [esp+14h] [ebp-10h] BYREF

  if ( *(this + 0x6F0) )
    return 0;
  v8 = a3;
  v9 = *(_DWORD **)(a2 + 0x10);
  v10 = (_DWORD *)a3[4];
  if ( v9
    && v10
    && (v17 = (*(int (__thiscall **)(_DWORD))(*v10 + 0xC))(a3[4]),
        v11 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v9 + 0xC))(v9),
        !sub_70E260(v11, v17))
    && (v8 = (_DWORD *)v9[3], v12 = v10[3], v8)
    && v12 )
  {
    if ( a4 )
    {
      v18[0] = *a4;
      v19 = a4[1];
      v18[1] = a4[2];
      v20 = a4[3];
    }
    v21[2] = a5 + v19;
    v21[0] = a5;
    v13 = *((int **)this + 0xA0);
    v21[1] = a6;
    v21[3] = a6 + v20;
    v14 = *v13;
    if ( a4 )
      v15 = (*(int (__stdcall **)(int *, _DWORD *, _DWORD *, int, _DWORD *, _DWORD))(v14 + 0x88))(
              v13,
              v8,
              v18,
              v12,
              v21,
              0);
    else
      v15 = (*(int (__stdcall **)(int *, _DWORD *, _DWORD, int, _DWORD, _DWORD))(v14 + 0x88))(v13, v8, 0, v12, 0, 0);
    if ( v15 >= 0 )
    {
      return 1;
    }
    else
    {
      sub_7736F0(v15);
      TESTexture::ClearComponentReferences(v16);
      return 0;
    }
  }
  else
  {
    TESTexture::ClearComponentReferences(v8);
    return 0;
  }
}
