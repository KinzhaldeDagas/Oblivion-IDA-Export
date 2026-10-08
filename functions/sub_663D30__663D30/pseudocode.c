void __thiscall sub_663D30(TESObjectREFR *this)
{
  TESWorldSpace *v3; // edi
  char v4; // cl
  TESObjectCELL *v5; // ebx
  TESWorldSpace *v6; // edi
  float v7; // ecx
  float v8; // edx
  TESObjectREFR *v9; // [esp-10h] [ebp-58h]
  bool enabled; // [esp+10h] [ebp-38h]
  bool IgnoreLocks; // [esp+14h] [ebp-34h]
  bool IgnoreMinUse; // [esp+18h] [ebp-30h]
  NiPoint3 destinationPosition; // [esp+1Ch] [ebp-2Ch] BYREF
  TravelPath v14; // [esp+28h] [ebp-20h] BYREF
  unsigned int v15; // [esp+44h] [ebp-4h]

  v3 = *((TESWorldSpace **)this + 0x18E); /*0x663d58*/
  *((_DWORD *)this + 0x18F) = 0; /*0x663d60*/
  if ( v3 ) /*0x663d6a*/
  {
    if ( v3 != (TESWorldSpace *)Shared_GetDwordAtOffset40(this) && v3 != TESObjectREFR_GetWorldSpace(this) ) /*0x663d86*/
    {
      IgnoreLocks = TravelPath_GetIgnoreLocks(); /*0x663d93*/
      TravelPath_SetIgnoreLocks(1); /*0x663d97*/
      enabled = TravelPath_GetAllowDisabledDoors(); /*0x663da3*/
      TravelPath_SetAllowDisabledDoors(1); /*0x663da7*/
      IgnoreMinUse = TravelPath_GetIgnoreMinUse(); /*0x663db3*/
      TravelPath_SetIgnoreMinUse(0); /*0x663db7*/
      v4 = *(_BYTE *)(*((_DWORD *)this + 0x18E) + 4); /*0x663dc2*/
      v5 = 0; /*0x663dc8*/
      v6 = 0; /*0x663dca*/
      if ( v4 == 0x30 ) /*0x663dcf*/
      {
        v5 = *((TESObjectCELL **)this + 0x18E); /*0x663dd1*/
      }
      else if ( v4 == 0x35 ) /*0x663dd8*/
      {
        v6 = *((TESWorldSpace **)this + 0x18E); /*0x663dda*/
      }
      PathLow_ctor(&v14); /*0x663de0*/
      v7 = *((float *)this + 0x18C); /*0x663deb*/
      v8 = *((float *)this + 0x18D); /*0x663df1*/
      destinationPosition.x = *((float *)this + 0x18B); /*0x663df8*/
      destinationPosition.y = v7; /*0x663dfd*/
      v9 = (TESObjectREFR *)reference; /*0x663e0c*/
      v15 = 0; /*0x663e11*/
      destinationPosition.z = v8; /*0x663e19*/
      TravelPath_BuildToDestination(&v14, v9, &destinationPosition, v5, v6); /*0x663e1d*/
      *((_DWORD *)this + 0x18F) = sub_68A1B0((char *)&v14); /*0x663e30*/
      TravelPath_SetAllowDisabledDoors(enabled); /*0x663e36*/
      TravelPath_SetIgnoreLocks(IgnoreLocks); /*0x663e40*/
      TravelPath_SetIgnoreMinUse(IgnoreMinUse); /*0x663e4a*/
      v15 = 0xFFFFFFFF; /*0x663e56*/
      PathLow_dtor(&v14); /*0x663e5e*/
    }
  }
}
