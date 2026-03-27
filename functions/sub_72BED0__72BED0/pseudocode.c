char __thiscall sub_72BED0(NiRenderTargetGroup *this, int a2)
{
  char result; // al
  Ni2DBuffer *v4; // ecx
  UInt32 m_uiRefCount; // ebp
  UInt32 i; // esi
  int v7; // ecx

  result = sub_700650(this, a2);
  if ( result )
  {
    (*((void (__thiscall **)(Ni2DBuffer *, int))this->members.RenderTargets[0]->__vftable + 9))(
      this->members.RenderTargets[0],
      a2);
    v4 = this->members.RenderTargets[1];
    if ( v4 )
      (*((void (__thiscall **)(Ni2DBuffer *, int))v4->__vftable + 9))(v4, a2);
    (*((void (__thiscall **)(Ni2DBuffer *, int))this->members.RenderTargets[2]->__vftable + 9))(
      this->members.RenderTargets[2],
      a2);
    m_uiRefCount = this->members.RenderTargets[0][3].members.super.m_uiRefCount;
    for ( i = 0; i < m_uiRefCount; ++i )
    {
      v7 = *((_DWORD *)&this->members.RenderTargets[3]->__vftable + i);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v7 + 0x24))(v7, a2);
    }
    return 1;
  }
  return result;
}
