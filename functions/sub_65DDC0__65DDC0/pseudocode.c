unsigned int __thiscall sub_65DDC0(unsigned int *this, unsigned int *a2, _DWORD *a3, _BYTE *a4)
{
  unsigned int result; // eax
  int v6; // eax
  unsigned int v7; // edx
  unsigned int *v8; // ecx

  result = *a2; /*0x65ddca*/
  *a3 = *(_DWORD *)(*a2 + 4); /*0x65ddd1*/
  *a4 = *(_BYTE *)(result + 8); /*0x65ddda*/
  if ( *(_DWORD *)result ) /*0x65dddc*/
  {
    *a2 = *(_DWORD *)result; /*0x65dde2*/
  }
  else
  {
    v6 = (*(int (__thiscall **)(unsigned int *, _DWORD))(*this + 4))(this, *(_DWORD *)(result + 4)); /*0x65ddf4*/
    v7 = *(this + 1); /*0x65ddf6*/
    result = v6 + 1; /*0x65ddf9*/
    if ( result >= v7 ) /*0x65ddfe*/
    {
LABEL_7:
      *a2 = 0; /*0x65de16*/
    }
    else
    {
      v8 = (unsigned int *)(*(this + 2) + 4 * result); /*0x65de03*/
      while ( !*v8 ) /*0x65de0a*/
      {
        ++result; /*0x65de0c*/
        ++v8; /*0x65de0f*/
        if ( result >= v7 ) /*0x65de14*/
          goto LABEL_7; /*0x65de14*/
      }
      *a2 = *v8; /*0x65de21*/
    }
  }
  return result; /*0x65dde4*/
}
