void __cdecl sub_509110(
        ParamInfo *a1,
        UInt8 *a2,
        float *a4,
        TESObjectREFR *argC,
        Script *a5,
        ScriptEventList *l,
        int a7,
        UInt32 *a3)
{
  NiAVObject *v8; // ebp
  UInt16 v9[2]; // [esp+14h] [ebp-30h] BYREF
  float v10; // [esp+18h] [ebp-2Ch]
  float v11; // [esp+1Ch] [ebp-28h] BYREF

  v11 = 0.0;
  if ( Script_ExtractArgs(a1, a2, a3, (TESObjectREFR *)a4, argC, a5, l, (char *)&v9[1] + 1, &v11) )
  {
    if ( a4 )
    {
      v10 = v11 * dbl_A31C78;
      switch ( SHIBYTE(v9[1]) )
      {
        case 'X':
          sub_4D89D0(v10);
          break;
        case 'Y':
          sub_4D89F0(v10);
          break;
        case 'Z':
          sub_4D8A10(v10);
          break;
      }
      v8 = (NiAVObject *)(*(int (__thiscall **)(float *))(*(_DWORD *)a4 + 0x154))(a4);
      if ( v8 )
      {
        qmemcpy(&v8->members.m_localTransform, sub_4D7AF0(a4, &v11), 0x24u);
        sub_897A20((int)v8, 1);
        if ( !(*(int (__thiscall **)(float *))(*(_DWORD *)a4 + 0x164))(a4) )
          NiAVObject_UpdateNiAVObject(v8, 0.0, 0);
      }
    }
  }
}
