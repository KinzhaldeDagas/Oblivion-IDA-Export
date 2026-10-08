void __thiscall ParticleShaderProperty::~ParticleShaderProperty(ParticleShaderProperty *this)
{
  NiSourceTexture *spBaseTexture_10C; // edi
  char *items; // edi
  NiSourceTexture *v5; // edi

  this->super.vtbl = &ParticleShaderProperty::`vftable'; /*0x7e571a*/
  spBaseTexture_10C = this->spBaseTexture_10C; /*0x7e5720*/
  if ( spBaseTexture_10C ) /*0x7e5730*/
  {
    if ( !InterlockedDecrement((volatile LONG *)&spBaseTexture_10C->members) ) /*0x7e5736*/
      spBaseTexture_10C->vtbl->super.super.super.Destructor((NiRefObject *)spBaseTexture_10C, 1); /*0x7e574c*/
    this->spBaseTexture_10C = 0; /*0x7e574e*/
  }
  NiTObjectArray_ClearAndRelease(&this->TargetArray_110); /*0x7e5760*/
  FormHeapFree((unsigned int)this->particleInstanceBuffer_6C); /*0x7e5769*/
  if ( unk_B46048-- == 1 ) /*0x7e5771*/
  {
    FormHeapFree(unk_B46044); /*0x7e5781*/
    unk_B46044 = 0; /*0x7e5789*/
  }
  this->TargetArray_110.vtable = &NiTArray<NiPointer<NiAVObject>>::`vftable'; /*0x7e5793*/
  items = (char *)this->TargetArray_110.items; /*0x7e5799*/
  if ( items ) /*0x7e57a3*/
  {
    _LN21(items, 4u, *((_DWORD *)items + 0xFFFFFFFF), (void (__thiscall *)(void *))NiPointerSlot_Release); /*0x7e57b4*/
    FormHeapFree((unsigned int)(items + 0xFFFFFFFC)); /*0x7e57ba*/
  }
  v5 = this->spBaseTexture_10C; /*0x7e57c2*/
  if ( v5 ) /*0x7e57cf*/
  {
    if ( !InterlockedDecrement((volatile LONG *)&v5->members) ) /*0x7e57d5*/
      v5->vtbl->super.super.super.Destructor((NiRefObject *)v5, 1); /*0x7e57eb*/
  }
  BSShaderProperty::~BSShaderProperty(&this->super); /*0x7e57f7*/
}
