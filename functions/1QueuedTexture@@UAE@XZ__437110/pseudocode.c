void __thiscall QueuedTexture::~QueuedTexture(QueuedTexture *this)
{
  int v2; // esi
  unsigned int v3; // [esp-4h] [ebp-20h]

  v2 = *((_DWORD *)this + 0xA);
  if ( v2 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) )
      (**(void (__thiscall ***)(int, int))v2)(v2, 1);
  }
  v3 = *((_DWORD *)this + 8);
  *(_DWORD *)this = &QueuedFileEntry::`vftable';
  FormHeapFree(v3);
  QueuedMagicItem::~QueuedMagicItem(this);
}
