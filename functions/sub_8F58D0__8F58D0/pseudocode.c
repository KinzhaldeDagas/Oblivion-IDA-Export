int __thiscall sub_8F58D0(int *this)
{
  int v2; // ecx
  int v3; // edi
  int result; // eax
  int v5; // ebx
  int v6; // ebp

  v2 = *(this + 7); /*0x8f58d3*/
  v3 = 0; /*0x8f58d7*/
  if ( v2 >= 0 ) /*0x8f58db*/
  {
    result = *(this + 8); /*0x8f58e6*/
    v5 = *(this + 4) - v2; /*0x8f58ed*/
    if ( v5 <= result ) /*0x8f58f1*/
    {
      if ( v2 > 0 ) /*0x8f5908*/
      {
        v6 = v5 % 0x200; /*0x8f591c*/
        if ( v5 % 0x200 ) /*0x8f591c*/
          v3 = 0x200 - v6; /*0x8f5924*/
        j_unknown_libname_16(v3 + *(this + 3), *(this + 3) + v2, v5); /*0x8f5930*/
        result = (v5 / 0x200 + (v6 != 0)) << 9; /*0x8f5952*/
        *(this + 7) = v3; /*0x8f5954*/
        *(this + 4) = result; /*0x8f5957*/
        *(this + 5) = result; /*0x8f595a*/
      }
    }
    else
    {
      *(this + 4) = 0; /*0x8f58f4*/
      *(this + 5) = 0; /*0x8f58f7*/
      *(this + 7) = 0xFFFFFFFF; /*0x8f58fe*/
      *(this + 8) = 0xFFFFFFFF; /*0x8f5901*/
      return 0xFFFFFFFF; /*0x8f58fa*/
    }
  }
  else
  {
    *(this + 4) = 0; /*0x8f58dd*/
    *(this + 5) = 0; /*0x8f58e0*/
  }
  return result; /*0x8f58e3*/
}
