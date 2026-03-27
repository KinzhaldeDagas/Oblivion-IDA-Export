NiSurfaceData *__thiscall sub_9A1F80(NiRenderTargetGroup *this, int index)
{
  Ni2DBuffer *v2; // eax
  NiDX92DBufferData *data; // ecx

  v2 = this->members.RenderTargets[index];
  if ( v2 && (data = v2->members.data) != 0 )
    return data->__vftable->GetSurfaceData(data);
  else
    return 0;
}
