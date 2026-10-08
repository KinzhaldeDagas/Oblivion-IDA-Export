void __thiscall NiD3DShaderFactory::~NiD3DShaderFactory(NiD3DShaderFactory *this)
{
  _DWORD *v2; // ecx
  void (__thiscall ***v3)(_DWORD, int); // ecx
  void (__thiscall ***v4)(_DWORD, int); // ecx
  unsigned int v5; // edx
  unsigned int v6; // eax
  _DWORD *v7; // ecx
  MEF_U32PointerMapEntry32 *v8; // eax
  void *valueOut; // [esp+8h] [ebp-Ch] BYREF
  MEF_U32PointerMapEntry32 *position; // [esp+Ch] [ebp-8h] BYREF
  unsigned int keyOut; // [esp+10h] [ebp-4h] BYREF

  v2 = *((_DWORD **)this + 6); /*0x77d096*/
  *(_DWORD *)this = &NiD3DShaderFactory::`vftable'; /*0x77d09a*/
  NiTMap_Clear(v2); /*0x77d0a0*/
  sub_77CEC0((unsigned int **)this); /*0x77d0a7*/
  v3 = *((void (__thiscall ****)(_DWORD, int))this + 6); /*0x77d0ac*/
  if ( v3 ) /*0x77d0b1*/
    (**v3)(v3, 1); /*0x77d0b9*/
  v4 = *((void (__thiscall ****)(_DWORD, int))this + 8); /*0x77d0bb*/
  if ( v4 ) /*0x77d0c0*/
    (**v4)(v4, 1); /*0x77d0c8*/
  v5 = *((_DWORD *)this + 0xA); /*0x77d0ca*/
  v6 = 0; /*0x77d0d0*/
  if ( v5 ) /*0x77d0d5*/
  {
    v7 = *((_DWORD **)this + 0xB); /*0x77d0da*/
    while ( !*v7 ) /*0x77d0e3*/
    {
      ++v6; /*0x77d0e5*/
      ++v7; /*0x77d0e8*/
      if ( v6 >= v5 ) /*0x77d0ed*/
        goto LABEL_9; /*0x77d0ed*/
    }
    v8 = *(MEF_U32PointerMapEntry32 **)(*((_DWORD *)this + 0xB) + 4 * v6); /*0x77d153*/
  }
  else
  {
LABEL_9:
    v8 = 0; /*0x77d0ef*/
  }
  position = v8; /*0x77d0f3*/
  while ( position ) /*0x77d0f8*/
  {
    valueOut = 0; /*0x77d111*/
    NiTMap_U32Pointer_GetNextEntry((MEF_U32PointerMapLayout32 *)((char *)this + 0x24), &position, &keyOut, &valueOut); /*0x77d119*/
    if ( valueOut ) /*0x77d123*/
      sub_77CB50(keyOut); /*0x77d12a*/
  }
  *((_DWORD *)this + 5) = 0; /*0x77d13b*/
  NiTStringMap<NiD3DGlobalConstantEntry *>::~NiTStringMap<NiD3DGlobalConstantEntry *>((_DWORD *)this + 9); /*0x77d142*/
  NiShaderFactory::~NiShaderFactory(this); /*0x77d14e*/
}
