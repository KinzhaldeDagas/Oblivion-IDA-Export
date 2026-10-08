LONG __cdecl sub_55E340(float a1)
{
  LONG result; // eax
  float v2; // esi

  result = LODWORD(unk_B43108[0]); /*0x55e340*/
  if ( LODWORD(unk_B43108[0]) != LODWORD(a1) ) /*0x55e34c*/
  {
    if ( result ) /*0x55e350*/
    {
      v2 = unk_B43108[0]; /*0x55e353*/
      result = InterlockedDecrement((volatile LONG *)(result + 4)); /*0x55e359*/
      if ( !result ) /*0x55e361*/
        result = (**(int (__thiscall ***)(float, int))LODWORD(v2))(COERCE_FLOAT(LODWORD(v2)), 1); /*0x55e36f*/
    }
    unk_B43108[0] = a1; /*0x55e374*/
    if ( a1 != 0.0 ) /*0x55e37a*/
      return InterlockedIncrement((volatile LONG *)(LODWORD(a1) + 4)); /*0x55e380*/
  }
  return result; /*0x55e386*/
}
