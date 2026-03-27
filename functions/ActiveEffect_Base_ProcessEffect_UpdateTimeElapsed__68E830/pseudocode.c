int __usercall ActiveEffect_Base_ProcessEffect_::UpdateTimeElapsed@<eax>(
        int _ESI@<esi>,
        char bp0@<bpl>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>)
{
  int v5; // eax
  double v6; // st5
  int v7; // ecx

  v5 = *(_DWORD *)(_ESI + 0x28);
  if ( v5 == 4
    || v5 == 1
    || (unsigned __int8)ActiveEffect_Base_IsBoundObjWearable((_DWORD *)_ESI)
    || *(float *)(_ESI + 0x1C) >= a3 + *(float *)(_ESI + 4) )
  {
    v6 = a3 + *(float *)(_ESI + 4);
  }
  else
  {
    v6 = *(float *)(_ESI + 0x1C);
  }
  v7 = *(_DWORD *)(_ESI + 0x20);
  *(float *)(_ESI + 4) = v6;
  return ActiveEffect_Base_ProcessEffect_::CheckQueuedHitFX(v7, bp0, _ESI, v6, a4, a5);
}
