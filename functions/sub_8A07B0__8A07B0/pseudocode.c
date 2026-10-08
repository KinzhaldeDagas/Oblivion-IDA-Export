int __thiscall sub_8A07B0(_DWORD *this, int a2, int a3)
{
  int result; // eax

  result = sub_8A0200(this, a2); /*0x8a07b6*/
  if ( *(_WORD *)(a2 + 4) ) /*0x8a07bb*/
  {
    result = (unsigned __int16)--*(_WORD *)(a2 + 6); /*0x8a07c7*/
    if ( !(_WORD)result ) /*0x8a07ce*/
      return (**(int (__thiscall ***)(int, int))a2)(a2, 1); /*0x8a07d8*/
  }
  return result; /*0x8a07da*/
}
