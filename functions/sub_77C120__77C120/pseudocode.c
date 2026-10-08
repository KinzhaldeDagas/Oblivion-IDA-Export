NiD3DShaderProgramFactory *__stdcall sub_77C120(int *a1)
{
  NiD3DShaderProgramFactory *result; // eax
  int *v2; // eax

  result = sub_77EAE0(); /*0x77c120*/
  if ( result ) /*0x77c127*/
  {
    v2 = (int *)*a1; /*0x77ec44*/
    if ( *a1 ) /*0x77ec44*/
    {
      *a1 = *v2; /*0x77ec4c*/
      return (NiD3DShaderProgramFactory *)v2[2]; /*0x77ec4e*/
    }
    else
    {
      return 0; /*0x77ec54*/
    }
  }
  return result; /*0x77c129*/
}
