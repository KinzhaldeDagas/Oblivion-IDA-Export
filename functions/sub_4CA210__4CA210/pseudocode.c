void __thiscall sub_4CA210(int this, unsigned int a2, float *a3)
{
  if ( a2 < *(unsigned __int16 *)(this + 0xA) )
  {
    if ( 0.0 == *a3 )
    {
      if ( 0.0 != *(float *)(*(_DWORD *)(this + 4) + 4 * a2) )
        --*(_WORD *)(this + 0xC);
    }
    else if ( 0.0 == *(float *)(*(_DWORD *)(this + 4) + 4 * a2) )
    {
      ++*(_WORD *)(this + 0xC);
      *(float *)(*(_DWORD *)(this + 4) + 4 * a2) = *a3;
      return;
    }
  }
  else
  {
    *(_WORD *)(this + 0xA) = a2 + 1;
    if ( 0.0 != *a3 )
    {
      ++*(_WORD *)(this + 0xC);
      *(float *)(*(_DWORD *)(this + 4) + 4 * a2) = *a3;
      return;
    }
  }
  *(float *)(*(_DWORD *)(this + 4) + 4 * a2) = *a3;
}
