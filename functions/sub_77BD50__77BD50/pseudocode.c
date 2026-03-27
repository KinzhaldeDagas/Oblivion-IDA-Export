unsigned int *__thiscall sub_77BD50(unsigned int *this, char a2)
{
  unsigned int v4; // [esp-4h] [ebp-8h]

  v4 = *(this + 2);
  *this = (unsigned int)&NiD3DShaderProgramCreatorAsm::`vftable';
  FormHeapFree(v4);
  *this = (unsigned int)&NiD3DShaderProgramCreator::`vftable';
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
