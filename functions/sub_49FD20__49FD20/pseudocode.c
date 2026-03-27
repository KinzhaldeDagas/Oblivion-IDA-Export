char __thiscall sub_49FD20(_DWORD *this, char *Str2)
{
  int v3; // edi
  int i; // ebx
  int v5; // eax
  unsigned __int16 v6; // cx
  int v7; // eax
  char *v8; // eax

  v3 = 0;
  if ( !*(this + 3) )
    return 0;
  for ( i = 0; ; i += 0x10 )
  {
    v5 = *(this + 6);
    v6 = *(_WORD *)(v5 + i + 4);
    v7 = i + v5;
    v8 = v6 == word_A79928 ? 0 : (char *)(*(_DWORD *)(*(_DWORD *)v7 + 8) + v6);
    if ( !_strcmp(v8, Str2) )
      break;
    if ( (unsigned int)++v3 >= *(this + 3) )
      return 0;
  }
  return *(_BYTE *)(0x10 * v3 + *(this + 5) + 0xD);
}
