char __cdecl sub_688DC0(TESChildCELL *a1, NiPoint3 *a2, float *a3, char a4)
{
  void *vtbl; // ecx
  void *v5; // edi
  int v6; // eax
  TargetData *v7; // eax
  float *v8; // eax
  float *v9; // eax
  float *v10; // eax
  int v12; // eax
  bool v13; // cf
  float y; // edx
  float z; // eax
  double ScaledCollisionHeight; // st7
  float v17; // ecx
  float v18; // eax
  float v19; // edx
  double v20; // st7
  ExtraDataList *DwordAtOffset40; // eax
  ExtraDataList *v22; // eax
  char v23; // al
  char *Head; // eax
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

  if ( !unk_B3C089 ) /*0x688de7*/
  {
    if ( a1 ) /*0x688dfd*/
    {
      vtbl = a1[0x16].vtbl; /*0x688e03*/
      if ( vtbl ) /*0x688e08*/
      {
        if ( !(*(int (__thiscall **)(void *))(*(_DWORD *)vtbl + 8))(vtbl) ) /*0x688e13*/
        {
          v5 = a1[0x16].vtbl; /*0x688e1d*/
          if ( (PlayerCharacter *)(*(int (__thiscall **)(void *))(*(_DWORD *)v5 + 0xCC))(v5) != reference ) /*0x688e32*/
          {
            v6 = (*(int (__thiscall **)(void *))(*(_DWORD *)v5 + 0x184))(v5); /*0x688e3e*/
            if ( !v6 ) /*0x688e42*/
              return 0; /*0x688e42*/
            v7 = *(TargetData **)(v6 + 0x28); /*0x688e48*/
            if ( !v7 || (PlayerCharacter *)sub_569E60(v7).form != reference ) /*0x688e60*/
              return 0; /*0x688e60*/
          }
          v32 = flt_A2FF44; /*0x688e77*/
          v31 = (float *)(*((int (__thiscall **)(TESChildCELL *))a1->vtbl + 0x5D))(a1); /*0x688e82*/
          v8 = reference->vtbl->super.super.super.GetPos(reference); /*0x688e8b*/
          if ( sub_480520(v8, v31, v32) >= 0 ) /*0x688e98*/
            return 0; /*0x688e98*/
          (*((void (__thiscall **)(TESChildCELL *))a1->vtbl + 0x5D))(a1); /*0x688ea8*/
          reference->vtbl->super.super.super.GetPos((TESObjectREFR *)reference); /*0x688eb8*/
          v33 = flt_A31E2C; /*0x688ecb*/
          v9 = (float *)(*((int (__thiscall **)(TESChildCELL *))a1->vtbl + 0x5D))(a1); /*0x688ece*/
          if ( !sub_47D810(&a2->x, v9, v33) ) /*0x688ed9*/
            return 0; /*0x688ed9*/
          v34 = flt_A31E2C; /*0x688ef6*/
          v10 = reference->vtbl->super.super.super.GetPos(reference); /*0x688f01*/
          if ( !sub_47D810(a3, v10, v34) ) /*0x688f0c*/
            return 0; /*0x688f16*/
          if ( sub_480520(&a2->x, a3, flt_A31E2C) >= 0 ) /*0x688f2e*/
          {
            v37 = 0; /*0x688f3c*/
            if ( sub_6843C0((int)a1, &a2->x, a3, &v37) ) /*0x688f41*/
              return v37; /*0x688f64*/
            if ( unk_B3C084 == dword_B02C54 ) /*0x688f70*/
            {
              v13 = unk_B3C080 == 0xFFFFFFFF; /*0x688f7a*/
              v12 = unk_B3C080 + 1; /*0x688f77*/
              unk_B3C080 = v12; /*0x688f7d*/
              if ( !v13 && v12 != 1 ) /*0x688f7a*/
                return 0; /*0x688f99*/
            }
            else
            {
              unk_B3C084 = dword_B02C54; /*0x688f9a*/
              unk_B3C080 = 1; /*0x688f9f*/
            }
            y = a2->y; /*0x688fab*/
            z = a2->z; /*0x688fae*/
            v46[0] = a2->x; /*0x688fb1*/
            v46[1] = y; /*0x688fb7*/
            v47 = z; /*0x688fbb*/
            ScaledCollisionHeight = Actor_GetScaledCollisionHeight(a1); /*0x688fbf*/
            v17 = *a3; /*0x688fc8*/
            v18 = a3[2]; /*0x688fcb*/
            v19 = a3[1]; /*0x688fce*/
            v47 = ScaledCollisionHeight + v47; /*0x688fd1*/
            v45 = v18; /*0x688fd5*/
            v20 = v18 + dbl_A3AA50; /*0x688fdd*/
            v44[0] = v17; /*0x688fe3*/
            v44[1] = v19; /*0x688feb*/
            v45 = v20; /*0x688ff0*/
            if ( !sub_6859A0(v46, v44) ) /*0x688ff9*/
            {
              sub_685BE0((int)a1, &a2->x, a3, 0); /*0x68900a*/
              return 0; /*0x689027*/
            }
            if ( !Actor_IsSwimming((Actor *)a1) /*0x689066*/
              || (v35 = flt_A6E688,
                  DwordAtOffset40 = (ExtraDataList *)Shared_GetDwordAtOffset40(a1),
                  !Actor_IsUnderwater__(a1, (int)a2, DwordAtOffset40, v35))
              || (v36 = flt_A6E688,
                  v22 = (ExtraDataList *)Shared_GetDwordAtOffset40(a1),
                  !Actor_IsUnderwater__(a1, (int)a3, v22, v36)) )
            {
              sub_68CB30(&v49); /*0x689077*/
              v50 = 0; /*0x689084*/
              v23 = a4 || byte_B15824; /*0x68909e*/
              sub_686450((MobileObject *)a1, a2, &v49, 0, v23); /*0x6890ad*/
              Head = EmbeddedList_GetHead((char *)&v49); /*0x6890b9*/
              v25 = *(float *)Head; /*0x6890be*/
              v26 = *((float *)Head + 1); /*0x6890c0*/
              v27 = *((float *)Head + 2); /*0x6890c3*/
              v42[0] = v25; /*0x6890c6*/
              LOBYTE(v38) = a4; /*0x6890d1*/
              while ( 2 ) /*0x6890d5*/
              {
                v28 = 1; /*0x6890d5*/
                while ( 1 ) /*0x6890d7*/
                {
                  v42[1] = v26; /*0x6890d7*/
                  v42[2] = v27; /*0x6890e1*/
                  unk_B3C088 = 1; /*0x6890eb*/
                  sub_686A40(&v43.x, (MobileObject *)a1, v42, a3); /*0x6890f2*/
                  x = v43.x; /*0x6890f7*/
                  unk_B3C088 = 0; /*0x6890fb*/
                  v39 = x - *a3; /*0x68910c*/
                  v40 = v43.y - a3[1]; /*0x689117*/
                  v41 = v43.z - a3[2]; /*0x689122*/
                  v48[0] = v39; /*0x68912a*/
                  v48[1] = v40; /*0x689132*/
                  v48[2] = v41; /*0x68913a*/
                  if ( NiPoint3_Length(v48) < flt_A56670 ) /*0x68914e*/
                    v28 = 0; /*0x689150*/
                  if ( !sub_687DA0((MobileObject *)a1, v42, &v43, v38) ) /*0x68916c*/
                  {
                    sub_685BE0((int)a1, &a2->x, a3, 0); /*0x6891ba*/
                    v50 = 0xFFFFFFFF; /*0x6891c6*/
                    Shared_NoOpVirtual_60D0A0(&v49); /*0x6891d1*/
                    return 0; /*0x6891eb*/
                  }
                  if ( !v28 ) /*0x689170*/
                    break; /*0x689170*/
                  v26 = v43.y; /*0x689176*/
                  v27 = v43.z; /*0x68917a*/
                  v42[0] = v43.x; /*0x68917e*/
                }
                if ( !(_BYTE)v38 && bDebugSmoothing && MEMORY[0xB333B4] == a1 ) /*0x68919d*/
                {
                  v30 = a2->x; /*0x68919f*/
                  v26 = a2->y; /*0x6891a1*/
                  v27 = a2->z; /*0x6891a4*/
                  LOBYTE(v38) = 1; /*0x6891a7*/
                  v42[0] = v30; /*0x6891ac*/
                  continue; /*0x6891b0*/
                }
                break;
              }
              v50 = 0xFFFFFFFF; /*0x6891f0*/
              Shared_NoOpVirtual_60D0A0(&v49); /*0x6891fb*/
              sub_685BE0((int)a1, &a2->x, a3, 1); /*0x689205*/
            }
          }
        }
      }
    }
  }
  return 1; /*0x688f51*/
}
