int __thiscall sub_497E10(NiDX9Renderer *this)
{
  NiDX92DBufferData *data; // esi
  NiRTTI *v3; // eax

  data = this->member.currentscreenRTGroup->vtbl->GetBuffer(this->member.currentscreenRTGroup, 0)->members.data; /*0x497e20*/
  if ( !data ) /*0x497e25*/
    return 0x14; /*0x497e29*/
  v3 = (NiRTTI *)data->__vftable->GetRTTI(data); /*0x497e37*/
  if ( !v3 ) /*0x497e3b*/
    return 0x14; /*0x497e4e*/
  while ( v3 != &stru_B4265C ) /*0x497e45*/
  {
    v3 = v3->parent; /*0x497e47*/
    if ( !v3 ) /*0x497e4c*/
      return 0x14; /*0x497e4c*/
  }
  return (int)&data[1]; /*0x497e2e*/
}
