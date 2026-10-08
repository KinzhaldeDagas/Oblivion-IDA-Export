// Actor attack-handling virtual with three stack arguments. Drives attack eligibility/target handling and selects the native attack animation path; its former x87-heavy prototype was decompiler pollution.
void __thiscall Actor_AttackHandling(Actor *this, int arg0, int arg1, TESObjectREFR *targetRef)
{
  double v4; // st6
  LowProcess *process; // ecx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  bool v10; // cc
  NiNode *v11; // eax
  NiTransform *p_m_worldTransform; // ebp
  NiPoint3 *v13; // eax
  float *v14; // eax
  float v15; // ecx
  float v16; // edx
  NiPoint3 *WeaponTipLocalPointForHit; // eax
  int *v18; // eax
  int v19; // ecx
  int v20; // edx
  double v21; // st6
  double v22; // rt2
  NiAVObject *v23; // eax
  int v24; // ecx
  int v25; // ebp
  int v26; // eax
  NiObjectNET *v27; // eax
  BSShaderProperty *v28; // esi
  BSShaderProperty *v29; // eax
  UInt16 v30; // dx
  NiObjectNET *v31; // eax
  BSShaderProperty *v32; // esi
  UInt16 v33; // ax
  float v34; // [esp+44h] [ebp-1C0h]
  float v35; // [esp+44h] [ebp-1C0h]
  float v36; // [esp+44h] [ebp-1C0h]
  int v37; // [esp+64h] [ebp-1A0h] BYREF
  int v38; // [esp+68h] [ebp-19Ch]
  int v39; // [esp+6Ch] [ebp-198h]
  char v40; // [esp+73h] [ebp-191h]
  float a2[3]; // [esp+74h] [ebp-190h] BYREF
  float v42; // [esp+80h] [ebp-184h]
  float v43; // [esp+8Ch] [ebp-178h] BYREF
  float v44; // [esp+90h] [ebp-174h]
  float v45; // [esp+94h] [ebp-170h]
  float v46; // [esp+9Ch] [ebp-168h] BYREF
  float v47; // [esp+A0h] [ebp-164h]
  float v48; // [esp+A4h] [ebp-160h]
  float v49; // [esp+A8h] [ebp-15Ch]
  float v50; // [esp+ACh] [ebp-158h] BYREF
  float v51; // [esp+B0h] [ebp-154h]
  float v52; // [esp+B4h] [ebp-150h]
  float v53; // [esp+B8h] [ebp-14Ch]
  int v54; // [esp+200h] [ebp-4h]

  if ( targetRef && BaseExtraList_HasGhost(&targetRef->member.baseExtraList) ) /*0x5fec46*/
  {
    process = this->members.super.process; /*0x5fec4f*/
    if ( process && (v7 = (int)process->GetEquippedWeaponData(process, 1)) != 0 ) /*0x5fec64*/
      v8 = *(_DWORD *)(v7 + 8); /*0x5fec66*/
    else
      v8 = 0; /*0x5fec6b*/
    if ( v8 ) /*0x5fec6f*/
      v9 = *(char *)(v8 + 0x90); /*0x5fec71*/
    else
      v9 = 0xFFFFFFFF; /*0x5fec7a*/
    sub_6AF880(v4, 0.0, this, 0.0, COERCE_INT(0.0), 0, v9, 0xFFFFFFFF, 0xFFFFFFFF, 0, 0); /*0x5fec95*/
    Actor_AttackHandling_::Done(arg0, arg1, (int)targetRef); /*0x5fec9d*/
  }
  else
  {
    v10 = dword_B148CC <= 1; /*0x5feca2*/
    v40 = 0; /*0x5fecad*/
    if ( v10 || arg1 ) /*0x5fecba*/
    {
      Actor_AttackHandling_::EquippedWeaponAndAttackReach(this); /*0x5fef86*/
    }
    else
    {
      if ( this == (Actor *)reference ) /*0x5fecc6*/
      {
        v46 = 0.0; /*0x5fecca*/
        v47 = 0.0; /*0x5fecd2*/
        v50 = 0.0; /*0x5fecda*/
        v48 = 1.0; /*0x5fece1*/
        v49 = 1.0; /*0x5fecef*/
        v51 = 0.0; /*0x5fecfd*/
        v52 = 1.0; /*0x5fed04*/
      }
      else
      {
        v46 = 1.0; /*0x5fed14*/
        v49 = 1.0; /*0x5fed1c*/
        v50 = 1.0; /*0x5fed23*/
        v47 = 0.0; /*0x5fed31*/
        v48 = 0.0; /*0x5fed39*/
        v51 = 0.0; /*0x5fed47*/
        v52 = 0.0; /*0x5fed4e*/
      }
      v53 = 1.0; /*0x5fed0b*/
      v11 = this->vtbl->super.super.GetNiNode(this); /*0x5fed66*/
      if ( v11 ) /*0x5fed6a*/
      {
        p_m_worldTransform = &v11->members.super.m_worldTransform; /*0x5fed71*/
        v13 = (NiPoint3 *)this->members.super.process->GetUnk20C(this->members.super.process); /*0x5fed7a*/
        v14 = NiTransform_TransformPoint(p_m_worldTransform, (float *)&v37, v13); /*0x5fed84*/
        v15 = v14[1]; /*0x5fed8b*/
        v43 = *v14; /*0x5fed8e*/
        v16 = v14[2]; /*0x5fed92*/
        v44 = v15; /*0x5fed99*/
        v45 = v16; /*0x5feda0*/
        WeaponTipLocalPointForHit = (NiPoint3 *)Actor_GetWeaponTipLocalPointForHit(this, a2); /*0x5feda4*/
        v18 = (int *)NiTransform_TransformPoint(p_m_worldTransform, &v46, WeaponTipLocalPointForHit); /*0x5fedb1*/
        v19 = v18[1]; /*0x5fedb8*/
        v37 = *v18; /*0x5fedbb*/
        v20 = v18[2]; /*0x5fedbf*/
        v38 = v19; /*0x5fedc2*/
        v39 = v20; /*0x5fedc6*/
      }
      a2[0] = *(float *)&v37 - v43; /*0x5fedd2*/
      v34 = *(float *)&v38 - v44; /*0x5fedde*/
      v42 = *(float *)&v39 - v45; /*0x5fedea*/
      v43 = a2[0]; /*0x5fedfe*/
      a2[1] = v34; /*0x5fee02*/
      v44 = v34; /*0x5fee0e*/
      a2[2] = v42; /*0x5fee12*/
      v45 = v42; /*0x5fee1e*/
      Vector3_NormalizeInPlace(&v43); /*0x5fee22*/
      v21 = dbl_A6E6F8; /*0x5fee34*/
      a2[0] = v43 * v21; /*0x5fee44*/
      v35 = v44 * v21; /*0x5fee4e*/
      v42 = v21 * v45; /*0x5fee56*/
      v22 = dbl_A2FC80; /*0x5fee66*/
      a2[0] = a2[0] * v22; /*0x5fee68*/
      v36 = v35 * v22; /*0x5fee72*/
      v42 = v22 * v42; /*0x5fee7a*/
      v43 = a2[0]; /*0x5fee82*/
      v44 = v36; /*0x5fee8a*/
      v45 = v42; /*0x5fee92*/
      v23 = sub_6FCDC0(&v43, (int *)&v50); /*0x5fee96*/
      v24 = v39; /*0x5fee9f*/
      v25 = (int)v23; /*0x5feea3*/
      v26 = v38; /*0x5feea5*/
      *(float *)(v25 + 0x54) = *(float *)&v37; /*0x5feea9*/
      *(_DWORD *)(v25 + 0x58) = v26; /*0x5feeac*/
      *(_DWORD *)(v25 + 0x5C) = v24; /*0x5feeb1*/
      *(float *)&v27 = COERCE_FLOAT(FormHeapAlloc(0x1Cu)); /*0x5feeb4*/
      v28 = (BSShaderProperty *)v27; /*0x5feeb9*/
      v37 = (int)v27; /*0x5feebe*/
      v54 = 0; /*0x5feec4*/
      if ( *(float *)&v27 == 0.0 ) /*0x5feecf*/
      {
        v29 = 0; /*0x5feee8*/
      }
      else
      {
        NiObjectNET::NiObjectNET(v27); /*0x5feed3*/
        v28->vtbl = &NiVertexColorProperty::`vftable'; /*0x5feed8*/
        v28->member.super.flags = 8; /*0x5feede*/
        v29 = v28; /*0x5feee4*/
      }
      v30 = v29->member.super.flags & 0xFFC7 | 0x10; /*0x5feef3*/
      v54 = 0xFFFFFFFF; /*0x5feefa*/
      v29->member.super.flags = v30; /*0x5fef05*/
      sub_405680((NiNode *)v25, v29); /*0x5fef09*/
      *(float *)&v31 = COERCE_FLOAT(FormHeapAlloc(0x1Cu)); /*0x5fef10*/
      v32 = (BSShaderProperty *)v31; /*0x5fef15*/
      v37 = (int)v31; /*0x5fef1a*/
      v54 = 1; /*0x5fef20*/
      if ( *(float *)&v31 == 0.0 ) /*0x5fef2b*/
      {
        v32 = 0; /*0x5fef42*/
      }
      else
      {
        NiObjectNET::NiObjectNET(v31); /*0x5fef2f*/
        v32->vtbl = &NiZBufferProperty::`vftable'; /*0x5fef34*/
        v32->member.super.flags = 0xF; /*0x5fef3a*/
      }
      v33 = v32->member.super.flags & 0xFFFC | 2; /*0x5fef4c*/
      v54 = 0xFFFFFFFF; /*0x5fef53*/
      v32->member.super.flags = v33; /*0x5fef5e*/
      sub_405680((NiNode *)v25, v32); /*0x5fef62*/
      sub_440E60(MEMORY[0xB333A0], v25, flt_B148D4); /*0x5fef78*/
      Actor_AttackHandling_::EquippedWeaponAndAttackReach(this); /*0x5fef81*/
    }
  }
}
