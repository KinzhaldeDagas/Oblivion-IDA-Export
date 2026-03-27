void __usercall sub_510620(
        int ebp0@<ebp>,
        ParamInfo *a1,
        UInt8 *arg4,
        float *a4,
        TESObjectREFR *a5,
        Script *a6,
        ScriptEventList *l,
        int a8,
        UInt32 *a3)
{
  NiAVObject *v9; // ebp
  double v10; // st6
  double v11; // st6
  double i; // st5
  double v13; // rt2
  double v14; // st5
  double v15; // st6
  float v16; // [esp+8h] [ebp-3Ch]
  float v17; // [esp+8h] [ebp-3Ch]
  float v18; // [esp+8h] [ebp-3Ch]
  UInt16 v19[2]; // [esp+14h] [ebp-30h] BYREF
  float v20; // [esp+18h] [ebp-2Ch]
  int v21; // [esp+1Ch] [ebp-28h] BYREF

  v21 = 0;
  if ( Script_ExtractArgs(a1, arg4, a3, (TESObjectREFR *)a4, a5, a6, l, (char *)&v19[1] + 1, &v21) )
  {
    if ( a4 )
    {
      v9 = (NiAVObject *)(*(int (__thiscall **)(float *, int))(*(_DWORD *)a4 + 0x154))(a4, ebp0);
      if ( v9 )
      {
        v20 = 0.0;
        switch ( SHIBYTE(v19[1]) )
        {
          case 'X':
            v10 = a4[8];
            break;
          case 'Y':
            v10 = a4[9];
            break;
          case 'Z':
            v10 = a4[0xA];
            break;
          default:
LABEL_11:
            v20 = (double)v21 * dbl_A31C78 * flt_B33E9C + v20;
            v11 = v20;
            for ( i = dbl_A3D5B0; v20 >= i; v11 = v20 )
              v20 = v11 - i;
            v13 = i;
            v14 = v11;
            v15 = v13;
            if ( v14 < 0.0 )
            {
              do
              {
                v20 = v14 + v15;
                v14 = v20;
              }
              while ( v20 < 0.0 );
            }
            switch ( SHIBYTE(v19[1]) )
            {
              case 'X':
                v18 = v14;
                sub_4D89D0(v18);
                break;
              case 'Y':
                v17 = v14;
                sub_4D89F0(v17);
                break;
              case 'Z':
                v16 = v14;
                sub_4D8A10(v16);
                break;
            }
            qmemcpy(&v9->members.m_localTransform, sub_4D7AF0(a4, (float *)&v21), 0x24u);
            if ( !(*(int (__thiscall **)(float *))(*(_DWORD *)a4 + 0x164))(a4) )
              NiAVObject_UpdateNiAVObject(v9, 0.0, 0);
            return;
        }
        v20 = v10;
        goto LABEL_11;
      }
    }
  }
}
