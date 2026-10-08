void *__userpurge sub_9A23F0@<eax>(int this@<ecx>, size_t Size, void *Src, void *a4, char a5)
{
  void *v6; // eax
  unsigned int v8; // [esp-4h] [ebp-Ch]

  *(_QWORD *)(this + 0x28) = Size; /*0x9a2401*/
  if ( (_BYTE)a4 ) /*0x9a2407*/
  {
    v8 = *(_DWORD *)(this + 0x30); /*0x9a240c*/
    *(_BYTE *)(this + 0x34) = 1; /*0x9a240d*/
    FormHeapFree(v8); /*0x9a2411*/
    v6 = (void *)FormHeapAlloc(Size); /*0x9a2417*/
    *(_DWORD *)(this + 0x30) = v6; /*0x9a2423*/
    return memcpy(v6, Src, Size); /*0x9a2426*/
  }
  else
  {
    *(_BYTE *)(this + 0x34) = 0; /*0x9a2438*/
    *(_DWORD *)(this + 0x30) = Src; /*0x9a243c*/
    return Src; /*0x9a2433*/
  }
}
