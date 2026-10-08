void __thiscall sub_757350(int *this, unsigned int *a2)
{
  sub_75E920((NiRenderer *)this, a2); /*0x75735a*/
  sub_709430((char *)this + 0x30, (signed int)a2); /*0x757365*/
  *(this + 0xC) = *(this + 0xC); /*0x75736c*/
  *(this + 0xD) = *(this + 0xD); /*0x757371*/
  *(this + 0xE) = *(this + 0xE); /*0x757377*/
  *(this + 0xF) = *(this + 0xC); /*0x75737f*/
  *(this + 0x10) = *(this + 0xD); /*0x757384*/
  *(this + 0x11) = *(this + 0xE); /*0x75738a*/
  Vector3_NormalizeInPlace((float *)this + 0xF); /*0x75738d*/
}
