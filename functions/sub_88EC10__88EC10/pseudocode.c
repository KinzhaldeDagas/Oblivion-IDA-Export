NiObject *__thiscall sub_88EC10(volatile LONG **this, _DWORD **a2)
{
  NiObject *v3; // eax
  NiObject *v4; // esi

  v3 = (NiObject *)FormHeapAlloc(0x28u); /*0x88ec37*/
  v4 = v3; /*0x88ec3c*/
  if ( v3 ) /*0x88ec4f*/
  {
    sub_897600(v3); /*0x88ec53*/
    v4->__vftable = (NiObjectVtbl *)&bhkBlendCollisionObject::`vftable'; /*0x88ec5a*/
    ++unk_BA7A1C; /*0x88ec60*/
    *(float *)&v4[2].members.m_uiRefCount = 0.0; /*0x88ec67*/
    LOWORD(v4[1].members.m_uiRefCount) &= ~0x100u; /*0x88ec6c*/
    *(float *)&v4[3].__vftable = 1.0; /*0x88ec72*/
    v4[3].members.m_uiRefCount = 8; /*0x88ec75*/
    v4[4].__vftable = 0; /*0x88ec7c*/
    v4[4].members.m_uiRefCount = 0; /*0x88ec83*/
  }
  else
  {
    v4 = 0; /*0x88ec8c*/
  }
  sub_89E930(this, (Ni2DBuffer *)v4, a2); /*0x88ec9e*/
  v4[3].__vftable = *((NiObjectVtbl **)this + 6); /*0x88eca6*/
  v4[2].members.m_uiRefCount = *((UInt32 *)this + 5); /*0x88ecae*/
  v4[4].__vftable = (NiObjectVtbl *)*(this + 8); /*0x88ecb4*/
  return v4; /*0x88ecb7*/
}
