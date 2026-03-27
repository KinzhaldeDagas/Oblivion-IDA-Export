int __thiscall sub_628B20(int this, int a2, int a3)
{
  int result; // eax

  result = a3;
  switch ( a3 )
  {
    case 0:
    case 7:
    case 0x12:
    case 0x1B:
      result = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x2C0))(a2);
      break;
    case 0xB:
      *(float *)(this + 0x294) = flt_A30634;
      break;
    case 0x30:
      *(_DWORD *)(this + 0x298) = 0xFFFFFFFF;
      break;
    default:
      return result;
  }
  return result;
}
