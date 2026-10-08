// Copies low-level Havok object transform rows/columns from wrapper hkObject+0x70 into caller transform output.
int __thiscall bhkRefObject_CopyHavokObjectTransform(_DWORD *this, _OWORD *a2)
{
  _OWORD *v3; // esi
  int result; // eax

  if ( this ) /*0x6848df*/
  {
    v3 = (_OWORD *)*(this + 2); /*0x6848e1*/
    if ( v3 ) /*0x6848e6*/
    {
      bhkRefObject_UpdateHavokObject(this); /*0x6848e8*/
      *a2 = v3[7]; /*0x6848f4*/
      a2[1] = v3[8]; /*0x6848fe*/
      a2[2] = v3[9]; /*0x684909*/
      a2[3] = v3[0xA]; /*0x684916*/
      return bhkRefObject_UpdateHavokObject(this); /*0x68491a*/
    }
  }
  return result; /*0x68491f*/
}
