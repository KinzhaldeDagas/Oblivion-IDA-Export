IOTask *__thiscall sub_437350(IOTask *this, int arg0, unsigned __int8 a2, int a4, char a5, char a6, char a7)
{
  const char *v8; // eax
  IOTask *result; // eax

  sub_436500(this, a2); /*0x43737e*/
  *((_DWORD *)this + 6) = 0; /*0x437385*/
  *((_DWORD *)this + 7) = 0; /*0x437388*/
  *((_DWORD *)this + 8) = 0; /*0x43738b*/
  *((_DWORD *)this + 9) = 0; /*0x43738e*/
  this->vtbl = &QueuedModel::`vftable'; /*0x437391*/
  *((_DWORD *)this + 0xA) = 0; /*0x43739b*/
  *((_DWORD *)this + 0xC) = a4; /*0x4373a6*/
  *((_DWORD *)this + 0xB) = arg0; /*0x4373a9*/
  *((_BYTE *)this + 0x34) = 0; /*0x4373ac*/
  v8 = (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)arg0 + 0x14))(arg0); /*0x4373b9*/
  sub_434600(this, v8); /*0x4373be*/
  sub_434CB0((char **)this, 0, 1); /*0x4373c8*/
  if ( a5 ) /*0x4373d1*/
    *((_BYTE *)this + 0x34) |= 4u; /*0x4373d3*/
  else
    *((_BYTE *)this + 0x34) &= ~4u; /*0x4373d9*/
  if ( a6 ) /*0x4373e1*/
    *((_BYTE *)this + 0x34) |= 1u; /*0x4373e3*/
  else
    *((_BYTE *)this + 0x34) &= ~1u; /*0x4373e9*/
  result = this; /*0x4373f1*/
  if ( a7 ) /*0x4373f3*/
    *((_BYTE *)this + 0x34) |= 2u; /*0x4373f5*/
  else
    *((_BYTE *)this + 0x34) &= ~2u; /*0x43740d*/
  return result; /*0x4373f9*/
}
