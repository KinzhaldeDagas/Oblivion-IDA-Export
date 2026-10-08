unsigned __int8 __thiscall TESActorBase_SetAViBase(int this, int a2, UInt32 a3)
{
  unsigned __int8 result; // al

  switch ( a2 ) /*0x519f67*/
  {
    case 0: /*0x519f67*/
      result = (unsigned __int8)TESAttributes_SetAVi((_BYTE *)(this + 0x88), 0, a3); /*0x519fff*/
      break; /*0x51a005*/
    case 1: /*0x519f67*/
      result = (unsigned __int8)TESAttributes_SetAVi((_BYTE *)(this + 0x88), 1, a3); /*0x519fa7*/
      break; /*0x519fad*/
    case 2: /*0x519f67*/
      result = (unsigned __int8)TESAttributes_SetAVi((_BYTE *)(this + 0x88), 2, a3); /*0x51a015*/
      break; /*0x51a01b*/
    case 3: /*0x519f67*/
      result = (unsigned __int8)TESAttributes_SetAVi((_BYTE *)(this + 0x88), 3, a3); /*0x519f7b*/
      break; /*0x519f81*/
    case 4: /*0x519f67*/
      result = (unsigned __int8)TESAttributes_SetAVi((_BYTE *)(this + 0x88), 4, a3); /*0x519fe9*/
      break; /*0x519fef*/
    case 5: /*0x519f67*/
      result = (unsigned __int8)TESAttributes_SetAVi((_BYTE *)(this + 0x88), 5, a3); /*0x519f91*/
      break; /*0x519f97*/
    case 6: /*0x519f67*/
      result = (unsigned __int8)TESAttributes_SetAVi((_BYTE *)(this + 0x88), 6, a3); /*0x519fd3*/
      break; /*0x519fd9*/
    case 7: /*0x519f67*/
      result = (unsigned __int8)TESAttributes_SetAVi((_BYTE *)(this + 0x88), 7, a3); /*0x519fbd*/
      break; /*0x519fc3*/
    case 8: /*0x519f67*/
      result = TESActorBase_SetHealth((TESForm *)this, a3); /*0x51a025*/
      break; /*0x51a02b*/
    case 9: /*0x519f67*/
      result = TESActorBaseData_SetMagicka((_WORD *)(this + 0x24), a3); /*0x51a047*/
      break; /*0x51a04d*/
    case 0xA: /*0x519f67*/
      result = TESActorBaseData_SetFatigue((_WORD *)(this + 0x24), a3); /*0x51a036*/
      break; /*0x51a03c*/
    case 0xB: /*0x519f67*/
    case 0xC: /*0x519f67*/
    case 0xD: /*0x519f67*/
    case 0xE: /*0x519f67*/
    case 0xF: /*0x519f67*/
    case 0x10: /*0x519f67*/
    case 0x11: /*0x519f67*/
    case 0x12: /*0x519f67*/
    case 0x13: /*0x519f67*/
    case 0x14: /*0x519f67*/
    case 0x15: /*0x519f67*/
    case 0x16: /*0x519f67*/
    case 0x17: /*0x519f67*/
    case 0x18: /*0x519f67*/
    case 0x19: /*0x519f67*/
    case 0x1A: /*0x519f67*/
    case 0x1B: /*0x519f67*/
    case 0x1C: /*0x519f67*/
    case 0x1D: /*0x519f67*/
    case 0x1E: /*0x519f67*/
    case 0x1F: /*0x519f67*/
    case 0x20: /*0x519f67*/
    case 0x25: /*0x519f67*/
    case 0x26: /*0x519f67*/
    case 0x27: /*0x519f67*/
      JUMPOUT(0x51A0B4); /*0x51a0b4*/
    case 0x21: /*0x519f67*/
      result = TESAIForm_SetAggression((_BYTE *)(this + 0x68), a3); /*0x51a058*/
      break; /*0x51a05e*/
    case 0x22: /*0x519f67*/
      result = TESAIForm_SetConfidence((_BYTE *)(this + 0x68), a3); /*0x51a069*/
      break; /*0x51a06f*/
    case 0x23: /*0x519f67*/
      result = TESAIForm_SetEnergy((_BYTE *)(this + 0x68), a3); /*0x51a07a*/
      break; /*0x51a080*/
    case 0x24: /*0x519f67*/
      result = TESAIForm_SetResponsibility((_BYTE *)(this + 0x68), a3); /*0x51a08b*/
      break; /*0x51a091*/
    default:
      JUMPOUT(0x51A094); /*0x51a094*/
  }
  return result; /*0x519f80*/
}
