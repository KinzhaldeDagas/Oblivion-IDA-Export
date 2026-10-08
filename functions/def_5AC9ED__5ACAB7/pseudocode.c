// positive sp value has been detected, the output may be wrong!
void __usercall def_5AC9ED(int a1@<esi>, BSStringT a2)
{
  _DWORD *v2; // ecx
  char *m_data; // esi
  unsigned int v4; // [esp-8h] [ebp-Ch]

  BSStringT_Set(&a2, stru_B38398.value, v4); /*0x5acac3*/
  v2 = *(_DWORD **)(a1 + 4); /*0x5acac8*/
  m_data = a2.m_data; /*0x5acacb*/
  Tile_SetString(v2, (_DWORD *)0xFB0, a2.m_data); /*0x5acad5*/
  FormHeapFree((unsigned int)m_data); /*0x5acadb*/
}
