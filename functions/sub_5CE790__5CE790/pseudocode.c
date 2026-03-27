int __thiscall sub_5CE790(_DWORD *this, int a2)
{
  int result; // eax

  switch ( a2 )
  {
    case 1:
      result = *(this + 0xA);
      break;
    case 3:
      result = *(this + 0xB);
      break;
    case 4:
      result = *(this + 0xC);
      break;
    case 5:
      result = *(this + 0xD);
      break;
    case 6:
      result = *(this + 0xE);
      break;
    default:
      result = 0;
      break;
  }
  return result;
}
