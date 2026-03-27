void __userpurge sub_635F10(char *this@<ecx>, double a2@<st1>, int a3, int a4, int a5, int a6)
{
  int v7; // eax
  TESPackage *v8; // ebx
  bool v9; // zf
  TargetData *v10; // ecx
  int v11; // edi
  ObjectType v12; // eax
  Actor *v13; // edi
  float *v14; // eax
  double Distance; // st7
  LocationData *location; // ecx
  Creature *v17; // ebp
  TESObjectREFR *v18; // ecx
  Creature *v19; // ebx
  TESObjectCELL *ParentCell; // ebp
  int v21; // eax
  TESObjectREFR *v22; // ecx
  char *v23; // ebp
  TESObjectCELL *v24; // eax
  int v25; // ecx
  _DWORD *v26; // ebx
  TESObjectCELL *v27; // eax
  int v28; // edx
  void (__thiscall *v29)(char *, Actor *); // eax
  unsigned __int8 v30; // al
  int v31; // edx
  void (__thiscall *v32)(char *, Actor *); // eax
  char v33; // al
  double v34; // st7
  TESObjectCELL *v35; // eax
  char v36; // al
  bool v37; // al
  ActorVtbl *vtbl; // edx
  int v39; // eax
  TESObjectREFR *v40; // ecx
  char v41; // dl
  int v42; // ecx
  int v43; // edi
  int v44; // eax
  int v45; // eax
  TESObjectCELL *v46; // ebp
  void (__thiscall *v47)(char *, Actor *); // edx
  char v48; // al
  int v49; // edx
  char *v50; // ecx
  double z; // st7
  double v52; // st7
  double v53; // st6
  double v54; // st7
  UInt32 packageFlags; // eax
  float v56; // [esp+10h] [ebp-54h]
  char v57; // [esp+14h] [ebp-50h]
  TESObjectCELL *v58; // [esp+14h] [ebp-50h]
  float v59; // [esp+18h] [ebp-4Ch]
  int v60; // [esp+1Ch] [ebp-48h]
  float v61; // [esp+20h] [ebp-44h]
  TESWorldSpace *WorldSpace; // [esp+20h] [ebp-44h]
  TESWorldSpace *v63; // [esp+20h] [ebp-44h]
  float v64; // [esp+24h] [ebp-40h]
  Creature *v65; // [esp+2Ch] [ebp-38h]
  float v66; // [esp+34h] [ebp-30h]
  int v67; // [esp+38h] [ebp-2Ch]
  char v68[4]; // [esp+3Ch] [ebp-28h] BYREF
  int v69; // [esp+40h] [ebp-24h]
  float v70; // [esp+44h] [ebp-20h] BYREF
  _DWORD v71[2]; // [esp+48h] [ebp-1Ch] BYREF
  int v72; // [esp+50h] [ebp-14h]
  int v73; // [esp+54h] [ebp-10h] BYREF
  float v74; // [esp+58h] [ebp-Ch]
  float v75; // [esp+5Ch] [ebp-8h]
  float v76; // [esp+60h] [ebp-4h] BYREF
  Actor *retaddr; // [esp+64h] [ebp+0h]

  v7 = (*(int (__thiscall **)(char *))(*(_DWORD *)this + 0x184))(this);
  v8 = (TESPackage *)v7;
  v9 = *(_BYTE *)(v7 + 0x20) == 9;
  LOBYTE(v70) = 0;
  if ( v9 )
  {
    v10 = *(TargetData **)(v7 + 0x28);
    v11 = *(_DWORD *)this;
    LOBYTE(v70) = 1;
    v12.form = sub_569E60(v10).form;
    (*(void (__thiscall **)(char *, ObjectType))(v11 + 0x484))(this, v12);
  }
  v13 = retaddr;
  v14 = (float *)sub_566B30(v8, (int)v71, retaddr);
  Distance = sub_4D7E30((float *)retaddr, v14);
  v70 = Distance;
  location = v8->members.location;
  v17 = 0;
  if ( location )
    v17 = (Creature *)sub_5697E0(location);
  if ( *((_DWORD *)this + 0xC) )
  {
    if ( !*((_DWORD *)this + 0x30) )
      v17 = *((Creature **)this + 0xC);
  }
  if ( !v17 )
    goto LABEL_57;
  if ( sub_4D74B0(v17) )
  {
    retaddr->vtbl->super.super.GetPos((TESObjectREFR *)retaddr);
    if ( (*(int (__thiscall **)(char *))(*(_DWORD *)this + 0x36C))(this) == 4
      || (*(int (__thiscall **)(char *))(*(_DWORD *)this + 0x36C))(this) == 9 )
    {
      if ( (v8->members.packageFlags & 2) != 0 && !v8->members.target )
        *((float *)this + 0x6B) = 0.0;
      if ( (_BYTE)a4 )
        (*(void (__thiscall **)(char *, Actor *, int))(*(_DWORD *)this + 0x188))(this, retaddr, 1);
      goto LABEL_17;
    }
    if ( *(this + 0xD0) )
    {
      v18 = *((TESObjectREFR **)this + 0x48);
      if ( v18 )
      {
        if ( sub_4D72C0(v18, 0) )
        {
          if ( (_BYTE)a4 )
            (*(void (__thiscall **)(char *, Actor *, int))(*(_DWORD *)this + 0x188))(this, retaddr, 1);
LABEL_17:
          (*(void (__thiscall **)(char *, Actor *))(*(_DWORD *)this + 0x194))(this, retaddr);
          return;
        }
      }
    }
  }
  if ( v17 == retaddr->vtbl->GetMountedHorse(retaddr) && v17->__vftable->super.super.IsDead((TESObjectREFR *)v17, 0) )
  {
    v19 = retaddr->vtbl->GetMountedHorse(retaddr);
    ((void (__thiscall *)(Creature *, _DWORD))v19->__vftable->Unk_E1)(v19, 0);
    v19->members.super.super.process->editorPackage = 0;
    (*(void (__thiscall **)(char *, _DWORD))(*(_DWORD *)this + 0x178))(this, 0);
    ((void (__thiscall *)(Actor *, _DWORD))retaddr->vtbl->Unk_E1)(retaddr, 0);
    return;
  }
  if ( sub_4D74B0(v17) && !*(this + 0xD0) && !*((_DWORD *)this + 0x48) && *(this + 0x124) != 0x7F )
  {
    *(this + 0xD0) = 1;
    *(this + 0x124) = 0x7F;
  }
  if ( sub_4D74B0(v17) && *(this + 0xD0) )
  {
    if ( !*((_DWORD *)this + 0x48) )
      *((_DWORD *)this + 0x48) = v17;
    if ( *(this + 0x124) == 0x7F )
    {
      ParentCell = TESObjectREFR_GetParentCell((TESObjectREFR *)retaddr);
      if ( ParentCell == TESObjectREFR_GetParentCell(*((TESObjectREFR **)this + 0x48)) )
      {
        v21 = (int)retaddr->vtbl->super.super.GetPos((TESObjectREFR *)retaddr);
        v70 = *(float *)v21;
        v22 = *((TESObjectREFR **)this + 0x48);
        v23 = this + 0x128;
        v71[0] = *(_DWORD *)(v21 + 4);
        v71[1] = *(_DWORD *)(v21 + 8);
        v76 = 0.0;
        if ( sub_4DBAE0(v22, &v70, 1, 1, (NiPoint3 *)(this + 0x128), &v76) )
        {
          if ( retaddr == (Actor *)TESDataHandler_g_PlayerRef )
          {
            ((void (__thiscall *)(PlayerCharacter *, char *))TESDataHandler_g_PlayerRef->vtbl->super.super.Unk_73)(
              TESDataHandler_g_PlayerRef,
              this + 0x128);
            v66 = (double)*((unsigned __int16 *)this + 0x9A) / dbl_A2FC70;
            Distance = v66;
            ((void (__cdecl *)(_DWORD))TESDataHandler_g_PlayerRef->vtbl->super.super.Unk_7A)(LODWORD(v66));
            sub_5E0610(TESDataHandler_g_PlayerRef, 0);
            *(this + 0x124) = LOBYTE(v74);
            *(this + 0xD0) = 0;
          }
          else
          {
            v67 = *(_DWORD *)this;
            WorldSpace = TESObjectREFR_GetWorldSpace(*((TESObjectREFR **)this + 0x48));
            v24 = TESObjectREFR_GetParentCell(*((TESObjectREFR **)this + 0x48));
            if ( !(*(unsigned __int8 (__thiscall **)(char *, Actor *, _DWORD, _DWORD, _DWORD, TESObjectCELL *, TESWorldSpace *))(v67 + 0x3DC))(
                    this,
                    retaddr,
                    *(_DWORD *)v23,
                    *((_DWORD *)this + 0x4B),
                    *((_DWORD *)this + 0x4C),
                    v24,
                    WorldSpace) )
              goto LABEL_140;
            *(this + 0x124) = v71[0];
            v25 = *((_DWORD *)this + 0xD);
            if ( v25 )
            {
              Distance = ((double (__thiscall *)(int, Actor *))*(_DWORD *)(*(_DWORD *)v25 + 0x28))(v25, retaddr);
              v64 = Distance;
            }
          }
        }
        else
        {
          Distance = TesObjectREF_GetDistance((TESObjectREFR *)*((_DWORD *)this + 0x48), (TESObjectREFR *)retaddr, 0);
          if ( Distance > fConst_200 )
          {
            retaddr = *(Actor **)this;
            v26 = (_DWORD *)(*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 0x48) + 0x174))(*((_DWORD *)this + 0x48));
            v63 = TESObjectREFR_GetWorldSpace(*((TESObjectREFR **)this + 0x48));
            v27 = TESObjectREFR_GetParentCell(*((TESObjectREFR **)this + 0x48));
            if ( !((unsigned __int8 (__thiscall *)(char *, Actor *, _DWORD, _DWORD, _DWORD, TESObjectCELL *, TESWorldSpace *))retaddr[3].members.templateForm)(
                    this,
                    v13,
                    *v26,
                    v26[1],
                    v26[2],
                    v27,
                    v63) )
              goto LABEL_140;
            if ( (_BYTE)v72 )
              (*(void (__thiscall **)(char *, Actor *, int))(*(_DWORD *)this + 0x188))(this, v13, 1);
            *((_DWORD *)this + 0x48) = 0;
            sub_6FAEE0((Unk128 *)(this + 0x128), 0.0);
            *(this + 0x136) = 0;
            *(float *)v23 = Vector3_InitValue_;
            *((float *)this + 0x4B) = *(&Vector3_InitValue_ + 1);
            v28 = *(_DWORD *)this;
            *((float *)this + 0x4C) = dword_B3F9B0;
            v29 = *(void (__thiscall **)(char *, Actor *))(v28 + 0x194);
            *(this + 0x124) = 0x7F;
            v29(this, v13);
            return;
          }
        }
      }
    }
    if ( (*(int (__thiscall **)(char *))(*(_DWORD *)this + 0x36C))(this) )
    {
      LOBYTE(v74) = 1;
      goto LABEL_59;
    }
    if ( !(*(int (__thiscall **)(char *))(*(_DWORD *)this + 0x36C))(this) )
    {
      v30 = *(this + 0x124);
      if ( v30 != 0x7F && sub_4D72C0(*((TESObjectREFR **)this + 0x48), v30) && !*(this + 0xD0) )
      {
        *((_DWORD *)this + 0x48) = 0;
        sub_6FAEE0((Unk128 *)(this + 0x128), 0.0);
        *(this + 0x136) = 0;
        *((float *)this + 0x4A) = Vector3_InitValue_;
        v31 = *(_DWORD *)this;
        *((float *)this + 0x4B) = *(&Vector3_InitValue_ + 1);
        v32 = *(void (__thiscall **)(char *, Actor *))(v31 + 0x194);
        *((float *)this + 0x4C) = dword_B3F9B0;
        *(this + 0x124) = 0x7F;
        v32(this, retaddr);
        (*(void (__thiscall **)(char *, Actor *, int))(*(_DWORD *)this + 0x188))(this, retaddr, 1);
        return;
      }
    }
    Distance = sub_566DC0(v8, flt_A30634, a2, retaddr, SLOBYTE(v66), flt_A30634);
  }
  else
  {
LABEL_57:
    v61 = flt_A30634;
    v60 = *(_DWORD *)v68;
    Distance = sub_566DC0(v8, v61, a2, retaddr, v57, v59);
  }
  LOBYTE(v74) = v33;
LABEL_59:
  v34 = sub_5677B0(v8, Distance, (TESObjectREFR *)retaddr, 1);
  Double_To_SInt32(v34);
  if ( v8->members.type == 5 )
  {
    if ( sub_566A40((char **)v8, retaddr) )
    {
      v35 = sub_566A40((char **)v8, retaddr);
      TESObjectCELL_IsInterior(v35);
    }
  }
  if ( !LOBYTE(v74) && !sub_64ADA0((Actor *)this) )
  {
    if ( !LOBYTE(v75) )
    {
      if ( !*(this + 0xD0)
        || (sub_566DC0(v8, flt_A30634, a2, retaddr, SLOBYTE(v66), flt_A30634), v36)
        || sub_64ADA0((Actor *)this) )
      {
LABEL_138:
        JUMPOUT(0x63670C);
      }
    }
    if ( !((int (__thiscall *)(Actor *, int, float, float))retaddr->vtbl->GetMountedHorse)(
            retaddr,
            v60,
            COERCE_FLOAT(LODWORD(v61)),
            COERCE_FLOAT(LODWORD(v64)))
      && ((*(int (__thiscall **)(char *))(*(_DWORD *)this + 0x36C))(this) == 4
       || (*(int (__thiscall **)(char *))(*(_DWORD *)this + 0x36C))(this) == 9) )
    {
      retaddr->vtbl->AddPackageWakeUp(retaddr);
      return;
    }
    if ( v65 )
    {
      v37 = sub_4D74B0(v65);
      vtbl = retaddr->vtbl;
      if ( v37 )
      {
        v39 = (int)vtbl->super.super.GetPos((TESObjectREFR *)retaddr);
        *(_DWORD *)v68 = *(_DWORD *)v39;
        v40 = *((TESObjectREFR **)this + 0x48);
        v69 = *(_DWORD *)(v39 + 4);
        v70 = *(float *)(v39 + 8);
        v76 = 0.0;
        if ( sub_4DBAE0(v40, (float *)v68, 1, 1, (NiPoint3 *)(this + 0x128), &v76) )
        {
          v75 = *(float *)this;
          sub_566940(v8, retaddr);
          v58 = sub_566A40((char **)v8, retaddr);
          if ( (*(unsigned __int8 (__thiscall **)(char *, Actor *, _DWORD, _DWORD, _DWORD))(LODWORD(v75) + 0x3DC))(
                 this,
                 retaddr,
                 *((_DWORD *)this + 0x4A),
                 *((_DWORD *)this + 0x4B),
                 *((_DWORD *)this + 0x4C)) )
          {
            v41 = v71[0];
            *((_DWORD *)this + 0x48) = v58;
            v42 = *((_DWORD *)this + 0xD);
            *(this + 0x124) = v41;
            if ( v42 )
              (*(void (__thiscall **)(int, Actor *))(*(_DWORD *)v42 + 0x28))(v42, retaddr);
            goto LABEL_138;
          }
LABEL_140:
          JUMPOUT(0x636FBE);
        }
        (*(void (__thiscall **)(char *, Actor *))(*(_DWORD *)this + 0x194))(this, retaddr);
        v43 = *(_DWORD *)this;
        v44 = sub_673980(v8->members.procedureArrayIndex);
        (*(void (__thiscall **)(char *, int))(v43 + 0x17C))(this, v44 - 1);
        return;
      }
      if ( v65 == vtbl->GetMountedHorse(retaddr) )
      {
        sub_636674(a3, a4, a5, a6);
        return;
      }
    }
    JUMPOUT(0x6366B8);
  }
  if ( v8->members.type == 3 )
  {
    if ( v65 )
    {
      if ( sub_4D74B0(v65) )
      {
        if ( LOBYTE(v74) )
        {
          sub_5E4400(retaddr);
          if ( !v45 )
          {
            (*(void (__thiscall **)(char *, Actor *, int, int, float, float))(*(_DWORD *)this + 0x188))(
              this,
              retaddr,
              1,
              v60,
              COERCE_FLOAT(LODWORD(v61)),
              COERCE_FLOAT(LODWORD(v64)));
            (*(void (__thiscall **)(char *, Actor *))(*(_DWORD *)this + 0x194))(this, retaddr);
            return;
          }
        }
      }
    }
  }
  if ( *((_DWORD *)this + 0x73) )
  {
    sub_607B90(v65, 1);
    *((_DWORD *)this + 0x73) = 0;
  }
  if ( v65 && sub_4D74B0(v65) && v8->members.type != 5 && LOBYTE(v74) )
  {
    if ( !*((_DWORD *)this + 0x48) )
      *((_DWORD *)this + 0x48) = v65;
    v46 = TESObjectREFR_GetParentCell((TESObjectREFR *)retaddr);
    if ( v46 != TESObjectREFR_GetParentCell(*((TESObjectREFR **)this + 0x48)) )
      goto LABEL_140;
    if ( (*(int (__thiscall **)(char *, int, float, float))(*(_DWORD *)this + 0x36C))(
           this,
           v60,
           COERCE_FLOAT(LODWORD(v61)),
           COERCE_FLOAT(LODWORD(v64))) == 4
      || (*(int (__thiscall **)(char *))(*(_DWORD *)this + 0x36C))(this) == 9 )
    {
      if ( (v8->members.packageFlags & 2) != 0 && !v8->members.target )
        *((float *)this + 0x6B) = 0.0;
      if ( LOBYTE(v76) )
        (*(void (__thiscall **)(char *, Actor *, int))(*(_DWORD *)this + 0x188))(this, retaddr, 1);
      (*(void (__thiscall **)(char *, Actor *))(*(_DWORD *)this + 0x194))(this, retaddr);
    }
    else
    {
      if ( (*(unsigned __int8 (__thiscall **)(char *, Actor *))(*(_DWORD *)this + 0x1B4))(this, retaddr) )
        goto LABEL_140;
      (*(void (__thiscall **)(char *, Actor *, int))(*(_DWORD *)this + 0x188))(this, retaddr, 1);
      v47 = *(void (__thiscall **)(char *, Actor *))(*(_DWORD *)this + 0x194);
      *((_DWORD *)this + 0xC) = 0;
      v47(this, retaddr);
    }
  }
  else
  {
    v48 = sub_64ADA0((Actor *)this);
    v49 = *(_DWORD *)this;
    LOBYTE(v75) = v48;
    (*(void (__thiscall **)(char *, Actor *, int, float, float))(v49 + 0x194))(
      this,
      retaddr,
      v60,
      COERCE_FLOAT(LODWORD(v61)),
      COERCE_FLOAT(LODWORD(v64)));
    if ( !LOBYTE(v74)
      && (v65 && ((int (*)(void))v65->__vftable->super.super.GetBaseForm)() == TESDataHandler_g_XMarkerHeading
       || (v50 = (char *)v8->members.location) != 0 && sub_569740(v50) == 3)
      && !sub_64ADA0((Actor *)this)
      && retaddr->vtbl->super.super.GetSleepState((TESObjectREFR *)retaddr) == kSitSleep_None
      && !(*(unsigned __int8 (__thiscall **)(char *))(*(_DWORD *)this + 0x4DC))(this) )
    {
      if ( v65 )
        z = v65->members.super.super.super.rot.z;
      else
        z = *(float *)(((int (__thiscall *)(Actor *, float *))retaddr->vtbl->super.super.GetStartingAngle)(
                         retaddr,
                         &v70)
                     + 8);
      v74 = z;
      v52 = v74;
      v53 = dbl_A3D5B0;
      if ( v74 >= 0.0 )
      {
        if ( v53 <= v52 )
        {
          unknown_libname_14(v53, v52);
          v74 = v52;
          v52 = v74;
        }
      }
      else
      {
        unknown_libname_14(v53, v52);
        v74 = v52;
        v74 = v74 + dbl_A3D5B0;
        v52 = v74;
      }
      *(float *)&v73 = 0.0;
      v56 = v52;
      sub_683D80((int)retaddr, v56, (int)&v73);
      v76 = v52;
      v76 = fabs(v76);
      v54 = v76;
      v76 = (double)iActorKeepTurnDegree * dbl_A31C78;
      if ( v76 < v54 )
      {
        sub_685530(retaddr, v74, 1);
        return;
      }
      sub_5E05F0(retaddr, 0x30);
    }
    if ( !sub_64ADA0((Actor *)this)
      || (packageFlags = v8->members.packageFlags, (packageFlags & 2) == 0)
      && ((packageFlags & 4) == 0 || v8->members.type != 6) )
    {
      if ( LOBYTE(v75) )
        (*(void (__thiscall **)(char *, Actor *, int))(*(_DWORD *)this + 0x188))(this, retaddr, 1);
    }
    sub_636D72(v8->members.packageFlags >> 1, a3, a4, a5, a6);
  }
}
