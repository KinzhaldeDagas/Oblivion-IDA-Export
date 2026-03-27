void __thiscall sub_6C5EA0(unsigned int *this)
{
  unsigned int v2; // edi
  void *v3; // ebx
  size_t v4; // [esp-14h] [ebp-20h]

  v2 = 2 * *(this + 3);
  v3 = (void *)FormHeapAlloc(v2);
  _memset(v3, 0, v2);
  LODWORD(v4) = *(this + 3);
  memcpy(v3, (const void *)*(this + 2), v4);
  FormHeapFree(*(this + 2));
  *(this + 3) = v2;
  *(this + 2) = (unsigned int)v3;
}
