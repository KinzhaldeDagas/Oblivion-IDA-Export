int __usercall strchr_::main_loop_0@<eax>(_DWORD *a1@<edx>, int a2@<ebx>)
{
  int v2; // ecx
  int v3; // esi
  int v4; // eax
  unsigned int v5; // eax

  while ( 1 )
  {
    v2 = a2 ^ *a1;
    v3 = *a1 + 0x7EFEFEFF;
    v4 = v3 ^ ~*a1++;
    if ( (((v2 + 0x7EFEFEFF) ^ ~v2) & 0x81010100) != 0 )
      break;
    v5 = v4 & 0x81010100;
    if ( v5 && ((v5 & 0x1010100) != 0 || (v3 & 0x80000000) == 0) )
      return strchr_::retnull();
  }
  return strchr_::chr_is_found();
}
