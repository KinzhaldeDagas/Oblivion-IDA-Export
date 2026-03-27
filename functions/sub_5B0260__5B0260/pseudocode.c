BOOL __thiscall sub_5B0260(char *this)
{
  int v2; // ecx
  char *v3; // eax
  int v4; // edx
  int v5; // eax
  int v6; // eax
  unsigned int RandomLargeInteger; // esi
  int v9; // [esp+1Ch] [ebp-18h]
  float v10; // [esp+24h] [ebp-10h]
  float v11; // [esp+28h] [ebp-Ch]

  v2 = 0;
  v3 = this + 0x95;
  v4 = 5;
  do
  {
    if ( !*v3 )
      ++v2;
    v3 += 0x28;
    --v4;
  }
  while ( v4 );
  v5 = ((int (__thiscall *)(PlayerCharacter *))TESDataHandler_g_PlayerRef->vtbl->super.GetActorValue)(TESDataHandler_g_PlayerRef);
  sub_548A60(flt_B39498, flt_B39490, flt_B394A0, v5, 0x1E);
  v6 = ((int (__thiscall *)(PlayerCharacter *, int, _DWORD))TESDataHandler_g_PlayerRef->vtbl->super.GetActorValue)(
         TESDataHandler_g_PlayerRef,
         0x1E,
         *((_DWORD *)this + 0x12));
  sub_40FEC0("odds %f, base %f, diff %f, player %i, lock %i", v11, flt_B39498, flt_B39490, v6, v9);
  RandomLargeInteger = GetRandomLargeInteger_(0);
  dword_B3B3FC = GetRandomLargeInteger_(Seed);
  GetRandomLargeInteger_(RandomLargeInteger);
  v10 = (double)(dword_B3B3FC % 0x2710u) / fCostant_100;
  sub_40FEC0("%f", v10);
  ((void (__thiscall *)(PlayerCharacter *, int))TESDataHandler_g_PlayerRef->vtbl->super.ModExperience)(
    TESDataHandler_g_PlayerRef,
    0x1E);
  return (float)0.0 > 0.0;
}
