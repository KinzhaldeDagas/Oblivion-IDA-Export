void __thiscall sub_5EDEC0(TESObjectREFR *this, int _78, int a3, int a4)
{
  NiNode *v5; // eax
  NiTransform *p_m_worldTransform; // esi
  NiPoint3 *v7; // eax
  float *v8; // eax
  float v9; // ecx
  float v10; // edx
  NiPoint3 *WeaponTipLocalPointForHit; // eax
  float *v12; // eax
  float v13; // ecx
  float v14; // edx
  double v15; // st6
  double v16; // rt1
  NiAVObject *v17; // eax
  float v18; // ecx
  int v19; // esi
  float v20; // eax
  NiObjectNET *v21; // eax
  BSShaderProperty *v22; // edi
  BSShaderProperty *v23; // eax
  UInt16 v24; // dx
  NiObjectNET *v25; // eax
  BSShaderProperty *v26; // edi
  UInt16 v27; // ax
  float v28; // [esp+10h] [ebp-64h]
  float v29; // [esp+10h] [ebp-64h]
  float v30; // [esp+10h] [ebp-64h]
  float v31; // [esp+14h] [ebp-60h]
  float v32; // [esp+14h] [ebp-60h]
  float v33; // [esp+14h] [ebp-60h]
  float v34; // [esp+18h] [ebp-5Ch] BYREF
  float v35; // [esp+1Ch] [ebp-58h]
  float v36; // [esp+20h] [ebp-54h]
  float v37; // [esp+24h] [ebp-50h] BYREF
  float v38; // [esp+28h] [ebp-4Ch]
  float v39; // [esp+2Ch] [ebp-48h]
  float v40; // [esp+30h] [ebp-44h] BYREF
  float v41; // [esp+34h] [ebp-40h]
  float v42; // [esp+38h] [ebp-3Ch]
  float a2[3]; // [esp+3Ch] [ebp-38h] BYREF
  float v44; // [esp+48h] [ebp-2Ch] BYREF
  float v45; // [esp+4Ch] [ebp-28h]
  float v46; // [esp+50h] [ebp-24h]
  float v47; // [esp+54h] [ebp-20h]
  float v48; // [esp+58h] [ebp-1Ch] BYREF
  float v49; // [esp+5Ch] [ebp-18h]
  float v50; // [esp+60h] [ebp-14h]
  float v51; // [esp+64h] [ebp-10h]
  int v52; // [esp+70h] [ebp-4h]
  float v53; // [esp+7Ch] [ebp+8h]
  float v54; // [esp+7Ch] [ebp+8h]
  float v55; // [esp+7Ch] [ebp+8h]

  if ( dword_B148CC > 1 && !a3 ) /*0x5edef9*/
  {
    if ( this == (TESObjectREFR *)reference ) /*0x5edf05*/
    {
      v44 = 0.0; /*0x5edf09*/
      v45 = 0.0; /*0x5edf11*/
      v46 = 1.0; /*0x5edf1b*/
      v48 = 0.0; /*0x5edf1f*/
      v47 = 1.0; /*0x5edf23*/
      v49 = 0.0; /*0x5edf27*/
      v50 = 1.0; /*0x5edf33*/
    }
    else
    {
      v44 = 1.0; /*0x5edf3f*/
      v45 = 0.0; /*0x5edf49*/
      v48 = 1.0; /*0x5edf4d*/
      v46 = 0.0; /*0x5edf51*/
      v49 = 0.0; /*0x5edf5d*/
      v47 = 1.0; /*0x5edf61*/
      v50 = 0.0; /*0x5edf69*/
    }
    v51 = 1.0; /*0x5edf37*/
    v5 = this->vtbl->GetNiNode(this); /*0x5edf7b*/
    if ( v5 ) /*0x5edf7f*/
    {
      p_m_worldTransform = &v5->members.super.m_worldTransform; /*0x5edf86*/
      v7 = (NiPoint3 *)(*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 0x16) + 0x310))(*((_DWORD *)this + 0x16)); /*0x5edf8f*/
      v8 = NiTransform_TransformPoint(p_m_worldTransform, &v34, v7); /*0x5edf99*/
      v9 = v8[1]; /*0x5edfa0*/
      v37 = *v8; /*0x5edfa3*/
      v10 = v8[2]; /*0x5edfa7*/
      v38 = v9; /*0x5edfae*/
      v39 = v10; /*0x5edfb5*/
      WeaponTipLocalPointForHit = (NiPoint3 *)Actor_GetWeaponTipLocalPointForHit((Actor *)this, a2); /*0x5edfb9*/
      v12 = NiTransform_TransformPoint(p_m_worldTransform, &v44, WeaponTipLocalPointForHit); /*0x5edfc6*/
      v13 = v12[1]; /*0x5edfcd*/
      v34 = *v12; /*0x5edfd0*/
      v14 = v12[2]; /*0x5edfd4*/
      v35 = v13; /*0x5edfd7*/
      v36 = v14; /*0x5edfdb*/
    }
    v53 = v34 - v37; /*0x5edfe7*/
    v28 = v35 - v38; /*0x5edff3*/
    v31 = v36 - v39; /*0x5edfff*/
    v40 = v53; /*0x5ee007*/
    v37 = v53; /*0x5ee013*/
    v41 = v28; /*0x5ee017*/
    v38 = v28; /*0x5ee023*/
    v42 = v31; /*0x5ee027*/
    v39 = v31; /*0x5ee033*/
    Vector3_NormalizeInPlace(&v37); /*0x5ee037*/
    v15 = dbl_A6E6F8; /*0x5ee046*/
    v54 = v37 * v15; /*0x5ee056*/
    v32 = v38 * v15; /*0x5ee063*/
    v29 = v15 * v39; /*0x5ee06b*/
    v16 = dbl_A2FC80; /*0x5ee07e*/
    v55 = v54 * v16; /*0x5ee080*/
    v33 = v32 * v16; /*0x5ee08d*/
    v30 = v16 * v29; /*0x5ee095*/
    v40 = v55; /*0x5ee0a0*/
    v41 = v33; /*0x5ee0a8*/
    v42 = v30; /*0x5ee0b0*/
    v17 = sub_6FCDC0(&v40, (int *)&v48); /*0x5ee0b4*/
    v18 = v36; /*0x5ee0bd*/
    v19 = (int)v17; /*0x5ee0c1*/
    v20 = v35; /*0x5ee0c3*/
    *(float *)(v19 + 0x54) = v34; /*0x5ee0c7*/
    *(float *)(v19 + 0x58) = v20; /*0x5ee0ca*/
    *(float *)(v19 + 0x5C) = v18; /*0x5ee0cf*/
    v21 = (NiObjectNET *)FormHeapAlloc(0x1Cu); /*0x5ee0d2*/
    v22 = (BSShaderProperty *)v21; /*0x5ee0d7*/
    v52 = 0; /*0x5ee0e2*/
    if ( v21 ) /*0x5ee0ea*/
    {
      NiObjectNET::NiObjectNET(v21); /*0x5ee0ee*/
      v22->vtbl = &NiVertexColorProperty::`vftable'; /*0x5ee0f3*/
      v22->member.super.flags = 8; /*0x5ee0f9*/
      v23 = v22; /*0x5ee0ff*/
    }
    else
    {
      v23 = 0; /*0x5ee103*/
    }
    v24 = v23->member.super.flags & 0xFFC7 | 0x10; /*0x5ee10e*/
    v52 = 0xFFFFFFFF; /*0x5ee115*/
    v23->member.super.flags = v24; /*0x5ee11d*/
    sub_405680((NiNode *)v19, v23); /*0x5ee121*/
    v25 = (NiObjectNET *)FormHeapAlloc(0x1Cu); /*0x5ee128*/
    v26 = (BSShaderProperty *)v25; /*0x5ee12d*/
    v52 = 1; /*0x5ee138*/
    if ( v25 ) /*0x5ee140*/
    {
      NiObjectNET::NiObjectNET(v25); /*0x5ee144*/
      v26->vtbl = &NiZBufferProperty::`vftable'; /*0x5ee149*/
      v26->member.super.flags = 0xF; /*0x5ee14f*/
    }
    else
    {
      v26 = 0; /*0x5ee157*/
    }
    v27 = v26->member.super.flags & 0xFFFC | 2; /*0x5ee161*/
    v52 = 0xFFFFFFFF; /*0x5ee168*/
    v26->member.super.flags = v27; /*0x5ee170*/
    sub_405680((NiNode *)v19, v26); /*0x5ee174*/
    sub_440E60(MEMORY[0xB333A0], v19, flt_B148D4); /*0x5ee18a*/
  }
}
