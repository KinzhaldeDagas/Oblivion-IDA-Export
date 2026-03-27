int sub_53FB30()
{
  int result; // eax

  if ( g_Sky )
    result = ((int (__thiscall *)(Sky *, int))*g_Sky->vtbl)(g_Sky, 1);
  g_Sky = 0;
  return result;
}
