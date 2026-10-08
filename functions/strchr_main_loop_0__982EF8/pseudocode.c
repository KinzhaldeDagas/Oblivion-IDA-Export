int __usercall strchr_::main_loop_0@<eax>(_DWORD *a1@<edx>, int a2@<ebx>)
{
  int v2; // ecx
  int v3; // esi
  int v4; // eax
  unsigned int v5; // ecx
  unsigned int v6; // eax

  while ( 1 ) /*0x982f03*/
  {
    v2 = a2 ^ *a1; /*0x982f03*/
    v3 = *a1 + 0x7EFEFEFF; /*0x982f05*/
    v4 = v3 ^ ~*a1++; /*0x982f11*/
    v5 = ((v2 + 0x7EFEFEFF) ^ ~v2) & 0x81010100; /*0x982f16*/
    if ( v5 ) /*0x982f1c*/
      break; /*0x982f1c*/
    v6 = v4 & 0x81010100; /*0x982f1e*/
    if ( v6 && ((v6 & 0x1010100) != 0 || (v3 & 0x80000000) == 0) ) /*0x982f32*/
      return strchr_::retnull(0, (int)a1); /*0x982f33*/
  }
  return strchr_::chr_is_found(a1, v5, a2);
}
