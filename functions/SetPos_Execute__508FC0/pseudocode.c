void __cdecl SetPos_Execute(
        ParamInfo *a1,
        UInt8 *arg4,
        TESObjectREFR *a4,
        TESObjectREFR *argC,
        Script *a5,
        ScriptEventList *l,
        int a7,
        UInt32 *a3)
{
  float *v8; // eax
  float v9; // edi
  float v10; // ebx
  float v11; // ebp
  MobileObject *v12; // eax
  __m128 *CharProxy; // eax
  NiNode *v14; // eax
  NiAVObject *v15; // esi
  UInt16 v16[2]; // [esp+18h] [ebp-18h] BYREF
  float v17; // [esp+1Ch] [ebp-14h] BYREF
  __m128 *v18; // [esp+20h] [ebp-10h]
  NiPoint3 a2; // [esp+24h] [ebp-Ch] BYREF

  v17 = 0.0; /*0x508fca*/
  if ( Script_ExtractArgs(a1, arg4, a3, a4, argC, a5, l, (char *)&v16[1] + 1, &v17) ) /*0x508ffa*/
  {
    if ( a4 ) /*0x509010*/
    {
      v8 = a4->vtbl->GetPos(a4); /*0x509020*/
      v9 = *v8; /*0x509022*/
      v10 = v8[1]; /*0x509024*/
      v11 = v8[2]; /*0x509027*/
      a2.x = *v8; /*0x509032*/
      a2.y = v10; /*0x509036*/
      a2.z = v11; /*0x50903a*/
      switch ( SHIBYTE(v16[1]) ) /*0x50903e*/
      {
        case 'X': /*0x50903e*/
          a2.x = v17; /*0x50906a*/
          v9 = v17; /*0x50906e*/
          break;
        case 'Y': /*0x50903e*/
          a2.y = v17; /*0x50905c*/
          v10 = v17; /*0x509060*/
          break;
        case 'Z': /*0x50903e*/
          a2.z = v17; /*0x50904e*/
          v11 = v17; /*0x509052*/
          break;
      }
      TESObjectREFR_SetPosition(a4, v9, v10, v11); /*0x509081*/
      v12 = (MobileObject *)OblivionDynamicCast( /*0x509095*/
                              a4,
                              0,
                              (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                              &MobileObject `RTTI Type Descriptor',
                              0);
      if ( v12 ) /*0x50909f*/
      {
        CharProxy = (__m128 *)MobileObject_GetCharProxy(v12); /*0x5090a3*/
        v18 = CharProxy; /*0x5090aa*/
        if ( CharProxy ) /*0x5090ae*/
        {
          if ( hkCharacterContext_GetStateId((__m128 *)CharProxy[0x1E].m128_i32) != 4 ) /*0x5090be*/
            sub_452A10((bhkCharacterProxy *)v18, &a2); /*0x5090c9*/
        }
      }
      v14 = a4->vtbl->GetNiNode(a4); /*0x5090d8*/
      v15 = (NiAVObject *)v14; /*0x5090da*/
      if ( v14 ) /*0x5090de*/
      {
        v14->members.super.m_localTransform.pos.x = v9; /*0x5090e0*/
        v14->members.super.m_localTransform.pos.y = v10; /*0x5090e5*/
        v14->members.super.m_localTransform.pos.z = v11; /*0x5090e9*/
        sub_897A20((int)v14, 1); /*0x5090ec*/
        NiAVObject_UpdateNiAVObject(v15, 0.0, 0); /*0x5090fe*/
      }
    }
  }
}
