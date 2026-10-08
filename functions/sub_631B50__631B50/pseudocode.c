// TES4 authoritative: process vtable +0x2C8 movement flag setter. Replaces process+0x1FC with assembled movement/action flags.
__int16 __thiscall sub_631B50(int this, __int16 a2)
{
  __int16 result; // ax
  double v3; // st7

  result = a2; /*0x631b50*/
  if ( (a2 & 0x30) != 0 ) /*0x631b57*/
  {
    if ( (LowProcess *)this == reference->super.super.super.process ) /*0x631b62*/
      v3 = MEMORY[0xB36C00]; /*0x631b64*/
    else
      v3 = MEMORY[0xB36C08]; /*0x631b6c*/
    *(float *)(this + 0x1E0) = v3; /*0x631b74*/
    *(_BYTE *)(this + 0x1E4) = a2 & 0x30; /*0x631b7d*/
  }
  *(_WORD *)(this + 0x1FC) = a2; /*0x631b83*/
  return result; /*0x631b8a*/
}
