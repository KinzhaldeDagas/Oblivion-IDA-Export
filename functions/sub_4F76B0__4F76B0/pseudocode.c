char __cdecl sub_4F76B0(unsigned __int8 (__thiscall ***a1)(void **), int a2, int a3, double *a4)
{
  void *v4; // eax
  double v5; // st7

  *a4 = 0.0; /*0x4f76be*/
  if ( a1 ) /*0x4f76c0*/
  {
    if ( (*a1)[0x64]((void **)a1) ) /*0x4f76cc*/
    {
      v4 = OblivionDynamicCast( /*0x4f76e4*/
             a1[0x16],
             0,
             (struct _s_RTTICompleteObjectLocator *)&BaseProcess `RTTI Type Descriptor',
             &MiddleHighProcess `RTTI Type Descriptor',
             0);
      if ( v4 ) /*0x4f76ee*/
      {
        switch ( (*(int (__thiscall **)(void *))(*(_DWORD *)v4 + 0x2E4))(v4) ) /*0x4f7708*/
        {
          case 0: /*0x4f7708*/
          case 5: /*0x4f7708*/
          case 6: /*0x4f7708*/
            v5 = 0.0; /*0x4f770f*/
            goto LABEL_7; /*0x4f7711*/
          case 3: /*0x4f7708*/
          case 4: /*0x4f7708*/
            v5 = 1.0; /*0x4f7713*/
LABEL_7:
            *a4 = v5; /*0x4f7715*/
            break; /*0x4f7715*/
          default:
            break;
        }
      }
    }
  }
  if ( MEMORY[0xB361AC] ) /*0x4f7717*/
    Interface_ConsolePrint("Get Knocked State >> %0.2f", *a4); /*0x4f772d*/
  return 1; /*0x4f7735*/
}
