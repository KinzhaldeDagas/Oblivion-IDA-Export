NiObjectNET *__cdecl sub_9A1CE0(UInt32 a1, int a2, NiObjectVtbl ***a3)
{
  NiObjectNET *v3; // ebp
  UInt32 v4; // esi
  NiObjectNET *v5; // eax
  UInt16 *p_m_extraDataListLen; // ebx
  Ni2DBuffer *v7; // eax
  Ni2DBuffer *v8; // esi
  Ni2DBuffer *v9; // edi
  int v11; // [esp+14h] [ebp-10h]

  v3 = 0; /*0x9a1d05*/
  if ( !a2 ) /*0x9a1d0b*/
    return 0; /*0x9a1d0b*/
  v4 = a1; /*0x9a1d11*/
  if ( !a1 || ((a1 - 1) & a1) != 0 ) /*0x9a1d27*/
    return 0; /*0x9a1d27*/
  v5 = (NiObjectNET *)FormHeapAlloc(0x5Cu); /*0x9a1d2f*/
  if ( v5 ) /*0x9a1d41*/
    v3 = sub_9A1BB0(v5); /*0x9a1d4a*/
  v3[1].vtbl = *a3; /*0x9a1d52*/
  v3[1].members.super.m_uiRefCount = (UInt32)a3[1]; /*0x9a1d58*/
  v3[1].members.m_pcName = (const char *)a3[2]; /*0x9a1d66*/
  p_m_extraDataListLen = &v3[2].members.m_extraDataListLen; /*0x9a1d69*/
  v11 = 6; /*0x9a1d6c*/
  while ( 1 ) /*0x9a1d7c*/
  {
    v7 = Ni2DBuffer::Ni2DBuffer(v4, v4); /*0x9a1d7c*/
    v8 = *(Ni2DBuffer **)p_m_extraDataListLen; /*0x9a1d81*/
    v9 = v7; /*0x9a1d83*/
    if ( *(Ni2DBuffer **)p_m_extraDataListLen != v7 ) /*0x9a1d8a*/
    {
      if ( v8 ) /*0x9a1d8e*/
      {
        if ( !InterlockedDecrement((volatile LONG *)&v8->members) ) /*0x9a1d94*/
          (*(void (__thiscall **)(Ni2DBuffer *, int))v8->__vftable)(v8, 1); /*0x9a1daa*/
      }
      *(_DWORD *)p_m_extraDataListLen = v9; /*0x9a1dae*/
      if ( v9 ) /*0x9a1db0*/
        InterlockedIncrement((volatile LONG *)&v9->members); /*0x9a1db6*/
    }
    p_m_extraDataListLen += 2; /*0x9a1dbc*/
    if ( !--v11 ) /*0x9a1dc4*/
      break; /*0x9a1dc4*/
    v4 = a1; /*0x9a1d76*/
  }
  LOBYTE(v3[2].members.super.m_uiRefCount) = unk_B3FF00; /*0x9a1dcc*/
  v3[2].members.m_pcName = (const char *)dword_B2752C; /*0x9a1dd9*/
  LOBYTE(v3[2].members.m_controller) = byte_B27530; /*0x9a1de1*/
  if ( !(*(unsigned __int8 (__thiscall **)(int, NiObjectNET *))(*(_DWORD *)a2 + 0x110))(a2, v3) ) /*0x9a1ded*/
  {
    (*(void (__thiscall **)(NiObjectNET *, int))v3->vtbl)(v3, 1); /*0x9a1dfc*/
    return 0; /*0x9a1e13*/
  }
  return v3; /*0x9a1e00*/
}
