void __thiscall MagicCaster_ExplosionCalcs____(
        char *this,
        __int64 pointXYZ,
        unsigned int a3,
        TESObjectCELL *a4,
        int a5,
        float *a6,
        int a7,
        int a8,
        int a9)
{
  float *v9; // edi
  TESObjectCELL *v10; // ebx
  float v11; // eax
  int Magnitude; // eax
  int Duration; // eax
  int v14; // eax
  int v15; // esi
  double v16; // st7
  double v17; // st7
  double v18; // rt1
  double v19; // st4
  double v20; // st5
  int v21; // eax
  int *v22; // eax
  _DWORD *v23; // ebx
  int v24; // eax
  int v25; // ecx
  MagicCaster *v26; // ebx
  int v27; // eax
  int v28; // esi
  TESObjectREFR *v29; // eax
  TESObjectREFR *v30; // esi
  PlayerCharacter *v31; // ecx
  MagicTarget *p_magicTarget; // eax
  int v33; // ecx
  __int128 v34; // [esp-8h] [ebp-D0h]
  __int128 v35; // [esp-4h] [ebp-CCh]
  int v36; // [esp+8h] [ebp-C0h]
  int v37; // [esp+Ch] [ebp-BCh]
  float v38; // [esp+10h] [ebp-B8h]
  float v39; // [esp+24h] [ebp-A4h]
  float v40; // [esp+28h] [ebp-A0h]
  float v41; // [esp+28h] [ebp-A0h]
  UInt32 v42; // [esp+28h] [ebp-A0h]
  float v43; // [esp+28h] [ebp-A0h]
  float v44; // [esp+28h] [ebp-A0h]
  float v45; // [esp+28h] [ebp-A0h]
  int Area; // [esp+2Ch] [ebp-9Ch]
  float v47; // [esp+2Ch] [ebp-9Ch]
  char *v49; // [esp+30h] [ebp-98h]
  float v50; // [esp+30h] [ebp-98h]
  float DistanceToPoint; // [esp+34h] [ebp-94h]
  float v52; // [esp+38h] [ebp-90h]
  float v53; // [esp+3Ch] [ebp-8Ch]
  int v54; // [esp+3Ch] [ebp-8Ch]
  float v55; // [esp+40h] [ebp-88h]
  int v56; // [esp+40h] [ebp-88h]
  bhkSerializable v57; // [esp+4Ch] [ebp-7Ch] BYREF
  int v58; // [esp+5Ch] [ebp-6Ch]
  int v59; // [esp+68h] [ebp-60h] BYREF
  _DWORD *v60; // [esp+6Ch] [ebp-5Ch]
  char v61; // [esp+70h] [ebp-58h]
  int v62; // [esp+74h] [ebp-54h]
  int v63; // [esp+78h] [ebp-50h]
  unsigned int v64; // [esp+7Ch] [ebp-4Ch]
  __int128 v65; // [esp+88h] [ebp-40h]
  float v66[7]; // [esp+98h] [ebp-30h]
  unsigned int v67; // [esp+BCh] [ebp-Ch]
  int v68; // [esp+C4h] [ebp-4h]

  v9 = a6; /*0x69a793*/
  v10 = a4; /*0x69a796*/
  DistanceToPoint = *(float *)&a7; /*0x69a7b0*/
  if ( (*(_DWORD *)(*((_DWORD *)a6 + 7) + 0x58) & 0x20000000) != 0 )
  {
    Area = EffectItem_GetArea(a6); /*0x69a7c1*/
    v52 = (double)Area * MEMORY[0xB37DB8][0] * *(float *)&a9; /*0x69a7d2*/
    if ( v52 > 0.0 )
    {
      v11 = v9[4]; /*0x69a7e7*/
      LOBYTE(v11) = LODWORD(v11) == 2; /*0x69a7f3*/
      v40 = *(float *)(*((_DWORD *)v9 + 7) + 0x5C); /*0x69a7f6*/
      v38 = v11; /*0x69a7fc*/
      Magnitude = EffectItem_GetMagnitude(v9); /*0x69a7fd*/
      v37 = Double_To_SInt32((double)Magnitude * *(float *)&a8); /*0x69a812*/
      Duration = EffectItem_GetDuration(v9); /*0x69a815*/
      v36 = Double_To_SInt32((double)Duration * *(float *)&a8); /*0x69a82a*/
      v14 = EffectItem_GetArea(v9); /*0x69a82d*/
      v47 = Calc_BaseMagickaCost(v40, v14, v36, v37, v38); /*0x69a840*/
      v15 = 0; /*0x69a84b*/
      v16 = v52 * dbl_A2FAA0; /*0x69a84d*/
      v62 = 0; /*0x69a856*/
      v63 = 0; /*0x69a85a*/
      v41 = v16; /*0x69a85e*/
      v64 = 0x80000000; /*0x69a862*/
      v60 = 0; /*0x69a86a*/
      v61 = 2; /*0x69a86e*/
      v65 = 0; /*0x69a873*/
      *(_OWORD *)v66 = 0; /*0x69a878*/
      v17 = v41; /*0x69a880*/
      v68 = 0; /*0x69a886*/
      *(float *)&v42 = -v41; /*0x69a88f*/
      v57.__vftable = (NiObjectVtbl *)v42; /*0x69a89b*/
      v57.members.m_uiRefCount = v42; /*0x69a89f*/
      v43 = *(float *)&v42 + *(float *)&pointXYZ; /*0x69a8b0*/
      v53 = *((float *)&pointXYZ + 1) + *(float *)&v57.__vftable; /*0x69a8bd*/
      v55 = *(float *)&a3 + *(float *)&v57.members.m_uiRefCount; /*0x69a8ca*/
      v18 = hkFactor; /*0x69a8da*/
      *(float *)&v65 = v43 * v18; /*0x69a8dc*/
      *((float *)&v65 + 1) = v53 * v18; /*0x69a8e6*/
      *((float *)&v65 + 2) = v55 * v18; /*0x69a8f0*/
      *(float *)&v56 = *(float *)&pointXYZ + v17; /*0x69a8fa*/
      v19 = *((float *)&pointXYZ + 1) + v17; /*0x69a90a*/
      v20 = *(float *)&a3; /*0x69a90a*/
      v21 = (unsigned __int16)(dword_B2EB3C + 1); /*0x69a90c*/
      dword_B2EB3C = v21; /*0x69a911*/
      *(float *)&v54 = v19; /*0x69a916*/
      v44 = v17 + v20; /*0x69a91e*/
      v66[0] = *(float *)&v56 * v18; /*0x69a928*/
      v66[1] = *(float *)&v54 * v18; /*0x69a935*/
      v66[2] = v18 * v44; /*0x69a940*/
      if ( !v21 ) /*0x69a947*/
      {
        v21 = 0xA; /*0x69a949*/
        dword_B2EB3C = 0xA; /*0x69a94e*/
      }
      v59 = (v21 << 0x10) | 0x1E; /*0x69a962*/
      sub_699CE0((bhkRefObject *)&v57.hkObject, (int)&v59); /*0x69a966*/
      LOBYTE(v68) = 1; /*0x69a96d*/
      if ( TESObjectCELL_IsInterior(v10) ) /*0x69a975*/
        v22 = (int *)sub_424180(&v10->members.extraData); /*0x69a981*/
      else
        v22 = (int *)MEMORY[0xB35C24]; /*0x69a988*/
      sub_89F470((int *)&v57.hkObject, v22); /*0x69a992*/
      if ( v58 ) /*0x69a99d*/
        v23 = (_DWORD *)(v58 + 0x90); /*0x69a99f*/
      else
        v23 = 0; /*0x69a9a7*/
      if ( (int)v23[1] > 0 ) /*0x69a9ad*/
      {
        do /*0x69a9f0*/
        {
          v24 = *(_DWORD *)(*v23 + 4 * v15); /*0x69a9b1*/
          if ( *(_BYTE *)(v24 + 0x18) == 1 ) /*0x69a9b8*/
          {
            v25 = v24 + *(_DWORD *)(v24 + 0x10); /*0x69a9bd*/
            if ( v25 ) /*0x69a9bf*/
              sub_699760(v25, *(float *)&pointXYZ, *((float *)&pointXYZ + 1), *(float *)&a3, v9, v47); /*0x69a9e5*/
          }
          ++v15; /*0x69a9ea*/
        }
        while ( v15 < v23[1] ); /*0x69a9f0*/
      }
      sub_8AECA0((int *)&v57.hkObject); /*0x69a9f6*/
      v26 = (MagicCaster *)this; /*0x69a9fb*/
      v45 = DistanceToPoint; /*0x69aa0a*/
      v27 = (*(int (__thiscall **)(char *))(*(_DWORD *)this + 0x20))(this); /*0x69aa0e*/
      if ( v27 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v27 + 0x190))(v27) ) /*0x69aa1e*/
        v49 = this + 0xFFFFFFA4; /*0x69aa27*/
      else
        v49 = 0; /*0x69aa2d*/
      if ( DistanceToPoint != 0.0 )
      {
        do
        {
          if ( !*(_DWORD *)LODWORD(v45) ) /*0x69aa41*/
            break; /*0x69aa45*/
          v28 = *(_DWORD *)LODWORD(v45); /*0x69aa41*/
          v29 = (*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)v28 + 0x190))(*(_DWORD *)LODWORD(v45)) != 0
              ? (TESObjectREFR *)v28
              : 0;
          v30 = v29; /*0x69aa5d*/
          if ( v29 ) /*0x69aa5f*/
          {
            if ( v29 != (TESObjectREFR *)v49 ) /*0x69aa69*/
            {
              if ( v29->vtbl->GetNiNode(v29) ) /*0x69aa79*/
              {
                DistanceToPoint = TESObjectREFR::GetDistanceToPoint(v30, (const float *)&pointXYZ); /*0x69aa8a*/
                if ( v52 >= (double)DistanceToPoint /*0x69aac7*/
                  && !v30->vtbl->IsDead(v30, 0)
                  && !Actor_IsGhost((Actor *)v30)
                  && sub_699EB0(v26, (int)&v30[1].member.super.modlist, v56) )
                {
                  *(_QWORD *)&v35 = pointXYZ; /*0x69aae4*/
                  *((_QWORD *)&v35 + 1) = __PAIR64__((unsigned int)v9, a3); /*0x69aaec*/
                  sub_699900((int)v26, (int)v26, v45, v30, v35, v45); /*0x69aaf2*/
                }
              }
            }
          }
          v39 = *(float *)(LODWORD(v39) + 4); /*0x69ab00*/
        }
        while ( v39 != 0.0 );
      }
      v31 = reference; /*0x69ab0a*/
      if ( reference ) /*0x69ab0a*/
      {
        if ( v31 != (PlayerCharacter *)LODWORD(v47) ) /*0x69ab1c*/
        {
          if ( v31->vtbl->super.super.super.GetNiNode((TESObjectREFR *)v31) ) /*0x69ab2a*/
          {
            v50 = TESObjectREFR::GetDistanceToPoint((TESObjectREFR *)reference, (const float *)&pointXYZ); /*0x69ab43*/
            if ( DistanceToPoint >= (double)v50 /*0x69ab74*/
              && !reference->vtbl->super.super.super.IsDead((TESObjectREFR *)reference, 0)
              && !Actor_IsGhost((Actor *)reference) )
            {
              if ( reference ) /*0x69ab7d*/
                p_magicTarget = &reference->super.super.magicTarget; /*0x69ab86*/
              else
                p_magicTarget = 0; /*0x69ab8b*/
              if ( sub_699EB0(v26, (int)p_magicTarget, v54) ) /*0x69ab95*/
              {
                *(_QWORD *)&v34 = pointXYZ; /*0x69abb2*/
                *((_QWORD *)&v34 + 1) = __PAIR64__((unsigned int)v9, a3); /*0x69abba*/
                sub_699900((int)v26, (int)v26, v39, (TESObjectREFR *)reference, v34, v39); /*0x69abc5*/
              }
            }
          }
        }
      }
      LOBYTE(v67) = 0; /*0x69abce*/
      bhkAabbPhantom::~bhkAabbPhantom(&v57); /*0x69abd6*/
      v67 = 0xFFFFFFFF; /*0x69abe1*/
      if ( v62 >= 0 ) /*0x69abec*/
      {
        v33 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x69abfe*/
        if ( !v33 ) /*0x69ac06*/
          v33 = unk_BA7D9C; /*0x69ac08*/
        sub_8A75D0(v33, v60, 8 * v62, 0x14); /*0x69ac21*/
      }
    }
  }
  MagicCaster_ExplosionCalcs_____::Done(pointXYZ, SHIDWORD(pointXYZ), a3, (int)a4, a5, (int)a6, a7, a8, a9); /*0x69ac22*/
}
