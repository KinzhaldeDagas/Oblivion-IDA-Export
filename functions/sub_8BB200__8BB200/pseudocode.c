FILE **__thiscall sub_8BB200(FILE **this, char a2)
{
  FILE *v3; // eax

  v3 = *(this + 3);
  *this = (FILE *)&off_A98274;
  if ( v3 )
    fclose(v3);
  *this = (FILE *)&hkBaseObject::`vftable';
  if ( (a2 & 1) != 0 )
    (*(void (__stdcall **)(FILE **, _DWORD, int))(*(_DWORD *)dword_BA7D98 + 0x14))(
      this,
      *((unsigned __int16 *)this + 2),
      0x17);
  return this;
}
