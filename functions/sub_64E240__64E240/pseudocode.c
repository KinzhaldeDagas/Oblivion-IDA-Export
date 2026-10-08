// RadiantAI: sorts accepted acquire candidates by entry+0x1C response code ascending; response code acts as priority bucket before distance sort.
void __thiscall sub_64E240(_DWORD *this)
{
  _DWORD *v1; // ecx
  int v2; // edx
  _DWORD *v3; // eax
  int v4; // edi
  char i; // bl
  _DWORD *j; // eax
  int v7; // edx

  v1 = this + 0xF; /*0x64e240*/
  if ( v1 ) /*0x64e243*/
  {
    v2 = 0; /*0x64e245*/
    v3 = v1; /*0x64e247*/
    do /*0x64e25d*/
    {
      if ( *v3 ) /*0x64e250*/
        ++v2; /*0x64e255*/
      v3 = (_DWORD *)v3[1]; /*0x64e258*/
    }
    while ( v3 ); /*0x64e25d*/
    v4 = v2; /*0x64e263*/
    for ( i = 1; v4; v1 = (_DWORD *)v1[1] ) /*0x64e267*/
    {
      if ( !i ) /*0x64e272*/
        break; /*0x64e272*/
      i = 0; /*0x64e274*/
      for ( j = v1; j; j = (_DWORD *)j[1] ) /*0x64e27a*/
      {
        v7 = *v1; /*0x64e280*/
        if ( *(_DWORD *)(*v1 + 0x1C) > *(_DWORD *)(*j + 0x1C) ) /*0x64e28a*/
        {
          *v1 = *j; /*0x64e28c*/
          *j = v7; /*0x64e28e*/
          i = 1; /*0x64e290*/
        }
      }
      --v4; /*0x64e299*/
    }
  }
}
