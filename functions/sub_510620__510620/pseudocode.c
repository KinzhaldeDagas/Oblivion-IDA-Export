void __usercall sub_510620(
        int ebp0@<ebp>,
        ParamInfo *a1,
        UInt8 *arg4,
        TESObjectREFR *a4,
        TESObjectREFR *a5,
        Script *a6,
        ScriptEventList *l,
        int a8,
        UInt32 *a3)
{
  NiAVObject *v9; // ebp
  double x; // st6
  double v11; // st6
  double i; // st5
  double v13; // rt2
  double v14; // st5
  double v15; // st6
  float radians; // [esp+8h] [ebp-3Ch]
  float radiansa; // [esp+8h] [ebp-3Ch]
  float radiansb; // [esp+8h] [ebp-3Ch]
  UInt16 v19[2]; // [esp+14h] [ebp-30h] BYREF
  float v20; // [esp+18h] [ebp-2Ch]
  NiMatrix33 v21; // [esp+1Ch] [ebp-28h] BYREF

  v21.data[0][0] = 0.0; /*0x510651*/
  if ( Script_ExtractArgs(a1, arg4, a3, a4, a5, a6, l, (char *)&v19[1] + 1, &v21) ) /*0x510659*/
  {
    if ( a4 ) /*0x51066c*/
    {
      v9 = (NiAVObject *)((int (__thiscall *)(TESObjectREFR *, int))a4->vtbl->GetNiNode)(a4, ebp0); /*0x51067f*/
      if ( v9 ) /*0x510683*/
      {
        v20 = 0.0; /*0x510692*/
        switch ( SHIBYTE(v19[1]) ) /*0x510699*/
        {
          case 'X': /*0x510699*/
            x = a4->member.rot.x; /*0x5106af*/
            break;
          case 'Y': /*0x510699*/
            x = a4->member.rot.y; /*0x5106aa*/
            break;
          case 'Z': /*0x510699*/
            x = a4->member.rot.z; /*0x5106a5*/
            break;
          default:
LABEL_11:
            v20 = (double)SLODWORD(v21.data[0][0]) * dbl_A31C78 * *(float *)&MEMORY[0xB33E90][0xC] + v20; /*0x5106b6*/
            v11 = v20; /*0x5106ce*/
            for ( i = dbl_A3D5B0; v20 >= i; v11 = v20 ) /*0x5106df*/
              v20 = v11 - i; /*0x5106e5*/
            v13 = i; /*0x5106f8*/
            v14 = v11; /*0x5106f8*/
            v15 = v13; /*0x5106f8*/
            if ( v14 < 0.0 ) /*0x510701*/
            {
              do /*0x510714*/
              {
                v20 = v14 + v15; /*0x510705*/
                v14 = v20; /*0x510709*/
              }
              while ( v20 < 0.0 ); /*0x510714*/
            }
            switch ( SHIBYTE(v19[1]) ) /*0x51071f*/
            {
              case 'X': /*0x51071f*/
                radiansb = v14; /*0x510748*/
                TESObjectREFR_SetRotationX(a4, radiansb); /*0x51074b*/
                break;
              case 'Y': /*0x51071f*/
                radiansa = v14; /*0x51073b*/
                TESObjectREFR_SetRotationY(a4, radiansa); /*0x51073e*/
                break;
              case 'Z': /*0x51071f*/
                radians = v14; /*0x51072e*/
                TESObjectREFR_SetRotationZ(a4, radians); /*0x510731*/
                break;
            }
            qmemcpy(&v9->members.m_localTransform, sub_4D7AF0((float *)a4, &v21), 0x24u); /*0x51076c*/
            if ( !a4->vtbl->GetAnimData(a4) ) /*0x510778*/
              NiAVObject_UpdateNiAVObject(v9, 0.0, 0); /*0x510789*/
            return; /*0x510789*/
        }
        v20 = x; /*0x5106b2*/
        goto LABEL_11; /*0x5106b2*/
      }
    }
  }
}
