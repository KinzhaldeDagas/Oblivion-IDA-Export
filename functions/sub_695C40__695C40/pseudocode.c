PlayerCharacter *__userpurge sub_695C40@<eax>(
        MobileObject *a1@<ecx>,
        char a2@<bpl>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        int a6,
        TESObjectREFR a7)
{
  bhkCharacterProxy *CharProxy; // ebx
  UInt32 refID; // ecx
  int v10; // esi
  MobileObject *v11; // ecx
  signed int vtbl_high; // esi
  int v13; // eax
  int v14; // eax
  _DWORD *v15; // ecx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  _DWORD *v21; // ecx
  int v22; // esi
  int v23; // eax
  int v24; // eax
  UInt32 v25; // ecx
  PlayerCharacter *result; // eax

  MobilObject_PostLinkModifiedForm((int)a1, a2, a3, a4, a5, a6, (int)a7.vtbl);
  CharProxy = MobileObject_GetCharProxy(a1);
  if ( CharProxy )
  {
    refID = a1[1].super.super.refID;
    if ( refID && (*(int (__thiscall **)(UInt32))(*(_DWORD *)refID + 0x20))(refID) )
    {
      v10 = (*(int (__thiscall **)(UInt32))(*(_DWORD *)a1[1].super.super.refID + 0x20))(a1[1].super.super.refID);
      v11 = (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v10 + 0x190))(v10) != 0 ? (MobileObject *)v10 : 0;
      if ( v11 )
      {
        vtbl_high = HIWORD(sub_65ABE0(v11, &a7)->vtbl);
      }
      else
      {
        v13 = (*(int (__thiscall **)(int))(*(_DWORD *)v10 + 0x154))(v10);
        v14 = sub_480340(v13);
        if ( v14 && (v15 = *(_DWORD **)(v14 + 0x10)) != 0 )
          vtbl_high = *((unsigned __int16 *)sub_497340(v15, &a7) + 1);
        else
          vtbl_high = sub_531D80();
      }
    }
    else
    {
      v16 = (int)a1->vtbl->super.GetNiNode((TESObjectREFR *)a1);
      v17 = sub_480340(v16);
      if ( v17 && (v18 = *(_DWORD *)(v17 + 0x10)) != 0 )
      {
        v19 = *(_DWORD *)(v18 + 8);
        if ( v19 && (v20 = v19 + 0x14) != 0 )
          vtbl_high = HIWORD(*(_DWORD *)(v20 + 0x1C));
        else
          vtbl_high = 0;
      }
      else
      {
        vtbl_high = (unsigned __int16)(dword_B2EB3C + 1);
        dword_B2EB3C = vtbl_high;
        if ( !vtbl_high )
        {
          vtbl_high = 0xA;
          dword_B2EB3C = 0xA;
        }
      }
    }
    sub_57E270(CharProxy, &a7);
    v21 = *((_DWORD **)CharProxy + 0xD9);
    v22 = (int)a7.vtbl & 0xFFC0 | 7 | (vtbl_high << 0x10);
    if ( v21 )
    {
      v23 = v21[2];
      if ( v23 )
      {
        v24 = v23 + 0x14;
        if ( v24 )
          *(_DWORD *)(v24 + 0x1C) = v22;
      }
      (*(void (__thiscall **)(_DWORD *))(*v21 + 0x80))(v21);
    }
  }
  v25 = a1[1].super.super.refID;
  if ( v25 )
    result = (PlayerCharacter *)(*(int (__thiscall **)(UInt32))(*(_DWORD *)v25 + 0x20))(v25);
  else
    result = 0;
  if ( result != TESDataHandler_g_PlayerRef )
    fNumberOfWeightedProjectileExisting = fMagicTrackingMultBall + fNumberOfWeightedProjectileExisting;
  return result;
}
