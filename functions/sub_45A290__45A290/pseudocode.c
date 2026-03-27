void *__thiscall sub_45A290(unsigned __int8 **this, void *Dst)
{
  unsigned __int8 *v2; // eax
  unsigned __int8 v3; // bl
  void *v4; // esi
  const void **v5; // edi
  size_t v7; // [esp-4h] [ebp-10h]

  v2 = *(this + 5);
  v3 = *v2;
  v4 = Dst;
  *(this + 5) = v2 + 1;
  if ( v3 )
  {
    if ( Dst )
    {
      _memset(Dst, 0, 0x104);
    }
    else
    {
      v4 = (void *)FormHeapAlloc(v3 + 1);
      _memset(v4, 0, v3 + 1);
    }
  }
  v5 = (const void **)&SaveLoad_CurrentSavegame->unk000[5];
  LODWORD(v7) = v3;
  memcpy(v4, *v5, v7);
  *v5 = (char *)*v5 + v3;
  return v4;
}
