char *__thiscall sub_925A80(const void **this, char a2)
{
  int v3; // edx
  char *result; // eax
  const void *v5; // ecx
  char *v6; // eax

  v3 = (int)*(this + 1); /*0x925a83*/
  result = (char *)(v3 - 1); /*0x925a86*/
  if ( v3 - 1 < 0 ) /*0x925a8b*/
  {
LABEL_5:
    if ( v3 == ((unsigned int)*(this + 2) & 0x3FFFFFFF) ) /*0x925aa3*/
      sub_8A6EE0(this, 1); /*0x925aa8*/
    *((_BYTE *)*(this + 1) + (_DWORD)*this) = a2; /*0x925ab9*/
    v6 = (char *)*(this + 1) + 1; /*0x925abf*/
    *(this + 1) = v6; /*0x925ac0*/
    return v6 + 0xFFFFFFFF; /*0x925ac5*/
  }
  else
  {
    v5 = *this; /*0x925a8d*/
    while ( result[(_DWORD)v5] != (char)0xFF ) /*0x925a94*/
    {
      if ( (int)--result < 0 ) /*0x925a97*/
        goto LABEL_5; /*0x925a97*/
    }
    result[(_DWORD)v5] = a2; /*0x925ad1*/
  }
  return result; /*0x925ac8*/
}
