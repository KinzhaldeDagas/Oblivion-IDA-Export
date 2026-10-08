NiD3DShaderProgramCreatorHLSL *__thiscall NiD3DShaderProgramCreatorHLSL::`scalar deleting destructor'(
        NiD3DShaderProgramCreatorHLSL *this,
        char a2)
{
  *(_DWORD *)this = &NiD3DShaderProgramCreator::`vftable'; /*0x77bd38*/
  if ( (a2 & 1) != 0 ) /*0x77bd3e*/
    FormHeapFree((unsigned int)this); /*0x77bd41*/
  return this; /*0x77bd4b*/
}
