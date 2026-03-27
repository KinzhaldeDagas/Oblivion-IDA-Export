char __cdecl sub_612A30(TESObjectREFR *a1, int a2)
{
  unsigned __int16 AnimGroup; // ax
  int v3; // esi
  ActorAnimData *v4; // eax
  bool v5; // zf
  char result; // al

  AnimGroup = Actor_LoadAnimGroup_(a1, 0x11, a2, a2 == 0);
  v3 = AnimGroup;
  if ( !AnimGroup )
    return 0;
  v4 = a1->vtbl->GetAnimData(a1);
  if ( !v4 )
    return 0;
  v5 = sub_470960((_DWORD *)v4->animsMap, v3, &a2) == 0;
  result = 1;
  if ( v5 )
    return 0;
  return result;
}
