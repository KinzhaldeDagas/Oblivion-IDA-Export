NiObject *__cdecl sub_70BC70(NiObjectVtbl *a1, UInt32 a2, int a3, int a4)
{
  NiObject *v4; // eax
  NiObject *v5; // esi
  NiObjectVtbl *vftable; // edx
  NiObject *(__thiscall *Unk_02)(NiObject *); // eax
  int v9; // eax
  UInt32 m_uiRefCount; // ecx
  unsigned int v11; // edx

  if ( *(_DWORD *)(a4 + 4) != 0xF ) /*0x70bc9a*/
    return 0; /*0x70bc9a*/
  v4 = (NiObject *)FormHeapAlloc(0x18u); /*0x70bc9e*/
  v5 = v4; /*0x70bca3*/
  if ( v4 ) /*0x70bcb6*/
  {
    sub_731EA0(v4); /*0x70bcba*/
    v5->__vftable = (NiObjectVtbl *)&NiDepthStencilBuffer::`vftable'; /*0x70bcbf*/
    v5[2].members.m_uiRefCount = 0; /*0x70bcc5*/
  }
  else
  {
    v5 = 0; /*0x70bcce*/
  }
  vftable = v5->__vftable; /*0x70bcd8*/
  v5[1].__vftable = a1; /*0x70bcda*/
  Unk_02 = vftable[1].Unk_02; /*0x70bcdd*/
  v5[1].members.m_uiRefCount = a2; /*0x70bce0*/
  if ( !((unsigned __int8 (__thiscall *)(NiObject *, int))Unk_02)(v5, a4) ) /*0x70bcee*/
  {
    v5->__vftable->super.Destructor((NiRefObject *)v5, 1); /*0x70bcfc*/
    return 0; /*0x70bd11*/
  }
  v9 = (int)v5[1].__vftable * v5[1].members.m_uiRefCount * (*(unsigned __int8 *)(a4 + 1) >> 3); /*0x70bd1d*/
  v5[2].members.m_uiRefCount = v9; /*0x70bd21*/
  unk_B3FAB8 += v9; /*0x70bd24*/
  m_uiRefCount = v5[2].members.m_uiRefCount; /*0x70bd2a*/
  v11 = 0; /*0x70bd34*/
  if ( (m_uiRefCount & 0xFFFFF000) != m_uiRefCount ) /*0x70bd38*/
    v11 = (m_uiRefCount & 0xFFFFF000) - m_uiRefCount + 0x1000; /*0x70bd41*/
  unk_B3FABC += v11; /*0x70bd43*/
  return v5; /*0x70bd00*/
}
