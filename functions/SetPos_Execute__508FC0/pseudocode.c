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
  float *v11; // eax
  float v12; // edi
  float v13; // ebx
  float v14; // ebp
  MobileObject *v15; // eax
  __m128 *CharProxy; // eax
  NiNode *v17; // eax
  NiAVObject *v18; // esi
  UInt16 v19[2]; // [esp+18h] [ebp-18h] BYREF
  float v20; // [esp+1Ch] [ebp-14h] BYREF
  __m128 *v21; // [esp+20h] [ebp-10h]
  NiPoint3 a2; // [esp+24h] [ebp-Ch] BYREF

  v20 = 0.0;
  if ( Script_ExtractArgs(a1, arg4, a3, a4, argC, a5, l, (char *)&v19[1] + 1, &v20) )
  {
    if ( a4 )
    {
      v11 = a4->vtbl->GetPos(a4);
      v12 = *v11;
      v13 = v11[1];
      v14 = v11[2];
      a2.x = *v11;
      a2.y = v13;
      a2.z = v14;
      switch ( SHIBYTE(v19[1]) )
      {
        case 'X':
          a2.x = v20;
          v12 = v20;
          break;
        case 'Y':
          a2.y = v20;
          v13 = v20;
          break;
        case 'Z':
          a2.z = v20;
          v14 = v20;
          break;
      }
      TESObjectREFR_SetPosition(a4, v12, v13, v14);
      v15 = (MobileObject *)OblivionDynamicCast(
                              a4,
                              0,
                              (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                              &MobileObject `RTTI Type Descriptor',
                              0);
      if ( v15 )
      {
        CharProxy = (__m128 *)MobileObject_GetCharProxy(v15);
        v21 = CharProxy;
        if ( CharProxy )
        {
          if ( sub_88D370((__m128 *)CharProxy[0x1E].m128_i32) != 4 )
            sub_452A10((bhkCharacterProxy *)v21, &a2);
        }
      }
      v17 = a4->vtbl->GetNiNode(a4);
      v18 = (NiAVObject *)v17;
      if ( v17 )
      {
        v17->members.super.m_localTransform.pos.x = v12;
        v17->members.super.m_localTransform.pos.y = v13;
        v17->members.super.m_localTransform.pos.z = v14;
        sub_897A20((int)v17, 1);
        NiAVObject_UpdateNiAVObject(v18, 0.0, 0);
      }
    }
  }
}
