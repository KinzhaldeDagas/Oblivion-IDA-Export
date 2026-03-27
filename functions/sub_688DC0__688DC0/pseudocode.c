char __cdecl sub_688DC0(TESChildCELL *a1, NiPoint3 *a2, float *a3, char a4)
{
  TESObjectREFRVtbl *vtbl; // ecx
  TESObjectREFRVtbl *v5; // edi
  int v6; // eax
  TargetData *v7; // eax
  float *v8; // eax
  float *v9; // eax
  float *v10; // eax
  int v12; // eax
  bool v13; // cf
  float y; // edx
  float z; // eax
  double v16; // st7
  float v17; // ecx
  float v18; // eax
  float v19; // edx
  double v20; // st7
  TESObjectCELL *ParentCell; // eax
  TESObjectCELL *v22; // eax
  char v23; // al
  float *v24; // eax
  float v25; // ecx
  float v26; // edx
  float v27; // eax
  char v28; // bl
  double x; // st7
  float v30; // ecx
  float *v31; // [esp-4h] [ebp-8Ch]
  float v32; // [esp+0h] [ebp-88h]
  float v33; // [esp+0h] [ebp-88h]
  float v34; // [esp+0h] [ebp-88h]
  float v35; // [esp+0h] [ebp-88h]
  float v36; // [esp+0h] [ebp-88h]
  char v37; // [esp+1Bh] [ebp-6Dh] BYREF
  int v38; // [esp+1Ch] [ebp-6Ch]
  float v39; // [esp+20h] [ebp-68h]
  float v40; // [esp+24h] [ebp-64h]
  float v41; // [esp+28h] [ebp-60h]
  float v42[3]; // [esp+2Ch] [ebp-5Ch] BYREF
  NiPoint3 v43; // [esp+38h] [ebp-50h] BYREF
  float v44[2]; // [esp+44h] [ebp-44h] BYREF
  float v45; // [esp+4Ch] [ebp-3Ch]
  float v46[2]; // [esp+50h] [ebp-38h] BYREF
  float v47; // [esp+58h] [ebp-30h]
  float v48[3]; // [esp+5Ch] [ebp-2Ch] BYREF
  TeleportData v49; // [esp+68h] [ebp-20h] BYREF
  unsigned int v50; // [esp+84h] [ebp-4h]

  if ( !byte_B3C089 )
  {
    if ( a1 )
    {
      vtbl = (TESObjectREFRVtbl *)a1[0x16].vtbl;
      if ( vtbl )
      {
        if ( !(*((int (__thiscall **)(TESObjectREFRVtbl *))vtbl->super.super.InitializeComponent + 2))(vtbl) )
        {
          v5 = (TESObjectREFRVtbl *)a1[0x16].vtbl;
          if ( (PlayerCharacter *)(*((int (__thiscall **)(TESObjectREFRVtbl *))v5->super.super.InitializeComponent + 0x33))(v5) != TESDataHandler_g_PlayerRef )
          {
            v6 = (*((int (__thiscall **)(TESObjectREFRVtbl *))v5->super.super.InitializeComponent + 0x61))(v5);
            if ( !v6 )
              return 0;
            v7 = *(TargetData **)(v6 + 0x28);
            if ( !v7 || (PlayerCharacter *)sub_569E60(v7).form != TESDataHandler_g_PlayerRef )
              return 0;
          }
          v32 = flt_A2FF44;
          v31 = (float *)(*((int (__thiscall **)(TESChildCELL *))a1->vtbl + 0x5D))(a1);
          v8 = TESDataHandler_g_PlayerRef->vtbl->super.super.super.GetPos(TESDataHandler_g_PlayerRef);
          if ( sub_480520(v8, v31, v32) >= 0 )
            return 0;
          (*((void (__thiscall **)(TESChildCELL *))a1->vtbl + 0x5D))(a1);
          TESDataHandler_g_PlayerRef->vtbl->super.super.super.GetPos((TESObjectREFR *)TESDataHandler_g_PlayerRef);
          v33 = flt_A31E2C;
          v9 = (float *)(*((int (__thiscall **)(TESChildCELL *))a1->vtbl + 0x5D))(a1);
          if ( !sub_47D810(&a2->x, v9, v33) )
            return 0;
          v34 = flt_A31E2C;
          v10 = TESDataHandler_g_PlayerRef->vtbl->super.super.super.GetPos(TESDataHandler_g_PlayerRef);
          if ( !sub_47D810(a3, v10, v34) )
            return 0;
          if ( sub_480520(&a2->x, a3, flt_A31E2C) >= 0 )
          {
            v37 = 0;
            if ( sub_6843C0((int)a1, &a2->x, a3, &v37) )
              return v37;
            if ( dword_B3C084 == dword_B02C54 )
            {
              v13 = dword_B3C080 == 0xFFFFFFFF;
              v12 = dword_B3C080 + 1;
              dword_B3C080 = v12;
              if ( !v13 && v12 != 1 )
                return 0;
            }
            else
            {
              dword_B3C084 = dword_B02C54;
              dword_B3C080 = 1;
            }
            y = a2->y;
            z = a2->z;
            v46[0] = a2->x;
            v46[1] = y;
            v47 = z;
            v16 = sub_5E0660(a1);
            v17 = *a3;
            v18 = a3[2];
            v19 = a3[1];
            v47 = v16 + v47;
            v45 = v18;
            v20 = v18 + dbl_A3AA50;
            v44[0] = v17;
            v44[1] = v19;
            v45 = v20;
            if ( !sub_6859A0(v46, v44) )
            {
              sub_685BE0((int)a1, &a2->x, a3, 0);
              return 0;
            }
            if ( !Actor_IsSwimming(a1)
              || (v35 = flt_A6E688,
                  ParentCell = TESObjectREFR_GetParentCell((TESObjectREFR *)a1),
                  !Actor_IsUnderwater__(a1, (int)a2, (ExtraDataList *)ParentCell, v35))
              || (v36 = flt_A6E688,
                  v22 = TESObjectREFR_GetParentCell((TESObjectREFR *)a1),
                  !Actor_IsUnderwater__(a1, (int)a3, (ExtraDataList *)v22, v36)) )
            {
              sub_68CB30(&v49);
              v50 = 0;
              v23 = a4 || byte_B15824;
              sub_686450((MobileObject *)a1, a2, &v49, 0, v23);
              v24 = (float *)sub_6899C0((char *)&v49);
              v25 = *v24;
              v26 = v24[1];
              v27 = v24[2];
              v42[0] = v25;
              LOBYTE(v38) = a4;
              while ( 2 )
              {
                v28 = 1;
                while ( 1 )
                {
                  v42[1] = v26;
                  v42[2] = v27;
                  byte_B3C088 = 1;
                  sub_686A40(&v43.x, (MobileObject *)a1, v42, a3);
                  x = v43.x;
                  byte_B3C088 = 0;
                  v39 = x - *a3;
                  v40 = v43.y - a3[1];
                  v41 = v43.z - a3[2];
                  v48[0] = v39;
                  v48[1] = v40;
                  v48[2] = v41;
                  if ( sub_404C90(v48) < flt_A56670 )
                    v28 = 0;
                  if ( !sub_687DA0((MobileObject *)a1, v42, &v43, v38) )
                  {
                    sub_685BE0((int)a1, &a2->x, a3, 0);
                    v50 = 0xFFFFFFFF;
                    TESTexture::ClearComponentReferences(&v49);
                    return 0;
                  }
                  if ( !v28 )
                    break;
                  v26 = v43.y;
                  v27 = v43.z;
                  v42[0] = v43.x;
                }
                if ( !(_BYTE)v38 && bDebugSmoothing && srcObj == a1 )
                {
                  v30 = a2->x;
                  v26 = a2->y;
                  v27 = a2->z;
                  LOBYTE(v38) = 1;
                  v42[0] = v30;
                  continue;
                }
                break;
              }
              v50 = 0xFFFFFFFF;
              TESTexture::ClearComponentReferences(&v49);
              sub_685BE0((int)a1, &a2->x, a3, 1);
            }
          }
        }
      }
    }
  }
  return 1;
}
