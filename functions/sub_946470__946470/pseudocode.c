int __thiscall sub_946470(void **this)
{
  int v2; // ebx
  int i; // edi
  int v4; // ecx
  int result; // eax
  int v6; // ecx

  v2 = (int)*(this + 0xB); /*0x946474*/
  *this = &off_AA2950; /*0x946479*/
  *(this + 2) = &off_AA2938; /*0x94647f*/
  if ( v2 ) /*0x946486*/
  {
    for ( i = 0; i < *(_DWORD *)(v2 + 0x28); ++i ) /*0x946490*/
      sub_946340(this, *(_DWORD *)(*(_DWORD *)(v2 + 0x24) + 8 * i)); /*0x94649b*/
    sub_8CA250((int *)*(this + 0xB), (int)sub_9463B0); /*0x9464b0*/
    v4 = (int)*(this + 0xB); /*0x9464b5*/
    if ( *(_WORD *)(v4 + 4) ) /*0x9464b8*/
    {
      if ( !--*(_WORD *)(v4 + 6) ) /*0x9464c4*/
        (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x9464cf*/
    }
  }
  result = (int)*(this + 0xA); /*0x9464d1*/
  if ( result >= 0 ) /*0x9464d6*/
  {
    v6 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x9464e8*/
    if ( !v6 ) /*0x9464f0*/
      v6 = unk_BA7D9C; /*0x9464f2*/
    result = sub_8A75D0(v6, *(this + 8), 8 * result, 0x14); /*0x946507*/
  }
  *(this + 2) = &off_A9D1C0; /*0x94650c*/
  *this = &hkBaseObject::`vftable'; /*0x946513*/
  return result; /*0x946519*/
}
