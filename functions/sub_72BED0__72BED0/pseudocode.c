char __thiscall sub_72BED0(NiRenderTargetGroup *this, int a2)
{
  char result; // al
  Ni2DBuffer *v4; // ecx
  UInt32 m_uiRefCount; // ebp
  UInt32 i; // esi
  int v7; // ecx

  result = sub_700650(this, a2); /*0x72bed9*/
  if ( result ) /*0x72bee0*/
  {
    (*((void (__thiscall **)(Ni2DBuffer *, int))this->members.RenderTargets[0]->__vftable + 9))( /*0x72bef0*/
      this->members.RenderTargets[0],
      a2);
    v4 = this->members.RenderTargets[1]; /*0x72bef2*/
    if ( v4 ) /*0x72bef7*/
      (*((void (__thiscall **)(Ni2DBuffer *, int))v4->__vftable + 9))(v4, a2); /*0x72beff*/
    (*((void (__thiscall **)(Ni2DBuffer *, int))this->members.RenderTargets[2]->__vftable + 9))( /*0x72bf0c*/
      this->members.RenderTargets[2],
      a2);
    m_uiRefCount = this->members.RenderTargets[0][3].members.super.m_uiRefCount; /*0x72bf11*/
    for ( i = 0; i < m_uiRefCount; ++i ) /*0x72bf18*/
    {
      v7 = *((_DWORD *)&this->members.RenderTargets[3]->__vftable + i); /*0x72bf23*/
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v7 + 0x24))(v7, a2); /*0x72bf2c*/
    }
    return 1; /*0x72bf38*/
  }
  return result; /*0x72bee2*/
}
