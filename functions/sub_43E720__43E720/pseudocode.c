int __thiscall sub_43E720(_DWORD *this, char *a2)
{
  char *v2; // edi
  char v3; // al
  unsigned int i; // esi

  v2 = a2; /*0x43e723*/
  v3 = *a2; /*0x43e727*/
  for ( i = 0; *v2; v3 = *v2 ) /*0x43e727*/
  {
    ++v2; /*0x43e743*/
    i = 0x21 * i + tolower(v3); /*0x43e746*/
  }
  return i % *(this + 2); /*0x43e758*/
}
