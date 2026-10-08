IOTask *__thiscall sub_6428F0(IOTask *this, Actor *a2, Actor *a3, const char *a4)
{
  sub_436FA0(this, 0); /*0x64291a*/
  *((_DWORD *)this + 0xC) = a2; /*0x64292b*/
  this->vtbl = &LipTask::`vftable'; /*0x642939*/
  *((_DWORD *)this + 0xA) = a3; /*0x64293f*/
  *((_DWORD *)this + 0xB) = 0; /*0x642942*/
  sub_434600(this, a4); /*0x642949*/
  sub_434CB0((char **)this, 4, 0); /*0x642954*/
  return this; /*0x64295b*/
}
