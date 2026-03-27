void __thiscall QueuedMagicItem::~QueuedMagicItem(QueuedMagicItem *this)
{
  void (__thiscall ***v2)(_DWORD, int); // ecx
  int v3; // esi

  *(_DWORD *)this = &QueuedFile::`vftable';
  v2 = *((void (__thiscall ****)(_DWORD, int))this + 7);
  if ( v2 )
    (**v2)(v2, 1);
  v3 = *((_DWORD *)this + 6);
  if ( v3 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v3 + 8)) )
      (**(void (__thiscall ***)(int, int))v3)(v3, 1);
  }
  *(_DWORD *)this = &BSTask<__int64>::`vftable';
  InterlockedDecrement(&Addend);
}
