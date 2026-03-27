unsigned __int8 __thiscall TESActorBase_SetAViBase(int this, int a2, UInt32 a3)
{
  unsigned __int8 result; // al

  switch ( a2 )
  {
    case 0:
      result = (unsigned __int8)TESAttributes_SetAVi((_BYTE *)(this + 0x88), 0, a3);
      break;
    case 1:
      result = (unsigned __int8)TESAttributes_SetAVi((_BYTE *)(this + 0x88), 1, a3);
      break;
    case 2:
      result = (unsigned __int8)TESAttributes_SetAVi((_BYTE *)(this + 0x88), 2, a3);
      break;
    case 3:
      result = (unsigned __int8)TESAttributes_SetAVi((_BYTE *)(this + 0x88), 3, a3);
      break;
    case 4:
      result = (unsigned __int8)TESAttributes_SetAVi((_BYTE *)(this + 0x88), 4, a3);
      break;
    case 5:
      result = (unsigned __int8)TESAttributes_SetAVi((_BYTE *)(this + 0x88), 5, a3);
      break;
    case 6:
      result = (unsigned __int8)TESAttributes_SetAVi((_BYTE *)(this + 0x88), 6, a3);
      break;
    case 7:
      result = (unsigned __int8)TESAttributes_SetAVi((_BYTE *)(this + 0x88), 7, a3);
      break;
    case 8:
      result = TESActorBase_SetHealth((TESForm *)this, a3);
      break;
    case 9:
      result = TESActorBaseData_SetMagicka((_WORD *)(this + 0x24), a3);
      break;
    case 0xA:
      result = TESActorBaseData_SetFatigue((_WORD *)(this + 0x24), a3);
      break;
    case 0xB:
    case 0xC:
    case 0xD:
    case 0xE:
    case 0xF:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1A:
    case 0x1B:
    case 0x1C:
    case 0x1D:
    case 0x1E:
    case 0x1F:
    case 0x20:
    case 0x25:
    case 0x26:
    case 0x27:
      JUMPOUT(0x51A0B4);
    case 0x21:
      result = TESAIForm_SetAggression((_BYTE *)(this + 0x68), a3);
      break;
    case 0x22:
      result = TESAIForm_SetConfidence((_BYTE *)(this + 0x68), a3);
      break;
    case 0x23:
      result = TESAIForm_SetEnergy((_BYTE *)(this + 0x68), a3);
      break;
    case 0x24:
      result = TESAIForm_SetResponsibility((_BYTE *)(this + 0x68), a3);
      break;
    default:
      JUMPOUT(0x51A094);
  }
  return result;
}
