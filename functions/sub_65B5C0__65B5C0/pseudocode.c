char __fastcall MobileObject_UpdateCharacterProxyWorldAndWater(TESObjectREFR *this, int a2, int a3)
{
  bhkCharacterProxy *CharProxy; // eax
  bhkCharacterProxy *v5; // edi
  Actor *v6; // ecx
  TESObjectCELL *DwordAtOffset40; // eax
  ExtraDataList *v8; // esi
  _DWORD *v9; // ecx
  int HavokObject; // eax
  int v11; // eax
  double WaterHeight; // st7
  int **v13; // ecx
  char v14; // bl
  NiObject *v15; // eax
  NiObjectNET *niNode; // esi
  _DWORD *v17; // ecx
  char v19; // [esp+Fh] [ebp-Dh]
  int *v20; // [esp+10h] [ebp-Ch]
  int *v21; // [esp+14h] [ebp-8h]
  float v22; // [esp+18h] [ebp-4h] BYREF

  CharProxy = MobileObject_GetCharProxy((MobileObject *)this); /*0x65b5c8*/
  v5 = CharProxy; /*0x65b5cd*/
  if ( CharProxy )
  {
    v6 = this->vtbl->IsActor(this) ? (Actor *)this : 0;
    if ( !v6 || (v19 = 1, Actor::GetDeadState(v6) != 2) ) /*0x65b5fd*/
      v19 = 0; /*0x65b5ff*/
    DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(this); /*0x65b606*/
    v8 = (ExtraDataList *)DwordAtOffset40; /*0x65b60b*/
    if ( DwordAtOffset40 ) /*0x65b60f*/
    {
      if ( TESObjectCELL_IsInterior(DwordAtOffset40) ) /*0x65b613*/
        v20 = (int *)sub_424180(v8 + 2); /*0x65b624*/
      else
        v20 = (int *)MEMORY[0xB35C24]; /*0x65b62f*/
    }
    else
    {
      v20 = 0; /*0x65b635*/
    }
    v9 = *((_DWORD **)v5 + 2); /*0x65b639*/
    if ( v9 ) /*0x65b63e*/
      HavokObject = bhkCollisionWrapper_GetHavokObject(v9); /*0x65b640*/
    else
      HavokObject = 0; /*0x65b647*/
    v11 = *(_DWORD *)(HavokObject + 8); /*0x65b649*/
    if ( v11 ) /*0x65b64e*/
      v21 = *(int **)(v11 + 0x2B0); /*0x65b656*/
    else
      v21 = 0; /*0x65b65c*/
    if ( v20 != v21 ) /*0x65b668*/
    {
      *((_DWORD *)v5 + 0xA8) = 0; /*0x65b66c*/
      if ( v8 ) /*0x65b672*/
        WaterHeight = TESObjectCELL_GetWaterHeight(v8); /*0x65b676*/
      else
        WaterHeight = 0.0; /*0x65b67d*/
      v22 = WaterHeight; /*0x65b683*/
      *((float *)v5 + 0xC6) = v22 * hkFactor;   // TES4 authoritative: actor/mobile proxy world update refreshes proxy+0x318 as current cell water height * hkFactor. /*0x65b691*/
      if ( !v19 ) /*0x65b697*/
        sub_895060(v5, v20); /*0x65b6a0*/
      sub_452A10(v5, (NiPoint3 *)this->member.pos); /*0x65b6ab*/
    }
    v13 = *((int ***)v5 + 0xD9); /*0x65b6b0*/
    v14 = 0; /*0x65b6b6*/
    if ( v13 ) /*0x65b6ba*/
      v15 = sub_89F6B0(v13, 0); /*0x65b6be*/
    else
      v15 = 0; /*0x65b6c5*/
    niNode = (NiObjectNET *)this->member.niNode; /*0x65b6c7*/
    if ( v15 != (NiObject *)niNode ) /*0x65b6cc*/
    {
      v17 = *((_DWORD **)v5 + 0xD9); /*0x65b6ce*/
      if ( v17 ) /*0x65b6d6*/
        sub_89F650(v17, (int)niNode, 0); /*0x65b6db*/
    }
    LOBYTE(CharProxy) = (_BYTE)v21; /*0x65b6e4*/
    if ( v21 != v20 ) /*0x65b6ea*/
    {
      if ( v21 ) /*0x65b6ee*/
        LOBYTE(CharProxy) = sub_88CD50(niNode, 1, 0); /*0x65b6f5*/
      v14 = 1; /*0x65b6fd*/
    }
    if ( v20 ) /*0x65b701*/
    {
      if ( v14 ) /*0x65b705*/
      {
        bhkCharacterProxy_GetCollisionFilterInfo(v5, &v22); /*0x65b70e*/
        LOBYTE(CharProxy) = (*(int (__thiscall **)(int *, NiObjectNET *, int, _DWORD, _DWORD, _DWORD))(*v20 + 0x90))( /*0x65b72d*/
                              v20,
                              niNode,
                              1,
                              0,
                              HIWORD(LODWORD(v22)),
                              0);
      }
      else
      {
        LOBYTE(CharProxy) = sub_88CDC0(niNode, 1, 0); /*0x65b73e*/
      }
    }
  }
  return (char)CharProxy; /*0x65b730*/
}
