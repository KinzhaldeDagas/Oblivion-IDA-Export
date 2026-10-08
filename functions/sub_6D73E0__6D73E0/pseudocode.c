// Initializes an 0x08-byte NiTextKey record by clearing its owned text pointer at +0x04.
_DWORD *__thiscall NiTextKey_Construct(_DWORD *this)
{
  *(this + 1) = 0; /*0x6d73e2*/
  return this; /*0x6d73e9*/
}
