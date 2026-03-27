void __thiscall sub_612DE0(int this, int a2)
{
  const char *v7; // eax
  char *Name; // eax
  const char *v9; // [esp-4h] [ebp-Ch]

  if ( a2 != *(_DWORD *)(this + 0x70) )
  {
    if ( byte_B3B908 )
    {
      if ( a2 != 0xD )
      {
        if ( a2 )
        {
          switch ( a2 )
          {
            case 1:
              v7 = "fight with a Melee Weapon";
              break;
            case 2:
              v7 = "fight with a Ranged Weapon";
              break;
            case 3:
              v7 = "cast Touch spells";
              break;
            case 4:
              v7 = "cast Ranged spells";
              break;
            case 5:
              v7 = "attempt to Yield";
              break;
            case 0xA:
              v7 = "Switch weapons";
              break;
            case 0xC:
              v7 = "Get out of the water";
              break;
            default:
              v7 = "attempt to Flee";
              if ( a2 != 7 )
                v7 = "...just kinda stand around";
              break;
          }
        }
        else
        {
          v7 = "fight Hand-to-Hand";
        }
        v9 = v7;
        Name = TESObjectREFR_GetName(*(TESObjectREFR **)(this + 0x3C));
        Interface_ConsolePrint("%.20s is going to %s!", Name, v9);
      }
    }
    *(float *)(this + 0x188) = flt_A30634;
  }
  *(_DWORD *)(this + 0x70) = a2;
}
