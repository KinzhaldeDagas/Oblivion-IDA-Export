Sky *Sky_CreateOrGetGlobalObject()
{
  Sky *result; // eax
  Sky *v1; // eax

  result = MEMORY[0xB365C4];                    // g_Sky singleton at 0x00B365C4. Sky struct size is 0x104; current weather fields include firstWeather at +0x10, transition weather at +0x14/+0x18, override at +0x1C, weatherPercent at +0xD8, flags at +0xFC. /*0x542ec1*/
  if ( !MEMORY[0xB365C4] ) /*0x542ec1*/
  {
    v1 = (Sky *)FormHeapAlloc(0x104u); /*0x542ecf*/
    if ( v1 ) /*0x542ee5*/
    {
      result = Sky::Sky(v1); /*0x542ee9*/
      MEMORY[0xB365C4] = result; /*0x542eee*/
    }
    else
    {
      MEMORY[0xB365C4] = 0; /*0x542f05*/
      return 0; /*0x542f03*/
    }
  }
  return result; /*0x542ef3*/
}
