// SpeedTreeOBSE 2026-07-14: normalizes texture palette keys in a fixed 256-byte local buffer. Plugin loader inputs are therefore capped at 255 characters.
char __cdecl sub_47D8F0(char *Str1, char *a2)
{
  char *v2; // esi
  size_t v4; // [esp-4h] [ebp-10h]

  v2 = Str1; /*0x47d8f6*/
  *a2 = 0; /*0x47d8fa*/
  if ( Str1[1] == 0x3A ) /*0x47d902*/
    v2 = Str1 + 3; /*0x47d904*/
  if ( *v2 == 0x5C ) /*0x47d90a*/
    ++v2; /*0x47d90c*/
  LODWORD(v4) = 5; /*0x47d90f*/
  if ( !_strnicmp(v2, "data\\", v4) ) /*0x47d917*/
    v2 += 5; /*0x47d923*/
  strcat(a2, v2); /*0x47d951*/
  _strlwr(a2); /*0x47d95b*/
  return 1; /*0x47d963*/
}
