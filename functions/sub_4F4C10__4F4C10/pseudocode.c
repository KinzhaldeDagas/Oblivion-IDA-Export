char __cdecl sub_4F4C10(_DWORD *a1, int a2, int a3, double *a4)
{
  unsigned __int8 *v4; // eax

  *a4 = 0.0; /*0x4f4c1e*/
  if ( a1 ) /*0x4f4c20*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*a1 + 0x190))(a1) ) /*0x4f4c2c*/
    {
      v4 = (unsigned __int8 *)Actor::GetCurrentPackageTypeName(a1);// MEF v31 verified GetAlarmed guard site: sub_5E4080 can return null (missing process/state); substitute a nonmatching empty string before vanilla strcmp at 0x4F4C3F. /*0x4f4c39*/
      if ( !CRT_StricmpLocaleDispatch(v4, "Alarm") ) /*0x4f4c3f*/
        *a4 = 1.0; /*0x4f4c4d*/
    }
  }
  if ( MEMORY[0xB361AC] ) /*0x4f4c4f*/
    Interface_ConsolePrint("GetAlarmed >> %0.2f", *a4); /*0x4f4c65*/
  return 1; /*0x4f4c6d*/
}
