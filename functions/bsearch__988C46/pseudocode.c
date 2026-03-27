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

  v6 = NumOfElements;
  v7 = (char *)Base + HIDWORD(NumOfElements) * (NumOfElements - 1);
  if ( !Base && (_DWORD)NumOfElements || !HIDWORD(NumOfElements) || !(_DWORD)SizeOfElements )
  {
    *_errno() = 0x16;
    _invalid_parameter(v5, 0, (int)v7);
    return 0;
  }
  if ( Base > v7 )
    return 0;
  while ( 1 )
  {
    v9 = v6 >> 1;
    if ( !(v6 >> 1) )
      break;
    v10 = (v6 & 1) == 0;
    LODWORD(NumOfElements) = v6 & 1;
    v11 = v6 >> 1;
    if ( v10 )
      v11 = v9 - 1;
    v12 = (char *)Base + HIDWORD(NumOfElements) * v11;
    v13 = ((int (__cdecl *)(const void *, char *))SizeOfElements)(Key, v12);
    if ( !v13 )
      return v12;
    if ( v13 >= 0 )
    {
      Base = &v12[HIDWORD(NumOfElements)];
LABEL_16:
      v6 = v9;
      goto LABEL_17;
    }
    v7 = &v12[-HIDWORD(NumOfElements)];
    if ( (_DWORD)NumOfElements )
      goto LABEL_16;
    v6 = v9 - 1;
LABEL_17:
    if ( Base > v7 )
      return 0;
  }
  if ( !v6 )
    return 0;
  return ((int (__cdecl *)(const void *, const void *))SizeOfElements)(Key, Base) == 0 ? (void *)Base : 0;
}
