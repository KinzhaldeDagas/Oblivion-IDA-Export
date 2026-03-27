char __cdecl sub_4F76B0(unsigned __int8 (__thiscall ***a1)(void **), int a2, int a3, double *a4)
{
  void *v7; // eax
  double v8; // st5

  *a4 = 0.0;
  if ( a1 )
  {
    if ( (*a1)[0x64]((void **)a1) )
    {
      v7 = OblivionDynamicCast(
             a1[0x16],
             0,
             (struct _s_RTTICompleteObjectLocator *)&BaseProcess `RTTI Type Descriptor',
             &MiddleHighProcess `RTTI Type Descriptor',
             0);
      if ( v7 )
      {
        switch ( (*(int (__thiscall **)(void *))(*(_DWORD *)v7 + 0x2E4))(v7) )
        {
          case 0:
          case 5:
          case 6:
            v8 = 0.0;
            goto LABEL_7;
          case 3:
          case 4:
            v8 = 1.0;
LABEL_7:
            *a4 = v8;
            break;
          default:
            break;
        }
      }
    }
  }
  if ( IsConsoleMode )
    Interface_ConsolePrint("Get Knocked State >> %0.2f", *a4);
  return 1;
}
