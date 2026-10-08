unsigned int *__thiscall NiD3DShaderInterface::Destructor(unsigned int *this, char a2)
{
  int v3; // eax

  v3 = *(this + 4); /*0x7791c3*/
  *this = (unsigned int)&NiD3DShaderInterface::`vftable'; /*0x7791c8*/
  *(this + 5) = 0; /*0x7791ce*/
  *(this + 6) = 0; /*0x7791d5*/
  if ( v3 ) /*0x7791dc*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v3 + 8))(v3); /*0x7791e4*/
  *(this + 4) = 0; /*0x7791e8*/
  sub_738600(this); /*0x7791ef*/
  if ( (a2 & 1) != 0 ) /*0x7791f9*/
    FormHeapFree((unsigned int)this); /*0x7791fc*/
  return this; /*0x779206*/
}
