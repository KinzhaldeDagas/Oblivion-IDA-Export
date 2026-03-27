int __thiscall TESActorBase_GetAViBase(int this, int a2)
{
  int result; // eax
  double Encumberance; // st7

  switch ( a2 )
  {
    case 0:
      result = (unsigned __int8)TESAttributes_GetAVi((_BYTE *)(this + 0x88), 0);
      break;
    case 1:
      result = (unsigned __int8)TESAttributes_GetAVi((_BYTE *)(this + 0x88), 1);
      break;
    case 2:
      result = (unsigned __int8)TESAttributes_GetAVi((_BYTE *)(this + 0x88), 2);
      break;
    case 3:
      result = (unsigned __int8)TESAttributes_GetAVi((_BYTE *)(this + 0x88), 3);
      break;
    case 4:
      result = (unsigned __int8)TESAttributes_GetAVi((_BYTE *)(this + 0x88), 4);
      break;
    case 5:
      result = (unsigned __int8)TESAttributes_GetAVi((_BYTE *)(this + 0x88), 5);
      break;
    case 6:
      result = (unsigned __int8)TESAttributes_GetAVi((_BYTE *)(this + 0x88), 6);
      break;
    case 7:
      result = (unsigned __int8)TESAttributes_GetAVi((_BYTE *)(this + 0x88), 7);
      break;
    case 8:
      result = TESActorBase_GetHealth((_DWORD *)this);
      break;
    case 9:
      result = (*(unsigned __int16 (__thiscall **)(int))(*(_DWORD *)(this + 0x24) + 0x48))(this + 0x24);
      break;
    case 0xA:
      result = (*(unsigned __int16 (__thiscall **)(int))(*(_DWORD *)(this + 0x24) + 0x4C))(this + 0x24);
      break;
    case 0xB:
      Encumberance = TESContainer_GetEncumberance(this + 0x44);
      result = Double_To_SInt32(Encumberance);
      break;
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
      JUMPOUT(0x519ED9);
    case 0x21:
      result = (unsigned __int8)TESAIForm_GetAggression((_BYTE *)(this + 0x68));
      break;
    case 0x22:
      result = (unsigned __int8)TESAIForm_GetConfidence((_BYTE *)(this + 0x68));
      break;
    case 0x23:
      result = (unsigned __int8)TESAIForm_GetEnergy((_BYTE *)(this + 0x68));
      break;
    case 0x24:
      result = (unsigned __int8)TESAIForm_GetResponsibility((_BYTE *)(this + 0x68));
      break;
    default:
      JUMPOUT(0x519EC8);
  }
  return result;
}
