NiObject *sub_75B260()
{
  NiObject *v0; // eax
  NiObject *v1; // esi
  float z; // edx

  v0 = (NiObject *)FormHeapAlloc(0x38u); /*0x75b263*/
  v1 = v0; /*0x75b268*/
  if ( !v0 ) /*0x75b26f*/
    return 0; /*0x75b2b9*/
  sub_752BF0(v0); /*0x75b273*/
  v1->__vftable = (NiObjectVtbl *)&NiPSysBombModifier::`vftable'; /*0x75b27a*/
  v1[3].__vftable = 0; /*0x75b280*/
  v1[3].members.m_uiRefCount = LODWORD(stru_B258D0.x); /*0x75b28c*/
  v1[4].__vftable = (NiObjectVtbl *)LODWORD(stru_B258D0.y); /*0x75b295*/
  z = stru_B258D0.z; /*0x75b298*/
  *(float *)&v1[5].__vftable = 0.0; /*0x75b29e*/
  *(float *)&v1[5].members.m_uiRefCount = 0.0; /*0x75b2a1*/
  *(float *)&v1[4].members.m_uiRefCount = z; /*0x75b2a4*/
  v1[6].__vftable = 0; /*0x75b2a7*/
  v1[6].members.m_uiRefCount = 0; /*0x75b2ae*/
  return v1; /*0x75b2b7*/
}
