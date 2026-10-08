void *__thiscall sub_4973D0(unsigned __int8 *Dst)
{
  void *v2; // eax
  unsigned int v4; // [esp-4h] [ebp-8h]

  SaveLoad_LoadData(g_TESSaveLoadGame, Dst, 1u); /*0x4973dc*/
  v2 = (void *)FormHeapAlloc((0x1C * (unsigned __int64)*Dst) >> 0x20 != 0 ? 0xFFFFFFFF : 0x1C * *Dst);
  v4 = 0x1C * *Dst; /*0x49740d*/
  *((_DWORD *)Dst + 1) = v2; /*0x49740e*/
  return SaveLoad_LoadData(g_TESSaveLoadGame, v2, v4); /*0x49741d*/
}
