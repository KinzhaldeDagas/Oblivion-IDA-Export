void __userpurge sub_635F10(
        char *this@<ecx>,
        double a2@<st1>,
        double a3@<st2>,
        double a4@<st0>,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14)
{
  int v15; // eax
  int v16; // ebx
  bool v17; // zf
  TargetData *v18; // ecx
  int v19; // edi
  ObjectType v20; // eax
  Actor *v21; // edi
  float *v22; // eax
  double DistanceToPoint; // st7
  _DWORD *v24; // ecx
  Creature *v25; // ebp
  TESObjectREFR *v26; // ecx
  Creature *v27; // ebx
  UInt32 DwordAtOffset40; // ebp
  float *v29; // eax
  TESObjectREFR *v30; // ecx
  char *v31; // ebp
  UInt32 v32; // eax
  int v33; // ecx
  _DWORD *v34; // ebx
  UInt32 v35; // eax
  int v36; // edx
  void (__thiscall *v37)(char *, Actor *); // eax
  unsigned __int8 v38; // al
  int v39; // edx
  void (__thiscall *v40)(char *, Actor *); // eax
  char v41; // al
  double v42; // st7
  TESObjectCELL *v43; // eax
  char v44; // al
  bool v45; // al
  ActorVtbl *vtbl; // edx
  int v47; // eax
  TESObjectREFR *v48; // ecx
  char v49; // dl
  int v50; // ecx
  int v51; // edi
  int v52; // eax
  int v53; // eax
  UInt32 v54; // ebp
  void (__thiscall *v55)(char *, Actor *); // edx
  char v56; // al
  int v57; // edx
  char *v58; // ecx
  double z; // st7
  double v60; // st7
  double v61; // st6
  int v62; // eax
  float v63; // [esp+10h] [ebp-54h]
  char v64; // [esp+14h] [ebp-50h]
  BSExtraDataVtbl *v65; // [esp+14h] [ebp-50h]
  float v66; // [esp+18h] [ebp-4Ch]
  int v67; // [esp+1Ch] [ebp-48h]
  float v68; // [esp+20h] [ebp-44h]
  TESWorldSpace *WorldSpace; // [esp+20h] [ebp-44h]
  TESWorldSpace *v70; // [esp+20h] [ebp-44h]
  float v71; // [esp+24h] [ebp-40h]
  Creature *v72; // [esp+2Ch] [ebp-38h]
  float v73; // [esp+34h] [ebp-30h]
  int v74; // [esp+38h] [ebp-2Ch]
  char v75[4]; // [esp+3Ch] [ebp-28h] BYREF
  int v76; // [esp+40h] [ebp-24h]
  float v77; // [esp+44h] [ebp-20h] BYREF
  float v78[2]; // [esp+48h] [ebp-1Ch] BYREF
  int v79; // [esp+50h] [ebp-14h]
  int v80; // [esp+54h] [ebp-10h] BYREF
  float v81; // [esp+58h] [ebp-Ch]
  float v82; // [esp+5Ch] [ebp-8h]
  float v83; // [esp+60h] [ebp-4h] BYREF
  Actor *retaddr; // [esp+64h] [ebp+0h]

  v15 = (*(int (__usercall **)@<eax>(char *@<ecx>, double@<st0>))(*(_DWORD *)this + 0x184))(this, a4); /*0x635f21*/
  v16 = v15; /*0x635f23*/
  v17 = *(_BYTE *)(v15 + 0x20) == 9; /*0x635f25*/
  LOBYTE(v77) = 0; /*0x635f29*/
  if ( v17 ) /*0x635f2e*/
  {
    v18 = *(TargetData **)(v15 + 0x28); /*0x635f30*/
    v19 = *(_DWORD *)this; /*0x635f33*/
    LOBYTE(v77) = 1; /*0x635f35*/
    v20.form = sub_569E60(v18).form; /*0x635f3a*/
    (*(void (__thiscall **)(char *, ObjectType))(v19 + 0x484))(this, v20); /*0x635f48*/
  }
  v21 = retaddr; /*0x635f4a*/
  v22 = sub_566B30((TESPackage *)v16, v78, retaddr); /*0x635f56*/
  DistanceToPoint = TESObjectREFR::GetDistanceToPoint((TESObjectREFR *)retaddr, v22); /*0x635f5e*/
  v77 = DistanceToPoint; /*0x635f63*/
  v24 = *(_DWORD **)(v16 + 0x24); /*0x635f67*/
  v25 = 0; /*0x635f6a*/
  if ( v24 ) /*0x635f72*/
    v25 = (Creature *)sub_5697E0(v24); /*0x635f79*/
  if ( *((_DWORD *)this + 0xC) ) /*0x635f7f*/
  {
    if ( !*((_DWORD *)this + 0x30) ) /*0x635f86*/
      v25 = *((Creature **)this + 0xC); /*0x635f8f*/
  }
  if ( !v25 ) /*0x635f97*/
    goto LABEL_57; /*0x635f97*/
  if ( sub_4D74B0(v25) ) /*0x635f9f*/
  {
    retaddr->vtbl->super.super.GetPos((TESObjectREFR *)retaddr); /*0x635fb6*/
    if ( (*(int (__thiscall **)(char *))(*(_DWORD *)this + 0x36C))(this) == 4 /*0x635fd8*/
      || (*(int (__thiscall **)(char *))(*(_DWORD *)this + 0x36C))(this) == 9 )
    {
      if ( (*(_DWORD *)(v16 + 0x1C) & 2) != 0 && !*(_DWORD *)(v16 + 0x28) ) /*0x636033*/
        *((float *)this + 0x6B) = 0.0; /*0x63603b*/
      if ( (_BYTE)a6 ) /*0x636046*/
        (*(void (__thiscall **)(char *, Actor *, int))(*(_DWORD *)this + 0x188))(this, retaddr, 1); /*0x636055*/
      goto LABEL_17; /*0x636055*/
    }
    if ( *(this + 0xD0) ) /*0x635fda*/
    {
      v26 = *((TESObjectREFR **)this + 0x48); /*0x635fe7*/
      if ( v26 ) /*0x635fef*/
      {
        if ( sub_4D72C0(v26, 0) ) /*0x635ff3*/
        {
          if ( (_BYTE)a6 ) /*0x636001*/
            (*(void (__thiscall **)(char *, Actor *, int))(*(_DWORD *)this + 0x188))(this, retaddr, 1); /*0x636010*/
LABEL_17:
          (*(void (__thiscall **)(char *, Actor *))(*(_DWORD *)this + 0x194))(this, retaddr); /*0x636012*/
          return; /*0x636026*/
        }
      }
    }
  }
  if ( v25 == retaddr->vtbl->GetMountedHorse(retaddr) && v25->__vftable->super.super.IsDead((TESObjectREFR *)v25, 0) ) /*0x63608b*/
  {
    v27 = retaddr->vtbl->GetMountedHorse(retaddr); /*0x63609d*/
    ((void (__thiscall *)(Creature *, _DWORD))v27->__vftable->Unk_E1)(v27, 0); /*0x6360ab*/
    v27->members.super.super.process->editorPackage = 0; /*0x6360b0*/
    (*(void (__thiscall **)(char *, _DWORD))(*(_DWORD *)this + 0x178))(this, 0); /*0x6360c3*/
    ((void (__thiscall *)(Actor *, _DWORD))retaddr->vtbl->Unk_E1)(retaddr, 0); /*0x6360d1*/
    return; /*0x6360da*/
  }
  if ( sub_4D74B0(v25) && !*(this + 0xD0) && !*((_DWORD *)this + 0x48) && *(this + 0x124) != 0x7F ) /*0x636101*/
  {
    *(this + 0xD0) = 1; /*0x636103*/
    *(this + 0x124) = 0x7F; /*0x63610a*/
  }
  if ( sub_4D74B0(v25) && *(this + 0xD0) ) /*0x636120*/
  {
    if ( !*((_DWORD *)this + 0x48) ) /*0x63612d*/
      *((_DWORD *)this + 0x48) = v25; /*0x636136*/
    if ( *(this + 0x124) == 0x7F ) /*0x636143*/
    {
      DwordAtOffset40 = Shared_GetDwordAtOffset40(retaddr); /*0x636156*/
      if ( DwordAtOffset40 == Shared_GetDwordAtOffset40(*((void **)this + 0x48)) ) /*0x63615f*/
      {
        v29 = retaddr->vtbl->super.super.GetPos((TESObjectREFR *)retaddr); /*0x63616f*/
        v77 = *v29; /*0x636173*/
        v30 = *((TESObjectREFR **)this + 0x48); /*0x63617f*/
        v31 = this + 0x128; /*0x636185*/
        v78[0] = v29[1]; /*0x63618e*/
        v78[1] = v29[2]; /*0x63619c*/
        v83 = 0.0; /*0x6361a0*/
        if ( sub_4DBAE0(v30, &v77, 1, 1, (NiPoint3 *)(this + 0x128), (int *)&v83) ) /*0x6361a8*/
        {
          if ( retaddr == (Actor *)reference ) /*0x6361bd*/
          {
            ((void (__thiscall *)(PlayerCharacter *, char *))reference->vtbl->super.super.Unk_73)( /*0x6361c8*/
              reference,
              this + 0x128);
            v73 = (double)*((unsigned __int16 *)this + 0x9A) / dbl_A2FC70; /*0x6361ee*/
            DistanceToPoint = v73; /*0x6361f2*/
            ((void (__cdecl *)(_DWORD))reference->vtbl->super.super.Unk_7A)(LODWORD(v73)); /*0x6361f9*/
            sub_5E0610(reference, 0); /*0x636203*/
            *(this + 0x124) = LOBYTE(v81); /*0x63620c*/
            *(this + 0xD0) = 0; /*0x636212*/
          }
          else
          {
            v74 = *(_DWORD *)this; /*0x63623f*/
            WorldSpace = TESObjectREFR_GetWorldSpace(*((TESObjectREFR **)this + 0x48)); /*0x63624e*/
            v32 = Shared_GetDwordAtOffset40(*((void **)this + 0x48)); /*0x63624f*/
            if ( !(*(unsigned __int8 (__thiscall **)(char *, Actor *, _DWORD, _DWORD, _DWORD, UInt32, TESWorldSpace *))(v74 + 0x3DC))( /*0x63627c*/
                    this,
                    retaddr,
                    *(_DWORD *)v31,
                    *((_DWORD *)this + 0x4B),
                    *((_DWORD *)this + 0x4C),
                    v32,
                    WorldSpace) )
              goto LABEL_140; /*0x63627c*/
            *(this + 0x124) = LOBYTE(v78[0]); /*0x636286*/
            v33 = *((_DWORD *)this + 0xD); /*0x63628c*/
            if ( v33 ) /*0x636291*/
            {
              DistanceToPoint = ((double (__thiscall *)(int, Actor *))*(_DWORD *)(*(_DWORD *)v33 + 0x28))(v33, retaddr); /*0x636299*/
              v71 = DistanceToPoint; /*0x63629b*/
            }
          }
        }
        else
        {
          DistanceToPoint = TesObjectREF_GetDistance( /*0x6362ad*/
                              (TESObjectREFR *)*((_DWORD *)this + 0x48),
                              (TESObjectREFR *)retaddr,
                              0);
          if ( DistanceToPoint > fConst_200 ) /*0x6362bd*/
          {
            retaddr = *(Actor **)this; /*0x6362c5*/
            v34 = (_DWORD *)(*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 0x48) + 0x174))(*((_DWORD *)this + 0x48)); /*0x6362df*/
            v70 = TESObjectREFR_GetWorldSpace(*((TESObjectREFR **)this + 0x48)); /*0x6362ec*/
            v35 = Shared_GetDwordAtOffset40(*((void **)this + 0x48)); /*0x6362ed*/
            if ( !((unsigned __int8 (__thiscall *)(char *, Actor *, _DWORD, _DWORD, _DWORD, UInt32, TESWorldSpace *))retaddr[3].members.templateForm)( /*0x636319*/
                    this,
                    v21,
                    *v34,
                    v34[1],
                    v34[2],
                    v35,
                    v70) )
              goto LABEL_140; /*0x636319*/
            if ( (_BYTE)v79 ) /*0x636324*/
              (*(void (__thiscall **)(char *, Actor *, int))(*(_DWORD *)this + 0x188))(this, v21, 1); /*0x636333*/
            *((_DWORD *)this + 0x48) = 0; /*0x63633d*/
            sub_6FAEE0((Unk128 *)(this + 0x128), 0.0); /*0x636347*/
            *(this + 0x136) = 0; /*0x63634c*/
            *(float *)v31 = g_zeroNiPoint3.x; /*0x636359*/
            *((_DWORD *)this + 0x4B) = LODWORD(g_zeroNiPoint3.y); /*0x636362*/
            v36 = *(_DWORD *)this; /*0x63636a*/
            *((_DWORD *)this + 0x4C) = LODWORD(g_zeroNiPoint3.z); /*0x63636c*/
            v37 = *(void (__thiscall **)(char *, Actor *))(v36 + 0x194); /*0x63636f*/
            *(this + 0x124) = 0x7F; /*0x636378*/
            v37(this, v21); /*0x63637f*/
            return; /*0x636388*/
          }
        }
      }
    }
    if ( (*(int (__thiscall **)(char *))(*(_DWORD *)this + 0x36C))(this) ) /*0x636223*/
    {
      LOBYTE(v81) = 1; /*0x63622d*/
      goto LABEL_59; /*0x636232*/
    }
    if ( !(*(int (__thiscall **)(char *))(*(_DWORD *)this + 0x36C))(this) ) /*0x636395*/
    {
      v38 = *(this + 0x124); /*0x63639f*/
      if ( v38 != 0x7F && sub_4D72C0(*((TESObjectREFR **)this + 0x48), v38) && !*(this + 0xD0) ) /*0x6363c0*/
      {
        *((_DWORD *)this + 0x48) = 0; /*0x6363d7*/
        sub_6FAEE0((Unk128 *)(this + 0x128), 0.0); /*0x6363e1*/
        *(this + 0x136) = 0; /*0x6363e6*/
        *((_DWORD *)this + 0x4A) = LODWORD(g_zeroNiPoint3.x); /*0x6363f3*/
        v39 = *(_DWORD *)this; /*0x6363fa*/
        *((_DWORD *)this + 0x4B) = LODWORD(g_zeroNiPoint3.y); /*0x6363fc*/
        v40 = *(void (__thiscall **)(char *, Actor *))(v39 + 0x194); /*0x636405*/
        *((_DWORD *)this + 0x4C) = LODWORD(g_zeroNiPoint3.z); /*0x63640b*/
        *(this + 0x124) = 0x7F; /*0x636411*/
        v40(this, retaddr); /*0x636418*/
        (*(void (__thiscall **)(char *, Actor *, int))(*(_DWORD *)this + 0x188))(this, retaddr, 1); /*0x636427*/
        return; /*0x636430*/
      }
    }
    DistanceToPoint = sub_566DC0( /*0x636442*/
                        (TESPackage *)v16,
                        kTerrainLODQuadRayDirectionZ,
                        a2,
                        a3,
                        retaddr,
                        SLOBYTE(v73),
                        kTerrainLODQuadRayDirectionZ);
  }
  else
  {
LABEL_57:
    v68 = kTerrainLODQuadRayDirectionZ; /*0x63644f*/
    v67 = *(_DWORD *)v75; /*0x636452*/
    DistanceToPoint = sub_566DC0((TESPackage *)v16, v68, a2, a3, retaddr, v64, v66); /*0x636456*/
  }
  LOBYTE(v81) = v41; /*0x63645b*/
LABEL_59:
  v42 = sub_5677B0((TESPackage *)v16, DistanceToPoint, (TESObjectREFR *)retaddr, 1); /*0x63645f*/
  Double_To_SInt32(v42); /*0x636469*/
  if ( *(_BYTE *)(v16 + 0x20) == 5 ) /*0x636476*/
  {
    if ( sub_566A40((char **)v16, retaddr) ) /*0x63647b*/
    {
      v43 = (TESObjectCELL *)sub_566A40((char **)v16, retaddr); /*0x636487*/
      TESObjectCELL_IsInterior(v43); /*0x63648e*/
    }
  }
  if ( !LOBYTE(v81) && !sub_64ADA0((Actor *)this) ) /*0x6364c1*/
  {
    if ( !LOBYTE(v82) ) /*0x6364d2*/
    {
      if ( !*(this + 0xD0) /*0x636501*/
        || (sub_566DC0(
              (TESPackage *)v16,
              kTerrainLODQuadRayDirectionZ,
              a2,
              a3,
              retaddr,
              SLOBYTE(v73),
              kTerrainLODQuadRayDirectionZ),
            v44)
        || sub_64ADA0((Actor *)this) )
      {
LABEL_138:
        JUMPOUT(0x63670C); /*0x63670c*/
      }
    }
    if ( !((int (__thiscall *)(Actor *, int, float, float))retaddr->vtbl->GetMountedHorse)( /*0x63653e*/
            retaddr,
            v67,
            COERCE_FLOAT(LODWORD(v68)),
            COERCE_FLOAT(LODWORD(v71)))
      && ((*(int (__thiscall **)(char *))(*(_DWORD *)this + 0x36C))(this) == 4
       || (*(int (__thiscall **)(char *))(*(_DWORD *)this + 0x36C))(this) == 9) )
    {
      retaddr->vtbl->AddPackageWakeUp(retaddr); /*0x63654a*/
      return; /*0x636553*/
    }
    if ( v72 ) /*0x63655c*/
    {
      v45 = sub_4D74B0(v72); /*0x636564*/
      vtbl = retaddr->vtbl; /*0x63656b*/
      if ( v45 ) /*0x63656f*/
      {
        v47 = (int)vtbl->super.super.GetPos((TESObjectREFR *)retaddr); /*0x63657b*/
        *(_DWORD *)v75 = *(_DWORD *)v47; /*0x63657f*/
        v48 = *((TESObjectREFR **)this + 0x48); /*0x63658b*/
        v76 = *(_DWORD *)(v47 + 4); /*0x63659a*/
        v77 = *(float *)(v47 + 8); /*0x6365a8*/
        v83 = 0.0; /*0x6365ac*/
        if ( sub_4DBAE0(v48, (float *)v75, 1, 1, (NiPoint3 *)(this + 0x128), (int *)&v83) ) /*0x6365b4*/
        {
          v82 = *(float *)this; /*0x6365c2*/
          sub_566940((TESPackage *)v16, retaddr); /*0x6365c6*/
          v65 = sub_566A40((char **)v16, retaddr); /*0x6365da*/
          if ( (*(unsigned __int8 (__thiscall **)(char *, Actor *, _DWORD, _DWORD, _DWORD))(LODWORD(v82) + 0x3DC))( /*0x6365f8*/
                 this,
                 retaddr,
                 *((_DWORD *)this + 0x4A),
                 *((_DWORD *)this + 0x4B),
                 *((_DWORD *)this + 0x4C)) )
          {
            v49 = LOBYTE(v78[0]); /*0x636606*/
            *((_DWORD *)this + 0x48) = v65; /*0x63660a*/
            v50 = *((_DWORD *)this + 0xD); /*0x636610*/
            *(this + 0x124) = v49; /*0x636615*/
            if ( v50 ) /*0x63661b*/
              (*(void (__thiscall **)(int, Actor *))(*(_DWORD *)v50 + 0x28))(v50, retaddr); /*0x636627*/
            goto LABEL_138; /*0x63662b*/
          }
LABEL_140:
          JUMPOUT(0x636FBE); /*0x636fbe*/
        }
        (*(void (__thiscall **)(char *, Actor *))(*(_DWORD *)this + 0x194))(this, retaddr); /*0x636638*/
        v51 = *(_DWORD *)this; /*0x63663d*/
        v52 = sub_673980(*(_DWORD *)(v16 + 0x18)); /*0x636640*/
        (*(void (__thiscall **)(char *, int))(v51 + 0x17C))(this, v52 - 1); /*0x636654*/
        return; /*0x63665d*/
      }
      if ( v72 == vtbl->GetMountedHorse(retaddr) ) /*0x63666a*/
      {
        sub_636674( /*0x63666f*/
          (int (__thiscall *)(float *))retaddr->vtbl->GetMountedHorse,
          (TESPackage *)v16,
          (float *)retaddr,
          (int *)this,
          *(float *)&a5,
          a6,
          *(float *)&a7,
          *(float *)&a8,
          a9,
          a10,
          a11,
          a12,
          a13,
          a14);
        return; /*0x63666f*/
      }
    }
    JUMPOUT(0x6366B8); /*0x6366b8*/
  }
  if ( *(_BYTE *)(v16 + 0x20) == 3 ) /*0x636a5d*/
  {
    if ( v72 ) /*0x636a61*/
    {
      if ( sub_4D74B0(v72) ) /*0x636a65*/
      {
        if ( LOBYTE(v81) ) /*0x636a73*/
        {
          sub_5E4400(retaddr); /*0x636a77*/
          if ( !v53 ) /*0x636a7e*/
          {
            (*(void (__thiscall **)(char *, Actor *, int, int, float, float))(*(_DWORD *)this + 0x188))( /*0x636a8d*/
              this,
              retaddr,
              1,
              v67,
              COERCE_FLOAT(LODWORD(v68)),
              COERCE_FLOAT(LODWORD(v71)));
            (*(void (__thiscall **)(char *, Actor *))(*(_DWORD *)this + 0x194))(this, retaddr); /*0x636a9a*/
            return; /*0x636aa3*/
          }
        }
      }
    }
  }
  if ( *((_DWORD *)this + 0x73) ) /*0x636aa6*/
  {
    sub_607B90(v72, 1); /*0x636ab2*/
    *((_DWORD *)this + 0x73) = 0; /*0x636aba*/
  }
  if ( v72 && sub_4D74B0(v72) && *(_BYTE *)(v16 + 0x20) != 5 && LOBYTE(v81) ) /*0x636aea*/
  {
    if ( !*((_DWORD *)this + 0x48) ) /*0x636af0*/
      *((_DWORD *)this + 0x48) = v72; /*0x636af9*/
    v54 = Shared_GetDwordAtOffset40(retaddr); /*0x636b0c*/
    if ( v54 != Shared_GetDwordAtOffset40(*((void **)this + 0x48)) ) /*0x636b15*/
      goto LABEL_140; /*0x636b15*/
    if ( (*(int (__thiscall **)(char *, int, float, float))(*(_DWORD *)this + 0x36C))( /*0x636b3b*/
           this,
           v67,
           COERCE_FLOAT(LODWORD(v68)),
           COERCE_FLOAT(LODWORD(v71))) == 4
      || (*(int (__thiscall **)(char *))(*(_DWORD *)this + 0x36C))(this) == 9 )
    {
      if ( (*(_DWORD *)(v16 + 0x1C) & 2) != 0 && !*(_DWORD *)(v16 + 0x28) ) /*0x636b88*/
        *((float *)this + 0x6B) = 0.0; /*0x636b90*/
      if ( LOBYTE(v83) ) /*0x636b9b*/
        (*(void (__thiscall **)(char *, Actor *, int))(*(_DWORD *)this + 0x188))(this, retaddr, 1); /*0x636baa*/
      (*(void (__thiscall **)(char *, Actor *))(*(_DWORD *)this + 0x194))(this, retaddr); /*0x636bb7*/
    }
    else
    {
      if ( (*(unsigned __int8 (__thiscall **)(char *, Actor *))(*(_DWORD *)this + 0x1B4))(this, retaddr) ) /*0x636b48*/
        goto LABEL_140; /*0x636b4c*/
      (*(void (__thiscall **)(char *, Actor *, int))(*(_DWORD *)this + 0x188))(this, retaddr, 1); /*0x636b5f*/
      v55 = *(void (__thiscall **)(char *, Actor *))(*(_DWORD *)this + 0x194); /*0x636b63*/
      *((_DWORD *)this + 0xC) = 0; /*0x636b6c*/
      v55(this, retaddr); /*0x636b73*/
    }
  }
  else
  {
    v56 = sub_64ADA0((Actor *)this); /*0x636bc5*/
    v57 = *(_DWORD *)this; /*0x636bca*/
    LOBYTE(v82) = v56; /*0x636bcc*/
    (*(void (__thiscall **)(char *, Actor *, int, float, float))(v57 + 0x194))( /*0x636bd9*/
      this,
      retaddr,
      v67,
      COERCE_FLOAT(LODWORD(v68)),
      COERCE_FLOAT(LODWORD(v71)));
    if ( !LOBYTE(v81) /*0x636c45*/
      && (v72 && ((int (*)(void))v72->__vftable->super.super.GetBaseForm)() == MEMORY[0xB35EB0]
       || (v58 = *(char **)(v16 + 0x24)) != 0 && sub_569740(v58) == 3)
      && !sub_64ADA0((Actor *)this)
      && retaddr->vtbl->super.super.GetSleepState((TESObjectREFR *)retaddr) == kSitSleep_None
      && !(*(unsigned __int8 (__thiscall **)(char *))(*(_DWORD *)this + 0x4DC))(this) )
    {
      if ( v72 ) /*0x636c51*/
        z = v72->members.super.super.super.rot.z; /*0x636c53*/
      else
        z = *(float *)(((int (__thiscall *)(Actor *, float *))retaddr->vtbl->super.super.GetStartingAngle)( /*0x636c69*/
                         retaddr,
                         &v77)
                     + 8);
      v81 = z; /*0x636c6c*/
      v60 = v81; /*0x636c7a*/
      v61 = dbl_A3D5B0; /*0x636c7f*/
      if ( v81 >= 0.0 ) /*0x636c85*/
      {
        if ( v61 <= v60 ) /*0x636cab*/
        {
          unknown_libname_14(v61, v60); /*0x636cad*/
          v81 = v60; /*0x636cb2*/
          v60 = v81; /*0x636cbe*/
        }
      }
      else
      {
        unknown_libname_14(v61, v60); /*0x636c87*/
        v81 = v60; /*0x636c8c*/
        v81 = v81 + dbl_A3D5B0; /*0x636c9a*/
        v60 = v81; /*0x636c9e*/
      }
      *(float *)&v80 = 0.0; /*0x636ccd*/
      v63 = v60; /*0x636cd2*/
      sub_683D80((int)retaddr, v63, (float *)&v80); /*0x636cd6*/
      v83 = v60; /*0x636cdb*/
      v83 = fabs(v83); /*0x636ce8*/
      v42 = v83; /*0x636cec*/
      v83 = (double)(int)MEMORY[0xB36C18].value * dbl_A31C78; /*0x636cfc*/
      a2 = v83; /*0x636d00*/
      if ( v83 < v42 ) /*0x636d0b*/
      {
        sub_685530(retaddr, v81, 1); /*0x636d18*/
        return; /*0x636d27*/
      }
      sub_5E05F0(retaddr, 0x30); /*0x636d2e*/
    }
    if ( !sub_64ADA0((Actor *)this) /*0x636d55*/
      || (v62 = *(_DWORD *)(v16 + 0x1C), (v62 & 2) == 0) && ((v62 & 4) == 0 || *(_BYTE *)(v16 + 0x20) != 6) )
    {
      if ( LOBYTE(v82) ) /*0x636d5c*/
        v42 = ((double (__thiscall *)(char *, Actor *, int))*(_DWORD *)(*(_DWORD *)this + 0x188))(this, retaddr, 1); /*0x636d6b*/
    }
    sub_636D72( /*0x636d71*/
      *(_DWORD *)(v16 + 0x1C) >> 1,
      (TESPackage *)v16,
      (TESObjectREFR *)retaddr,
      (int)this,
      a3,
      a2,
      v42,
      a5,
      a6,
      a7,
      a8);
  }
}
