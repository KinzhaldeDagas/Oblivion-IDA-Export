int __thiscall sub_72C4A0(int this)
{
  int v1; // edx
  int result; // eax
  unsigned __int16 *v3; // ecx

  v1 = *(unsigned __int16 *)(this + 0x22); /*0x72c4a0*/
  result = 0; /*0x72c4a4*/
  if ( *(_WORD *)(this + 0x22) ) /*0x72c4a0*/
  {
    v3 = *(unsigned __int16 **)(this + 0x18); /*0x72c4aa*/
    do /*0x72c4bb*/
    {
      result += *v3++; /*0x72c4b3*/
      --v1; /*0x72c4b8*/
    }
    while ( v1 ); /*0x72c4bb*/
  }
  return result; /*0x72c4be*/
}
