void __thiscall sub_5EDEC0(TESObjectREFR *this, int _78, int a3, int a4)
{
  NiNode *v5; // eax
  NiTransform *p_m_worldTransform; // esi
  NiPoint3 *v7; // eax
  float *v8; // eax
  float v9; // ecx
  float v10; // edx
  NiPoint3 *v11; // eax
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

  if ( dword_B148CC > 1 && !a3 )
  {
    if ( this == (TESObjectREFR *)TESDataHandler_g_PlayerRef )
    {
      v44 = 0.0;
      v45 = 0.0;
      v46 = 1.0;
      v48 = 0.0;
      v47 = 1.0;
      v49 = 0.0;
      v50 = 1.0;
    }
    else
    {
      v44 = 1.0;
      v45 = 0.0;
      v48 = 1.0;
      v46 = 0.0;
      v49 = 0.0;
      v47 = 1.0;
      v50 = 0.0;
    }
    v51 = 1.0;
    v5 = this->vtbl->GetNiNode(this);
    if ( v5 )
    {
      p_m_worldTransform = &v5->members.super.m_worldTransform;
      v7 = (NiPoint3 *)(*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 0x16) + 0x310))(*((_DWORD *)this + 0x16));
      v8 = sub_53D4B0(p_m_worldTransform, &v34, v7);
      v9 = v8[1];
      v37 = *v8;
      v10 = v8[2];
      v38 = v9;
      v39 = v10;
      v11 = (NiPoint3 *)sub_5E6A40((Actor *)this, a2);
      v12 = sub_53D4B0(p_m_worldTransform, &v44, v11);
      v13 = v12[1];
      v34 = *v12;
      v14 = v12[2];
      v35 = v13;
      v36 = v14;
    }
    v53 = v34 - v37;
    v28 = v35 - v38;
    v31 = v36 - v39;
    v40 = v53;
    v37 = v53;
    v41 = v28;
    v38 = v28;
    v42 = v31;
    v39 = v31;
    sub_43F350(&v37);
    v15 = dbl_A6E6F8;
    v54 = v37 * v15;
    v32 = v38 * v15;
    v29 = v15 * v39;
    v16 = dbl_A2FC80;
    v55 = v54 * v16;
    v33 = v32 * v16;
    v30 = v16 * v29;
    v40 = v55;
    v41 = v33;
    v42 = v30;
    v17 = sub_6FCDC0(&v40, (int *)&v48);
    v18 = v36;
    v19 = (int)v17;
    v20 = v35;
    *(float *)(v19 + 0x54) = v34;
    *(float *)(v19 + 0x58) = v20;
    *(float *)(v19 + 0x5C) = v18;
    v21 = (NiObjectNET *)FormHeapAlloc(0x1Cu);
    v22 = (BSShaderProperty *)v21;
    v52 = 0;
    if ( v21 )
    {
      NiObjectNET::NiObjectNET(v21);
      v22->vtbl = &NiVertexColorProperty::`vftable';
      v22->member.super.flags = 8;
      v23 = v22;
    }
    else
    {
      v23 = 0;
    }
    v24 = v23->member.super.flags & 0xFFC7 | 0x10;
    v52 = 0xFFFFFFFF;
    v23->member.super.flags = v24;
    sub_405680((NiNode *)v19, v23);
    v25 = (NiObjectNET *)FormHeapAlloc(0x1Cu);
    v26 = (BSShaderProperty *)v25;
    v52 = 1;
    if ( v25 )
    {
      NiObjectNET::NiObjectNET(v25);
      v26->vtbl = &NiZBufferProperty::`vftable';
      v26->member.super.flags = 0xF;
    }
    else
    {
      v26 = 0;
    }
    v27 = v26->member.super.flags & 0xFFFC | 2;
    v52 = 0xFFFFFFFF;
    v26->member.super.flags = v27;
    sub_405680((NiNode *)v19, v26);
    sub_440E60(TES, v19, flt_B148D4);
  }
}
