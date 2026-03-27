int __thiscall sub_497E10(NiDX9Renderer *this)
{
  NiDX92DBufferData *data; // esi
  int v3; // eax

  data = this->member.currentscreenRTGroup->vtbl->GetBuffer(this->member.currentscreenRTGroup, 0)->members.data;
  if ( !data )
    return 0x14;
  v3 = (int)data->__vftable->GetRTTI(data);
  if ( !v3 )
    return 0x14;
  while ( (_UNKNOWN *)v3 != &unk_B4265C )
  {
    v3 = *(_DWORD *)(v3 + 4);
    if ( !v3 )
      return 0x14;
  }
  return (int)&data[1];
}
