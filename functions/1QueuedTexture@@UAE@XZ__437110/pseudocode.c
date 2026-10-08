// QueuedTexture destructor: releases loaded resource at +0x28, frees copied path at +0x20, then chains to queued base.
void __thiscall QueuedTexture_dtor(QueuedTexture *this)
{
  int v2; // esi
  unsigned int v3; // [esp-4h] [ebp-20h]

  v2 = *((_DWORD *)this + 0xA); /*0x437139*/
  if ( v2 ) /*0x437146*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) ) /*0x43714c*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x437162*/
  }
  v3 = *((_DWORD *)this + 8); /*0x437167*/
  *(_DWORD *)this = &QueuedFileEntry::`vftable'; /*0x437170*/
  FormHeapFree(v3); /*0x437176*/
  QueuedMagicItem::~QueuedMagicItem(this); /*0x437180*/
}
