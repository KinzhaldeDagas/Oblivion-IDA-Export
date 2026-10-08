signed int __fastcall sub_8DEF60(int a1, int a2, int a3)
{
  signed int result; // eax
  int v5; // ecx

  result = sub_898B20(*(int **)(a1 + 8), a1 != 8 ? a1 : 0);
  v5 = a1 - 8; /*0x8def7a*/
  if ( *(_WORD *)(a1 - 4) ) /*0x8def75*/
  {
    if ( !--*(_WORD *)(v5 + 6) ) /*0x8def84*/
      return (**(signed int (__thiscall ***)(int, int))v5)(v5, 1); /*0x8def95*/
  }
  return result; /*0x8def7d*/
}
