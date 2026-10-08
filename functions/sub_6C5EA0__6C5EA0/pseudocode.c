void __thiscall sub_6C5EA0(unsigned int *this)
{
  unsigned int v2; // edi
  void *v3; // ebx

  v2 = 2 * *(this + 3); /*0x6c5ea8*/
  v3 = (void *)FormHeapAlloc(v2); /*0x6c5eb1*/
  _memset((int)v3, 0, v2); /*0x6c5eb6*/
  memcpy(v3, (const void *)*(this + 2), *(this + 3)); /*0x6c5ec4*/
  FormHeapFree(*(this + 2)); /*0x6c5ecd*/
  *(this + 3) = v2; /*0x6c5ed5*/
  *(this + 2) = (unsigned int)v3; /*0x6c5ed9*/
}
