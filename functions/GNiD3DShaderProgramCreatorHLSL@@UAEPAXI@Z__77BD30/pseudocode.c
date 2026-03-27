NiD3DShaderProgramCreatorHLSL *__thiscall NiD3DShaderProgramCreatorHLSL::`scalar deleting destructor'(
        NiD3DShaderProgramCreatorHLSL *this,
        char a2)
{
  *(_DWORD *)this = &NiD3DShaderProgramCreator::`vftable';
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
