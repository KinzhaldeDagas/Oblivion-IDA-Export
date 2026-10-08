// NiNode rigid selected downward: controllers, conditional vfunc+74 and local bound transform, child flag bit1 invokes synchronous vfunc+68 at 70A2F4, then RET 4. No queue/dispatch in this body. Observer completion is not proof of unrelated/async worker completion.
void __thiscall sub_70A280(NiNode *this, NiProperty *applicationTime)
{
  unsigned int i; // edi
  _BYTE *v4; // ecx

  NiAVObject_UpdatePropertiesAndControllers( /*0x70a299*/
    (NiAVObject *)this,
    *(float *)&applicationTime,
    (this->members.super.m_flags & 8) != 0);
  if ( (this->members.super.m_flags & 4) != 0 ) /*0x70a2a7*/
  {
    this->vtbl->super.UpdateWorldData((NiAVObject *)this); /*0x70a2b0*/
    NiBound_TransformInto( /*0x70a2c0*/
      &this->members.super.m_kWorldBound.Center.x,
      &this->members.m_combinedBounds.Center,
      &this->members.super.m_worldTransform);
  }
  for ( i = 0; i < this->members.children.end; ++i ) /*0x70a2c7*/
  {
    v4 = *((_BYTE **)&this->members.children.data->vtbl + i); /*0x70a2d6*/
    if ( v4 ) /*0x70a2db*/
    {
      if ( (v4[0x18] & 2) != 0 ) /*0x70a2e5*/
        (*(void (__stdcall **)(NiProperty *))(*(_DWORD *)v4 + 0x68))(applicationTime); /*0x70a2f4*/
    }
  }
}
