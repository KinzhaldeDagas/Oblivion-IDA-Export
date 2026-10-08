char __cdecl sub_4F64E0(int a1, int a2, int a3, double *a4)
{
  *a4 = 0.0; /*0x4f64ee*/
  if ( a1 ) /*0x4f64f0*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 0x190))(a1) ) /*0x4f6500*/
    {
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x380))(a1) /*0x4f6539*/
        || !(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x27C))(a1)
        && *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x170))(a1) + 0x104) == 4 )
      {
        *a4 = dbl_A3F3E8; /*0x4f6541*/
      }
      switch ( (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x18C))(a1) ) /*0x4f6559*/
      {
        case 1: /*0x4f6559*/
          goto LABEL_11;
        case 2: /*0x4f6559*/
        case 3: /*0x4f6559*/
          goto LABEL_10;
        case 4: /*0x4f6559*/
          goto LABEL_9;
        case 5: /*0x4f6559*/
          *a4 = *a4 + 1.0; /*0x4f6564*/
LABEL_9:
          *a4 = *a4 + 1.0; /*0x4f6566*/
LABEL_10:
          *a4 = *a4 + 1.0; /*0x4f656c*/
LABEL_11:
          *a4 = *a4 + 1.0; /*0x4f6572*/
          return def_4F6559(a4);
        default:
          break;
      }
    }
  }
  JUMPOUT(0x4F6578); /*0x4f6578*/
}
