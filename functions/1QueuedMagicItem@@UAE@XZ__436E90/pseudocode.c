void __thiscall QueuedMagicItem::~QueuedMagicItem(QueuedMagicItem *this)
{
  void (__thiscall ***v2)(_DWORD, int); // ecx
  int v3; // esi

  *(_DWORD *)this = &QueuedFile::`vftable'; /*0x436eba*/
  v2 = *((void (__thiscall ****)(_DWORD, int))this + 7); /*0x436ec0*/
  if ( v2 ) /*0x436ecd*/
    (**v2)(v2, 1); /*0x436ed5*/
  v3 = *((_DWORD *)this + 6); /*0x436ed7*/
  if ( v3 ) /*0x436ee7*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v3 + 8)) ) /*0x436eed*/
      (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x436eff*/
  }
  *(_DWORD *)this = &BSTask<__int64>::`vftable'; /*0x436f06*/
  InterlockedDecrement(&MEMORY[0xB33A20]); /*0x436f0c*/
}
