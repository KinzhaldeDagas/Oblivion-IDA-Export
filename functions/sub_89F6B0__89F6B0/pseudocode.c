// Looks up NiObject in proxy/collision metadata map, default key dword_B3FA80 when caller key is null, then NiRTTI_Cast to NiObject. Used by 0x8AFCE0 for root-collidable type 2 hits.
NiObject *__thiscall sub_89F6B0(int **this, NiRTTI *a2)
{
  NiRTTI *v2; // edi
  int *v4; // ecx
  NiObject **v5; // eax
  int v7; // [esp+Ch] [ebp-8h] BYREF

  v2 = a2; /*0x89f6b6*/
  if ( !a2 ) /*0x89f6c0*/
    v2 = &stru_B3FA80; /*0x89f6c2*/
  if ( !sub_890A10(this, (int)v2) ) /*0x89f6c8*/
    return 0; /*0x89f71b*/
  if ( !this ) /*0x89f6d3*/
    return NiRTTI_Cast((BSStringT *)&stru_B3FA80, 0); /*0x89f6d3*/
  v4 = *(this + 2); /*0x89f6d5*/
  if ( !v4 ) /*0x89f6da*/
    return NiRTTI_Cast((BSStringT *)&stru_B3FA80, 0); /*0x89f708*/
  v5 = (NiObject **)sub_47F990(v4, &v7, (int)v2); /*0x89f6e2*/
  return NiRTTI_Cast((BSStringT *)&stru_B3FA80, *v5); /*0x89f6f7*/
}
