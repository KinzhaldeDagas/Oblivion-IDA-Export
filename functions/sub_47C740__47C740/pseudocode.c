char __thiscall sub_47C740(NiMultiTargetTransformController *this, NiNode *a2, NiNode *a3)
{
  LONG v4; // eax
  float v5; // ecx
  float v6; // edx
  float v7; // eax
  int v8; // ecx
  int v9; // edx
  int v10; // ecx
  int v11; // ebx
  bool v12; // zf
  int i; // ebp
  NiAVObject *v14; // esi
  float v16; // [esp+24h] [ebp-30h]
  float v17; // [esp+24h] [ebp-30h]
  NiPoint3 v18; // [esp+28h] [ebp-2Ch] BYREF
  int v19; // [esp+34h] [ebp-20h] BYREF
  float v20; // [esp+38h] [ebp-1Ch]
  LONG v21; // [esp+3Ch] [ebp-18h]
  int v22; // [esp+40h] [ebp-14h]
  float v23; // [esp+44h] [ebp-10h]
  unsigned int v24; // [esp+50h] [ebp-4h]

  LOBYTE(v4) = LOBYTE(this->members.super.flags) >> (kCycleType_Reverse|kAnimType_AppInit);
  if ( (this->members.super.flags & kActive) != 0 )
  {
    v5 = *(float *)&dword_B24260;
    v6 = *(float *)&dword_B24264;
    v23 = flt_A79E10;
    v7 = *(float *)&dword_B24268;
    v18.x = v5;
    v8 = dword_B3CBA4;
    v18.y = v6;
    v9 = dword_B3CBA8;
    v18.z = v7;
    v4 = dword_B3CBAC;
    v19 = v8;
    v10 = dword_B3CBB0;
    v11 = 0;
    v12 = this->members.m_usNumInterps == 0;
    v20 = *(float *)&v9;
    v21 = v4;
    v22 = v10;
    if ( !v12 )
    {
      for ( i = 0; ; i += 0x30 )
      {
        v14 = (NiAVObject *)this->members.targets[v11];
        if ( v14 )
          LOBYTE(v4) = InterlockedIncrement((volatile LONG *)&v14->members);
        v24 = 0;
        if ( v14 )
        {
          if ( (v14->members.m_flags & kFlag_SelUpdate) != 0 )
            break;
        }
        v24 = 0xFFFFFFFF;
        if ( v14 )
        {
          v4 = InterlockedDecrement((volatile LONG *)&v14->members);
          goto LABEL_20;
        }
LABEL_22:
        if ( ++v11 >= this->members.m_usNumInterps )
          return v4;
      }
      if ( (*(unsigned __int8 (__stdcall **)(NiNode *, NiAVObject *, NiPoint3 *))(*(_DWORD *)((char *)this->members.interpolators
                                                                                            + i)
                                                                                + 0x4C))(
             a2,
             v14,
             &v18) )
      {
        if ( -flt_A7DEB4 != v18.x )
          v14->members.m_localTransform.pos = v18;
        if ( -flt_A7DEB4 != v20 )
          sub_47C600((NiTransform *)&v19, &v14->members.m_localTransform);
        if ( -flt_A7DEB4 != v23 )
        {
          v16 = fabs(v23);
          v24 = 0xFFFFFFFF;
          v14->members.m_localTransform.scale = v16;
          v4 = InterlockedDecrement((volatile LONG *)&v14->members);
          goto LABEL_20;
        }
        if ( (this->members.super.flags & kFlag_DisableSorting) != 0 )
        {
          v17 = fabs(1.0);
          v14->members.m_localTransform.scale = v17;
        }
      }
      v24 = 0xFFFFFFFF;
      v4 = InterlockedDecrement((volatile LONG *)&v14->members);
LABEL_20:
      if ( !v4 )
        LOBYTE(v4) = ((int (__thiscall *)(NiAVObject *, int))v14->vtbl->super.super.Destructor)(v14, 1);
      goto LABEL_22;
    }
  }
  return v4;
}
