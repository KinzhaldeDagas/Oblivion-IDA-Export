void __thiscall sub_683DF0(float *this, Actor *a2)
{
  int v4; // ebx
  float *v5; // ebp
  char *v6; // eax
  float *v7; // eax
  float *v8; // ebp
  char *LinkedDoor; // eax
  float *Head; // eax
  float v11; // [esp+14h] [ebp-10h]
  float v12; // [esp+14h] [ebp-10h]
  float v13; // [esp+18h] [ebp-Ch] BYREF
  float v14; // [esp+1Ch] [ebp-8h]
  float v15; // [esp+20h] [ebp-4h]
  float v16; // [esp+28h] [ebp+4h]

  v4 = *((_DWORD *)this + 0x12) + 1; /*0x683dff*/
  if ( a2 && TeleportData_GetLinkedDoor((TeleportData *)(this + 5)) ) /*0x683e0d*/
  {
    if ( v4 == 1 ) /*0x683e20*/
    {
      if ( !*((_DWORD *)this + 0xC) ) /*0x683ee9*/
        goto LABEL_18; /*0x683ee9*/
      v8 = a2->vtbl->super.super.GetPos((TESObjectREFR *)a2); /*0x683efe*/
      LinkedDoor = (char *)TeleportData_GetLinkedDoor((TeleportData *)(this + 5)); /*0x683f00*/
      Head = (float *)EmbeddedList_GetHead(LinkedDoor); /*0x683f07*/
      v13 = *Head - *v8; /*0x683f16*/
      v14 = Head[1] - v8[1]; /*0x683f20*/
      v15 = Head[2] - v8[2]; /*0x683f2a*/
      v12 = Vector3_CalculateHeadingRadiansXY(&v13) - dbl_A74C90; /*0x683f3e*/
      v16 = 1.0; /*0x683f44*/
      if ( Actor_IsSwimming(a2) ) /*0x683f48*/
        v16 = fConstant_2; /*0x683f57*/
      if ( sub_5E0510(a2) ) /*0x683f5d*/
        v16 = v16 * dbl_A31C70; /*0x683f70*/
      sub_680E70(*((float **)this + 0xC), v12); /*0x683f7f*/
      sub_680D20(*((float **)this + 0xC), v12); /*0x683f8f*/
      TESLeveledList_SetChanceNone(*((_BYTE **)this + 0xC), 3); /*0x683f99*/
      goto LABEL_17; /*0x683f99*/
    }
    if ( v4 == 2 && *((_DWORD *)this + 0xC) ) /*0x683e2f*/
    {
      v5 = a2->vtbl->super.super.GetPos((TESObjectREFR *)a2); /*0x683e48*/
      v6 = (char *)TeleportData_GetLinkedDoor((TeleportData *)(this + 5)); /*0x683e4a*/
      v7 = (float *)EmbeddedList_GetHead(v6); /*0x683e51*/
      v13 = *v7 - *v5; /*0x683e5b*/
      v14 = v7[1] - v5[1]; /*0x683e65*/
      v15 = v7[2] - v5[2]; /*0x683e74*/
      v11 = Vector3_CalculateHeadingRadiansXY(&v13) + dbl_A74C90; /*0x683e88*/
      v16 = 1.0; /*0x683e8e*/
      if ( Actor_IsSwimming(a2) ) /*0x683e92*/
        v16 = fConstant_2; /*0x683ea1*/
      if ( sub_5E0510(a2) ) /*0x683ea7*/
        v16 = v16 * dbl_A31C70; /*0x683eba*/
      sub_680E70(*((float **)this + 0xC), v11); /*0x683ec9*/
      sub_680D20(*((float **)this + 0xC), v11); /*0x683ed9*/
      TESLeveledList_SetChanceNone(*((_BYTE **)this + 0xC), 4); /*0x683ee0*/
LABEL_17:
      sub_680CD0(*((float **)this + 0xC), 0.0); /*0x683f9e*/
      sub_680CE0(*((float **)this + 0xC), v16); /*0x683fb7*/
      sub_680D00(*((float **)this + 0xC), 0.0); /*0x683fc5*/
      *(this + 7) = flt_A32048; /*0x683fd0*/
      *(this + 9) = 0.0; /*0x683fd5*/
      *(this + 8) = 0.0; /*0x683fd8*/
    }
  }
LABEL_18:
  *((_DWORD *)this + 0x12) = v4; /*0x683fdc*/
  if ( v4 >= 3 ) /*0x683fe2*/
    (*(void (__thiscall **)(float *, int))(*(_DWORD *)this + 0x30))(this, 1); /*0x683fed*/
}
