NiNode *__stdcall DarknessEffect_PreLoad(int a1)
{
  NiNode *result; // eax

  nullsub_returnvVoid_1arg(a1); /*0x692d86*/
  result = *(NiNode **)(a1 + 0x3C); /*0x692d8b*/
  if ( result ) /*0x692d91*/
    return (NiNode *)sub_7B8440(result, 1.0); /*0x692d9a*/
  return result; /*0x692d90*/
}
