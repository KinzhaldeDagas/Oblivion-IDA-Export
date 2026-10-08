BOOL __thiscall LockPickMenu_TryAutoAttempt(char *this)
{
  int v2; // ecx
  char *v3; // eax
  int v4; // edx
  int v5; // eax
  int v6; // eax
  unsigned int v7; // esi
  int v9; // [esp+1Ch] [ebp-18h]
  float v10; // [esp+24h] [ebp-10h]
  float v11; // [esp+28h] [ebp-Ch]

  v2 = 0; /*0x5b0266*/
  v3 = this + 0x95; /*0x5b0268*/
  v4 = 5; /*0x5b026e*/
  do /*0x5b0281*/
  {
    if ( !*v3 ) /*0x5b0273*/
      ++v2; /*0x5b0278*/
    v3 += 0x28; /*0x5b027b*/
    --v4; /*0x5b027e*/
  }
  while ( v4 ); /*0x5b0281*/
  v5 = ((int (__thiscall *)(PlayerCharacter *))reference->vtbl->super.GetActorValue)(reference); /*0x5b0294*/
  sub_548A60(unk_B39498, unk_B39490, unk_B394A0, v5, 0x1E); /*0x5b02b7*/
  v6 = ((int (__thiscall *)(PlayerCharacter *, int, _DWORD))reference->vtbl->super.GetActorValue)( /*0x5b02d7*/
         reference,
         0x1E,
         *((_DWORD *)this + 0x12));
  sub_40FEC0("odds %f, base %f, diff %f, player %i, lock %i", v11, unk_B39498, unk_B39490, v6, v9); /*0x5b02fd*/
  v7 = Game_RandomLargeInteger(0); /*0x5b0310*/
  dword_B3B0B4[0xD2] = Game_RandomLargeInteger(*(_DWORD *)&MEMORY[0xB33E90][0x10]); /*0x5b0318*/
  Game_RandomLargeInteger(v7); /*0x5b031d*/
  v10 = (double)(dword_B3B0B4[0xD2] % 0x2710u) / fCostant_100; /*0x5b0355*/
  sub_40FEC0("%f", v10); /*0x5b0365*/
  ((void (__thiscall *)(PlayerCharacter *, int))reference->vtbl->super.ModExperience)(reference, 0x1E);// LockPick auto-attempt: Security (0x1E), useValue0, identity scale (0.0). /*0x5b0385*/
  return (float)0.0 > 0.0; /*0x5b039e*/
}
