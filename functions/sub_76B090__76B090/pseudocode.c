// Oblivion-authoritative resize/recreate wrapper. Saves the current 0x38-byte presentation block, substitutes requested width/height, and runs full device recreation. Returns 2 for requested parameters, 1 after successfully restoring originals, or 0 if both attempts fail.
int __thiscall NiDX9Renderer_Recreate(NiDX9Renderer *this, unsigned int width, unsigned int height)
{
  NiDX92DBufferData *data; // esi
  NiDX92DBufferData *v5; // eax
  NiRTTI *v6; // eax
  char v7; // al
  unsigned int *v8; // esi
  void *v9; // ecx
  void *v10; // ecx
  _BYTE Dst[56]; // [esp+8h] [ebp-38h] BYREF

  data = this->member.defaultRTGroup->vtbl->GetBuffer(this->member.defaultRTGroup, 0)->members.data; /*0x76b0a6*/
  if ( data )
  {
    v6 = (NiRTTI *)data->__vftable->GetRTTI(data); /*0x76b0b8*/
    if ( v6 ) /*0x76b0bc*/
    {
      while ( v6 != &stru_B4265C ) /*0x76b0c5*/
      {
        v6 = v6->parent; /*0x76b0c7*/
        if ( !v6 ) /*0x76b0cc*/
          goto LABEL_6; /*0x76b0cc*/
      }
      v7 = 1; /*0x76b13d*/
    }
    else
    {
LABEL_6:
      v7 = 0; /*0x76b0ce*/
    }
    v5 = v7 != 0 ? data : 0;
  }
  else
  {
    v5 = 0; /*0x76b0ad*/
  }
  v8 = (unsigned int *)&v5[1]; /*0x76b0d6*/
  memcpy(Dst, &v5[1], sizeof(Dst)); /*0x76b0e1*/
  *v8 = width; /*0x76b0ee*/
  v8[1] = height; /*0x76b0f5*/
  if ( NiDX9Renderer_RecreateDevice(this) ) /*0x76b0f8*/
    return 2; /*0x76b14f*/
  Shared_NoOpVirtual_60D0A0(v9); /*0x76b106*/
  memcpy(v8, Dst, 0x38u); /*0x76b113*/
  if ( NiDX9Renderer_RecreateDevice(this) ) /*0x76b11d*/
    return 1; /*0x76b142*/
  Shared_NoOpVirtual_60D0A0(v10); /*0x76b12b*/
  return 0; /*0x76b133*/
}
