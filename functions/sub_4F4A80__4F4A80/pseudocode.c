int __cdecl sub_4F4A80(int a1, int a2, int a3, double *a4)
{
  *a4 = 0.0;
  if ( a1 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 0x190))(a1) )
    {
      switch ( (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x18C))(a1) )
      {
        case 6:
          goto LABEL_7;
        case 7:
        case 8:
          goto LABEL_6;
        case 9:
          goto LABEL_5;
        case 0xA:
          *a4 = *a4 + 1.0;
LABEL_5:
          *a4 = *a4 + 1.0;
LABEL_6:
          *a4 = *a4 + 1.0;
LABEL_7:
          *a4 = *a4 + 1.0;
          return def_4F4AB8();
        default:
          break;
      }
    }
  }
  JUMPOUT(0x4F4AD7);
}
