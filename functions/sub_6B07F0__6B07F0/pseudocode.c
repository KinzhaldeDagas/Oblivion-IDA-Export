int __usercall sub_6B07F0@<eax>(int a1@<esi>, void *a2)
{
  int v2; // eax
  bool v3; // zf
  float v4; // ecx
  float v5; // edx
  int v6; // eax
  _DWORD *v7; // eax
  _DWORD *v8; // esi
  int v9; // ecx
  int v10; // eax
  void *v11; // eax
  float *v12; // eax
  float *v13; // edi
  int v14; // edx
  int v15; // eax
  __int16 v16; // cx
  int v17; // ecx
  int v18; // eax
  __int16 v19; // dx
  int v20; // ecx
  int v21; // edx
  __int16 v22; // ax
  int v23; // edx
  int v24; // eax
  __int16 v25; // cx
  __int16 v26; // ax
  char v27; // cl
  char v28; // cl
  _DWORD *v29; // eax
  char v30; // cl
  int v31; // ecx
  char *v32; // eax
  __int16 v34; // cx
  bool IsSneaking; // bl
  int *v36; // eax
  int *v37; // esi
  double v38; // st7
  float v40; // [esp+8h] [ebp-144h]
  char v42; // [esp+1Fh] [ebp-12Dh]
  float v43; // [esp+20h] [ebp-12Ch]
  float v44; // [esp+24h] [ebp-128h]
  float v45; // [esp+24h] [ebp-128h]
  float v46; // [esp+28h] [ebp-124h]
  float v47; // [esp+2Ch] [ebp-120h]
  float v48; // [esp+30h] [ebp-11Ch]
  float v49; // [esp+34h] [ebp-118h]
  float v50; // [esp+38h] [ebp-114h]
  float v51; // [esp+3Ch] [ebp-110h] BYREF
  int v52; // [esp+40h] [ebp-10Ch] BYREF
  int v53; // [esp+44h] [ebp-108h]
  int v54; // [esp+48h] [ebp-104h]
  __int16 v55; // [esp+4Ch] [ebp-100h]

  if ( dword_B3C20C >= (unsigned int)dword_B16304 )
    goto LABEL_45;
  if ( !dword_B3C0F0 )
    dword_B3C0F0 = (int)OSGlobals->sound;
  v2 = (*(int (__thiscall **)(void *))(*(_DWORD *)a2 + 0x174))(a2);
  v3 = byte_B333B8 == 0;
  v49 = flt_B162FC;
  v4 = *(float *)v2;
  v5 = *(float *)(v2 + 4);
  v6 = *(int *)(v2 + 8);
  v50 = v4;
  v51 = v5;
  v52 = v6;
  if ( !v3 )
    v49 = v49 * dbl_A2FAA0;
  v46 = *(float *)(dword_B3C0F0 + 0x80) - v4;
  v47 = *(float *)(dword_B3C0F0 + 0x84) - v51;
  v48 = *(float *)(dword_B3C0F0 + 0x88) - *(float *)&v52;
  v44 = v48 * v48 + v46 * v46 + v47 * v47;
  v45 = sqrt(v44);
  if ( v49 < (double)v45 )
LABEL_45:
    JUMPOUT(0x6B0BAF);
  v7 = OblivionDynamicCast(
         a2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
         &Actor `RTTI Type Descriptor',
         0);
  v8 = v7;
  if ( !v7
    || (v9 = v7[0x16]) == 0
    || ((v10 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v9 + 0xEC))(v9, 1, a1)) == 0
      ? (v11 = 0)
      : (v11 = *(void **)(v10 + 8)),
        !v11) )
  {
    JUMPOUT(0x6B0BAE);
  }
  v12 = (float *)OblivionDynamicCast(
                   v11,
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                   &TESObjectWEAP `RTTI Type Descriptor',
                   0);
  v13 = v12;
  if ( v12 )
  {
    switch ( *((_BYTE *)v12 + 0x90) )
    {
      case 0:
        v14 = dword_A777DC;
        v15 = dword_A777E0;
        v52 = dword_A777D8;
        v16 = word_A777E4;
        v53 = v14;
        v54 = v15;
        v55 = v16;
        goto LABEL_22;
      case 1:
        v20 = dword_A777BC;
        v21 = dword_A777C0;
        v52 = dword_A777B8;
        v22 = word_A777C4;
        v42 = 1;
        v53 = v20;
        v54 = v21;
        v55 = v22;
        goto LABEL_22;
      case 2:
        v17 = dword_A777D0;
        v18 = dword_A777CC;
        v52 = dword_A777C8;
        v19 = word_A777D4;
        v54 = v17;
        v55 = v19;
        goto LABEL_21;
      case 3:
        v23 = dword_A777AC;
        v24 = dword_A777B0;
        v52 = dword_A777A8;
        v25 = word_A777B4;
        v42 = 1;
        v53 = v23;
        v54 = v24;
        v55 = v25;
        goto LABEL_22;
      case 4:
        v28 = byte_A7779C;
        v18 = dword_A77798;
        v52 = dword_A77794;
        LOBYTE(v54) = v28;
LABEL_21:
        v53 = v18;
        goto LABEL_22;
      case 5:
        v26 = word_A777A4;
        v27 = byte_A777A6;
        v52 = dword_A777A0;
        LOWORD(v53) = v26;
        BYTE2(v53) = v27;
LABEL_22:
        if ( a2 == (void *)9 )
        {
          v32 = (char *)&v51 + 3;
          while ( *++v32 )
            ;
          v34 = word_A528E8;
          *(_DWORD *)v32 = aEquip;
          *((_WORD *)v32 + 2) = v34;
        }
        else if ( a2 == (void *)0xA )
        {
          v29 = (_DWORD *)((char *)&v51 + 3);
          do
          {
            v30 = *((_BYTE *)v29 + 1);
            v29 = (_DWORD *)((char *)v29 + 1);
          }
          while ( v30 );
          v31 = *(_DWORD *)"uip";
          *v29 = *(_DWORD *)"Unequip";
          v29[1] = v31;
        }
        IsSneaking = Actor_IsSneaking(v8);
        if ( dword_B3C0F0 )
        {
          v36 = PlaySound___((int *)dword_B3C0F0, (char *)&v52, 0x4102, 1);
          v37 = v36;
          if ( v36 )
          {
            sub_6B7360(v36, v49, v50, v51);
            sub_6AC3E0((_DWORD **)dword_B3C0F0, *v37, (LONG)a2);
            if ( !v42 )
            {
              v43 = 1.0 / ((1.0 - v13[0x26]) * dbl_A2FAA0 + v13[0x26]);
              sub_6B7310(v37, v43);
            }
            if ( IsSneaking )
              v38 = flt_A47E6C;
            else
              v38 = 1.0;
            v40 = v38;
            sub_6B7280(v37, v40);
            sub_6B7190(v37, 0);
            sub_6B73E0(v37);
            FormHeapFree((unsigned int)v37);
          }
        }
        return def_6B0985();
      default:
        break;
    }
  }
  JUMPOUT(0x6B0BAD);
}
