int __thiscall sub_8CAC40(const void ***this, int a2)
{
  const void **v2; // ecx
  int result; // eax

  v2 = *(this + 0xFFFFFFF0); /*0x8cac40*/
  if ( v2 ) /*0x8cac45*/
    return sub_8CA450(v2, a2, (int)unk_BA8464, (int)"Entities"); /*0x8cac56*/
  return result; /*0x8cac5b*/
}
