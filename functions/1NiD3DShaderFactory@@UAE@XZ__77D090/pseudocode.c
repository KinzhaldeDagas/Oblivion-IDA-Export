void __thiscall NiD3DShaderFactory::~NiD3DShaderFactory(NiD3DShaderFactory *this)
{
  _DWORD *v2; // ecx
  void (__thiscall ***v3)(_DWORD, int); // ecx
  void (__thiscall ***v4)(_DWORD, int); // ecx
  unsigned int v5; // edx
  unsigned int v6; // eax
  _DWORD *v7; // ecx
  NiTMap_Entry_TESCELL *v8; // eax
  TESObjectCELL *v9; // [esp+8h] [ebp-Ch] BYREF
  NiTMap_Entry_TESCELL *v10; // [esp+Ch] [ebp-8h] BYREF
  int v11; // [esp+10h] [ebp-4h] BYREF

  v2 = *((_DWORD **)this + 6);
  *(_DWORD *)this = &NiD3DShaderFactory::`vftable';
  NiTMap_Clear(v2);
  sub_77CEC0((unsigned int **)this);
  v3 = *((void (__thiscall ****)(_DWORD, int))this + 6);
  if ( v3 )
    (**v3)(v3, 1);
  v4 = *((void (__thiscall ****)(_DWORD, int))this + 8);
  if ( v4 )
    (**v4)(v4, 1);
  v5 = *((_DWORD *)this + 0xA);
  v6 = 0;
  if ( v5 )
  {
    v7 = *((_DWORD **)this + 0xB);
    while ( !*v7 )
    {
      ++v6;
      ++v7;
      if ( v6 >= v5 )
        goto LABEL_9;
    }
    v8 = *(NiTMap_Entry_TESCELL **)(*((_DWORD *)this + 0xB) + 4 * v6);
  }
  else
  {
LABEL_9:
    v8 = 0;
  }
  v10 = v8;
  while ( v10 )
  {
    v9 = 0;
    sub_452600((NiTMap_TESCELL *)((char *)this + 0x24), &v10, (void **)&v11, &v9);
    if ( v9 )
      sub_77CB50(v11);
  }
  *((_DWORD *)this + 5) = 0;
  NiTStringMap<NiD3DGlobalConstantEntry *>::~NiTStringMap<NiD3DGlobalConstantEntry *>((_DWORD *)this + 9);
  NiShaderFactory::~NiShaderFactory(this);
}
