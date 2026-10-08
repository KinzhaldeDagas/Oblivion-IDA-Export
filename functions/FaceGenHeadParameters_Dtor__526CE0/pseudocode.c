// Destroys FaceGenRenderState: releases texture-override smart pointers, destroys the four pointer arrays, then destroys the four embedded FaceGen coefficient matrices.
void __thiscall FaceGenRenderState_Destruct(FaceGenRenderState *this)
{
  char *data; // eax
  unsigned int v3; // edi
  void **v4; // [esp-Ch] [ebp-28h]
  void **v5; // [esp-8h] [ebp-24h]
  void **v6; // [esp-4h] [ebp-20h]

  data = (char *)this->textureOverrides.data; /*0x526d09*/
  this->textureOverrides.vtable = &NiTArray<NiPointer<NiTexture>>::`vftable'; /*0x526d19*/
  if ( data ) /*0x526d23*/
  {
    v3 = (unsigned int)(data + 0xFFFFFFFC); /*0x526d28*/
    _LN21(data, 4u, *((_DWORD *)data + 0xFFFFFFFF), (void (__thiscall *)(void *))NiPointerSlot_Release); /*0x526d34*/
    FormHeapFree(v3); /*0x526d3a*/
  }
  v6 = this->nodeNames.data; /*0x526d48*/
  this->nodeNames.vtable = &NiTArray<char const *>::`vftable'; /*0x526d49*/
  FormHeapFree((unsigned int)v6); /*0x526d53*/
  v5 = this->headTextures.data; /*0x526d5e*/
  this->headTextures.vtable = &NiTArray<TESTexture *>::`vftable'; /*0x526d5f*/
  FormHeapFree((unsigned int)v5); /*0x526d69*/
  v4 = this->headModels.data; /*0x526d71*/
  this->headModels.vtable = &NiTArray<TESModel *>::`vftable'; /*0x526d72*/
  FormHeapFree((unsigned int)v4); /*0x526d79*/
  _LN21((char *)this, 0x18u, 4, (void (__thiscall *)(void *))FaceGenMatrix_Destruct); /*0x526d93*/
}
