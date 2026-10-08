// Oblivion NiTransformInterpolator clone factory. Allocates a 0x38-byte default object then delegates base/cached-transform/data/cursor copying to NiTransformInterpolator_CopyMembers.
int __thiscall sub_6D68F0(_DWORD *this, int a2)
{
  NiObject *v3; // eax
  NiObject *v4; // esi

  v3 = (NiObject *)FormHeapAlloc(0x38u); /*0x6d6918*/
  v4 = v3; /*0x6d691d*/
  if ( !v3 ) /*0x6d692e*/
    JUMPOUT(0x6D6993); /*0x6d6993*/
  sub_6EC220(v3); /*0x6d6932*/
  v4->__vftable = (NiObjectVtbl *)&NiTransformInterpolator::`vftable'; /*0x6d6937*/
  v4[1].members.m_uiRefCount = dword_B24260; /*0x6d6942*/
  v4[2].__vftable = (NiObjectVtbl *)dword_B24264; /*0x6d694b*/
  return sub_6D6954(dword_B24268, this, 0, (int)v4, a2);
}
