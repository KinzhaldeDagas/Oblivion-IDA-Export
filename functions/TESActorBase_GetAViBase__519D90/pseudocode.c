// TESActorBase base AV getter: actor value 7 reads attributes component index 7. Correlates with Luck via Actor_GetLuckModifiedBaseAV using AV 7.
int __thiscall TESActorBase_GetAViBase(int this, int a2)
{
  int result; // eax
  double Encumberance; // st7

  switch ( a2 ) /*0x519da7*/
  {
    case 0: /*0x519da7*/
      result = (unsigned __int8)TESAttributes_GetAVi((_BYTE *)(this + 0x88), 0); /*0x519e33*/
      break; /*0x519e37*/
    case 1: /*0x519da7*/
      result = (unsigned __int8)TESAttributes_GetAVi((_BYTE *)(this + 0x88), 1); /*0x519de3*/
      break; /*0x519de7*/
    case 2: /*0x519da7*/
      result = (unsigned __int8)TESAttributes_GetAVi((_BYTE *)(this + 0x88), 2); /*0x519e47*/
      break; /*0x519e4b*/
    case 3: /*0x519da7*/
      result = (unsigned __int8)TESAttributes_GetAVi((_BYTE *)(this + 0x88), 3); /*0x519dbb*/
      break; /*0x519dbf*/
    case 4: /*0x519da7*/
      result = (unsigned __int8)TESAttributes_GetAVi((_BYTE *)(this + 0x88), 4); /*0x519e1f*/
      break; /*0x519e23*/
    case 5: /*0x519da7*/
      result = (unsigned __int8)TESAttributes_GetAVi((_BYTE *)(this + 0x88), 5); /*0x519dcf*/
      break; /*0x519dd3*/
    case 6: /*0x519da7*/
      result = (unsigned __int8)TESAttributes_GetAVi((_BYTE *)(this + 0x88), 6); /*0x519e0b*/
      break; /*0x519e0f*/
    case 7: /*0x519da7*/
      result = (unsigned __int8)TESAttributes_GetAVi((_BYTE *)(this + 0x88), 7); /*0x519df7*/
      break; /*0x519dfb*/
    case 8: /*0x519da7*/
      result = TESActorBase_GetHealth((_DWORD *)this); /*0x519e4e*/
      break; /*0x519e54*/
    case 9: /*0x519da7*/
      result = (*(unsigned __int16 (__thiscall **)(int))(*(_DWORD *)(this + 0x24) + 0x48))(this + 0x24); /*0x519e74*/
      break; /*0x519e78*/
    case 0xA: /*0x519da7*/
      result = (*(unsigned __int16 (__thiscall **)(int))(*(_DWORD *)(this + 0x24) + 0x4C))(this + 0x24); /*0x519e62*/
      break; /*0x519e66*/
    case 0xB: /*0x519da7*/
      Encumberance = TESContainer_GetEncumberance(this + 0x44); /*0x519e7e*/
      result = Double_To_SInt32(Encumberance); /*0x519e83*/
      break; /*0x519e89*/
    case 0xC: /*0x519da7*/
    case 0xD: /*0x519da7*/
    case 0xE: /*0x519da7*/
    case 0xF: /*0x519da7*/
    case 0x10: /*0x519da7*/
    case 0x11: /*0x519da7*/
    case 0x12: /*0x519da7*/
    case 0x13: /*0x519da7*/
    case 0x14: /*0x519da7*/
    case 0x15: /*0x519da7*/
    case 0x16: /*0x519da7*/
    case 0x17: /*0x519da7*/
    case 0x18: /*0x519da7*/
    case 0x19: /*0x519da7*/
    case 0x1A: /*0x519da7*/
    case 0x1B: /*0x519da7*/
    case 0x1C: /*0x519da7*/
    case 0x1D: /*0x519da7*/
    case 0x1E: /*0x519da7*/
    case 0x1F: /*0x519da7*/
    case 0x20: /*0x519da7*/
    case 0x25: /*0x519da7*/
    case 0x26: /*0x519da7*/
    case 0x27: /*0x519da7*/
      JUMPOUT(0x519ED9); /*0x519ed9*/
    case 0x21: /*0x519da7*/
      result = (unsigned __int8)TESAIForm_GetAggression((_BYTE *)(this + 0x68)); /*0x519e94*/
      break; /*0x519e98*/
    case 0x22: /*0x519da7*/
      result = (unsigned __int8)TESAIForm_GetConfidence((_BYTE *)(this + 0x68)); /*0x519ea3*/
      break; /*0x519ea7*/
    case 0x23: /*0x519da7*/
      result = (unsigned __int8)TESAIForm_GetEnergy((_BYTE *)(this + 0x68)); /*0x519eb2*/
      break; /*0x519eb6*/
    case 0x24: /*0x519da7*/
      result = (unsigned __int8)TESAIForm_GetResponsibility((_BYTE *)(this + 0x68)); /*0x519ec1*/
      break; /*0x519ec5*/
    default:
      JUMPOUT(0x519EC8); /*0x519ec8*/
  }
  return result; /*0x519dbe*/
}
