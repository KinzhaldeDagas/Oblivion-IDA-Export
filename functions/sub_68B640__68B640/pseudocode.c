void __userpurge sub_68B640(int *a1@<ecx>, double st6_0@<st1>, double a3@<st0>, TESChildCELL *a4, float a5)
{
  _DWORD *v7; // eax
  bool v8; // zf
  TESWorldSpace *WorldSpace; // edi
  double v10; // st5
  double v11; // st7
  int (__thiscall *v12)(TESChildCELL *); // eax
  int v13; // eax
  BSExtraData *v14; // ebx
  BSExtraDataVtbl *v15; // edi
  char *v16; // eax
  TESWorldSpace *CurrentWorldspace; // eax
  const char *v18; // eax
  const char *v19; // eax
  float *v20; // eax
  void (__thiscall **v21)(TESChildCELL *, _DWORD); // ebp
  const char *v22; // eax
  float *v23; // eax
  void (__thiscall **vtbl)(TESChildCELL *, _DWORD); // ebp
  const char *v25; // eax
  const char *v26; // eax
  TESObjectREFR *v27; // ebp
  TESObjectCELL *ParentCell; // eax
  TESObjectCELL *v29; // edi
  TESWorldSpace *v30; // eax
  TESWorldSpace *v31; // eax
  double v32; // [esp+4h] [ebp-19Ch]
  double v33; // [esp+Ch] [ebp-194h]
  double a2_4; // [esp+14h] [ebp-18Ch]
  float v35; // [esp+1Ch] [ebp-184h]
  float v36; // [esp+1Ch] [ebp-184h]
  const char *v37; // [esp+1Ch] [ebp-184h]
  float v38; // [esp+30h] [ebp-170h]
  float v39; // [esp+30h] [ebp-170h]
  float v40; // [esp+30h] [ebp-170h]
  float v41; // [esp+30h] [ebp-170h]
  float v42; // [esp+30h] [ebp-170h]
  char v43; // [esp+36h] [ebp-16Ah]
  bool v44; // [esp+37h] [ebp-169h]
  int a2; // [esp+38h] [ebp-168h] BYREF
  float v46; // [esp+3Ch] [ebp-164h]
  float v47; // [esp+40h] [ebp-160h]
  float v48; // [esp+44h] [ebp-15Ch]
  float v49; // [esp+48h] [ebp-158h]
  NiPoint3 v50; // [esp+4Ch] [ebp-154h] BYREF
  float v51; // [esp+58h] [ebp-148h]
  float v52; // [esp+5Ch] [ebp-144h]
  int v53; // [esp+60h] [ebp-140h] BYREF
  float v54; // [esp+64h] [ebp-13Ch]
  float v55; // [esp+68h] [ebp-138h]
  int v56; // [esp+6Ch] [ebp-134h] BYREF
  float v57; // [esp+70h] [ebp-130h]
  float v58; // [esp+74h] [ebp-12Ch]
  int v59; // [esp+78h] [ebp-128h]
  float v60; // [esp+7Ch] [ebp-124h]
  NiPoint3 v61; // [esp+80h] [ebp-120h]
  int v62; // [esp+8Ch] [ebp-114h] BYREF
  float v63; // [esp+90h] [ebp-110h]
  float v64; // [esp+94h] [ebp-10Ch]
  char Format[260]; // [esp+98h] [ebp-108h] BYREF

  if ( a4 )
  {
    if ( a5 > 0.0 && IsWeaponReady(a4) )
    {
      if ( !(*((int (__thiscall **)(TESChildCELL *))a4->vtbl + 0xE0))(a4)
        || (v7 = (_DWORD *)(*((int (__thiscall **)(TESChildCELL *))a4->vtbl + 0xE0))(a4), IsWeaponReady(v7)) )
      {
        if ( TESObjectREFR_GetParentCell((TESObjectREFR *)a4) )
        {
          v8 = TES->currentInteriorCell == 0;
          v59 = 0;
          v44 = 0;
          if ( v8 )
          {
            WorldSpace = TESObjectREFR_GetWorldSpace((TESObjectREFR *)a4);
            v44 = WorldSpace == TES::GetCurrentWorldspace(TES);
          }
          v52 = 0.0;
          v43 = 0;
          v10 = sub_5E65B0((TESObjectREFR *)a4);
          v60 = a3;
          v11 = a5;
          v12 = *((int (__thiscall **)(TESChildCELL *))a4->vtbl + 0x5D);
          v49 = a5;
          v13 = v12(a4);
          a2 = *(int *)v13;
          v46 = *(float *)(v13 + 4);
          v14 = (BSExtraData *)(a1 + 5);
          v47 = *(float *)(v13 + 8);
          v15 = sub_42B410((BSExtraData *)(a1 + 5));
          while ( v15 )
          {
            v43 = sub_68CA20(v15);
            v16 = sub_6899C0((char *)v15);
            v56 = *(int *)v16;
            v57 = *((float *)v16 + 1);
            v58 = *((float *)v16 + 2);
            if ( v44 )
            {
              if ( sub_43F7C0((int *)TES, (float *)&a2, (float *)&v56, (float *)&v62, flt_A427E4) )
              {
                CurrentWorldspace = TES::GetCurrentWorldspace(TES);
                v59 = (int)sub_44A270((TESWorldSpace **)TESDataHandler, *(float *)&v62, v63, CurrentWorldspace, 0);
                v56 = v62;
                v57 = v63;
                v58 = v64;
              }
            }
            v50.x = *(float *)&a2 - *(float *)&v56;
            v50.y = v46 - v57;
            v50.z = v47 - v58;
            v48 = v50.y * v50.y + v50.x * v50.x + v50.z * v50.z;
            v48 = sqrt(v48);
            v38 = v48 / v60;
            st6_0 = v49;
            v10 = v38;
            if ( v38 > (double)v49 )
            {
              if ( srcObj == a4 )
              {
                v22 = (const char *)(*((int (__thiscall **)(TESChildCELL *))a4->vtbl + 0x35))(a4);
                _sprintf(Format, "Actor '%s' placed along segment.", v22);
                Interface_ConsolePrint(Format);
              }
              v42 = v49;
              v49 = 0.0;
              v23 = (float *)sub_6899C0((char *)v15);
              v48 = v23[1] - v46;
              v51 = v23[2] - v47;
              v50.x = *v23 - *(float *)&a2;
              v50.y = v48;
              v50.z = v51;
              sub_43F350(&v50.x);
              *(float *)&v53 = v50.x * v60;
              v54 = v50.y * v60;
              v55 = v60 * v50.z;
              v61.x = *(float *)&v53 * v42;
              v61.y = v54 * v42;
              v61.z = v42 * v55;
              v50 = v61;
              *(float *)&v53 = v61.x + *(float *)&a2;
              a2 = v53;
              v54 = v61.y + v46;
              v46 = v54;
              v55 = v61.z + v47;
              v47 = v55;
              v10 = v61.y * v61.y;
              st6_0 = v61.z * v61.z;
              v51 = v61.x * v61.x + v10 + st6_0;
              v51 = sqrt(v51);
              vtbl = (void (__thiscall **)(TESChildCELL *, _DWORD))a4->vtbl;
              v52 = v51 + v52;
              v11 = sub_683CB0(&v50.x);
              v36 = v11;
              vtbl[0x7A](a4, LODWORD(v36));
              break;
            }
            v52 = v48 + v52;
            a2 = v56;
            v46 = v57;
            v47 = v58;
            if ( v59 )
            {
              if ( srcObj == a4 )
              {
                v19 = (const char *)(*((int (__thiscall **)(TESChildCELL *))a4->vtbl + 0x35))(a4);
                _sprintf(Format, "Actor '%s' placed at edge of world.", v19);
                Interface_ConsolePrint(Format);
              }
              v49 = 0.0;
              v20 = (float *)sub_6899C0((char *)v15);
              v21 = (void (__thiscall **)(TESChildCELL *, _DWORD))((char *)a4->vtbl + 0x1E8);
              v48 = v20[1] - v46;
              v41 = v20[2] - v47;
              *(float *)&v53 = *v20 - *(float *)&a2;
              v54 = v48;
              v55 = v41;
              v11 = sub_683CB0((float *)&v53);
              v35 = v11;
              (*v21)(a4, LODWORD(v35));
              break;
            }
            sub_68C170(a1 + 5, v15);
            v15 = sub_42B410((BSExtraData *)(a1 + 5));
            v49 = v49 - v38;
            if ( !v15 )
            {
              if ( srcObj == a4 )
              {
                v18 = (const char *)(*((int (__thiscall **)(TESChildCELL *))a4->vtbl + 0x35))(a4);
                _sprintf(Format, "Actor '%s' completed high path.", v18);
                Interface_ConsolePrint(Format);
              }
              sub_68B4F0(a1, st6_0, (float ***)a4);
              v15 = sub_42B410((BSExtraData *)(a1 + 5));
              if ( !v15 && sub_68A140(a1) )
              {
                v39 = sub_6899D0((float *)a1);
                st6_0 = v39;
                if ( v39 > 0.0 )
                {
                  v40 = v39 - dbl_A2FC80;
                  st6_0 = v48;
                  if ( v48 < (double)v40 )
                    v40 = v48;
                  sub_43F350(&v50.x);
                  NiPoint3::MutliplyByValue(&v50, v40);
                  *(float *)&a2 = v50.x + *(float *)&a2;
                  v46 = v50.y + v46;
                  v47 = v50.z + v47;
                }
              }
            }
            v11 = 0.0;
            if ( 0.0 == v49 )
              break;
          }
          if ( srcObj == a4 )
          {
            v8 = sub_42B410(v14) == 0;
            v25 = "INCOMPLETE";
            if ( v8 )
              v25 = "COMPLETE";
            v11 = v60;
            v26 = (const char *)(*((int (__thiscall **)(TESChildCELL *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, const char *))a4->vtbl
                                 + 0x35))(
                                  a4,
                                  COERCE_UNSIGNED_INT64(v60),
                                  HIDWORD(COERCE_UNSIGNED_INT64(v60)),
                                  COERCE_UNSIGNED_INT64(v52),
                                  HIDWORD(COERCE_UNSIGNED_INT64(v52)),
                                  COERCE_UNSIGNED_INT64(a5),
                                  HIDWORD(COERCE_UNSIGNED_INT64(a5)),
                                  v25);
            _sprintf(
              Format,
              "Actor '%s' with speed %.2f pathed in MiddleHigh %.2f units in delta %.2f. (%s)",
              v26,
              v32,
              v33,
              a2_4,
              v37);
            Interface_ConsolePrint(Format);
          }
          TESObjectREFR_SetPosition((TESObjectREFR *)a4, *(float *)&a2, v46, v47);
          v27 = (TESObjectREFR *)(*((int (__thiscall **)(TESChildCELL *))a4->vtbl + 0xE0))(a4);
          if ( v27 )
            TESObjectREFR_SetPosition(v27, *(float *)&a2, v46, v47);
          if ( !v43
            || (v14 = (BSExtraData *)TESObjectREFR_GetWorldSpace((TESObjectREFR *)a4),
                v14 != (BSExtraData *)TES::GetCurrentWorldspace(TES)) )
          {
            v10 = flt_A32048;
            sub_4D89D0(flt_A32048);
            if ( v27 )
            {
              v10 = flt_A32048;
              sub_4D89D0(flt_A32048);
            }
          }
          if ( !v15 )
            (*((void (__thiscall **)(TESChildCELL *, int))a4->vtbl + 0x60))(a4, 1);
          ParentCell = TESObjectREFR_GetParentCell((TESObjectREFR *)a4);
          v29 = (TESObjectCELL *)v56;
          if ( (TESObjectCELL *)v56 != ParentCell )
          {
            if ( v27 )
            {
              v30 = TESObjectREFR_GetWorldSpace(v27);
              sub_4DD4B0((int)v14, v10, st6_0, v11, (Actor *)v27, v29, v30);
            }
            v31 = TESObjectREFR_GetWorldSpace((TESObjectREFR *)a4);
            sub_4DD4B0((int)v14, v10, st6_0, v11, (Actor *)a4, v29, v31);
          }
        }
        else
        {
          sub_68A300((float ***)a1, (TESObjectREFR *)a4, a5);
        }
      }
    }
  }
}
