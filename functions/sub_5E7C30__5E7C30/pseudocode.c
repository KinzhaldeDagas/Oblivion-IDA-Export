void __userpurge sub_5E7C30(
        TESObjectREFR *this@<ecx>,
        double st5_0@<st2>,
        double st6_0@<st1>,
        TESObjectREFR *a4,
        char a5)
{
  TeleportData *TeleportData; // eax
  TESObjectREFR *LinkedDoor; // eax
  TeleportData *v8; // eax
  TESObjectREFR **p_linkedDoor; // esi
  TESObjectCELL *v10; // ebx
  TESObjectCELL **LinkedDoorWorldspace; // ebp
  float *Head; // eax
  char *v13; // eax
  double v14; // st7
  _DWORD *v15; // ecx
  float v16; // [esp+0h] [ebp-18h]
  _UNKNOWN *retaddr; // [esp+18h] [ebp+0h]

  if ( a4 ) /*0x5e7c3c*/
  {
    TeleportData = TESObjectREFR_GetTeleportData(a4); /*0x5e7c42*/
    LinkedDoor = TeleportData_GetLinkedDoor(TeleportData); /*0x5e7c49*/
    v8 = TESObjectREFR_GetTeleportData(LinkedDoor); /*0x5e7c50*/
    p_linkedDoor = &v8->linkedDoor; /*0x5e7c55*/
    if ( v8 ) /*0x5e7c59*/
    {
      v10 = sub_42B460(&v8->linkedDoor); /*0x5e7c68*/
      LinkedDoorWorldspace = (TESObjectCELL **)TeleportData_GetLinkedDoorWorldspace(p_linkedDoor); /*0x5e7c71*/
      Head = (float *)EmbeddedList_GetHead((char *)p_linkedDoor); /*0x5e7c73*/
      TESObjectREFR_SetPosition(this, *Head, Head[1], Head[2]); /*0x5e7c8f*/
      if ( v10 && TESObjectCELL_IsProcessLevel_LowHigh(v10, 0) ) /*0x5e7ca1*/
      {
        v13 = sub_42B430((char *)p_linkedDoor); /*0x5e7cac*/
        TESObjectREFR_SetRotationZ(this, *((float *)v13 + 2)); /*0x5e7cba*/
        v14 = 0.0; /*0x5e7cbf*/
      }
      else
      {
        v14 = flt_A32048; /*0x5e7cc3*/
      }
      v16 = v14; /*0x5e7ccc*/
      TESObjectREFR_SetRotationX(this, v16); /*0x5e7ccf*/
      sub_4DD4B0((int)v10, st5_0, st6_0, v14, (Actor *)this, v10, LinkedDoorWorldspace); /*0x5e7cd7*/
      v15 = *(_DWORD **)(*((_DWORD *)this + 0x16) + 8); /*0x5e7cdf*/
      if ( v15 ) /*0x5e7ce7*/
      {
        if ( (_BYTE)retaddr ) /*0x5e7cee*/
          sub_5668E0(v15, 1); /*0x5e7cf2*/
      }
    }
  }
}
