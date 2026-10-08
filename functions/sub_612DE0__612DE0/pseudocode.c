// Sets CombatController+0x70 active mode (0 H2H, 1 melee weapon, 2 ranged weapon, 3 touch spell, 4 ranged spell, 5 yield, 7 flee, 0xA switch weapon, 0xC leave water) and invalidates desired-distance cache +0x188.
void __thiscall CombatController_SetCombatMode(int this, int a2)
{
  const char *v3; // eax
  char *Name; // eax
  const char *v5; // [esp-4h] [ebp-Ch]

  if ( a2 != *(_DWORD *)(this + 0x70) ) /*0x612deb*/
  {
    if ( unk_B3B908 ) /*0x612df1*/
    {
      if ( a2 != 0xD ) /*0x612e01*/
      {
        if ( a2 ) /*0x612e09*/
        {
          switch ( a2 ) /*0x612e15*/
          {
            case 1: /*0x612e15*/
              v3 = "fight with a Melee Weapon"; /*0x612e17*/
              break;
            case 2: /*0x612e15*/
              v3 = "fight with a Ranged Weapon"; /*0x612e23*/
              break;
            case 3: /*0x612e15*/
              v3 = "cast Touch spells"; /*0x612e2f*/
              break;
            case 4: /*0x612e15*/
              v3 = "cast Ranged spells"; /*0x612e3b*/
              break;
            case 5: /*0x612e15*/
              v3 = "attempt to Yield"; /*0x612e47*/
              break;
            case 0xA: /*0x612e15*/
              v3 = "Switch weapons"; /*0x612e53*/
              break;
            case 0xC: /*0x612e15*/
              v3 = "Get out of the water"; /*0x612e5f*/
              break;
            default:
              v3 = "attempt to Flee"; /*0x612e69*/
              if ( a2 != 7 ) /*0x612e6e*/
                v3 = "...just kinda stand around"; /*0x612e70*/
              break;
          }
        }
        else
        {
          v3 = "fight Hand-to-Hand"; /*0x612e0b*/
        }
        v5 = v3; /*0x612e78*/
        Name = TESObjectREFR_GetName(*(TESObjectREFR **)(this + 0x3C)); /*0x612e79*/
        Interface_ConsolePrint("%.20s is going to %s!", Name, v5); /*0x612e84*/
      }
    }
    *(float *)(this + 0x188) = kTerrainLODQuadRayDirectionZ; /*0x612e92*/
  }
  *(_DWORD *)(this + 0x70) = a2; /*0x612e98*/
}
