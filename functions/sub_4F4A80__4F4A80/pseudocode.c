char __cdecl sub_4F4A80(int a1, int a2, int a3, double *a4)
{
  *a4 = 0.0; /*0x4f4a87*/
  if ( a1 ) /*0x4f4a90*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 0x190))(a1) ) /*0x4f4a9c*/
    {
      switch ( (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x18C))(a1) ) /*0x4f4ab8*/
      {
        case 6: /*0x4f4ab8*/
          goto LABEL_7;
        case 7: /*0x4f4ab8*/
        case 8: /*0x4f4ab8*/
          goto LABEL_6;
        case 9: /*0x4f4ab8*/
          goto LABEL_5;
        case 0xA: /*0x4f4ab8*/
          *a4 = *a4 + 1.0; /*0x4f4ac3*/
LABEL_5:
          *a4 = *a4 + 1.0; /*0x4f4ac5*/
LABEL_6:
          *a4 = *a4 + 1.0; /*0x4f4acb*/
LABEL_7:
          *a4 = *a4 + 1.0; /*0x4f4ad1*/
          return def_4F4AB8(a4);
        default:
          break;
      }
    }
  }
  JUMPOUT(0x4F4AD7); /*0x4f4ad7*/
}
