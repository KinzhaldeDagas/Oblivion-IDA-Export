// ActorAnimData movement-vector recovery. For an installed TESAnimGroup, samples AccumRoot at current/end times, computes normalized movement delta, stores it back to the TESAnimGroup, and warns when Animate In Place exported zero movement.
void __thiscall ActorAnimData_SetAnimGroupMovementVector(_DWORD *this, float a2)
{
  _DWORD *v2; // ebx
  TESAnimGroup *v3; // ebp
  int Magicka; // esi
  int AnimationGroup; // edi
  float v6; // esi
  int v7; // eax
  int v8; // edi
  unsigned int v9; // esi
  unsigned int v10; // eax
  int v11; // ecx
  int v12; // edx
  int v13; // esi
  int v14; // eax
  const char *v15; // [esp+18h] [ebp-94h]
  const char *v16; // [esp+1Ch] [ebp-90h]
  const char *v17; // [esp+20h] [ebp-8Ch]
  float v19; // [esp+3Ch] [ebp-70h]
  int v20; // [esp+40h] [ebp-6Ch] BYREF
  float v21; // [esp+44h] [ebp-68h]
  float v22; // [esp+48h] [ebp-64h]
  float v23; // [esp+4Ch] [ebp-60h]
  int v24; // [esp+50h] [ebp-5Ch]
  float v25[3]; // [esp+54h] [ebp-58h] BYREF
  float v26[8]; // [esp+60h] [ebp-4Ch] BYREF
  float v27[8]; // [esp+80h] [ebp-2Ch] BYREF
  float v28; // [esp+A8h] [ebp-4h]

  v2 = this; /*0x472057*/
  v3 = (TESAnimGroup *)LODWORD(a2); /*0x47205d*/
  Magicka = (unsigned __int16)Shared_GetWordAtOffset08((_WORD *)LODWORD(a2)); /*0x47206b*/
  v24 = Magicka; /*0x472070*/
  AnimationGroup = TESAnimGroup_GetAnimationGroup(v3); /*0x472079*/
  if ( v2[0x26]
    && ActorAnimData_FindAnimMapEntry((_DWORD *)v2[0x27], Magicka, &a2)
    && AnimationGroup != 1
    && AnimationGroup != 2 )
  {
    if ( sub_471600(v2[0x26]) )
    {
      v6 = a2; /*0x4720df*/
      if ( (*(int (__thiscall **)(_DWORD, unsigned int))(*(_DWORD *)LODWORD(a2) + 0x10))(LODWORD(a2), 0xFFFFFFFF)
        && !byte_B102E4[0x24 * AnimationGroup] )
      {
        switch ( dword_B102EC[9 * AnimationGroup] )
        {
          case 0:
          case 1:
          case 4:
          case 5:
          case 6:
            v7 = (*(int (__thiscall **)(float, unsigned int))(*(_DWORD *)LODWORD(v6) + 0x10))( /*0x472133*/
                   COERCE_FLOAT(LODWORD(v6)),
                   0xFFFFFFFF);
            sub_405070(&v20, v7); /*0x47213a*/
            v8 = v20; /*0x47213f*/
            v9 = *(_DWORD *)(v20 + 0xC); /*0x472143*/
            v10 = 0; /*0x472146*/
            v28 = 0.0; /*0x47214a*/
            if ( v9 )
            {
              v11 = *(_DWORD *)(v20 + 0x14) + 4; /*0x47215d*/
              while ( 1 )
              {
                v12 = *(_DWORD *)v11 ? *(_DWORD *)(*(_DWORD *)v11 + 0x30) : 0;
                if ( v12 == *(_DWORD *)(v20 + 0x60) ) /*0x47216f*/
                  break; /*0x47216f*/
                ++v10; /*0x472171*/
                v11 += 0x10; /*0x472174*/
                if ( v10 >= v9 ) /*0x472179*/
                  goto LABEL_21; /*0x472179*/
              }
              v19 = *(float *)(v20 + 0x2C); /*0x472189*/
              v13 = *(_DWORD *)(0x10 * v10 + *(_DWORD *)(v20 + 0x14)); /*0x47218d*/
              a2 = *(float *)(v20 + 0x30); /*0x472197*/
              sub_470AB0(v27); /*0x47219e*/
              sub_470AB0(v26); /*0x4721a7*/
              (*(void (__thiscall **)(int, float, _DWORD, float *))(*(_DWORD *)v13 + 0x4C))( /*0x4721c2*/
                v13,
                COERCE_FLOAT(LODWORD(v19)),
                0,
                v27);
              (*(void (__thiscall **)(int, _DWORD, _DWORD, float *))(*(_DWORD *)v13 + 0x4C))(v13, LODWORD(a2), 0, v26); /*0x4721dd*/
              if ( sub_470B00(v27) ) /*0x4721e3*/
              {
                if ( sub_470B00(v26) ) /*0x4721f0*/
                {
                  v21 = v26[0] - v27[0]; /*0x472206*/
                  v22 = v26[1] - v27[1]; /*0x472212*/
                  v23 = v26[2] - v27[2]; /*0x47221e*/
                  v25[0] = v21; /*0x472226*/
                  v25[1] = v22; /*0x47222e*/
                  v25[2] = v23; /*0x472236*/
                  a2 = a2 - v19; /*0x472245*/
                  sub_4707E0(v25, a2); /*0x472256*/
                  PathGraphNode_SetPosition(v3, v25); /*0x472262*/
                }
              }
LABEL_21:
              v2 = this; /*0x472267*/
            }
            v28 = NAN; /*0x47226f*/
            if ( !InterlockedDecrement((volatile LONG *)(v8 + 4)) ) /*0x47227a*/
              (**(void (__thiscall ***)(int, int))v8)(v8, 1); /*0x47228c*/
            break; /*0x47228c*/
          default:
            break;
        }
      }
      if ( (unsigned int)(AnimKey_GetGroupID(v24) - 3) <= 0xB /*0x4722b5*/
        && TESAnimGroup_GetMovementMagnitude((float *)v3) == *(float *)&SrcStr )
      {
        v17 = *(const char **)(v2[1] + 8); /*0x4722bd*/
        v16 = *(const char **)(0x24 * TESAnimGroup_GetAnimationGroup(v3) + 0xB102E0); /*0x4722cf*/
        v15 = *(const char **)(4 * TESAnimGroup_GetWeaponPrefix((unsigned __int16 *)v3) + 0xB102C8); /*0x4722de*/
        v14 = TESAnimGroup_GetMovementPrefix((unsigned __int16 *)v3); /*0x4722e1*/
        PrintError( /*0x4722f3*/
          "AnimGroup '%s%s%s' for '%s' was exported with 'Animate in Place' from MAX.\r\n",
          *(const char **)(4 * v14 + 0xB102B8),
          v15,
          v16,
          v17);
      }
    }
    else
    {
      PrintError("Could not find AccumRoot in animation '%s'.", *(const char **)(v2[1] + 8)); /*0x4720d2*/
    }
  }
}
