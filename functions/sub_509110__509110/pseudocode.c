void __cdecl sub_509110(
        ParamInfo *a1,
        UInt8 *a2,
        TESObjectREFR *a4,
        TESObjectREFR *argC,
        Script *a5,
        ScriptEventList *l,
        int a7,
        UInt32 *a3)
{
  NiAVObject *v8; // ebp
  UInt16 v9[2]; // [esp+14h] [ebp-30h] BYREF
  float radians; // [esp+18h] [ebp-2Ch]
  NiMatrix33 v11; // [esp+1Ch] [ebp-28h] BYREF

  v11.data[0][0] = 0.0; /*0x50911a*/
  if ( Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, (char *)&v9[1] + 1, &v11) ) /*0x509147*/
  {
    if ( a4 ) /*0x50915a*/
    {
      radians = v11.data[0][0] * dbl_A31C78; /*0x509172*/
      switch ( SHIBYTE(v9[1]) ) /*0x509176*/
      {
        case 'X': /*0x509176*/
          TESObjectREFR_SetRotationX(a4, radians); /*0x5091ae*/
          break;
        case 'Y': /*0x509176*/
          TESObjectREFR_SetRotationY(a4, radians); /*0x50919d*/
          break;
        case 'Z': /*0x509176*/
          TESObjectREFR_SetRotationZ(a4, radians); /*0x50918c*/
          break;
      }
      v8 = (NiAVObject *)a4->vtbl->GetNiNode(a4); /*0x5091c0*/
      if ( v8 ) /*0x5091c4*/
      {
        qmemcpy(&v8->members.m_localTransform, sub_4D7AF0((float *)a4, &v11), 0x24u); /*0x5091e1*/
        sub_897A20((int)v8, 1); /*0x5091e3*/
        if ( !a4->vtbl->GetAnimData(a4) ) /*0x5091f5*/
          NiAVObject_UpdateNiAVObject(v8, 0.0, 0); /*0x509206*/
      }
    }
  }
}
