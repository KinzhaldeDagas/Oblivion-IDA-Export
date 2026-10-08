char __thiscall sub_780A20(_BYTE *this)
{
  char result; // al

  *(_DWORD *)this = 0; /*0x780a23*/
  result = sub_7809C0(this, unk_B3FAA4); /*0x780a2f*/
  *(this + 4) = 1; /*0x780a34*/
  return result; /*0x780a38*/
}
