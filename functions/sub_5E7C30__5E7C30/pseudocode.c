void __userpurge sub_5E7C30(TESObjectREFR *this@<ecx>, double st5_0@<st2>, double st6_0@<st1>, _BYTE *a4, char a5)
{
  ExtraTeleport *TeleportExtraData; // eax
  BSExtraDataVtbl *v7; // eax
  TESObjectREFR **v8; // eax
  TESObjectREFR **v9; // esi
  TESObjectCELL *v10; // ebx
  TESWorldSpace *v11; // ebp
  float *v12; // eax
  char *v13; // eax
  double v14; // st7
  _DWORD *v15; // ecx
  float v16; // [esp+0h] [ebp-18h]
  _UNKNOWN *retaddr; // [esp+18h] [ebp+0h]

  if ( a4 )
  {
    TeleportExtraData = GetTeleportExtraData(a4);
    v7 = sub_42B410(&TeleportExtraData->super);
    v8 = (TESObjectREFR **)GetTeleportExtraData(v7);
    v9 = v8;
    if ( v8 )
    {
      v10 = sub_42B460(v8);
      v11 = sub_42B470(v9);
      v12 = (float *)sub_6899C0((char *)v9);
      TESObjectREFR_SetPosition(this, *v12, v12[1], v12[2]);
      if ( v10 && TESObjectCELL_IsProcessLevel_LowHigh(v10, 0) )
      {
        v13 = sub_42B430((char *)v9);
        sub_4D8A10(*((float *)v13 + 2));
        v14 = 0.0;
      }
      else
      {
        v14 = flt_A32048;
      }
      v16 = v14;
      sub_4D89D0(v16);
      sub_4DD4B0((int)v10, st5_0, st6_0, v14, (Actor *)this, v10, v11);
      v15 = *(_DWORD **)(*((_DWORD *)this + 0x16) + 8);
      if ( v15 )
      {
        if ( (_BYTE)retaddr )
          sub_5668E0(v15, 1);
      }
    }
  }
}
