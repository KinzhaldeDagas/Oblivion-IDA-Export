NiFrustumPlanes *__thiscall sub_47DCA0(NiFrustumPlanes *this)
{
  NiFrustumPlanes *v2; // esi
  int i; // edi

  v2 = this; /*0x47dca5*/
  for ( i = 5; i >= 0; --i ) /*0x47dca7*/
  {
    sub_716DB0(v2); /*0x47dcb2*/
    v2 = (NiFrustumPlanes *)((char *)v2 + 0x10); /*0x47dcb7*/
  }
  this->ActivePlanes = 0x3F; /*0x47dcc1*/
  return this; /*0x47dcbf*/
}
