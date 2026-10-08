int **__thiscall sub_8BBDB0(int **this, const char *a2)
{
  int *v3; // esi
  int v4; // ebp
  unsigned int v5; // eax

  v3 = *(this + 2); /*0x8bbdbb*/
  if ( a2 ) /*0x8bbdbe*/
  {
    v4 = *v3; /*0x8bbdc1*/
    v5 = sub_8B1860(a2); /*0x8bbdc4*/
    (*(void (__thiscall **)(int *, const char *, unsigned int))(v4 + 0xC))(v3, a2, v5); /*0x8bbdd0*/
  }
  else
  {
    (*(void (__thiscall **)(int *, const char *, int))(*v3 + 0xC))(v3, "(null)", 6); /*0x8bbde7*/
  }
  return this; /*0x8bbdd6*/
}
