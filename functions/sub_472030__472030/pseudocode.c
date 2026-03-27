void __thiscall sub_472030(_DWORD *this, float a2)
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
  unsigned int v14; // eax
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

  v2 = this;
  v3 = (TESAnimGroup *)LODWORD(a2);
  Magicka = (unsigned __int16)TESActorBaseData_GetMagicka((_WORD *)LODWORD(a2));
  v24 = Magicka;
  AnimationGroup = TESAnimGroup_GetAnimationGroup(v3);
  if ( v2[0x26] && sub_470960((_DWORD *)v2[0x27], Magicka, &a2) && AnimationGroup != 1 && AnimationGroup != 2 )
  {
    if ( sub_471600(v2[0x26]) )
    {
      v6 = a2;
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
            v7 = (*(int (__thiscall **)(float, unsigned int))(*(_DWORD *)LODWORD(v6) + 0x10))(
                   COERCE_FLOAT(LODWORD(v6)),
                   0xFFFFFFFF);
            sub_405070(&v20, v7);
            v8 = v20;
            v9 = *(_DWORD *)(v20 + 0xC);
            v10 = 0;
            v28 = 0.0;
            if ( v9 )
            {
              v11 = *(_DWORD *)(v20 + 0x14) + 4;
              while ( 1 )
              {
                v12 = *(_DWORD *)v11 ? *(_DWORD *)(*(_DWORD *)v11 + 0x30) : 0;
                if ( v12 == *(_DWORD *)(v20 + 0x60) )
                  break;
                ++v10;
                v11 += 0x10;
                if ( v10 >= v9 )
                  goto LABEL_21;
              }
              v19 = *(float *)(v20 + 0x2C);
              v13 = *(_DWORD *)(0x10 * v10 + *(_DWORD *)(v20 + 0x14));
              a2 = *(float *)(v20 + 0x30);
              sub_470AB0(v27);
              sub_470AB0(v26);
              (*(void (__thiscall **)(int, float, _DWORD, float *))(*(_DWORD *)v13 + 0x4C))(
                v13,
                COERCE_FLOAT(LODWORD(v19)),
                0,
                v27);
              (*(void (__thiscall **)(int, _DWORD, _DWORD, float *))(*(_DWORD *)v13 + 0x4C))(v13, LODWORD(a2), 0, v26);
              if ( sub_470B00(v27) )
              {
                if ( sub_470B00(v26) )
                {
                  v21 = v26[0] - v27[0];
                  v22 = v26[1] - v27[1];
                  v23 = v26[2] - v27[2];
                  v25[0] = v21;
                  v25[1] = v22;
                  v25[2] = v23;
                  a2 = a2 - v19;
                  sub_4707E0(v25, a2);
                  sub_4BEF50(v3, v25);
                }
              }
LABEL_21:
              v2 = this;
            }
            v28 = NAN;
            if ( !InterlockedDecrement((volatile LONG *)(v8 + 4)) )
              (**(void (__thiscall ***)(int, int))v8)(v8, 1);
            break;
          default:
            break;
        }
      }
      if ( (unsigned int)(sub_51AA00(v24) - 3) <= 0xB && sub_51AED0((float *)v3) == *(float *)&SrcStr )
      {
        v17 = *(const char **)(v2[1] + 8);
        v16 = *(const char **)(0x24 * TESAnimGroup_GetAnimationGroup(v3) + 0xB102E0);
        v15 = *(const char **)(4 * sub_51AC60((unsigned __int16 *)v3) + 0xB102C8);
        v14 = sub_51AC50((unsigned __int16 *)v3);
        PrintError(
          "AnimGroup '%s%s%s' for '%s' was exported with 'Animate in Place' from MAX.\r\n",
          *(const char **)(4 * v14 + 0xB102B8),
          v15,
          v16,
          v17);
      }
    }
    else
    {
      PrintError("Could not find AccumRoot in animation '%s'.", *(const char **)(v2[1] + 8));
    }
  }
}
