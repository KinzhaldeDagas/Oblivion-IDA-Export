bool __thiscall sub_4BC710(TESForm *this, void *a2)
{
  TESForm *v3; // eax
  unsigned __int16 *v4; // esi
  void *v6; // eax
  int v7; // ecx
  int v8; // edx
  double v9; // st7
  int v10; // eax
  float v11[3]; // [esp+8h] [ebp-18h] BYREF
  float v12[3]; // [esp+14h] [ebp-Ch] BYREF
  int v13; // [esp+24h] [ebp+4h]
  void *v14; // [esp+24h] [ebp+4h]

  v3 = (TESForm *)OblivionDynamicCast(
                    a2,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &TESSubSpace `RTTI Type Descriptor',
                    0);
  v4 = (unsigned __int16 *)v3;
  if ( !v3 || TESForm_CompareAllComponentsTo(this, v3) )
    return 1;
  v6 = (void *)v4[0x14];
  v7 = *((unsigned __int16 *)this + 0x12);
  v13 = v4[0x13];
  v8 = *((unsigned __int16 *)this + 0x13);
  v11[0] = (float)v4[0x12];
  v9 = (double)v13;
  v14 = v6;
  v10 = *((unsigned __int16 *)this + 0x14);
  v11[1] = v9;
  v11[2] = (float)(int)v14;
  v12[0] = (float)v7;
  v12[1] = (float)v8;
  v12[2] = (float)v10;
  return sub_8AA390(v12, v11);
}
