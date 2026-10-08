char __cdecl sub_612A30(TESObjectREFR *a1, int a2)
{
  unsigned __int16 AnimGroup; // ax
  int v3; // esi
  ActorAnimData *v4; // eax
  bool v5; // zf
  char result; // al

  AnimGroup = Actor_LoadAnimGroup_(a1, 0x11, a2, a2 == 0); /*0x612a48*/
  v3 = AnimGroup; /*0x612a4d*/
  if ( !AnimGroup ) /*0x612a53*/
    return 0; /*0x612a53*/
  v4 = a1->vtbl->GetAnimData(a1); /*0x612a5f*/
  if ( !v4 ) /*0x612a63*/
    return 0; /*0x612a63*/
  v5 = ActorAnimData_FindAnimMapEntry((_DWORD *)v4->animsMap, v3, &a2) == 0; /*0x612a78*/
  result = 1; /*0x612a7a*/
  if ( v5 ) /*0x612a7c*/
    return 0; /*0x612a7e*/
  return result; /*0x612a80*/
}
