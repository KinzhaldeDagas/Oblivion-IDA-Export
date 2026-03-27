int __thiscall sub_683420(NiTMap_TESCELL *this)
{
  int *v2; // edi

  sub_49F470(&stru_B3C000);
  if ( *((_DWORD *)this + 0x10) || (sub_6829C0(this), *((_DWORD *)this + 0x10)) )
  {
    sub_498EE0(1u, 0);
    if ( !sub_42FC20((LONG *)this, 0) )
    {
      v2 = *((int **)this + 0x10);
      *((_DWORD *)this + 0x10) = 0;
      (*((void (__thiscall **)(NiTMap_TESCELL *))this->vtbl + 2))(this);
      this->m_buckets = 0;
      sub_682950(this, v2);
      sub_6829C0(this);
    }
  }
  return j_NiLeaveCriticalSection_0((LPCRITICAL_SECTION)&stru_B3C000);
}
