bool __thiscall sub_65FDA0(int *this)
{
  double v1; // st7
  int *v2; // edi
  TESChildCELL *v3; // ebx
  TESObjectREFR *v4; // esi
  float *v5; // eax
  char v6; // al
  ExtraTeleport *TeleportExtraData; // eax
  TESObjectREFR *v8; // eax
  TESObjectCELL *v9; // eax
  TESObjectREFR *v10; // eax
  bool result; // al
  TESObjectCELL *ParentCell; // [esp-8h] [ebp-40h]
  TESWorldSpace *WorldSpace; // [esp-4h] [ebp-3Ch]
  float v14; // [esp+10h] [ebp-28h]
  float v15; // [esp+14h] [ebp-24h]
  int v16[5]; // [esp+18h] [ebp-20h] BYREF
  unsigned int v17; // [esp+34h] [ebp-4h]

  v1 = flt_A32048;
  v2 = this + 0x1C1;
  v3 = 0;
  v14 = flt_A32048;
  if ( this != (int *)0xFFFFF8FC )
  {
    do
    {
      if ( !v2[1] && !*v2 )
        break;
      v4 = (TESObjectREFR *)*v2;
      if ( (*(_DWORD *)(*v2 + 8) & 0x800) == 0 && !sub_4FA560(*v2) )
      {
        sub_68A9F0(v16);
        v17 = 0;
        WorldSpace = TESObjectREFR_GetWorldSpace(v4);
        ParentCell = TESObjectREFR_GetParentCell(v4);
        v5 = v4->vtbl->GetPos(v4);
        v1 = sub_68B030(v16, v1, TESDataHandler_g_PlayerRef, v5, ParentCell, WorldSpace);
        if ( v6 )
        {
          v15 = sub_68A760((char *)v16, (int)TESDataHandler_g_PlayerRef);
          v1 = v15;
          if ( v14 > (double)v15 )
          {
            v14 = v15;
            v3 = (TESChildCELL *)v4;
          }
        }
        v17 = 0xFFFFFFFF;
        sub_68AA10(v16);
      }
      v2 = (int *)v2[1];
    }
    while ( v2 );
  }
  FormID = v3;
  result = 0;
  if ( v3 )
  {
    TeleportExtraData = GetTeleportExtraData(v3);
    v8 = (TESObjectREFR *)sub_42B410(&TeleportExtraData->super);
    if ( v8 )
    {
      v9 = TESObjectREFR_GetParentCell(v8);
      if ( v9 )
      {
        v10 = sub_4CBA80(v9, (TESForm *)TESDataHandler_g_StolenGoods, 1);
        ObjectRef = (int)v10;
        if ( v10 )
          return 1;
      }
    }
  }
  return result;
}
