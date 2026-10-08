void __usercall std::locale::_Locimp::~_Locimp(std::locale::_Locimp *this@<ecx>, int a2@<ebx>)
{
  rsize_t v3; // [esp-4h] [ebp-24h]

  *(_DWORD *)this = &std::locale::_Locimp::`vftable'; /*0x9809c2*/
  std::locale::_Locimp::_Locimp_dtor(this); /*0x9809d0*/
  LODWORD(v3) = 0; /*0x9809d6*/
  sub_413570((_DWORD *)this + 6, a2, 1, v3); /*0x9809dd*/
  *(_DWORD *)this = &std::locale::facet::`vftable'; /*0x9809e2*/
}
