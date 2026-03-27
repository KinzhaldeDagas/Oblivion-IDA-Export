int __userpurge EffectSetting_SetCounterEffects_::CopyCounterEffects@<eax>(
        int a1@<eax>,
        int a2@<ecx>,
        int a3@<edi>,
        int a4@<esi>,
        int a5,
        int a6)
{
  int v6; // ebx

  do
  {
    v6 = *(_DWORD *)(a2 + 4);
    a2 += 4;
    *(_DWORD *)(*(_DWORD *)(a4 + 0x9C) + 4 * a1++) = v6;
  }
  while ( a1 < a3 );
  return EffectSetting_SetCounterEffects_::Done_(a5, a6);
}
