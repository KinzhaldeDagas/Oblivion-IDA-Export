NiD3DShaderProgramFactory *__stdcall sub_77C100(_DWORD *a1)
{
  NiD3DShaderProgramFactory *result; // eax
  _DWORD *v2; // eax

  result = sub_77EAE0(); /*0x77c100*/
  if ( result ) /*0x77c107*/
  {
    v2 = *((_DWORD **)result + 3); /*0x77ec20*/
    *a1 = v2; /*0x77ec29*/
    if ( v2 ) /*0x77ec2b*/
    {
      *a1 = *v2; /*0x77ec2f*/
      return (NiD3DShaderProgramFactory *)v2[2]; /*0x77ec31*/
    }
    else
    {
      return 0; /*0x77ec37*/
    }
  }
  return result; /*0x77c109*/
}
