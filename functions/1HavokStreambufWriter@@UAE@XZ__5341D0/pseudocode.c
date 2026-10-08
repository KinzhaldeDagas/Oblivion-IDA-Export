void __thiscall HavokStreambufWriter::~HavokStreambufWriter(HavokStreambufWriter *this)
{
  int v2; // edi
  char *v3; // ebp

  *(_DWORD *)this = &HavokStreambufWriter::`vftable'; /*0x5341fa*/
  if ( *((_BYTE *)this + 0xC) ) /*0x534200*/
  {
    v2 = *(_DWORD *)&MEMORY[0xB33E90][0xF00]; /*0x53420e*/
    v3 = (char *)(*(_DWORD *)&MEMORY[0xB33E90][0xF00] + 0x10); /*0x534217*/
    *(_DWORD *)(v2 + 0xC) = sub_533D30(*((_DWORD *)this + 2), v3); /*0x534221*/
    *v3 = 0; /*0x534224*/
    *(_DWORD *)(v2 + 8) = 0; /*0x534228*/
    *((_BYTE *)this + 0xC) = 0; /*0x534232*/
  }
  *(_DWORD *)this = &hkBaseObject::`vftable'; /*0x534236*/
}
