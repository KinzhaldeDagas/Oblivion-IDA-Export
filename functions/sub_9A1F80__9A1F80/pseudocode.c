NiSurfaceData *__thiscall sub_9A1F80(NiRenderTargetGroup *this, int index)
{
  Ni2DBuffer *v2; // eax
  NiDX92DBufferData *data; // ecx

  v2 = this->members.RenderTargets[index]; /*0x9a1f84*/
  if ( v2 && (data = v2->members.data) != 0 ) /*0x9a1f91*/
    return data->__vftable->GetSurfaceData(data); /*0x9a1f98*/
  else
    return 0; /*0x9a1f9d*/
}
