double __thiscall sub_51AE20(int this, unsigned int ArgList)
{
  unsigned int v4; // ecx
  int v5; // eax

  if ( (int)ArgList < 0 )
  {
    PrintError(
      "Invalid anim group action (action %d too small) in %s (%04X).",
      ArgList,
      *(const char **)(0x24 * (unsigned __int8)*(_WORD *)(this + 8) + 0xB102E0),
      *(unsigned __int16 *)(this + 8));
    return 0.0;
  }
  v4 = *(_DWORD *)(this + 0xC);
  if ( ArgList < v4 )
  {
    v5 = *(_DWORD *)(this + 0x10);
    if ( !v5 )
      return 0.0;
    if ( _isnan(*(float *)(v5 + 4 * ArgList)) )
    {
      PrintError("Time %d in group %04X is QNAN", ArgList, *(unsigned __int16 *)(this + 8));
      return 0.0;
    }
    else
    {
      return *(float *)(*(_DWORD *)(this + 0x10) + 4 * ArgList);
    }
  }
  else
  {
    PrintError(
      "Invalid anim group action (action %d too big %d max) in %s (%04x).",
      ArgList,
      v4,
      *(const char **)(0x24 * (unsigned __int8)*(_WORD *)(this + 8) + 0xB102E0),
      *(unsigned __int16 *)(this + 8));
    return 0.0;
  }
}
