char sub_506E90()
{
  Interface_ConsolePrint("Clearing Facegen Model Data");
  sub_442630(TES, 1u, 0);
  sub_43FC20(TES, 0);
  OSGlobals_PurgeModels(1);
  sub_54FE90();
  return 1;
}
