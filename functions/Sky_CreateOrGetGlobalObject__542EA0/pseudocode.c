Sky *Sky_CreateOrGetGlobalObject()
{
  Sky *result; // eax
  Sky *v1; // eax

  result = g_Sky;
  if ( !g_Sky )
  {
    v1 = (Sky *)FormHeapAlloc(0x104u);
    if ( v1 )
    {
      result = Sky::Sky(v1);
      g_Sky = result;
    }
    else
    {
      g_Sky = 0;
      return 0;
    }
  }
  return result;
}
