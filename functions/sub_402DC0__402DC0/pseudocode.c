int __thiscall sub_402DC0(TimeGlobals *this)
{
  TESGlobal *GameMonth; // eax
  int v2; // esi
  int v3; // eax
  int result; // eax

  GameMonth = this->GameMonth;
  v2 = 0;
  if ( GameMonth )
    v3 = (char)Double_To_SInt32(GameMonth->data);
  else
    v3 = 7;
  switch ( v3 )
  {
    case 0:
    case 1:
    case 0xB:
      result = 3;
      break;
    case 2:
    case 3:
    case 4:
      result = 0;
      break;
    case 5:
    case 6:
    case 7:
      result = 1;
      break;
    case 8:
    case 9:
    case 0xA:
      v2 = 2;
      goto LABEL_9;
    default:
LABEL_9:
      result = v2;
      break;
  }
  return result;
}
