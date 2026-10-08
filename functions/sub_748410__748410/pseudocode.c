int __thiscall sub_748410(_DWORD *this, size_t Format)
{
  char *v2; // edi
  int v3; // esi
  unsigned __int64 v4; // st7
  unsigned int v5; // kr00_4
  int result; // eax
  size_t v7; // [esp-8h] [ebp-18h]
  size_t v8; // [esp-8h] [ebp-18h]
  const char *v9; // [esp+8h] [ebp-8h]
  va_list v10; // [esp+Ch] [ebp-4h]

  v2 = MEMORY[0xB40408]; /*0x74841f*/
  v3 = 0x200; /*0x748424*/
  if ( *(_BYTE *)(0xC * *this + 0xB40618) )
  {
    *(double *)&v4 = sub_7485F0(); /*0x74842b*/
    HIDWORD(v7) = "%f: ";
    LODWORD(v7) = 0x200; /*0x74843b*/
    sub_6C5D40(MEMORY[0xB40408], MEMORY[0xB40408], v7, (char *)v4, (_DWORD)HIDWORD(v4)); /*0x74843d*/
    v5 = strlen(MEMORY[0xB40408]); /*0x748442*/
    v3 = 0x200 - v5; /*0x74845b*/
    v2 = &MEMORY[0xB40408][v5]; /*0x74845d*/
  }
  HIDWORD(v8) = v3; /*0x74846d*/
  LODWORD(v8) = v3; /*0x74846e*/
  result = _vsnprintf_s(v2, v8, Format, v9, v10); /*0x748470*/
  v2[v3 - 1] = 0; /*0x748478*/
  return result; /*0x74847d*/
}
