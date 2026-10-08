int __thiscall sub_88D820(hkVector4 **this, hkVector4 *a2)
{
  hkVector4 *v3; // edi
  int result; // eax
  hkVector4 v5; // xmm0

  if ( this && (v3 = *(this + 2)) != 0 ) /*0x88d842*/
  {
    bhkRefObject_UpdateHavokObject(this); /*0x88d844*/
    *a2 = v3[7]; /*0x88d84d*/
    a2[1] = v3[8]; /*0x88d859*/
    return bhkRefObject_UpdateHavokObject(this); /*0x88d85d*/
  }
  else
  {
    v5 = unk_BA7A40; /*0x88d875*/
    *a2 = unk_BA7A40; /*0x88d882*/
    a2[1] = v5; /*0x88d885*/
  }
  return result; /*0x88d862*/
}
