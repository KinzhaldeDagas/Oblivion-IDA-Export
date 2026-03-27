void __thiscall QueuedDistantLOD::~QueuedDistantLOD(QueuedDistantLOD *this)
{
  unsigned int v2; // ebx
  int v3; // edi
  int v4; // edi
  int v5; // eax
  unsigned int v6; // [esp-4h] [ebp-28h]

  *(_DWORD *)this = &QueuedDistantLOD::`vftable';
  v2 = *((_DWORD *)this + 0xE);
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 + 0x1C);
    if ( v3 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) )
        (**(void (__thiscall ***)(int, int))v3)(v3, 1);
    }
    FormHeapFree(v2);
  }
  v4 = *((_DWORD *)this + 0xF);
  if ( v4 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) )
      (**(void (__thiscall ***)(int, int))v4)(v4, 1);
  }
  v5 = *((_DWORD *)this + 0xA);
  if ( v5 )
    InterlockedDecrement((volatile LONG *)(v5 + 4));
  v6 = *((_DWORD *)this + 8);
  *(_DWORD *)this = &QueuedFileEntry::`vftable';
  FormHeapFree(v6);
  QueuedMagicItem::~QueuedMagicItem(this);
}
