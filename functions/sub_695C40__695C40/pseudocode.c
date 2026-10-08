PlayerCharacter *__userpurge sub_695C40@<eax>(
        MobileObject *a1@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        int a5,
        TESObjectREFR a6)
{
  bhkCharacterProxy *CharProxy; // ebx
  UInt32 refID; // ecx
  int v10; // esi
  MobileObject *v11; // ecx
  signed int vtbl_high; // esi
  NiAVObject *v13; // eax
  _DWORD *BhkCollisionObjectRecursive; // eax
  _DWORD *v15; // ecx
  NiAVObject *v16; // eax
  _DWORD *v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  _DWORD *v21; // ecx
  int v22; // esi
  int v23; // eax
  int v24; // eax
  UInt32 v25; // ecx
  PlayerCharacter *result; // eax

  MobilObject_PostLinkModifiedForm((int)a1, a2, a3, a4, a5, (int)a6.vtbl); /*0x695c50*/
  CharProxy = MobileObject_GetCharProxy(a1); /*0x695c5c*/
  if ( CharProxy )
  {
    refID = a1[1].super.super.refID; /*0x695c66*/
    if ( refID && (*(int (__thiscall **)(UInt32))(*(_DWORD *)refID + 0x20))(refID) )
    {
      v10 = (*(int (__thiscall **)(UInt32))(*(_DWORD *)a1[1].super.super.refID + 0x20))(a1[1].super.super.refID); /*0x695c83*/
      v11 = (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v10 + 0x190))(v10) != 0 ? (MobileObject *)v10 : 0;
      if ( v11 ) /*0x695c99*/
      {
        vtbl_high = HIWORD(MobileObject_GetCollisionFilterInfo(v11, &a6)->vtbl); /*0x695ca5*/
      }
      else
      {
        v13 = (NiAVObject *)(*(int (__thiscall **)(int))(*(_DWORD *)v10 + 0x154))(v10); /*0x695cb8*/
        BhkCollisionObjectRecursive = NiAVObject_FindBhkCollisionObjectRecursive(v13); /*0x695cbb*/
        if ( BhkCollisionObjectRecursive && (v15 = (_DWORD *)BhkCollisionObjectRecursive[4]) != 0 ) /*0x695ccc*/
          vtbl_high = *((unsigned __int16 *)sub_497340(v15, &a6) + 1); /*0x695cd8*/
        else
          vtbl_high = sub_531D80(); /*0x695ce3*/
      }
    }
    else
    {
      v16 = (NiAVObject *)a1->vtbl->super.GetNiNode(a1); /*0x695cf1*/
      v17 = NiAVObject_FindBhkCollisionObjectRecursive(v16); /*0x695cf4*/
      if ( v17 && (v18 = v17[4]) != 0 ) /*0x695d05*/
      {
        v19 = *(_DWORD *)(v18 + 8); /*0x695d07*/
        if ( v19 && (v20 = v19 + 0x14) != 0 ) /*0x695d11*/
          vtbl_high = HIWORD(*(_DWORD *)(v20 + 0x1C)); /*0x695d16*/
        else
          vtbl_high = 0; /*0x695d1d*/
      }
      else
      {
        vtbl_high = (unsigned __int16)(dword_B2EB3C + 1); /*0x695d2b*/
        dword_B2EB3C = vtbl_high; /*0x695d31*/
        if ( !vtbl_high ) /*0x695d37*/
        {
          vtbl_high = 0xA; /*0x695d39*/
          dword_B2EB3C = 0xA; /*0x695d3e*/
        }
      }
    }
    bhkCharacterProxy_GetCollisionFilterInfo(CharProxy, &a6); /*0x695d4b*/
    v21 = *((_DWORD **)CharProxy + 0xD9); /*0x695d54*/
    v22 = (int)a6.vtbl & 0xFFC0 | 7 | (vtbl_high << 0x10); /*0x695d65*/
    if ( v21 ) /*0x695d69*/
    {
      v23 = v21[2]; /*0x695d6b*/
      if ( v23 ) /*0x695d70*/
      {
        v24 = v23 + 0x14; /*0x695d72*/
        if ( v24 ) /*0x695d75*/
          *(_DWORD *)(v24 + 0x1C) = v22; /*0x695d77*/
      }
      (*(void (__thiscall **)(_DWORD *))(*v21 + 0x80))(v21); /*0x695d82*/
    }
  }
  v25 = a1[1].super.super.refID; /*0x695d85*/
  if ( v25 ) /*0x695d8c*/
    result = (PlayerCharacter *)(*(int (__thiscall **)(UInt32))(*(_DWORD *)v25 + 0x20))(v25); /*0x695d93*/
  else
    result = 0; /*0x695d97*/
  if ( result != reference ) /*0x695d9f*/
    MEMORY[0xB3C0D0] = flt_B37ED0[0x8E] + MEMORY[0xB3C0D0]; /*0x695dad*/
  return result; /*0x695db3*/
}
