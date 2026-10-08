// ActiveEffect timeElapsed update: advances by frame delta and clamps to duration except for persistent spell types/bound wearable cases.
int __usercall ActiveEffect_Base_ProcessEffect_::UpdateTimeElapsed@<eax>(int _ESI@<esi>, double a2@<st2>, int a3)
{
  int v6; // eax
  double v7; // st5
  int v8; // ecx
  float v10; // [esp+8h] [ebp+8h]

  v6 = *(_DWORD *)(_ESI + 0x28); /*0x68e830*/
  v10 = a2; /*0x68e833*/
  if ( v6 == 4 /*0x68e85b*/
    || v6 == 1
    || (unsigned __int8)ActiveEffect_Base_IsBoundObjWearable((_DWORD *)_ESI)
    || *(float *)(_ESI + 0x1C) >= a2 + *(float *)(_ESI + 4) )
  {
    v7 = a2 + *(float *)(_ESI + 4); /*0x68e86e*/
  }
  else
  {
    v10 = *(float *)(_ESI + 0x1C) - *(float *)(_ESI + 4); /*0x68e865*/
    v7 = *(float *)(_ESI + 0x1C); /*0x68e869*/
  }
  v8 = *(_DWORD *)(_ESI + 0x20); /*0x68e871*/
  *(float *)(_ESI + 4) = v7; /*0x68e874*/
  return ActiveEffect_Base_ProcessEffect_::CheckQueuedHitFX(v8, _ESI, a3, v10);
}
