NiAVObject *__stdcall sub_709D60(int a1)
{
  NiAVObject *v1; // eax
  NiAVObject *v2; // esi

  v1 = (NiAVObject *)FormHeapAlloc(0xC0u); /*0x709d8a*/
  v2 = v1; /*0x709d8f*/
  if ( v1 ) /*0x709da2*/
  {
    sub_717590(v1); /*0x709da6*/
    v2->vtbl = (NiAVObjectVtbl *)&NiScreenElements::`vftable'; /*0x709dab*/
  }
  else
  {
    v2 = 0; /*0x709db3*/
  }
  j_j_NiGeometry_CopyMembersForClone((int)v2, a1); /*0x709dc5*/
  return v2; /*0x709dcc*/
}
