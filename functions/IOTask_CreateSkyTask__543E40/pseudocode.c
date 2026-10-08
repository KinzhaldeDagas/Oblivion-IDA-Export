IOTask *__thiscall IOTask::CreateSkyTask(IOTask *this, UInt32 a2, const char *a3, void *a4, char a5)
{
  int v6; // eax

  sub_436FA0(this, 3u); /*0x543e6a*/
  this->vtbl = &SkyTask::`vftable'; /*0x543e75*/
  *((_DWORD *)this + 0xA) = a2; /*0x543e83*/
  if ( a2 ) /*0x543e86*/
    InterlockedIncrement((volatile LONG *)(a2 + 4)); /*0x543e8c*/
  *((_DWORD *)this + 0xB) = 0; /*0x543e92*/
  *((_BYTE *)this + 0x34) = a5; /*0x543ea9*/
  sub_434600(this, a3); /*0x543eac*/
  sub_434CB0((char **)this, 1, 0); /*0x543eb7*/
  v6 = *((_DWORD *)this + 0xA); /*0x543ebc*/
  *((_DWORD *)this + 0xC) = a4; /*0x543ec5*/
  if ( v6 ) /*0x543ec8*/
  {
    if ( *((_BYTE *)this + 0x34) ) /*0x543eca*/
      *(_WORD *)(v6 + 0x18) |= 1u; /*0x543ed0*/
  }
  return this; /*0x543ed7*/
}
