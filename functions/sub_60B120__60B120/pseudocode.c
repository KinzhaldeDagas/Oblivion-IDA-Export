void __thiscall sub_60B120(ArrowProjectile *this, int *arg0, float *arg4, TESChildCELL *arg8, int a5)
{
  ArrowProjectile_CollisionData *v6; // eax
  ArrowProjectile_CollisionData *unk05C; // eax
  ArrowProjectile_CollisionData *v8; // eax
  float *v9; // eax
  bhkCharacterProxy *CharProxy; // eax
  char *v11; // eax
  float *v12; // eax
  __int128 v13; // xmm0
  double v14; // st6
  NiNode *(__thiscall *GetNiNode)(TESObjectREFR *); // edx
  double speed; // st7
  int v17; // eax
  NiTransform *v18; // eax
  float *v19; // ecx
  NiNode *(__thiscall *v20)(TESObjectREFR *); // edx
  int v21; // eax
  TESChildCELL *v22; // esi
  Actor *shooter; // ecx
  Actor *v24; // edi
  int v25; // eax
  TESForm *v26; // eax
  Atmosphere *v27; // eax
  NiAVObject *v28; // eax
  ArrowProjectile_CollisionData *v29; // eax
  int v30; // eax
  int v31; // eax
  int *v32; // eax
  int v33; // eax
  float *v34; // esi
  int v35; // eax
  __m128 *v36; // eax
  float v37; // edi
  int v38; // eax
  ArrowProjectile_CollisionData *v39; // eax
  double v40; // st7
  double v41; // st5
  double v42; // st6
  double v43; // st7
  const char *v44; // edi
  TESObjectCELL *ParentCell; // eax
  TESObjectCELL *v46; // eax
  float *v47; // eax
  Actor *v48; // ecx
  int v49; // eax
  MagicCaster *p_magicCaster; // ecx
  EnchantmentItem *arrowEnch; // eax
  void (__thiscall **p_SetCastingTarget)(MagicCaster *, MagicTarget *); // edi
  int v53; // eax
  TESForm *v54; // eax
  AlchemyItem *poison; // edx
  void (__thiscall **v56)(MagicCaster *, MagicTarget *); // edi
  int v57; // eax
  TESForm *v58; // eax
  EnchantmentItem *bowEnch; // edx
  void (__thiscall **v60)(MagicCaster *, MagicTarget *); // edi
  int v61; // eax
  TESForm *v62; // eax
  TESChildCELL *v63; // edi
  TESObjectCELL *v64; // eax
  int v65; // eax
  _DWORD *v66; // ecx
  NiTransform *p_m_worldTransform; // edi
  NiTransform *v68; // eax
  int v69; // eax
  float x; // esi
  float y; // eax
  float z; // edx
  float v73; // [esp+0h] [ebp-260h]
  int v74; // [esp+4h] [ebp-25Ch]
  int v75; // [esp+18h] [ebp-248h]
  UInt32 v76; // [esp+1Ch] [ebp-244h]
  const char *v77; // [esp+20h] [ebp-240h]
  int v78; // [esp+24h] [ebp-23Ch]
  float *a2a; // [esp+24h] [ebp-23Ch]
  signed int a2b; // [esp+24h] [ebp-23Ch]
  float v81; // [esp+48h] [ebp-218h]
  float v82; // [esp+48h] [ebp-218h]
  float v83; // [esp+48h] [ebp-218h]
  float v84; // [esp+4Ch] [ebp-214h]
  _DWORD *v85; // [esp+4Ch] [ebp-214h]
  float v86; // [esp+50h] [ebp-210h]
  NiAVObject *v87; // [esp+50h] [ebp-210h]
  float v88; // [esp+54h] [ebp-20Ch]
  void *v89; // [esp+54h] [ebp-20Ch]
  MagicTarget *v90; // [esp+54h] [ebp-20Ch]
  NiPoint3 a3; // [esp+58h] [ebp-208h] BYREF
  float v92; // [esp+64h] [ebp-1FCh]
  TESChildCELL *v93; // [esp+68h] [ebp-1F8h]
  int v94; // [esp+6Ch] [ebp-1F4h]
  float *v95; // [esp+70h] [ebp-1F0h]
  NiPoint3 a4; // [esp+74h] [ebp-1ECh] BYREF
  int v97; // [esp+80h] [ebp-1E0h] BYREF
  NiTransform a2; // [esp+84h] [ebp-1DCh] BYREF
  unsigned int v99; // [esp+C0h] [ebp-1A0h]
  float v100; // [esp+C4h] [ebp-19Ch]
  __m128 v101; // [esp+D0h] [ebp-190h] BYREF
  __m128 v102; // [esp+E0h] [ebp-180h] BYREF
  int v103; // [esp+F0h] [ebp-170h]
  int v104; // [esp+F4h] [ebp-16Ch]
  __m128 v105[4]; // [esp+100h] [ebp-160h] BYREF
  __m128 v106[3]; // [esp+140h] [ebp-120h] BYREF
  __m128 v107; // [esp+170h] [ebp-F0h] BYREF
  __m128 v108[4]; // [esp+180h] [ebp-E0h] BYREF
  __m128 v109[4]; // [esp+1C0h] [ebp-A0h] BYREF
  __m128 v110[4]; // [esp+200h] [ebp-60h] BYREF
  unsigned int v111; // [esp+25Ch] [ebp-4h]
  NiPoint3 v112; // 0:^10.12

  v95 = arg4;
  v93 = arg8;
  v6 = (ArrowProjectile_CollisionData *)FormHeapAlloc(0x54u);
  this->unk05C = v6;
  LODWORD(v6->unk00[0]) = 1;
  this->unk05C->unk2C[0] = 0.0;
  this->unk05C->ninode = 0;
  unk05C = this->unk05C;
  unk05C->unk00[4] = *arg4;
  unk05C->unk00[5] = arg4[1];
  unk05C->unk00[6] = arg4[2];
  v8 = this->unk05C;
  LODWORD(v8->unk00[1]) = *arg0;
  LODWORD(v8->unk00[2]) = arg0[1];
  LODWORD(v8->unk00[3]) = arg0[2];
  qmemcpy(&this->unk05C->unk2C[1], &stru_B26AF0[0xA].unk2C, 0x24u);
  v9 = &this->unk05C->unk00[7];
  *v9 = Vector3_InitValue_;
  v9[1] = *(&Vector3_InitValue_ + 1);
  v9[2] = dword_B3F9B0;
  if ( MobileObject_GetCharProxy(&this->super) )
  {
    CharProxy = MobileObject_GetCharProxy(&this->super);
    if ( CharProxy && (v11 = *((char **)CharProxy + 2)) != 0 )
      v12 = (float *)sub_8AC0A0(v11);
    else
      v12 = (float *)&stru_BA7A40;
    v13 = *(_OWORD *)v12;
    a2.rot.data[2][1] = *v12;
    v14 = flt_A7DEB4;
    *(_OWORD *)&a2.rot.data[1][0] = v13;
    if ( -v14 == a2.rot.data[2][1] )
    {
      if ( this->super.vtbl->super.GetNiNode(this) )
      {
        GetNiNode = this->super.vtbl->super.GetNiNode;
        speed = this->speed;
        v86 = speed * *(float *)&dword_B258DC;
        v92 = speed * *(float *)&qword_B258E0;
        v84 = speed * *((float *)&qword_B258E0 + 1);
        a3.x = v86;
        a3.y = v92;
        a3.z = v84;
        v17 = (int)GetNiNode((TESObjectREFR *)this);
        v18 = sub_7101F0((NiTransform *)(v17 + 0x64), &a2, &a3);
        v19 = &this->unk05C->unk00[7];
        *v19 = v18->rot.data[0][0];
        v19[1] = v18->rot.data[0][1];
        v19[2] = v18->rot.data[0][2];
      }
    }
    else
    {
      sub_43F3E0(&this->unk05C->unk00[7], (__m128 *)a2.rot.data[1]);
    }
  }
  v20 = this->super.vtbl->super.GetNiNode;
  this->unk060 = 1;
  v85 = 0;
  v21 = (int)v20((TESObjectREFR *)this);
  v22 = v93;
  v87 = (NiAVObject *)v21;
  if ( v93 && v21 )
  {
    shooter = this->shooter;
    if ( shooter )
    {
      if ( shooter->vtbl->GetCombatController(shooter) )
      {
        v24 = this->shooter;
        v78 = (*((int (__thiscall **)(TESChildCELL *))v22->vtbl + 0x5D))(v22);
        v25 = (int)v24->vtbl->GetCombatController(v24);
        sub_618120(v25, (char)v24, v78, 0.0);
      }
    }
    this->unk05C->ninode = (NiNode *)v22;
    a2a = &this->unk05C->ninode->members.super.m_localTransform.rot.data[1][2];
    v26 = this->super.vtbl->super.GetBaseForm(this);
    Script_AddEventToExtraScript(v26, a2a, 0x100);
    if ( a5 )
    {
      v27 = (Atmosphere *)sub_47FA60(*(int **)(a5 + 8));
      if ( v27 )
      {
        v28 = sub_452A60(v27);
        if ( v28 )
        {
          LODWORD(this->unk05C->unk2C[0]) = v28;
          v85 = (_DWORD *)a5;
        }
      }
    }
    v29 = this->unk05C;
    if ( !LODWORD(v29->unk2C[0]) )
    {
      LODWORD(v29->unk2C[0]) = (TESChildCELL)v22[0xF].vtbl;
      v30 = sub_480340(LODWORD(this->unk05C->unk2C[0]));
      if ( !v30 )
      {
LABEL_33:
        FormHeapFree((unsigned int)this->unk05C);
        this->unk05C = 0;
        this->unk060 = 0;
        return;
      }
      v85 = *(_DWORD **)(v30 + 0x10);
    }
    if ( v85 && (v31 = v85[2]) != 0 && (v32 = (int *)(v31 + 0x14)) != 0 && (v33 = *v32) != 0 )
      v34 = *(float **)(v33 + 8);
    else
      v34 = 0;
    if ( v85 )
      v35 = v85[2];
    else
      v35 = 0;
    v36 = *(__m128 **)(v35 + 0x50);
    v105[0] = v36[1];
    v105[1] = v36[2];
    v105[2] = v36[3];
    v105[3] = v36[4];
    sub_5398E0((int)v109, (float *)&v87->members.m_worldTransform);
    sub_8B1FF0(v108, v105, v109);
    v100 = 1.0;
    a2.rot.data[1][0] = 0.0;
    a2.rot.data[1][1] = flt_A6F3E0;
    v103 = 0;
    v104 = 0;
    a2.rot.data[1][2] = 0.0;
    v99 = 0xFFFFFFFF;
    a2.rot.data[2][0] = 0.0;
    a2.rot.data[2][1] = 0.0;
    a2.rot.data[2][2] = flt_A6F3DC;
    a2.pos.x = 0.0;
    a2.pos.y = 0.0;
    sub_88FCC0(&v101, v108, (__m128 *)a2.rot.data[1]);
    sub_88FCC0(&v102, v108, (__m128 *)&a2.rot.data[2][1]);
    sub_6077F0(v34, (int)&v101, (int)&a2.pos.z);
    if ( v100 >= 1.0 )
      goto LABEL_33;
    v37 = v34[4];
    v92 = v37;
    if ( v99 != 0xFFFFFFFF )
    {
      v38 = (*(int (__thiscall **)(float *))(*(_DWORD *)v34 + 0x88))(v34);
      if ( v38 )
      {
        v92 = COERCE_FLOAT((*(int (__thiscall **)(int, unsigned int))(*(_DWORD *)v38 + 0x9C))(v38, v99));
        v37 = v92;
      }
      else
      {
        PrintError("The arrow raycast has returned a sub-shape key, but the shape was unable to find a shape collection");
      }
    }
    v39 = this->unk05C;
    v40 = v39->unk00[8];
    v39 = (ArrowProjectile_CollisionData *)((char *)v39 + 0x1C);
    v41 = v39->unk00[0] * v39->unk00[0];
    v42 = v39->unk00[2] * v39->unk00[2];
    v81 = v40 * v40 + v41 + v42;
    v82 = sqrt(v81);
    sub_609D50(this, v41, v82, v82, *arg0, arg0[1], arg0[2], (int)v85, SLOBYTE(v37));
    v88 = -this->unk088;
    v83 = -this->unk08C;
    *(float *)&v94 = -this->unk090;
    a3.x = v88;
    a3.y = v83;
    a3.z = *(float *)&v94;
    sub_43F350(&a3.x);
    a3.x = a3.x + *v95;
    a3.y = v95[1] + a3.y;
    a3.z = v95[2] + a3.z;
    v43 = sub_43F350(&a3.x);
    v44 = (const char *)sub_5361B0(SLODWORD(v37));
    if ( v44 )
    {
      TESObjectREFR_GetParentCell((TESObjectREFR *)this);
      a2b = sub_4C9BE0((TESObjectREFR *)this);
      ParentCell = TESObjectREFR_GetParentCell((TESObjectREFR *)this);
      *(float *)&v94 = COERCE_FLOAT(sub_441800(ParentCell, a2b, 3u));
      v89 = (void *)FormHeapAlloc(0x20u);
      v111 = 0;
      if ( v89 )
      {
        v43 = flt_A31E2C;
        v75 = *arg0;
        v76 = arg0[1];
        v77 = (const char *)arg0[2];
        v112 = a3;
        v74 = v94;
        v73 = flt_A31E2C;
        v46 = TESObjectREFR_GetParentCell((TESObjectREFR *)this);
        v47 = sub_5713F0(
                v89,
                (int)v46,
                v73,
                v74,
                v44,
                v112.x,
                v112.y,
                SLODWORD(v112.z),
                *(float *)&v75,
                v76,
                v77,
                1.0,
                0);
      }
      else
      {
        v47 = 0;
      }
      v111 = 0xFFFFFFFF;
      sub_678D30((int *)&ActorProcessManager_ptr, (volatile LONG *)v47);
    }
    v48 = this->shooter;
    if ( v48 )
    {
      *(float *)&v49 = COERCE_FLOAT((int)v48->members.magicCaster.vtbl->GetActiveMagicItem(&v48->members.magicCaster));
      p_magicCaster = &this->shooter->members.magicCaster;
      v94 = v49;
      v90 = (MagicTarget *)((int (__thiscall *)(MagicCaster *))p_magicCaster->vtbl->GetCastingTarget)(p_magicCaster);
      arrowEnch = this->arrowEnch;
      if ( arrowEnch )
      {
        this->shooter->members.magicCaster.vtbl->SetActiveMagicItem(
          &this->shooter->members.magicCaster,
          (EnchantmentItem *)((char *)arrowEnch + 0x18));
        p_SetCastingTarget = &this->shooter->members.magicCaster.vtbl->SetCastingTarget;
        v53 = (*((int (__thiscall **)(TESChildCELL *))v93->vtbl + 0x49))(v93);
        (*p_SetCastingTarget)(&this->shooter->members.magicCaster, (MagicTarget *)v53);
        v54 = this->super.vtbl->super.GetBaseForm(this);
        MagicCaster_UseActiveMagicItem(&this->shooter->members.magicCaster.vtbl, v41, v43, v42, (int)v54);
      }
      poison = this->poison;
      if ( poison )
      {
        this->shooter->members.magicCaster.vtbl->SetActiveMagicItem(
          &this->shooter->members.magicCaster,
          (AlchemyItem *)((char *)poison + 0x24));
        v56 = &this->shooter->members.magicCaster.vtbl->SetCastingTarget;
        v57 = (*((int (__thiscall **)(TESChildCELL *))v93->vtbl + 0x49))(v93);
        (*v56)(&this->shooter->members.magicCaster, (MagicTarget *)v57);
        v58 = this->super.vtbl->super.GetBaseForm(this);
        MagicCaster_UseActiveMagicItem(&this->shooter->members.magicCaster.vtbl, v41, v43, v42, (int)v58);
      }
      bowEnch = this->bowEnch;
      if ( bowEnch )
      {
        this->shooter->members.magicCaster.vtbl->SetActiveMagicItem(
          &this->shooter->members.magicCaster,
          (EnchantmentItem *)((char *)bowEnch + 0x18));
        v60 = &this->shooter->members.magicCaster.vtbl->SetCastingTarget;
        v61 = (*((int (__thiscall **)(TESChildCELL *))v93->vtbl + 0x49))(v93);
        (*v60)(&this->shooter->members.magicCaster, (MagicTarget *)v61);
        v62 = this->super.vtbl->super.GetBaseForm(this);
        MagicCaster_UseActiveMagicItem(&this->shooter->members.magicCaster.vtbl, v41, v43, v42, (int)v62);
      }
      this->shooter->members.magicCaster.vtbl->SetActiveMagicItem(&this->shooter->members.magicCaster, (MagicItem *)v94);
      this->shooter->members.magicCaster.vtbl->SetCastingTarget(&this->shooter->members.magicCaster, v90);
    }
    v63 = v93;
    v64 = TESObjectREFR_GetParentCell((TESObjectREFR *)v93);
    if ( v64 && (sub_4440C0(v64), v65) )
      v66 = *(_DWORD **)(v65 + 0x24);
    else
      v66 = 0;
    if ( v66 )
    {
      if ( sub_536AE0(v66, (int)v63) )
      {
        if ( v63 != (TESChildCELL *)0xFFFFFFBC )
          Script_AddEventToExtraScript(v63, &v63[0x11], 0x10000000);
      }
    }
    if ( this->arrowEnch )
      this->unk060 = 3;
    p_m_worldTransform = &v87->members.m_worldTransform;
    v68 = sub_7101F0(&v87->members.m_worldTransform, &a2, (NiPoint3 *)&dword_B258DC);
    sub_6088F0(
      (float *)this,
      *(float *)arg0,
      *((float *)arg0 + 1),
      *((float *)arg0 + 2),
      v68->rot.data[0][0],
      v68->rot.data[0][1],
      v68->rot.data[0][2],
      v85);
    switch ( LODWORD(v92) )
    {
      case 0:
      case 3:
      case 5:
      case 0xA:
      case 0xB:
      case 0xD:
      case 0xF:
      case 0x12:
      case 0x14:
      case 0x19:
      case 0x1A:
      case 0x1C:
      case 0x1E:
        goto LABEL_66;
      default:
        v69 = *sub_497340(v85, &v97) & 0x3F;
        if ( v69 && (v69 <= 3 || v69 > 6) )
        {
          a4.x = 0.0;
          a4.y = v100 * dbl_A687B0 - dbl_A3F428;
          a4.z = 0.0;
          a4.y = a4.y + dbl_A2F910;
          sub_53D4B0(p_m_worldTransform, &a3.x, &a4);
          x = a3.x;
          TESObjectREFR_SetPosition((TESObjectREFR *)this, a3.x, a3.y, a3.z);
          y = a3.y;
          z = a3.z;
          v87->members.m_localTransform.pos.x = x;
          v87->members.m_localTransform.pos.y = y;
          v87->members.m_localTransform.pos.z = z;
          NiAVObject_UpdateNiAVObject(v87, 0.0, 0);
          sub_5398E0((int)v110, (float *)p_m_worldTransform);
          sub_8B1FF0(v106, v105, v110);
          sub_43F3E0(&this->unk05C->unk00[1], &v107);
          sub_607740((int)&this->unk05C->unk2C[1], v106);
        }
        else
        {
LABEL_66:
          sub_608DA0(&this->super, (int)arg0, (int)v95);
        }
        break;
    }
  }
}
