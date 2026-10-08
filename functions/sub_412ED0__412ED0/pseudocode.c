std::exception *__thiscall sub_412ED0(std::exception *this, struct std::exception *a2)
{
  std::exception::exception(this, a2); /*0x412ed8*/
  *(_DWORD *)this = &std::bad_alloc::`vftable'; /*0x412edd*/
  return this; /*0x412ee5*/
}
