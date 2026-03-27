int __thiscall sub_76FB30(void *this, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // edx
  int v7; // eax

  v6 = 0;
  switch ( a4 )
  {
    case 0:
      v7 = 0;
      break;
    case 1:
      v7 = 1;
      break;
    case 2:
      v7 = 2;
      break;
    case 3:
      v7 = 3;
      break;
    case 4:
      v7 = 0xA;
      break;
    case 5:
      v7 = 5;
      break;
    case 6:
      v7 = 5;
      v6 = 1;
      break;
    case 7:
      v7 = 5;
      v6 = 2;
      break;
    case 8:
      v7 = 5;
      v6 = 3;
      break;
    case 9:
      v7 = 5;
      v6 = 4;
      break;
    case 0xA:
      v7 = 5;
      v6 = 5;
      break;
    case 0xB:
      v7 = 5;
      v6 = 6;
      break;
    case 0xC:
      v7 = 5;
      v6 = 7;
      break;
    case 0xD:
      v7 = 6;
      break;
    case 0xE:
      v7 = 7;
      break;
    default:
      JUMPOUT(0x76FBF4);
  }
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, _DWORD))(*(_DWORD *)this + 0x4C))(
           this,
           a6,
           a2,
           a3,
           a4,
           a5,
           v7,
           v6,
           0);
}
