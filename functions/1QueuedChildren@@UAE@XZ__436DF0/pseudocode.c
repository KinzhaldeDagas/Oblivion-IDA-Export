void __thiscall QueuedChildren::~QueuedChildren(QueuedChildren *this)
{
  char *v2; // esi

  *(_DWORD *)this = &QueuedChildren::`vftable'; /*0x436e19*/
  sub_435C20(this); /*0x436e27*/
  *(_DWORD *)this = &NiTArray<NiPointer<QueuedFile>>::`vftable'; /*0x436e2c*/
  v2 = *((char **)this + 1); /*0x436e32*/
  if ( v2 ) /*0x436e3f*/
  {
    _LN21(v2, 4u, *((_DWORD *)v2 + 0xFFFFFFFF), (void (__thiscall *)(void *))sub_4BDDC0); /*0x436e50*/
    FormHeapFree((unsigned int)(v2 + 0xFFFFFFFC)); /*0x436e56*/
  }
}
