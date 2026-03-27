void *__thiscall sub_4973D0(unsigned __int8 *Dst)
{
  void *v2; // eax
  size_t v4; // [esp-4h] [ebp-8h]
  size_t v5; // [esp-4h] [ebp-8h]

  LODWORD(v4) = 1;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, Dst, v4);
  v2 = (void *)FormHeapAlloc((0x1C * (unsigned __int64)*Dst) >> 0x20 != 0 ? 0xFFFFFFFF : 0x1C * *Dst);
  LODWORD(v5) = 0x1C * *Dst;
  *((_DWORD *)Dst + 1) = v2;
  return SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, v2, v5);
}
