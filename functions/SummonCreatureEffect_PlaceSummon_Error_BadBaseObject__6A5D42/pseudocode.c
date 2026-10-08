void __userpurge SummonCreatureEffect_PlaceSummon_::Error_BadBaseObject(
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

  m_data = EffectSetting_GetName(*(_DWORD *)(*(_DWORD *)(a1 + 0xC) + 0x1C), &a6)->m_data; /*0x6a5d58*/
  a11 = 1; /*0x6a5d5e*/
  PrintError("%s effect has no associated creature.", m_data); /*0x6a5d66*/
  FormHeapFree((unsigned int)a6.m_data); /*0x6a5d70*/
  SummonCreatureEffect_PlaceSummon_::Done(a2); /*0x6a5d78*/
}
