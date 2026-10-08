int __thiscall sub_405020(int this, unsigned int a2)
{
  int result; // eax
  int v3; // edx
  unsigned __int16 v4; // dx

  if ( a2 >= *(unsigned __int16 *)(this + 0xA) ) /*0x40502b*/
    return 0; /*0x40502d*/
  v3 = *(_DWORD *)(this + 4); /*0x405033*/
  result = *(_DWORD *)(v3 + 4 * a2); /*0x405036*/
  *(_DWORD *)(v3 + 4 * a2) = 0; /*0x40503e*/
  if ( result ) /*0x405044*/
    --*(_WORD *)(this + 0xC); /*0x405046*/
  v4 = *(_WORD *)(this + 0xA); /*0x40504c*/
  if ( a2 == v4 - 1 ) /*0x40505a*/
    *(_WORD *)(this + 0xA) = v4 - 1; /*0x40505f*/
  return result; /*0x40502f*/
}
