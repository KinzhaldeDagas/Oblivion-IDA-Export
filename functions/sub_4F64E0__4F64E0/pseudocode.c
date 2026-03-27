int __cdecl sub_4F64E0(int a1, int a2, int a3, double *a4)
{
  *a4 = 0.0;
  if ( a1 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 0x190))(a1) )
    {
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x380))(a1)
        || !(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x27C))(a1)
        && *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x170))(a1) + 0x104) == 4 )
      {
        *a4 = dbl_A3F3E8;
      }
      switch ( (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x18C))(a1) )
      {
        case 1:
          goto LABEL_11;
        case 2:
        case 3:
          goto LABEL_10;
        case 4:
          goto LABEL_9;
        case 5:
          *a4 = *a4 + 1.0;
LABEL_9:
          *a4 = *a4 + 1.0;
LABEL_10:
          *a4 = *a4 + 1.0;
LABEL_11:
          *a4 = *a4 + 1.0;
          return def_4F6559();
        default:
          break;
      }
    }
  }
  JUMPOUT(0x4F6578);
}
