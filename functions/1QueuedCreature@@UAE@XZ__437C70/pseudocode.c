void __thiscall QueuedCreature::~QueuedCreature(QueuedCreature *this)
{
  int v2; // esi
  int v3; // esi
  int v4; // eax
  int v5; // esi

  v2 = *((_DWORD *)this + 0xC); /*0x437c9a*/
  if ( v2 ) /*0x437cad*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 8)) ) /*0x437cb3*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x437cc5*/
  }
  v3 = *((_DWORD *)this + 0xB); /*0x437cc7*/
  if ( v3 ) /*0x437cd1*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) ) /*0x437cd7*/
      (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x437ce9*/
  }
  v4 = *((_DWORD *)this + 0xA); /*0x437ceb*/
  if ( v4 ) /*0x437cf0*/
    InterlockedDecrement((volatile LONG *)(v4 + 4)); /*0x437cf6*/
  v5 = *((_DWORD *)this + 9); /*0x437cf8*/
  if ( v5 ) /*0x437d02*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v5 + 8)) ) /*0x437d08*/
      (**(void (__thiscall ***)(int, int))v5)(v5, 1); /*0x437d1a*/
  }
  QueuedMagicItem::~QueuedMagicItem(this); /*0x437d26*/
}
