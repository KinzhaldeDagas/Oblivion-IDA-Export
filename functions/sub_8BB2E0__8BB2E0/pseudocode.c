int __userpurge sub_8BB2E0@<eax>(_DWORD *this@<ecx>, unsigned int a2@<esi>, void *Str, size_t Count)
{
  unsigned int v5; // eax
  int v6; // esi
  size_t v8; // [esp-10h] [ebp-14h]
  FILE *v9; // [esp+0h] [ebp-4h]

  v5 = *(this + 2); /*0x8bb2e3*/
  if ( !v5 ) /*0x8bb2e8*/
    return 0; /*0x8bb314*/
  HIDWORD(v8) = Count; /*0x8bb2f4*/
  LODWORD(v8) = 1; /*0x8bb2f5*/
  v6 = fwrite(Str, v8, __PAIR64__(a2, v5), v9); /*0x8bb2fd*/
  if ( v6 <= 0 ) /*0x8bb304*/
    sub_8BB320((int)this); /*0x8bb308*/
  return v6; /*0x8bb310*/
}
