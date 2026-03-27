void __thiscall NiCullingProcess_Culling_(BSCullingProcess *this, NiAVObject *a2)
{
  unsigned int v3; // edi
  NiFrustumPlanes *p_Planes; // ebx
  signed int v5; // eax
  UInt32 ActivePlanes; // [esp+4h] [ebp-4h]

  ActivePlanes = this->super.Planes.ActivePlanes;
  if ( ActivePlanes )
  {
    v3 = 0;
    p_Planes = &this->super.Planes;
    do
    {
      if ( ((1 << v3) & this->super.Planes.ActivePlanes) != 0 )
      {
        v5 = sub_47DA70(&a2->members.m_kWorldBound, p_Planes);
        if ( v5 == 2 )
          break;
        if ( v5 == 1 )
          this->super.Planes.ActivePlanes &= ~(1 << v3);
      }
      ++v3;
      p_Planes = (NiFrustumPlanes *)((char *)p_Planes + 0x10);
    }
    while ( v3 < 6 );
    if ( v3 == 6 )
      a2->vtbl->OnVisible(a2, &this->super);
    this->super.Planes.ActivePlanes = ActivePlanes;
  }
  else
  {
    a2->vtbl->OnVisible(a2, &this->super);
  }
}
