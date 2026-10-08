unsigned int __thiscall sub_452800(unsigned int *this, unsigned int *a2, _BYTE *a3, _DWORD *a4)
{
  unsigned int result; // eax
  int v6; // eax
  unsigned int v7; // edx
  unsigned int *v8; // ecx

  result = *a2; /*0x45280a*/
  *a3 = *(_BYTE *)(*a2 + 4); /*0x452811*/
  *a4 = *(_DWORD *)(result + 8); /*0x45281a*/
  if ( *(_DWORD *)result ) /*0x45281c*/
  {
    *a2 = *(_DWORD *)result; /*0x452822*/
  }
  else
  {
    v6 = (*(int (__thiscall **)(unsigned int *, _DWORD))(*this + 4))(this, *(unsigned __int8 *)(result + 4)); /*0x452835*/
    v7 = *(this + 1); /*0x452837*/
    result = v6 + 1; /*0x45283a*/
    if ( result >= v7 ) /*0x45283f*/
    {
LABEL_7:
      *a2 = 0; /*0x452857*/
    }
    else
    {
      v8 = (unsigned int *)(*(this + 2) + 4 * result); /*0x452844*/
      while ( !*v8 ) /*0x45284b*/
      {
        ++result; /*0x45284d*/
        ++v8; /*0x452850*/
        if ( result >= v7 ) /*0x452855*/
          goto LABEL_7; /*0x452855*/
      }
      *a2 = *v8; /*0x452862*/
    }
  }
  return result; /*0x452824*/
}
