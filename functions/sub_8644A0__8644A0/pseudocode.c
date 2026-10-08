// Sets the 16-bit grass instance count at +0xC0. A zero count suppresses both immediate rendering paths.
__int16 __thiscall TallGrassTriStrips__SetInstanceCount(_WORD *this, __int16 a2)
{
  *(this + 0x60) = a2; /*0x8644a5*/
  return a2; /*0x8644ac*/
}
