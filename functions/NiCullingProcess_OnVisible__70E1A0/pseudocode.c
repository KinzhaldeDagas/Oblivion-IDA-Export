const void *__thiscall NiCullingProcess::OnVisible(NiCullingProcess *this, NiGeometry *a2)
{
  const void **VisibleGeo; // esi
  const void *result; // eax
  const void *v4; // eax
  NiAccumulator *accumulator; // ecx

  VisibleGeo = (const void **)this->VisibleGeo;
  if ( VisibleGeo )
  {
    if ( this->UseAppendVirtual )
    {
      return (const void *)this->vtbl->AppendVirtual(this, a2);
    }
    else
    {
      v4 = VisibleGeo[2];
      if ( VisibleGeo[1] == v4 )
        sub_732200(VisibleGeo, (unsigned int)VisibleGeo[3] + (_DWORD)v4);
      result = *VisibleGeo;
      *((_DWORD *)*VisibleGeo + (_DWORD)VisibleGeo[1]) = a2;
      VisibleGeo[1] = (char *)VisibleGeo[1] + 1;
    }
  }
  else
  {
    accumulator = g_Renderer->member.super.accumulator;
    if ( !accumulator )
      return ((const void *(__thiscall *)(NiGeometry *, NiDX9Renderer *))a2->__vftable->Render)(a2, g_Renderer);
    result = (const void *)(*(int (__thiscall **)(NiAccumulator *, NiGeometry *))(*(_DWORD *)accumulator + 0x58))(
                             accumulator,
                             a2);
    if ( !(_BYTE)result )
      return ((const void *(__thiscall *)(NiGeometry *, NiDX9Renderer *))a2->__vftable->Render)(a2, g_Renderer);
  }
  return result;
}
