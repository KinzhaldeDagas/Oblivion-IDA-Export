char __thiscall sub_47C740(NiMultiTargetTransformController *this, NiNode *a2, NiNode *a3)
{
  LONG v4; // eax
  float v5; // ecx
  float v6; // edx
  float v7; // eax
  float v8; // ecx
  float v9; // edx
  float v10; // ecx
  int v11; // ebx
  bool v12; // zf
  int i; // ebp
  NiAVObject *v14; // esi
  float v16; // [esp+24h] [ebp-30h]
  float v17; // [esp+24h] [ebp-30h]
  NiPoint3 v18; // [esp+28h] [ebp-2Ch] BYREF
  float v19; // [esp+34h] [ebp-20h] BYREF
  float v20; // [esp+38h] [ebp-1Ch]
  LONG v21; // [esp+3Ch] [ebp-18h]
  float v22; // [esp+40h] [ebp-14h]
  float v23; // [esp+44h] [ebp-10h]
  unsigned int v24; // [esp+50h] [ebp-4h]

  LOBYTE(v4) = LOBYTE(this->members.super.flags) >> (kCycleType_Reverse|kAnimType_AppInit); /*0x47c76c*/
  if ( (this->members.super.flags & kActive) != 0 ) /*0x47c771*/
  {
    v5 = *(float *)&dword_B24260; /*0x47c777*/
    v6 = *(float *)&dword_B24264; /*0x47c783*/
    v23 = flt_A79E10; /*0x47c789*/
    v7 = *(float *)&dword_B24268; /*0x47c78d*/
    v18.x = v5; /*0x47c792*/
    v8 = flt_B3CBA4; /*0x47c796*/
    v18.y = v6; /*0x47c79c*/
    v9 = flt_B3CBA8; /*0x47c7a0*/
    v18.z = v7; /*0x47c7a6*/
    v4 = LODWORD(flt_B3CBAC); /*0x47c7aa*/
    v19 = v8; /*0x47c7af*/
    v10 = flt_B3CBB0; /*0x47c7b3*/
    v11 = 0; /*0x47c7b9*/
    v12 = this->members.m_usNumInterps == 0; /*0x47c7bb*/
    v20 = v9; /*0x47c7bf*/
    v21 = v4; /*0x47c7c3*/
    v22 = v10; /*0x47c7c7*/
    if ( !v12 ) /*0x47c7cb*/
    {
      for ( i = 0; ; i += 0x30 ) /*0x47c7d1*/
      {
        v14 = (NiAVObject *)this->members.targets[v11]; /*0x47c7d6*/
        if ( v14 ) /*0x47c7df*/
          LOBYTE(v4) = InterlockedIncrement((volatile LONG *)&v14->members); /*0x47c7e5*/
        v24 = 0; /*0x47c7ed*/
        if ( v14 ) /*0x47c7f5*/
        {
          if ( (v14->members.m_flags & kFlag_SelUpdate) != 0 ) /*0x47c803*/
            break; /*0x47c803*/
        }
        v24 = 0xFFFFFFFF; /*0x47c8d7*/
        if ( v14 ) /*0x47c8df*/
        {
          v4 = InterlockedDecrement((volatile LONG *)&v14->members); /*0x47c8e5*/
          goto LABEL_20; /*0x47c8e5*/
        }
LABEL_22:
        if ( ++v11 >= this->members.m_usNumInterps ) /*0x47c905*/
          return v4; /*0x47c905*/
      }
      if ( (*(unsigned __int8 (__stdcall **)(NiNode *, NiAVObject *, NiPoint3 *))(*(_DWORD *)((char *)this->members.interpolators /*0x47c823*/
                                                                                            + i)
                                                                                + 0x4C))(
             a2,
             v14,
             &v18) )
      {
        if ( -flt_A7DEB4 != v18.x ) /*0x47c840*/
          v14->members.m_localTransform.pos = v18; /*0x47c846*/
        if ( -flt_A7DEB4 != v20 ) /*0x47c86a*/
          sub_47C600((NiTransform *)&v19, &v14->members.m_localTransform); /*0x47c874*/
        if ( -flt_A7DEB4 != v23 ) /*0x47c88e*/
        {
          v16 = fabs(v23); /*0x47c895*/
          v24 = 0xFFFFFFFF; /*0x47c899*/
          v14->members.m_localTransform.scale = v16; /*0x47c8a6*/
          v4 = InterlockedDecrement((volatile LONG *)&v14->members); /*0x47c8a9*/
          goto LABEL_20; /*0x47c8a9*/
        }
        if ( (this->members.super.flags & kFlag_DisableSorting) != 0 ) /*0x47c8b6*/
        {
          v17 = fabs(1.0); /*0x47c8bc*/
          v14->members.m_localTransform.scale = v17; /*0x47c8c4*/
        }
      }
      v24 = 0xFFFFFFFF; /*0x47c8ca*/
      v4 = InterlockedDecrement((volatile LONG *)&v14->members); /*0x47c8d3*/
LABEL_20:
      if ( !v4 ) /*0x47c8ed*/
        LOBYTE(v4) = ((int (__thiscall *)(NiAVObject *, int))v14->vtbl->super.super.Destructor)(v14, 1); /*0x47c8f7*/
      goto LABEL_22; /*0x47c8f7*/
    }
  }
  return v4; /*0x47c90b*/
}
