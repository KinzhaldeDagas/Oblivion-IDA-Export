int __userpurge SummonCreatureEffect_PlaceSummon_::Error_BadBaseObject@<eax>(
        int a1@<esi>,
        int a2,
        int a3,
        int a4,
        int a5,
        BSStringT a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  char *m_data; // [esp-8h] [ebp-8h]

  m_data = EffectSetting_GetName(*(_DWORD *)(*(_DWORD *)(a1 + 0xC) + 0x1C), &a6)->m_data;
  a11 = 1;
  PrintError("%s effect has no associated creature.", m_data);
  FormHeapFree((unsigned int)a6.m_data);
  return SummonCreatureEffect_PlaceSummon_::Done(a2);
}
