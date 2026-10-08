void __thiscall sub_726B80(_DWORD *this, int a2)
{
  const void *v3; // ebp
  void *v4; // eax
  void *v5; // edi

  v3 = (const void *)*(this + 5); /*0x726baa*/
  v4 = (void *)FormHeapAlloc((0x1C * (unsigned __int64)(unsigned int)a2) >> 0x20 != 0 ? 0xFFFFFFFF : 0x1C * a2);
  v5 = v4; /*0x726bc5*/
  if ( v4 ) /*0x726bd8*/
    sub_401080(v4, 0x1C, a2, (void *(__thiscall *)(void *))sub_53D910); /*0x726be3*/
  else
    v5 = 0; /*0x726bea*/
  *(this + 5) = v5; /*0x726bee*/
  if ( v3 ) /*0x726bf1*/
  {
    memcpy(v5, v3, 0x1C * *(this + 4)); /*0x726c06*/
    FormHeapFree((unsigned int)v3); /*0x726c0c*/
  }
  *(this + 4) = a2; /*0x726c14*/
}
