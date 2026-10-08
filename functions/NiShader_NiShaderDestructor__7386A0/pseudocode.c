unsigned int *__thiscall NiShader::NiShaderDestructor(unsigned int *this, char a2)
{
  unsigned int v4; // [esp-4h] [ebp-8h]

  v4 = *(this + 2); /*0x7386a6*/
  *this = (unsigned int)&NiShader::`vftable'; /*0x7386a7*/
  FormHeapFree(v4); /*0x7386ad*/
  *this = (unsigned int)&NiRefObject::`vftable'; /*0x7386ba*/
  InterlockedDecrement(&MEMORY[0xB3FD64]); /*0x7386c0*/
  if ( (a2 & 1) != 0 ) /*0x7386cb*/
    FormHeapFree((unsigned int)this); /*0x7386ce*/
  return this; /*0x7386d8*/
}
