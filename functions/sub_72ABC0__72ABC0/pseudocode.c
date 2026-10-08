int __thiscall sub_72ABC0(int this, _WORD *a2, _DWORD *a3, _DWORD *a4, _DWORD *a5)
{
  int result; // eax

  *a2 = *(_WORD *)(this + 0x5A); /*0x72abc8*/
  *a3 = 0; /*0x72abcf*/
  *a4 = *(_DWORD *)(this + 0x48); /*0x72abdc*/
  result = *(unsigned __int16 *)(this + 0x5A); /*0x72abde*/
  *a5 = 3 * result; /*0x72abe9*/
  return result; /*0x72abeb*/
}
