int __cdecl sub_8AFBE0(int *a1)
{
  int *v1; // eax
  int v2; // eax
  NiObject *v3; // eax
  NiObject *v4; // eax
  NiObjectVtbl *vftable; // eax
  UInt32 (__thiscall *Unk_03)(NiObject *); // eax

  v1 = (int *)a1[3]; /*0x8afbe4*/
  if ( !v1 ) /*0x8afbe9*/
    v1 = a1; /*0x8afbeb*/
  if ( !v1 ) /*0x8afbf2*/
    return 0; /*0x8afbf2*/
  v2 = *v1; /*0x8afbf4*/
  v3 = v2 ? *(NiObject **)(v2 + 8) : 0;
  v4 = NiRTTI_Cast((BSStringT *)&stru_BA7F9C, v3); /*0x8afc07*/
  if ( !v4 ) /*0x8afc11*/
    return 0; /*0x8afc2e*/
  vftable = v4[1].__vftable; /*0x8afc13*/
  if ( vftable ) /*0x8afc18*/
    Unk_03 = vftable->Unk_03; /*0x8afc1a*/
  else
    Unk_03 = 0; /*0x8afc1f*/
  if ( Unk_03 ) /*0x8afc23*/
    return *((_DWORD *)Unk_03 + 2); /*0x8afc25*/
  else
    return 0; /*0x8afc2a*/
}
