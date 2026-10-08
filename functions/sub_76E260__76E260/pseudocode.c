// MoonSugarEffect decode: stream descriptor initializer. Clears active flag/unknown, element-array pointer, and stride/cache field.
_DWORD *__thiscall sub_76E260(_DWORD *this)
{
  *(_BYTE *)this = 0; /*0x76e264*/
  *(this + 1) = 0; /*0x76e266*/
  *(this + 2) = 0; /*0x76e269*/
  *(this + 3) = 0; /*0x76e26c*/
  return this; /*0x76e26f*/
}
