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

  v3 = 0;
  if ( !a2 )
    return 0;
  v4 = a1;
  if ( !a1 || ((a1 - 1) & a1) != 0 )
    return 0;
  v5 = (NiObjectNET *)FormHeapAlloc(0x5Cu);
  if ( v5 )
    v3 = sub_9A1BB0(v5);
  v3[1].vtbl = *a3;
  v3[1].members.super.m_uiRefCount = (UInt32)a3[1];
  v3[1].members.m_pcName = (const char *)a3[2];
  p_m_extraDataListLen = &v3[2].members.m_extraDataListLen;
  v11 = 6;
  while ( 1 )
  {
    v7 = Ni2DBuffer::Ni2DBuffer(v4, v4);
    v8 = *(Ni2DBuffer **)p_m_extraDataListLen;
    v9 = v7;
    if ( *(Ni2DBuffer **)p_m_extraDataListLen != v7 )
    {
      if ( v8 )
      {
        if ( !InterlockedDecrement((volatile LONG *)&v8->members) )
          (*(void (__thiscall **)(Ni2DBuffer *, int))v8->__vftable)(v8, 1);
      }
      *(_DWORD *)p_m_extraDataListLen = v9;
      if ( v9 )
        InterlockedIncrement((volatile LONG *)&v9->members);
    }
    p_m_extraDataListLen += 2;
    if ( !--v11 )
      break;
    v4 = a1;
  }
  LOBYTE(v3[2].members.super.m_uiRefCount) = byte_B3FF00;
  v3[2].members.m_pcName = (const char *)dword_B2752C;
  LOBYTE(v3[2].members.m_controller) = byte_B27530;
  if ( !(*(unsigned __int8 (__thiscall **)(int, NiObjectNET *))(*(_DWORD *)a2 + 0x110))(a2, v3) )
  {
    (*(void (__thiscall **)(NiObjectNET *, int))v3->vtbl)(v3, 1);
    return 0;
  }
  return v3;
}
