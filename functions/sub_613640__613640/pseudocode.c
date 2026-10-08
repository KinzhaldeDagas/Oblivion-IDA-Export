_DWORD *__thiscall sub_613640(_DWORD *this, int a2)
{
  _DWORD *v2; // ecx
  _DWORD *result; // eax
  int v4; // edx

  v2 = (_DWORD *)*(this + 0x10); /*0x613640*/
  result = 0; /*0x613643*/
  if ( v2 ) /*0x613647*/
  {
    do /*0x613667*/
    {
      v4 = v2[1]; /*0x613650*/
      if ( !v4 && !*v2 ) /*0x613657*/
        break; /*0x613659*/
      result = (_DWORD *)*v2; /*0x61365b*/
      if ( *(_DWORD *)*v2 == a2 ) /*0x61365f*/
        break; /*0x61365f*/
      v2 = (_DWORD *)v2[1]; /*0x613661*/
      result = 0; /*0x613663*/
    }
    while ( v4 ); /*0x613667*/
  }
  return result; /*0x61366a*/
}
