int *__thiscall sub_77AC40(int *this, char a2)
{
  int v3; // eax

  v3 = *(this + 2); /*0x77ac43*/
  *this = (int)&NiDX9TextureManager::`vftable'; /*0x77ac46*/
  (*(void (__stdcall **)(int))(*(_DWORD *)v3 + 8))(v3); /*0x77ac52*/
  *(this + 2) = 0; /*0x77ac59*/
  *this = (int)&NiRefObject::`vftable'; /*0x77ac60*/
  InterlockedDecrement((volatile LONG *)&MEMORY[0xB3F9B0][0xED]); /*0x77ac66*/
  if ( (a2 & 1) != 0 ) /*0x77ac71*/
    FormHeapFree((unsigned int)this); /*0x77ac74*/
  return this; /*0x77ac7e*/
}
