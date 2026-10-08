NiObject *__stdcall sub_75F320(int a1, char a2, int a3, float a4, unsigned __int8 a5)
{
  NiObject *v5; // eax

  v5 = (NiObject *)FormHeapAlloc(0x34u); /*0x75f322*/
  if ( v5 ) /*0x75f32c*/
    return sub_6EB460(v5, a2, a4, a5); /*0x75f342*/
  else
    return 0; /*0x75f34a*/
}
