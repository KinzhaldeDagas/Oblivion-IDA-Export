// Native encoded animation-key resolver. A candidate is valid only when its map entry's selector virtual returns a sequence. Order: exact key; weapon-prefix compatibility; fast-move group to normal-move group; on the outer pass only, strip movement prefix; finally replace nonzero group with Idle (0). Returns 0 on failure.
unsigned __int16 __thiscall ActorAnimData_ResolveAnimKeyFallback(
        ActorAnimData *this,
        unsigned __int16 requestedKey,
        unsigned __int8 fallbackPass)
{
  unsigned __int16 candidateKey; // bx
  unsigned int weaponPrefixCase; // eax
  unsigned int weaponPrefixRemainder; // eax
  unsigned __int16 normalMoveKey; // bx
  unsigned __int16 result; // ax
  int mapEntry; // [esp+10h] [ebp-4h] BYREF

  while ( 1 ) /*0x470d30*/
  {
    candidateKey = requestedKey; /*0x470d30*/
    if ( ActorAnimData_FindAnimMapEntry((_DWORD *)this->animsMap, requestedKey, &mapEntry) /*0x470d54*/
      && (*(int (__thiscall **)(int, unsigned int))(*(_DWORD *)mapEntry + 0x10))(mapEntry, 0xFFFFFFFF) )// Exact candidate validation is stronger than map presence: invoke AnimSequenceSingle/Multiple vtable +0x10 with selector -1 and accept only a non-null sequence.
    {
      return requestedKey; /*0x470ee5*/
    }
    if ( (requestedKey & 0xF00) == 0 ) /*0x470d64*/
      goto LABEL_15; /*0x470d64*/
    weaponPrefixCase = AnimKey_GetWeaponPrefix(requestedKey) - 3; /*0x470d73*/
    if ( weaponPrefixCase ) /*0x470d76*/
    {
      weaponPrefixRemainder = weaponPrefixCase - 1; /*0x470d78*/
      if ( weaponPrefixRemainder ) /*0x470d7b*/
      {
        if ( weaponPrefixRemainder != 1 ) /*0x470d80*/
          goto LABEL_13; /*0x470d80*/
      }
      else if ( (requestedKey & 0xF000) != 0x2000 /*0x470dc0*/
             && ActorAnimData_FindAnimMapEntry((_DWORD *)this->animsMap, requestedKey & 0xF3FF | 0x300, &mapEntry)
             && (*(int (__thiscall **)(int, unsigned int))(*(_DWORD *)mapEntry + 0x10))(mapEntry, 0xFFFFFFFF) )// Weapon prefix 4 (Staff): unless movement prefix is Swimming (2), try TwoHand (3) before the shared OneHand/unprefixed fallbacks.
      {
        return requestedKey & 0xF0FF | 0x300; /*0x470ef7*/
      }
    }
    if ( ActorAnimData_FindAnimMapEntry((_DWORD *)this->animsMap, requestedKey & 0xF2FF | 0x200, &mapEntry) /*0x470df8*/
      && (*(int (__thiscall **)(int, unsigned int))(*(_DWORD *)mapEntry + 0x10))(mapEntry, 0xFFFFFFFF) )// Weapon prefixes TwoHand (3), Staff (4), and Bow (5) try OneHand (2). Other nonzero weapon prefixes skip directly to unprefixed.
    {
      return requestedKey & 0xF0FF | 0x200; /*0x470f09*/
    }
LABEL_13:
    if ( ActorAnimData_FindAnimMapEntry((_DWORD *)this->animsMap, requestedKey & 0xF0FF, &mapEntry) /*0x470e2a*/
      && (*(int (__thiscall **)(int, unsigned int))(*(_DWORD *)mapEntry + 0x10))(mapEntry, 0xFFFFFFFF) )// Final same-movement/group weapon fallback clears bits 8..11 to the unprefixed key.
    {
      return requestedKey & 0xF0FF; /*0x470f16*/
    }
LABEL_15:
    if ( requestedKey ) /*0x470e37*/
    {
      switch ( AnimKey_GetGroupID(requestedKey) ) /*0x470e4a*/
      {
        case 7: /*0x470e4a*/
          normalMoveKey = requestedKey & 0xFF00 | 3;// FastForward (7) recursively resolves Forward (3), preserving movement and weapon prefix bits. /*0x470e57*/
          break; /*0x470e5a*/
        case 8: /*0x470e4a*/
          normalMoveKey = requestedKey & 0xFF00 | 4;// FastBackward (8) recursively resolves Backward (4), preserving movement and weapon prefix bits. /*0x470e62*/
          break; /*0x470e65*/
        case 9: /*0x470e4a*/
          normalMoveKey = requestedKey & 0xFF00 | 5;// FastLeft (9) recursively resolves Left (5), preserving movement and weapon prefix bits. /*0x470e6d*/
          break; /*0x470e70*/
        case 0xA: /*0x470e4a*/
          normalMoveKey = requestedKey & 0xFF00 | 6;// FastRight (10) recursively resolves Right (6), preserving movement and weapon prefix bits. /*0x470e78*/
          break; /*0x470e78*/
        default:
          goto LABEL_24;
      }
      if ( normalMoveKey != 0xFF ) /*0x470e80*/
      {
        result = ActorAnimData_ResolveAnimKeyFallback(this, normalMoveKey, 1u); /*0x470e87*/
        if ( (unsigned __int8)normalMoveKey == (unsigned __int8)result ) /*0x470e91*/
          return result; /*0x470e93*/
      }
      candidateKey = requestedKey; /*0x470e99*/
    }
LABEL_24:
    if ( fallbackPass )                         // fallbackPass is a recursion guard: nested fast/movement fallback may use exact/weapon/fast resolution but cannot continue into another movement-strip or group-to-Idle pass. /*0x470ea2*/
      return 0; /*0x470edf*/
    if ( (candidateKey & 0xF000) != 0 ) /*0x470eaa*/
    {
      result = ActorAnimData_ResolveAnimKeyFallback(this, candidateKey & 0xFFF, 1u);// Outer pass only: clear movement-prefix bits 12..15 and recursively resolve the same weapon/group with fallbackPass=1. /*0x470eb9*/
      if ( (unsigned __int8)candidateKey == (unsigned __int8)result ) /*0x470ec3*/
        return result; /*0x470ec5*/
    }
    if ( !(_BYTE)candidateKey ) /*0x470ec9*/
      return 0; /*0x470edf*/
    fallbackPass = 0;                           // Last outer fallback: if group is nonzero, replace only the low group byte with Idle (0), preserve movement/weapon prefixes, and restart the resolver. /*0x470ed1*/
    *(_DWORD *)&requestedKey = candidateKey & 0xFF00; /*0x470ed6*/
  }
}
