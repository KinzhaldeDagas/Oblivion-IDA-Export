int sub_77EAF0()
{
  int result; // eax

  if ( shaderProgramFactory )
    result = (**(int (__thiscall ***)(NiD3DShaderProgramFactory *, int))shaderProgramFactory)(shaderProgramFactory, 1);
  shaderProgramFactory = 0;
  return result;
}
