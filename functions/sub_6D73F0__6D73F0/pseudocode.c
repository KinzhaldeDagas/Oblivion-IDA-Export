// Returns different when float timestamps differ or case-sensitive strcmp of text differs; returns equal only when both match exactly.
int __thiscall NiTextKey_IsDifferent(const char **this, int a2)
{
  int result; // eax

  if ( *(float *)a2 != *(float *)this ) /*0x6d73ff*/
    return 1; /*0x6d73ff*/
  result = strcmp(*(this + 1), *(const char **)(a2 + 4)); /*0x6d740b*/
  if ( result ) /*0x6d742e*/
    return 1; /*0x6d7433*/
  return result; /*0x6d7430*/
}
