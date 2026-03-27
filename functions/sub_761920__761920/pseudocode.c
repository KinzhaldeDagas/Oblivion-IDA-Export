NiDX9TextureData *__usercall sub_761920@<eax>(int a1@<edi>, NiTexture *a2, NiDX9Renderer *a3)
{
  NiDX9TextureData *v3; // esi
  int (__stdcall ***v5)(_DWORD, void *, int *); // edi
  signed int v6; // eax
  void *v7; // ecx
  _DWORD *v8; // edi
  void *v9; // ecx
  int v10; // [esp+4h] [ebp-10h]
  int v11; // [esp+8h] [ebp-Ch]
  int v12; // [esp+10h] [ebp-4h] BYREF
  _DWORD *retaddr; // [esp+14h] [ebp+0h] BYREF

  v3 = (NiDX9TextureData *)FormHeapAlloc(0x64u);
  if ( v3 )
  {
    NiDX9TextureData::NiDX9TextureData(v3, a2, a3);
    v3->_vtbl = &NiDX9RenderedTextureData::`vftable';
    v3[1]._vtbl = 0;
  }
  else
  {
    v3 = 0;
  }
  if ( sub_761730(v3, a1, (int)v3, a2, v10, v11) )
  {
    v3->parent->members.rendererData = v3;
    v5 = (int (__stdcall ***)(_DWORD, void *, int *))(*((int (__thiscall **)(NiDX9TextureData *, int))v3->_vtbl + 5))(
                                                       v3,
                                                       a1);
    retaddr = (_DWORD *)((int (__thiscall *)(NiTexture *))a2->__vftable[1].super.super.Destructor)(a2);
    v12 = 0;
    v6 = (**v5)(v5, &unk_AB27E8, &v12);
    if ( v6 >= 0 )
    {
      v8 = sub_76D8C0(v12, &retaddr);
      (*(void (__cdecl **)(int))(*(_DWORD *)v12 + 8))(v12);
      if ( v8 )
      {
        return v3;
      }
      else
      {
        TESTexture::ClearComponentReferences(v9);
        (*(void (__thiscall **)(NiDX9TextureData *, int))v3->_vtbl)(v3, 1);
        return 0;
      }
    }
    else
    {
      sub_7736F0(v6);
      TESTexture::ClearComponentReferences(v7);
      (*(void (__thiscall **)(NiDX9TextureData *, int))v3->_vtbl)(v3, 1);
      return 0;
    }
  }
  else
  {
    if ( v3 )
      (*(void (__thiscall **)(NiDX9TextureData *, int))v3->_vtbl)(v3, 1);
    return 0;
  }
}
