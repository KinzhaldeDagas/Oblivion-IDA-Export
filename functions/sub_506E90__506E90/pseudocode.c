char sub_506E90()
{
  Interface_ConsolePrint("Clearing Facegen Model Data"); /*0x506e95*/
  sub_442630(MEMORY[0xB333A0], 1u, 0); /*0x506ea7*/
  sub_43FC20(MEMORY[0xB333A0], 0); /*0x506eb4*/
  OSGlobals_PurgeModels(1); /*0x506ec1*/
  sub_54FE90(); /*0x506ec6*/
  return 1; /*0x506ecd*/
}
