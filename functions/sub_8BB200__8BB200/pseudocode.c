FILE **__thiscall sub_8BB200(FILE **this, char a2)
{
  FILE *v3; // eax

  v3 = *(this + 3); /*0x8bb203*/
  *this = (FILE *)&off_A98274; /*0x8bb208*/
  if ( v3 ) /*0x8bb20e*/
    fclose(v3); /*0x8bb211*/
  *this = (FILE *)&hkBaseObject::`vftable'; /*0x8bb21e*/
  if ( (a2 & 1) != 0 ) /*0x8bb224*/
    (*(void (__stdcall **)(FILE **, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x8bb236*/
      this,
      *((unsigned __int16 *)this + 2),
      0x17);
  return this; /*0x8bb23b*/
}
