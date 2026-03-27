void __thiscall QueuedChildren::~QueuedChildren(QueuedChildren *this)
{
  int *v2; // esi

  *(_DWORD *)this = &QueuedChildren::`vftable';
  sub_435C20(this);
  *(_DWORD *)this = &NiTArray<NiPointer<QueuedFile>>::`vftable';
  v2 = *((int **)this + 1);
  if ( v2 )
  {
    _LN21(v2, 4u, v2[0xFFFFFFFF], sub_4BDDC0);
    FormHeapFree((unsigned int)(v2 + 0xFFFFFFFF));
  }
}
