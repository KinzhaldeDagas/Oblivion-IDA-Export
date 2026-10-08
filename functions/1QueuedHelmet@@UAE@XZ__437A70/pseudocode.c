void __thiscall QueuedHelmet::~QueuedHelmet(QueuedHelmet *this)
{
  int v2; // esi
  int v3; // esi
  int v4; // esi

  v2 = *((_DWORD *)this + 0xB); /*0x437a9a*/
  if ( v2 ) /*0x437aad*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) ) /*0x437ab3*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x437ac5*/
  }
  v3 = *((_DWORD *)this + 0xA); /*0x437ac7*/
  if ( v3 ) /*0x437ad1*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) ) /*0x437ad7*/
      (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x437ae9*/
  }
  v4 = *((_DWORD *)this + 9); /*0x437aeb*/
  if ( v4 ) /*0x437af5*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v4 + 8)) ) /*0x437afb*/
      (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x437b0d*/
  }
  QueuedMagicItem::~QueuedMagicItem(this); /*0x437b19*/
}
