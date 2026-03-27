void __thiscall sub_5AFDA0(int *this, int a2)
{
  unsigned int RandomLargeInteger; // esi
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

  RandomLargeInteger = GetRandomLargeInteger_(0);
  dword_B3B3FC = GetRandomLargeInteger_(Seed);
  GetRandomLargeInteger_(RandomLargeInteger);
  v4 = dword_B3B3FC & 1;
  if ( dword_B3B400 <= v4 )
    ++v4;
  v5 = TESDataHandler_g_PlayerRef;
  vtbl = TESDataHandler_g_PlayerRef->vtbl;
  dword_B3B400 = v4;
  if ( vtbl->super.GetActorValue((Actor *)v5, kActorVal_Security) <= 0x64 )
    v7 = TESDataHandler_g_PlayerRef->vtbl->super.GetActorValue((Actor *)TESDataHandler_g_PlayerRef, kActorVal_Security);
  else
    v7 = 0x64;
  v8 = 0;
  v24 = v7;
  if ( v7 >= 0xA )
  {
    if ( v7 >= 0x14 )
    {
      if ( v7 >= 0x1E )
      {
        if ( v7 >= 0x28 )
        {
          if ( v7 >= 0x32 )
          {
            if ( v7 >= 0x3C )
            {
              if ( v7 >= 0x46 )
              {
                if ( v7 >= 0x50 )
                {
                  if ( v7 >= 0x5A )
                  {
                    if ( v7 <= 0x64 )
                      v8 = 9;
                  }
                  else
                  {
                    v8 = 8;
                  }
                }
                else
                {
                  v8 = 7;
                }
              }
              else
              {
                v8 = 6;
              }
            }
            else
            {
              v8 = 5;
            }
          }
          else
          {
            v8 = 4;
          }
        }
        else
        {
          v8 = 3;
        }
      }
      else
      {
        v8 = 2;
      }
    }
    else
    {
      v8 = 1;
    }
  }
  switch ( GetLockLevel(*(this + 0x12)) )
  {
    case 0:
      if ( v8 > 0 )
      {
        v19 = (float)v24;
        v14 = (float)(0xA * v8 + 0xA);
        v9 = (float)(0xA * v8);
        sub_410EB0(*(float *)(4 * v8 + 0xB14194), *(float *)(4 * v8 + 0xB14198), v9, v14, v19);
      }
      break;
    case 1:
      if ( v8 > 0 )
      {
        v20 = (float)v24;
        v15 = (float)(0xA * v8 + 0xA);
        v10 = (float)(0xA * v8);
        sub_410EB0(*(float *)(4 * v8 + 0xB141BC), *(float *)(4 * v8 + 0xB141C0), v10, v15, v20);
      }
      break;
    case 2:
      if ( v8 > 0 )
      {
        v21 = (float)v24;
        v16 = (float)(0xA * v8 + 0xA);
        v11 = (float)(0xA * v8);
        sub_410EB0(*(float *)(4 * v8 + 0xB141E4), *(float *)(4 * v8 + 0xB141E8), v11, v16, v21);
      }
      break;
    case 3:
      if ( v8 > 0 )
      {
        v22 = (float)v24;
        v17 = (float)(0xA * v8 + 0xA);
        v12 = (float)(0xA * v8);
        sub_410EB0(*(float *)(4 * v8 + 0xB1420C), *(float *)(4 * v8 + 0xB14210), v12, v17, v22);
      }
      break;
    case 4:
      if ( v8 > 0 )
      {
        v23 = (float)v24;
        v18 = (float)(0xA * v8 + 0xA);
        v13 = (float)(0xA * v8);
        sub_410EB0(*(float *)(4 * v8 + 0xB14234), *(float *)(4 * v8 + 0xB14238), v13, v18, v23);
      }
      break;
    default:
      JUMPOUT(0x5B0068);
  }
  JUMPOUT(0x5B006A);
}
