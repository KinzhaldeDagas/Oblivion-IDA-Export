bool __stdcall sub_735920(char *a1)
{
  return !j_CRT_strcmp(a1, ".sgi") /*0x735981*/
      || !j_CRT_strcmp(a1, ".rgb")
      || !j_CRT_strcmp(a1, ".rgba")
      || !j_CRT_strcmp(a1, ".int")
      || !j_CRT_strcmp(a1, ".inta");
}
