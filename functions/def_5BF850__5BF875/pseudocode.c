// local variable allocation has failed, the output may be wrong!
// positive sp value has been detected, the output may be wrong!
void __usercall def_5BF850(int a1@<edi>, int esi0@<esi>)
{
  int v3; // ebx
  int v4; // eax
  double v5; // st6
  unsigned int v6; // ebp
  char v7; // di
  int v8; // edi
  int v9; // eax
  _DWORD *v10; // edi
  int v11; // ebx
  Tile *v12; // ecx
  Tile *v13; // ecx
  double v14; // st7
  SkillMasteryLevel SkillMasteryLevel; // eax
  Tile *v16; // ecx
  int v17; // edi
  int v18; // eax
  int v19; // eax
  double v20; // st7
  int v21; // eax
  char *m_data; // edi
  PlayerCharacter *v23; // [esp-34h] [ebp-3Ch]
  int v24; // [esp-30h] [ebp-38h]
  float v25; // [esp-28h] [ebp-30h]
  float v26; // [esp-1Ch] [ebp-24h]
  float v27; // [esp-1Ch] [ebp-24h]
  float v28; // [esp-1Ch] [ebp-24h]
  BSStringT v29; // [esp-8h] [ebp-10h] BYREF
  int v30; // [esp+0h] [ebp-8h]
  _DWORD *a2; // [esp+4h] [ebp-4h] OVERLAPPED
  _UNKNOWN *retaddr; // [esp+8h] [ebp+0h]

  if ( a1 + 1 < 4 ) /*0x5bf87b*/
    JUMPOUT(0x5BF821); /*0x5bf821*/
  v3 = 0x64; /*0x5bf87d*/
  v30 = 4; /*0x5bf882*/
  do /*0x5bf90a*/
  {
    v4 = Game_RandomLargeInteger(0); /*0x5bf892*/
    v5 = *(float *)&MEMORY[0xB33E90][0xC]; /*0x5bf897*/
    v6 = v4; /*0x5bf8a1*/
    *(_QWORD *)&a2 = (__int64)v5; /*0x5bf8b5*/
    v7 = Game_RandomLargeInteger((unsigned int)a2); /*0x5bf8c8*/
    Game_RandomLargeInteger(v6); /*0x5bf8ca*/
    v8 = v7 & 3; /*0x5bf8d2*/
    v9 = 0; /*0x5bf8da*/
    do /*0x5bf8f9*/
    {
      if ( ++v9 > 3 ) /*0x5bf8e6*/
        v9 = 0; /*0x5bf8e8*/
      if ( *(_DWORD *)(esi0 + 0x14 * v9 + 0x34) == 0xFFFFFFFF ) /*0x5bf8f2*/
        --v8; /*0x5bf8f4*/
    }
    while ( v8 >= 0 ); /*0x5bf8f9*/
    *(_DWORD *)(esi0 + 0x14 * v9 + 0x34) = v3; /*0x5bf8fe*/
    v3 -= 0x19; /*0x5bf902*/
    --v30; /*0x5bf905*/
  }
  while ( v30 ); /*0x5bf90a*/
  sub_5BE380((_DWORD *)esi0); /*0x5bf90e*/
  v10 = (_DWORD *)(esi0 + 0x30); /*0x5bf913*/
  v11 = 4; /*0x5bf916*/
  do /*0x5bf993*/
  {
    switch ( v10[1] ) /*0x5bf932*/
    {
      case 0x19: /*0x5bf932*/
        a2 = (_DWORD *)(*v10 + 1); /*0x5bf93e*/
        v12 = *(Tile **)(esi0 + 0x98); /*0x5bf942*/
        goto LABEL_16; /*0x5bf948*/
      case 0x32: /*0x5bf932*/
        v12 = *(Tile **)(esi0 + 0x9C); /*0x5bf94c*/
        a2 = (_DWORD *)(*v10 + 1); /*0x5bf955*/
        goto LABEL_16; /*0x5bf959*/
      case 0x4B: /*0x5bf932*/
        v12 = *(Tile **)(esi0 + 0xA0); /*0x5bf95d*/
        a2 = (_DWORD *)(*v10 + 1); /*0x5bf966*/
        goto LABEL_16; /*0x5bf96a*/
      case 0x64: /*0x5bf932*/
        a2 = (_DWORD *)(*v10 + 1); /*0x5bf971*/
        v12 = *(Tile **)(esi0 + 0xA4); /*0x5bf975*/
LABEL_16:
        v26 = (float)(int)a2; /*0x5bf97b*/
        Tile_SetFloat(v12, 0xFAEu, v26); /*0x5bf988*/
        break; /*0x5bf988*/
      default:
        break;
    }
    v10 += 5; /*0x5bf98d*/
    --v11; /*0x5bf990*/
  }
  while ( v11 ); /*0x5bf993*/
  sub_5BEA90(0); /*0x5bf996*/
  v13 = *(Tile **)(esi0 + 0xBC); /*0x5bf9a1*/
  v27 = fConstant_2; /*0x5bf9a7*/
  *(_DWORD *)(esi0 + 0x88) = 0; /*0x5bf9af*/
  Tile_SetFloat(v13, 0xFAFu, v27); /*0x5bf9b5*/
  if ( sub_5BE870((int)v10, esi0) ) /*0x5bf9ba*/
    v14 = fConstant_2; /*0x5bf9ce*/
  else
    v14 = 1.0; /*0x5bf9ca*/
  v28 = v14; /*0x5bf9d4*/
  Tile_SetFloat(*(Tile **)(esi0 + 0xB8), 0xFAFu, v28); /*0x5bf9dc*/
  SkillMasteryLevel = Actor_GetSkillMasteryLevel((Actor *)reference, kSkillAV_Speechcraft); /*0x5bf9e9*/
  v16 = *(Tile **)(esi0 + 0xC0); /*0x5bf9f1*/
  if ( SkillMasteryLevel < kSkillMastery_Apprentice ) /*0x5bf9f8*/
  {
    Tile_SetFloat(v16, 0xFB1u, 1.0); /*0x5bfa2a*/
  }
  else
  {
    Tile_SetFloat(v16, 0xFB1u, fConstant_2); /*0x5bfa08*/
    Tile_SetFloat(*(Tile **)(esi0 + 0xC0), 0xFAFu, 1.0); /*0x5bfa1e*/
  }
  v17 = *(_DWORD *)(esi0 + 0xD8); /*0x5bfa42*/
  v25 = COERCE_FLOAT( /*0x5bfa61*/
          (*(int (__thiscall **)(int, int, float, float))(*(_DWORD *)v17 + 0x284))(
            v17,
            0x20,
            MEMORY[0xB38E18],
            MEMORY[0xB38E20]));
  v24 = ((int (__thiscall *)(PlayerCharacter *))reference->vtbl->super.GetActorValue)(reference); /*0x5bfa74*/
  v23 = reference; /*0x5bfa7d*/
  v18 = (*(int (__thiscall **)(int))(*(_DWORD *)v17 + 0x224))(v17); /*0x5bfa80*/
  sub_547A90(v18, (int)v23, v24, COERCE_FLOAT(0x20), v25); /*0x5bfa83*/
  v29.m_dataLen = 0; /*0x5bfa90*/
  v29.m_bufLen = 0; /*0x5bfa95*/
  *(float *)&v29.m_data = (float)v19; /*0x5bfa9a*/
  v20 = *(float *)&v29.m_data; /*0x5bfa9e*/
  v29.m_data = 0; /*0x5bfaa2*/
  *(float *)(esi0 + 0x7C) = v20; /*0x5bfaa6*/
  retaddr = 0; /*0x5bfaa9*/
  v21 = Double_To_SInt32(v20); /*0x5bfaad*/
  BSStringT_Static_Format(&v29, "%i", v21); /*0x5bfabd*/
  m_data = v29.m_data; /*0x5bfac2*/
  Tile_SetString(*(_DWORD **)(esi0 + 0x90), (_DWORD *)0xFDE, v29.m_data); /*0x5bfad5*/
  *(_DWORD *)(esi0 + 0xEC) = (*(int (__thiscall **)(_DWORD, PlayerCharacter *))(**(_DWORD **)(esi0 + 0xD8) + 0x224))( /*0x5bfaf1*/
                               *(_DWORD *)(esi0 + 0xD8),
                               reference);
  *(_DWORD *)(esi0 + 0xF0) = 0; /*0x5bfaf7*/
  sub_5BF170(v5, 0); /*0x5bfafd*/
  FormHeapFree((unsigned int)m_data); /*0x5bfb03*/
}
