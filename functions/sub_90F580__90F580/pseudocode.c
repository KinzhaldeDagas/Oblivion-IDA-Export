char *__thiscall sub_90F580(char *this, int a2, _OWORD *a3, int a4)
{
  sub_8ABC40(this, a2, a3); /*0x90f58f*/
  *(_DWORD *)this = &off_A9CAB8; /*0x90f598*/
  *((_DWORD *)this + 0x48) = 0; /*0x90f5a0*/
  *((_DWORD *)this + 0x49) = 0; /*0x90f5a6*/
  *((_DWORD *)this + 0x4A) = 0x80000000; /*0x90f5ac*/
  *((_DWORD *)this + 0xC) = a4; /*0x90f5b6*/
  return this; /*0x90f5bb*/
}
