NiObjectNET *sub_4A3C60()
{
  NiObjectNET *result; // eax
  LONG (__stdcall *v1)(volatile LONG *); // edi
  NiObjectNET *v2; // esi
  int v3; // esi

  result = g_FallbackCanopyShadowTextureProperty; /*0x4a3c60*/
  v1 = InterlockedDecrement; /*0x4a3c69*/
  if ( g_FallbackCanopyShadowTextureProperty ) /*0x4a3c60*/
  {
    v2 = g_FallbackCanopyShadowTextureProperty; /*0x4a3c71*/
    result = (NiObjectNET *)v1((volatile LONG *)&result->members); /*0x4a3c77*/
    if ( !result ) /*0x4a3c7b*/
    {
      if ( v2 ) /*0x4a3c7f*/
        result = (NiObjectNET *)(*(int (__thiscall **)(NiObjectNET *, int))v2->vtbl)(v2, 1); /*0x4a3c89*/
    }
    g_FallbackCanopyShadowTextureProperty = 0; /*0x4a3c8b*/
  }
  v3 = unk_B35418; /*0x4a3c95*/
  if ( unk_B35418 ) /*0x4a3c95*/
  {
    result = (NiObjectNET *)v1((volatile LONG *)(v3 + 4)); /*0x4a3ca3*/
    if ( !result ) /*0x4a3ca7*/
    {
      if ( v3 ) /*0x4a3cab*/
        result = (NiObjectNET *)(**(int (__thiscall ***)(int, int))v3)(v3, 1); /*0x4a3cb5*/
    }
    unk_B35418 = 0; /*0x4a3cb7*/
  }
  return result; /*0x4a3cc1*/
}
