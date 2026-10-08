void __thiscall sub_5AFDA0(int *this, int a2)
{
  unsigned int v3; // esi
  int v4; // eax
  PlayerCharacter *v5; // ecx
  PlayerCharacterVtbl *vtbl; // edx
  int v7; // eax
  int v8; // esi
  float v9; // [esp+10h] [ebp-2Ch]
  float v10; // [esp+10h] [ebp-2Ch]
  float v11; // [esp+10h] [ebp-2Ch]
  float v12; // [esp+10h] [ebp-2Ch]
  float v13; // [esp+10h] [ebp-2Ch]
  float v14; // [esp+14h] [ebp-28h]
  float v15; // [esp+14h] [ebp-28h]
  float v16; // [esp+14h] [ebp-28h]
  float v17; // [esp+14h] [ebp-28h]
  float v18; // [esp+14h] [ebp-28h]
  float v19; // [esp+18h] [ebp-24h]
  float v20; // [esp+18h] [ebp-24h]
  float v21; // [esp+18h] [ebp-24h]
  float v22; // [esp+18h] [ebp-24h]
  float v23; // [esp+18h] [ebp-24h]
  int v24; // [esp+28h] [ebp-14h]

  v3 = Game_RandomLargeInteger(0); /*0x5afdaf*/
  dword_B3B0B4[0xD2] = Game_RandomLargeInteger(*(_DWORD *)&MEMORY[0xB33E90][0x10]); /*0x5afdbd*/
  Game_RandomLargeInteger(v3); /*0x5afdc2*/
  v4 = dword_B3B0B4[0xD2] & 1; /*0x5afdcc*/
  if ( dword_B3B0B4[0xD3] <= v4 ) /*0x5afdd8*/
    ++v4; /*0x5afdda*/
  v5 = reference; /*0x5afddd*/
  vtbl = reference->vtbl; /*0x5afde3*/
  dword_B3B0B4[0xD3] = v4; /*0x5afde5*/
  if ( vtbl->super.GetActorValue((Actor *)v5, kActorVal_Security) <= 0x64 ) /*0x5afdf7*/
    v7 = reference->vtbl->super.GetActorValue((Actor *)reference, kActorVal_Security); /*0x5afe10*/
  else
    v7 = 0x64; /*0x5afdf9*/
  v8 = 0; /*0x5afe12*/
  v24 = v7; /*0x5afe17*/
  if ( v7 >= 0xA ) /*0x5afe1b*/
  {
    if ( v7 >= 0x14 ) /*0x5afe20*/
    {
      if ( v7 >= 0x1E ) /*0x5afe2c*/
      {
        if ( v7 >= 0x28 ) /*0x5afe38*/
        {
          if ( v7 >= 0x32 ) /*0x5afe44*/
          {
            if ( v7 >= 0x3C ) /*0x5afe50*/
            {
              if ( v7 >= 0x46 ) /*0x5afe5c*/
              {
                if ( v7 >= 0x50 ) /*0x5afe68*/
                {
                  if ( v7 >= 0x5A ) /*0x5afe74*/
                  {
                    if ( v7 <= 0x64 ) /*0x5afe80*/
                      v8 = 9; /*0x5afe82*/
                  }
                  else
                  {
                    v8 = 8; /*0x5afe76*/
                  }
                }
                else
                {
                  v8 = 7; /*0x5afe6a*/
                }
              }
              else
              {
                v8 = 6; /*0x5afe5e*/
              }
            }
            else
            {
              v8 = 5; /*0x5afe52*/
            }
          }
          else
          {
            v8 = 4; /*0x5afe46*/
          }
        }
        else
        {
          v8 = 3; /*0x5afe3a*/
        }
      }
      else
      {
        v8 = 2; /*0x5afe2e*/
      }
    }
    else
    {
      v8 = 1; /*0x5afe22*/
    }
  }
  switch ( GetLockLevel(*(this + 0x12)) ) /*0x5afe9c*/
  {
    case LL_VERYEASY: /*0x5afe9c*/
      if ( v8 > 0 ) /*0x5afea5*/
      {
        v19 = (float)v24; /*0x5afeb3*/
        v14 = (float)(0xA * v8 + 0xA); /*0x5afec6*/
        v9 = (float)(0xA * v8); /*0x5afece*/
        sub_410EB0(*(float *)(4 * v8 + 0xB14194), *(float *)(4 * v8 + 0xB14198), v9, v14, v19); /*0x5afee7*/
      }
      break; /*0x5afeef*/
    case LL_EASY: /*0x5afe9c*/
      if ( v8 > 0 ) /*0x5aff02*/
      {
        v20 = (float)v24; /*0x5aff10*/
        v15 = (float)(0xA * v8 + 0xA); /*0x5aff23*/
        v10 = (float)(0xA * v8); /*0x5aff2b*/
        sub_410EB0(*(float *)(4 * v8 + 0xB141BC), *(float *)(4 * v8 + 0xB141C0), v10, v15, v20); /*0x5aff44*/
      }
      break; /*0x5aff4c*/
    case LL_AVERAGE: /*0x5afe9c*/
      if ( v8 > 0 ) /*0x5aff5f*/
      {
        v21 = (float)v24; /*0x5aff6d*/
        v16 = (float)(0xA * v8 + 0xA); /*0x5aff80*/
        v11 = (float)(0xA * v8); /*0x5aff88*/
        sub_410EB0(*(float *)(4 * v8 + 0xB141E4), *(float *)(4 * v8 + 0xB141E8), v11, v16, v21); /*0x5affa1*/
      }
      break; /*0x5affa9*/
    case LL_HARD: /*0x5afe9c*/
      if ( v8 > 0 ) /*0x5affbc*/
      {
        v22 = (float)v24; /*0x5affca*/
        v17 = (float)(0xA * v8 + 0xA); /*0x5affdd*/
        v12 = (float)(0xA * v8); /*0x5affe5*/
        sub_410EB0(*(float *)(4 * v8 + 0xB1420C), *(float *)(4 * v8 + 0xB14210), v12, v17, v22); /*0x5afffe*/
      }
      break; /*0x5b0006*/
    case LL_VERYHARD: /*0x5afe9c*/
      if ( v8 > 0 ) /*0x5b0013*/
      {
        v23 = (float)v24; /*0x5b0021*/
        v18 = (float)(0xA * v8 + 0xA); /*0x5b0034*/
        v13 = (float)(0xA * v8); /*0x5b003c*/
        sub_410EB0(*(float *)(4 * v8 + 0xB14234), *(float *)(4 * v8 + 0xB14238), v13, v18, v23); /*0x5b0055*/
      }
      break; /*0x5b005d*/
    default:
      JUMPOUT(0x5B0068); /*0x5b0068*/
  }
  JUMPOUT(0x5B006A); /*0x5b006a*/
}
