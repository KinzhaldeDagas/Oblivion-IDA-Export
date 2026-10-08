// Weapon equip/unequip animation sound event dispatcher. Selects sound descriptor by equipped weapon anim type, appends Equip/Unequip variant, positions sound, and adjusts volume/pitch for sneaking/weapon speed.
void __usercall SoundManager_PlayWeaponEquipAnimEvent(int a1@<esi>, void *a2)
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
  float v39; // [esp+8h] [ebp-144h]
  char v41; // [esp+1Fh] [ebp-12Dh]
  float v42; // [esp+20h] [ebp-12Ch]
  float v43; // [esp+24h] [ebp-128h]
  float v44; // [esp+24h] [ebp-128h]
  float v45; // [esp+28h] [ebp-124h]
  float v46; // [esp+2Ch] [ebp-120h]
  float v47; // [esp+30h] [ebp-11Ch]
  float v48; // [esp+34h] [ebp-118h]
  float v49; // [esp+38h] [ebp-114h]
  float v50; // [esp+3Ch] [ebp-110h] BYREF
  int v51; // [esp+40h] [ebp-10Ch] BYREF
  int v52; // [esp+44h] [ebp-108h]
  int v53; // [esp+48h] [ebp-104h]
  __int16 v54; // [esp+4Ch] [ebp-100h]

  if ( LODWORD(qword_B3BB2C[0x1B8]) >= dword_B16304 ) /*0x6b0817*/
    goto LABEL_45; /*0x6b0817*/
  if ( !LODWORD(qword_B3BB2C[0x171]) ) /*0x6b081d*/
    qword_B3BB2C[0x171] = *(float *)&MEMORY[0xB33398]->sound; /*0x6b082f*/
  v2 = (*(int (__thiscall **)(void *))(*(_DWORD *)a2 + 0x174))(a2); /*0x6b0840*/
  v3 = unk_B333B8 == 0; /*0x6b0848*/
  v48 = flt_B162FC; /*0x6b084f*/
  v4 = *(float *)v2; /*0x6b0853*/
  v5 = *(float *)(v2 + 4); /*0x6b0855*/
  v6 = *(int *)(v2 + 8); /*0x6b0858*/
  v49 = v4; /*0x6b085b*/
  v50 = v5; /*0x6b085f*/
  v51 = v6; /*0x6b0863*/
  if ( !v3 ) /*0x6b0867*/
    v48 = v48 * dbl_A2FAA0; /*0x6b0873*/
  v45 = *(float *)(LODWORD(qword_B3BB2C[0x171]) + 0x80) - v4; /*0x6b08a2*/
  v46 = *(float *)(LODWORD(qword_B3BB2C[0x171]) + 0x84) - v50; /*0x6b08ae*/
  v47 = *(float *)(LODWORD(qword_B3BB2C[0x171]) + 0x88) - *(float *)&v51; /*0x6b08ba*/
  v43 = v47 * v47 + v45 * v45 + v46 * v46; /*0x6b08dc*/
  v44 = sqrt(v43); /*0x6b08e9*/
  if ( v48 < (double)v44 ) /*0x6b08fc*/
LABEL_45:
    JUMPOUT(0x6B0BAF); /*0x6b0baf*/
  v7 = OblivionDynamicCast( /*0x6b0917*/
         a2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
         &Actor `RTTI Type Descriptor',
         0);
  v8 = v7; /*0x6b091c*/
  if ( !v7
    || (v9 = v7[0x16]) == 0
    || ((v10 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v9 + 0xEC))(v9, 1, a1)) == 0
      ? (v11 = 0)
      : (v11 = *(void **)(v10 + 8)),
        !v11) )
  {
    JUMPOUT(0x6B0BAE); /*0x6b0bae*/
  }
  v12 = (float *)OblivionDynamicCast( /*0x6b0963*/
                   v11,
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                   &TESObjectWEAP `RTTI Type Descriptor',
                   0);
  v13 = v12; /*0x6b0968*/
  if ( v12 ) /*0x6b096f*/
  {
    switch ( *((_BYTE *)v12 + 0x90) ) /*0x6b0985*/
    {
      case 0: /*0x6b0985*/
        v14 = dword_A777DC; /*0x6b0992*/
        v15 = dword_A777E0; /*0x6b0998*/
        v51 = dword_A777D8; /*0x6b099d*/
        v16 = word_A777E4; /*0x6b09a1*/
        v52 = v14; /*0x6b09a8*/
        v53 = v15; /*0x6b09ac*/
        v54 = v16; /*0x6b09b0*/
        goto LABEL_22; /*0x6b09b5*/
      case 1: /*0x6b0985*/
        v20 = dword_A777BC; /*0x6b09e9*/
        v21 = dword_A777C0; /*0x6b09ef*/
        v51 = dword_A777B8; /*0x6b09f5*/
        v22 = word_A777C4; /*0x6b09f9*/
        v41 = 1; /*0x6b09ff*/
        v52 = v20; /*0x6b0a04*/
        v53 = v21; /*0x6b0a08*/
        v54 = v22; /*0x6b0a0c*/
        goto LABEL_22; /*0x6b0a11*/
      case 2: /*0x6b0985*/
        v17 = dword_A777D0; /*0x6b09c0*/
        v18 = dword_A777CC; /*0x6b09c6*/
        v51 = dword_A777C8; /*0x6b09cb*/
        v19 = word_A777D4; /*0x6b09cf*/
        v53 = v17; /*0x6b09d6*/
        v54 = v19; /*0x6b09da*/
        goto LABEL_21; /*0x6b09df*/
      case 3: /*0x6b0985*/
        v23 = dword_A777AC; /*0x6b0a19*/
        v24 = dword_A777B0; /*0x6b0a1f*/
        v51 = dword_A777A8; /*0x6b0a24*/
        v25 = word_A777B4; /*0x6b0a28*/
        v41 = 1; /*0x6b0a2f*/
        v52 = v23; /*0x6b0a34*/
        v53 = v24; /*0x6b0a38*/
        v54 = v25; /*0x6b0a3c*/
        goto LABEL_22; /*0x6b0a41*/
      case 4: /*0x6b0985*/
        v28 = byte_A7779C; /*0x6b0a6a*/
        v18 = dword_A77798; /*0x6b0a70*/
        v51 = dword_A77794; /*0x6b0a75*/
        LOBYTE(v53) = v28; /*0x6b0a79*/
LABEL_21:
        v52 = v18; /*0x6b0a7d*/
        goto LABEL_22; /*0x6b0a7d*/
      case 5: /*0x6b0985*/
        v26 = word_A777A4; /*0x6b0a49*/
        v27 = byte_A777A6; /*0x6b0a4f*/
        v51 = dword_A777A0; /*0x6b0a55*/
        LOWORD(v52) = v26; /*0x6b0a59*/
        BYTE2(v52) = v27; /*0x6b0a5e*/
LABEL_22:
        if ( a2 == (void *)9 ) /*0x6b0a8b*/
        {
          v32 = (char *)&v50 + 3; /*0x6b0ac1*/
          while ( *++v32 ) /*0x6b0acc*/
            ; /*0x6b0ac4*/
          v34 = word_A528E8; /*0x6b0ad4*/
          *(_DWORD *)v32 = aEquip; /*0x6b0adb*/
          *((_WORD *)v32 + 2) = v34; /*0x6b0add*/
        }
        else if ( a2 == (void *)0xA ) /*0x6b0a90*/
        {
          v29 = (_DWORD *)((char *)&v50 + 3); /*0x6b0a96*/
          do /*0x6b0aa8*/
          {
            v30 = *((_BYTE *)v29 + 1); /*0x6b0aa0*/
            v29 = (_DWORD *)((char *)v29 + 1); /*0x6b0aa3*/
          }
          while ( v30 ); /*0x6b0aa8*/
          v31 = *(_DWORD *)"uip"; /*0x6b0ab0*/
          *v29 = *(_DWORD *)"Unequip"; /*0x6b0ab6*/
          v29[1] = v31; /*0x6b0ab8*/
        }
        IsSneaking = Actor_IsSneaking(v8); /*0x6b0af1*/
        if ( LODWORD(qword_B3BB2C[0x171]) ) /*0x6b0ae9*/
        {
          v36 = PlaySound___((int *)LODWORD(qword_B3BB2C[0x171]), (char *)&v51, 0x4102, 1); /*0x6b0b05*/
          v37 = v36; /*0x6b0b0a*/
          if ( v36 ) /*0x6b0b0e*/
          {
            sub_6B7360(v36, v48, v49, v50); /*0x6b0b30*/
            sub_6AC3E0((_DWORD **)LODWORD(qword_B3BB2C[0x171]), *v37, (LONG)a2); /*0x6b0b3f*/
            if ( !v41 ) /*0x6b0b49*/
            {
              v42 = 1.0 / ((1.0 - v13[0x26]) * dbl_A2FAA0 + v13[0x26]); /*0x6b0b6a*/
              sub_6B7310(v37, v42); /*0x6b0b75*/
            }
            if ( IsSneaking ) /*0x6b0b7f*/
              v38 = flt_A47E6C; /*0x6b0b81*/
            else
              v38 = 1.0; /*0x6b0b89*/
            v39 = v38; /*0x6b0b8b*/
            sub_6B7280(v37, v39); /*0x6b0b8e*/
            sub_6B7190(v37, 0); /*0x6b0b97*/
            sub_6B73E0(v37); /*0x6b0b9e*/
            FormHeapFree((unsigned int)v37); /*0x6b0ba4*/
          }
        }
        def_6B0985(); /*0x6b0bac*/
        return;
      default:
        break;
    }
  }
  JUMPOUT(0x6B0BAD); /*0x6b0bad*/
}
