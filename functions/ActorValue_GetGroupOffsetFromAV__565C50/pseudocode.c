// RealArenaTraining fidelity pass: ActorValue_GetGroupOffsetFromAV(group, actorValue). Player skill-progress code calls this with group 2 before indexing player skillExp/requiredSkillExp.
char __cdecl ActorValue_GetGroupOffsetFromAV(int a1, char a2)
{
  char result; // al

  switch ( a1 ) /*0x565c59*/
  {
    case 0: /*0x565c59*/
      result = a2; /*0x565c60*/
      break; /*0x565c64*/
    case 1: /*0x565c59*/
      result = a2 - 8; /*0x565c69*/
      break; /*0x565c6c*/
    case 2: /*0x565c59*/
      result = a2 - 0xC; /*0x565c71*/
      break; /*0x565c74*/
    case 3: /*0x565c59*/
      result = a2 - 0x21; /*0x565c79*/
      break; /*0x565c7c*/
    case 4: /*0x565c59*/
      result = a2 - 0x25; /*0x565c81*/
      break; /*0x565c84*/
    case 5: /*0x565c59*/
      result = a2 - 0x28; /*0x565c89*/
      break; /*0x565c8c*/
    case 6: /*0x565c59*/
      result = a2 - 0x2A; /*0x565c91*/
      break; /*0x565c94*/
    default:
      JUMPOUT(0x565C95); /*0x565c95*/
  }
  return result; /*0x565c64*/
}
