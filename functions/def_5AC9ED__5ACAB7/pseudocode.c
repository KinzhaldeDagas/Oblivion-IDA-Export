// positive sp value has been detected, the output may be wrong!
void __usercall def_5AC9ED(int a1@<esi>, BSStringT a2)
{
  _DWORD *v3; // ecx
  char *m_data; // esi
  unsigned int v5; // [esp-8h] [ebp-Ch]

  BSStringT_Set(&a2, (const char *)dword_B38398, v5);
  v3 = *(_DWORD **)(a1 + 4);
  m_data = a2.m_data;
  Tile_SetString(v3, (_DWORD *)0xFB0, a2.m_data);
  FormHeapFree((unsigned int)m_data);
}
