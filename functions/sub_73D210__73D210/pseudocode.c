char *__thiscall sub_73D210(char **this, int a2, _DWORD **a3)
{
  char *result; // eax

  sub_725430(this, (float *)a2, a3); /*0x73d21e*/
  *(_DWORD *)(a2 + 0x114) = *(this + 0x45); /*0x73d229*/
  *(_DWORD *)(a2 + 0x118) = *(this + 0x46); /*0x73d235*/
  result = *(this + 0x47); /*0x73d23b*/
  *(_DWORD *)(a2 + 0x11C) = result; /*0x73d241*/
  *(float *)(a2 + 0x120) = *((float *)this + 0x48); /*0x73d24d*/
  *(float *)(a2 + 0x124) = *((float *)this + 0x49); /*0x73d259*/
  return result; /*0x73d25f*/
}
