// Verified: advances elapsed time and unlinks/frees expired 0x14-byte timer nodes; does not destroy their owner objects. Fallout named analogue 0x824EA970; Fallout additionally adjusts delta during VATS playback.
void __thiscall InterfaceManager::UpdateAllTimers(OblivionInterfaceTimersView *this)
{
  OblivionInterfaceTimer *next; // ecx
  double v2; // st7
  OblivionInterfaceTimer *v3; // esi
  float v4; // [esp+0h] [ebp-4h]

  next = this->timers->next; /*0x583c37*/
  if ( next ) /*0x583c3c*/
  {
    v2 = 1.0; /*0x583c3e*/
    do /*0x583c78*/
    {
      v4 = next->elapsed + *(float *)&MEMORY[0xB33E90][0xC]; /*0x583c4a*/
      next->elapsed = v4; /*0x583c52*/
      if ( v4 / next->duration <= v2 && v4 / next->duration < dbl_A2FC68 || next->elapsed / next->duration < v2 ) /*0x583c8e*/
      {
        next = next->next; /*0x583c73*/
      }
      else
      {
        v3 = next->next; /*0x583c9f*/
        next->previous->next = v3; /*0x583ca9*/
        if ( v3 ) /*0x583cac*/
        {
          v3->previous = next->previous; /*0x583cb2*/
          FormHeapFree((unsigned int)next); /*0x583cb5*/
          v2 = 1.0; /*0x583cba*/
          next = v3; /*0x583cbf*/
        }
        else
        {
          *(_DWORD *)(MEMORY[0xB3A6E0]->unk0C0[0x1C] + 0xC) = next->previous; /*0x583cd3*/
          FormHeapFree((unsigned int)next); /*0x583cd6*/
          v2 = 1.0; /*0x583cdb*/
          next = 0; /*0x583ce0*/
        }
      }
    }
    while ( next ); /*0x583c78*/
  }
}
