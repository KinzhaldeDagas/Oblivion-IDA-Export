NiObject *__thiscall sub_72BFA0(int *this, int *a2)
{
  NiObject *v4; // eax
  NiObject *v5; // esi
  unsigned int v6; // edi
  bool v7; // zf
  NiObject *v8; // eax
  unsigned int v9; // ebx
  NiObject *v10; // eax
  NiObject *v11; // [esp+14h] [ebp-10h] BYREF
  unsigned int v12; // [esp+20h] [ebp-4h]

  if ( !sub_72BCA0(this, a2) ) /*0x72bfcc*/
    return (NiObject *)this; /*0x72bfd5*/
  v4 = (NiObject *)FormHeapAlloc(0x2Cu); /*0x72bfde*/
  v5 = v4; /*0x72bfe3*/
  v11 = v4; /*0x72bfe8*/
  v6 = 0; /*0x72bfec*/
  v12 = 0; /*0x72bff0*/
  if ( v4 ) /*0x72bff4*/
  {
    NiObject_constr(v4); /*0x72bff8*/
    v5->__vftable = (NiObjectVtbl *)&NiSkinInstance::`vftable'; /*0x72bffd*/
    v5[1].__vftable = 0; /*0x72c003*/
    v5[1].members.m_uiRefCount = 0; /*0x72c006*/
    v5[2].__vftable = 0; /*0x72c009*/
    v5[2].members.m_uiRefCount = 0; /*0x72c00c*/
    v5[3].__vftable = (NiObjectVtbl *)0xFFFFFFFF; /*0x72c00f*/
    v5[3].members.m_uiRefCount = 0; /*0x72c016*/
    v5[4].__vftable = 0; /*0x72c019*/
    v5[4].members.m_uiRefCount = 0; /*0x72c01c*/
    v5[5].__vftable = 0; /*0x72c01f*/
  }
  else
  {
    v5 = 0; /*0x72c024*/
  }
  v12 = 0xFFFFFFFF; /*0x72c02a*/
  sub_72BC00(this, (int)v5, (_DWORD **)a2); /*0x72c032*/
  v7 = NiTMap_GetAt((_DWORD *)*a2, *(this + 4), &v11) == 0; /*0x72c047*/
  v8 = v11; /*0x72c049*/
  if ( v7 ) /*0x72c04d*/
    v8 = (NiObject *)*(this + 4); /*0x72c04f*/
  v5[2].__vftable = (NiObjectVtbl *)v8; /*0x72c052*/
  v9 = *(_DWORD *)(*(this + 2) + 0x40); /*0x72c058*/
  v5[2].members.m_uiRefCount = FormHeapAlloc((unsigned __int64)v9 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v9);
  if ( v9 ) /*0x72c07b*/
  {
    do /*0x72c0b2*/
    {
      if ( NiTMap_GetAt((_DWORD *)*a2, *(_DWORD *)(*(this + 5) + 4 * v6), &v11) ) /*0x72c092*/
        v10 = v11; /*0x72c09b*/
      else
        v10 = *(NiObject **)(*(this + 5) + 4 * v6); /*0x72c0a4*/
      *(_DWORD *)(v5[2].members.m_uiRefCount + 4 * v6++) = v10; /*0x72c0aa*/
    }
    while ( v6 < v9 ); /*0x72c0b2*/
  }
  return v5; /*0x72c0b6*/
}
