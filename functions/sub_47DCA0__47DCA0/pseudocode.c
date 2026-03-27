NiFrustumPlanes *__thiscall sub_47DCA0(NiFrustumPlanes *this)
{
  NiFrustumPlanes *v2; // esi
  int i; // edi

  v2 = this;
  for ( i = 5; i >= 0; --i )
  {
    sub_716DB0(v2);
    v2 = (NiFrustumPlanes *)((char *)v2 + 0x10);
  }
  this->ActivePlanes = 0x3F;
  return this;
}
