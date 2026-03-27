int __thiscall MagicCaster_ExplosionCalcs____(
        char *this,
        __int64 a2,
        float a3,
        TESObjectCELL *a4,
        int a5,
        float *a6,
        float a7,
        float a8,
        float a9)
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
  hkRefObject *v23; // ebx
  void (__thiscall *Destructor)(hkBaseObject *__hidden, bool); // eax
  int v25; // ecx
  MagicCaster *v26; // ebx
  int v27; // eax
  int v28; // esi
  float *v29; // eax
  float *v30; // esi
  PlayerCharacter *v31; // ecx
  MagicTarget *p_magicTarget; // eax
  int v33; // ecx
  __int128 v35; // [esp-8h] [ebp-D0h]
  __int128 v36; // [esp-4h] [ebp-CCh]
  int v37; // [esp+8h] [ebp-C0h]
  int v38; // [esp+Ch] [ebp-BCh]
  float v39; // [esp+10h] [ebp-B8h]
  float v40; // [esp+24h] [ebp-A4h]
  float v41; // [esp+28h] [ebp-A0h]
  float v42; // [esp+28h] [ebp-A0h]
  float v43; // [esp+28h] [ebp-A0h]
  float v44; // [esp+28h] [ebp-A0h]
  float v45; // [esp+28h] [ebp-A0h]
  float v46; // [esp+28h] [ebp-A0h]
  int Area; // [esp+2Ch] [ebp-9Ch]
  float v48; // [esp+2Ch] [ebp-9Ch]
  char *v50; // [esp+30h] [ebp-98h]
  float v51; // [esp+30h] [ebp-98h]
  float v52; // [esp+34h] [ebp-94h]
  float v53; // [esp+38h] [ebp-90h]
  float v54; // [esp+3Ch] [ebp-8Ch]
  int v55; // [esp+3Ch] [ebp-8Ch]
  float v56; // [esp+40h] [ebp-88h]
  int v57; // [esp+40h] [ebp-88h]
  float v58; // [esp+4Ch] [ebp-7Ch] BYREF
  float v59; // [esp+50h] [ebp-78h]
  bhkRefObject v60; // [esp+54h] [ebp-74h] BYREF
  int v61; // [esp+68h] [ebp-60h] BYREF
  _DWORD *v62; // [esp+6Ch] [ebp-5Ch]
  char v63; // [esp+70h] [ebp-58h]
  int v64; // [esp+74h] [ebp-54h]
  int v65; // [esp+78h] [ebp-50h]
  unsigned int v66; // [esp+7Ch] [ebp-4Ch]
  __int128 v67; // [esp+88h] [ebp-40h]
  __int128 v68; // [esp+98h] [ebp-30h]
  unsigned int v69; // [esp+BCh] [ebp-Ch]
  int v70; // [esp+C4h] [ebp-4h]

  v9 = a6;
  v10 = a4;
  v52 = a7;
  if ( (*(_DWORD *)(*((_DWORD *)a6 + 7) + 0x58) & 0x20000000) != 0 )
  {
    Area = EffectItem_GetArea(a6);
    v53 = (double)Area * fMagicUnitsPerFoot * a9;
    if ( v53 > 0.0 )
    {
      v11 = v9[4];
      LOBYTE(v11) = LODWORD(v11) == 2;
      v41 = *(float *)(*((_DWORD *)v9 + 7) + 0x5C);
      v39 = v11;
      Magnitude = EffectItem_GetMagnitude(v9);
      v38 = Double_To_SInt32((double)Magnitude * a8);
      Duration = EffectItem_GetDuration(v9);
      v37 = Double_To_SInt32((double)Duration * a8);
      v14 = EffectItem_GetArea(v9);
      v48 = Calc_BaseMagickaCost(v41, v14, v37, v38, v39);
      v15 = 0;
      v16 = v53 * dbl_A2FAA0;
      v64 = 0;
      v65 = 0;
      v42 = v16;
      v66 = 0x80000000;
      v62 = 0;
      v63 = 2;
      v67 = 0;
      v68 = 0;
      v17 = v42;
      v70 = 0;
      v43 = -v42;
      v58 = v43;
      v59 = v43;
      v44 = v43 + *(float *)&a2;
      v54 = *((float *)&a2 + 1) + v58;
      v56 = a3 + v59;
      v18 = hkFactor;
      *(float *)&v67 = v44 * v18;
      *((float *)&v67 + 1) = v54 * v18;
      *((float *)&v67 + 2) = v56 * v18;
      *(float *)&v57 = *(float *)&a2 + v17;
      v19 = *((float *)&a2 + 1) + v17;
      v20 = a3;
      v21 = (unsigned __int16)(dword_B2EB3C + 1);
      dword_B2EB3C = v21;
      *(float *)&v55 = v19;
      v45 = v17 + v20;
      *(float *)&v68 = *(float *)&v57 * v18;
      *((float *)&v68 + 1) = *(float *)&v55 * v18;
      *((float *)&v68 + 2) = v18 * v45;
      if ( !v21 )
      {
        v21 = 0xA;
        dword_B2EB3C = 0xA;
      }
      v61 = (v21 << 0x10) | 0x1E;
      sub_699CE0(&v60, (int)&v61);
      LOBYTE(v70) = 1;
      if ( TESObjectCELL_IsInterior(v10) )
        v22 = (int *)sub_424180(&v10->members.extraData);
      else
        v22 = (int *)bhkWorldM;
      sub_89F470(&v60, v22);
      if ( v60.hkObject )
        v23 = v60.hkObject + 0x12;
      else
        v23 = 0;
      if ( *(int *)&v23->sizeAndFlags > 0 )
      {
        do
        {
          Destructor = v23->__vftable[v15].Destructor;
          if ( *((_BYTE *)Destructor + 0x18) == 1 )
          {
            v25 = (int)Destructor + *((_DWORD *)Destructor + 4);
            if ( v25 )
              sub_699760(v25, *(float *)&a2, *((float *)&a2 + 1), a3, v9, v48);
          }
          ++v15;
        }
        while ( v15 < *(_DWORD *)&v23->sizeAndFlags );
      }
      sub_8AECA0(&v60);
      v26 = (MagicCaster *)this;
      v46 = v52;
      v27 = (*(int (__thiscall **)(char *))(*(_DWORD *)this + 0x20))(this);
      if ( v27 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v27 + 0x190))(v27) )
        v50 = this + 0xFFFFFFA4;
      else
        v50 = 0;
      if ( v52 != 0.0 )
      {
        do
        {
          if ( !*(_DWORD *)LODWORD(v46) )
            break;
          v28 = *(_DWORD *)LODWORD(v46);
          v29 = (*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)v28 + 0x190))(*(_DWORD *)LODWORD(v46)) != 0
              ? (float *)v28
              : 0;
          v30 = v29;
          if ( v29 )
          {
            if ( v29 != (float *)v50 )
            {
              if ( (*(int (__thiscall **)(float *))(*(_DWORD *)v29 + 0x154))(v29) )
              {
                v52 = sub_4D7E30(v30, (float *)&a2);
                if ( v53 >= (double)v52
                  && !(*(unsigned __int8 (__thiscall **)(float *, _DWORD))(*(_DWORD *)v30 + 0x198))(v30, 0)
                  && !Actor_IsGhost((Actor *)v30)
                  && sub_699EB0(v26, (int)(v30 + 0x1A), v57) )
                {
                  *(_QWORD *)&v36 = a2;
                  *((_QWORD *)&v36 + 1) = __PAIR64__((unsigned int)v9, LODWORD(a3));
                  sub_699900((int)v26, (int)v26, v46, (Actor *)v30, v36, v46);
                }
              }
            }
          }
          v40 = *(float *)(LODWORD(v40) + 4);
        }
        while ( v40 != 0.0 );
      }
      v31 = TESDataHandler_g_PlayerRef;
      if ( TESDataHandler_g_PlayerRef )
      {
        if ( v31 != (PlayerCharacter *)LODWORD(v48) )
        {
          if ( v31->vtbl->super.super.super.GetNiNode((TESObjectREFR *)v31) )
          {
            v51 = sub_4D7E30((float *)TESDataHandler_g_PlayerRef, (float *)&a2);
            if ( v52 >= (double)v51
              && !TESDataHandler_g_PlayerRef->vtbl->super.super.super.IsDead(
                    (TESObjectREFR *)TESDataHandler_g_PlayerRef,
                    0)
              && !Actor_IsGhost((Actor *)TESDataHandler_g_PlayerRef) )
            {
              if ( TESDataHandler_g_PlayerRef )
                p_magicTarget = &TESDataHandler_g_PlayerRef->super.super.magicTarget;
              else
                p_magicTarget = 0;
              if ( sub_699EB0(v26, (int)p_magicTarget, v55) )
              {
                *(_QWORD *)&v35 = a2;
                *((_QWORD *)&v35 + 1) = __PAIR64__((unsigned int)v9, LODWORD(a3));
                sub_699900((int)v26, (int)v26, v40, (Actor *)TESDataHandler_g_PlayerRef, v35, v40);
              }
            }
          }
        }
      }
      LOBYTE(v69) = 0;
      bhkAabbPhantom::~bhkAabbPhantom((bhkAabbPhantom *)&v58);
      v69 = 0xFFFFFFFF;
      if ( v64 >= 0 )
      {
        v33 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
        if ( !v33 )
          v33 = dword_BA7D9C;
        sub_8A75D0(v33, v62, 8 * v64, 0x14);
      }
    }
  }
  return MagicCaster_ExplosionCalcs_____::Done(
           a2,
           HIDWORD(a2),
           LODWORD(a3),
           a4,
           a5,
           a6,
           LODWORD(a7),
           LODWORD(a8),
           LODWORD(a9));
}
