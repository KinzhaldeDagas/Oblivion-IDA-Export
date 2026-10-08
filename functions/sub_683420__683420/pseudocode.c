int __thiscall sub_683420(NiTMap_TESCELL *this)
{
  int *v2; // edi

  sub_49F470((struct _RTL_CRITICAL_SECTION *)&qword_B3BB2C[0x135]); /*0x683428*/
  if ( *((_DWORD *)this + 0x10) || (sub_6829C0(this), *((_DWORD *)this + 0x10)) ) /*0x68343a*/
  {
    sub_498EE0(1u, 0); /*0x683444*/
    if ( !sub_42FC20((LONG *)this, 0) ) /*0x683450*/
    {
      v2 = *((int **)this + 0x10); /*0x68345a*/
      *((_DWORD *)this + 0x10) = 0; /*0x68345d*/
      (*((void (__thiscall **)(NiTMap_TESCELL *))this->vtbl + 2))(this); /*0x683467*/
      this->m_buckets = 0; /*0x68346c*/
      sub_682950(this, v2); /*0x683473*/
      sub_6829C0(this); /*0x68347a*/
    }
  }
  return j_NiLeaveCriticalSection_0((LPCRITICAL_SECTION)&qword_B3BB2C[0x135]); /*0x683485*/
}
