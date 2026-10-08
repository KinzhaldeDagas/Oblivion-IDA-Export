NiD3DPass *__thiscall NiD3DPass_Destructor_(NiD3DPass *this, char a2)
{
  NiD3DPass *v3; // esi
  int i; // edi

  if ( (a2 & 2) != 0 ) /*0x760468*/
  {
    v3 = this + *((_DWORD *)this + 0xFFFFFFFF); /*0x760478*/
    for ( i = *((_DWORD *)this + 0xFFFFFFFF) - 1; i >= 0; --i ) /*0x76047d*/
    {
      v3 += 0xFFFFFFFF; /*0x760480*/
      sub_760240(v3); /*0x760485*/
    }
    if ( (a2 & 1) != 0 ) /*0x760494*/
      FormHeapFree((unsigned int)this + 0xFFFFFFFC); /*0x760497*/
    return (NiD3DPass *)((char *)this + 0xFFFFFFFC); /*0x7604a1*/
  }
  else
  {
    sub_760240(this); /*0x7604a8*/
    if ( (a2 & 1) != 0 ) /*0x7604b2*/
      FormHeapFree((unsigned int)this); /*0x7604b5*/
    return this; /*0x7604bd*/
  }
}
