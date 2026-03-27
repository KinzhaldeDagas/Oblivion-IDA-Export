void __usercall std::locale::_Locimp::~_Locimp(std::locale::_Locimp *this@<ecx>, int a2@<ebx>)
{
  rsize_t v3; // [esp-4h] [ebp-24h]

  *(_DWORD *)this = &std::locale::_Locimp::`vftable';
  std::locale::_Locimp::_Locimp_dtor(this);
  LODWORD(v3) = 0;
  sub_413570((_DWORD *)this + 6, a2, 1, v3);
  *(_DWORD *)this = &std::locale::facet::`vftable';
}
