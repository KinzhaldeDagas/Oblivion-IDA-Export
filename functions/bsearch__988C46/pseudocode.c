void *__cdecl bsearch(
        const void *Key,
        const void *Base,
        size_t NumOfElements,
        size_t SizeOfElements,
        int (__cdecl *PtFuncCompare)(const void *, const void *))
{
  int v5; // ebx
  unsigned int v6; // eax
  char *v7; // esi
  unsigned int v9; // ebx
  bool v10; // zf
  unsigned int v11; // eax
  char *v12; // edi
  int v13; // eax

  v6 = NumOfElements; /*0x988c49*/
  v7 = (char *)Base + HIDWORD(NumOfElements) * (NumOfElements - 1); /*0x988c5a*/
  if ( !Base && (_DWORD)NumOfElements || !HIDWORD(NumOfElements) || !(_DWORD)SizeOfElements ) /*0x988c8b*/
  {
    *_errno() = 0x16; /*0x988c71*/
    _invalid_parameter(v5, 0, (int)v7); /*0x988c77*/
    return 0; /*0x988c81*/
  }
  if ( Base > v7 ) /*0x988c90*/
    return 0; /*0x988c90*/
  while ( 1 ) /*0x988c9d*/
  {
    v9 = v6 >> 1; /*0x988c9d*/
    if ( !(v6 >> 1) ) /*0x988c9d*/
      break; /*0x988c9d*/
    v10 = (v6 & 1) == 0; /*0x988ca4*/
    LODWORD(NumOfElements) = v6 & 1; /*0x988ca4*/
    v11 = v6 >> 1; /*0x988ca8*/
    if ( v10 ) /*0x988caa*/
      v11 = v9 - 1; /*0x988cac*/
    v12 = (char *)Base + HIDWORD(NumOfElements) * v11; /*0x988cb6*/
    v13 = ((int (__cdecl *)(const void *, char *))SizeOfElements)(Key, v12); /*0x988cbc*/
    if ( !v13 ) /*0x988cc3*/
      return v12; /*0x988cea*/
    if ( v13 >= 0 ) /*0x988cc5*/
    {
      Base = &v12[HIDWORD(NumOfElements)]; /*0x988cdc*/
LABEL_16:
      v6 = v9; /*0x988cdf*/
      goto LABEL_17; /*0x988cdf*/
    }
    v7 = &v12[-HIDWORD(NumOfElements)]; /*0x988cce*/
    if ( (_DWORD)NumOfElements ) /*0x988cd0*/
      goto LABEL_16; /*0x988cd0*/
    v6 = v9 - 1; /*0x988cd2*/
LABEL_17:
    if ( Base > v7 ) /*0x988ce4*/
      return 0; /*0x988ce4*/
  }
  if ( !v6 ) /*0x988cee*/
    return 0; /*0x988c98*/
  return ((int (__cdecl *)(const void *, const void *))SizeOfElements)(Key, Base) == 0 ? (void *)Base : 0;
}
