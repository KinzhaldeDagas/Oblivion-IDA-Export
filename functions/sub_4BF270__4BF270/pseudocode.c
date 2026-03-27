void __thiscall sub_4BF270(_DWORD *this, unsigned __int8 a2, unsigned __int16 a3, unsigned __int16 a4, float a5)
{
  int v5; // ecx

  if ( a2 < 4u && a3 < 0x121u && a4 < 8u )
  {
    v5 = *(this + 9);
    if ( v5 )
    {
      if ( a5 <= 0.0 )
      {
        if ( *(_DWORD *)(v5 + 4 * a2 + 0x40) )
          *(float *)(*(_DWORD *)(*(_DWORD *)(v5 + 4 * a2 + 0x40) + 4 * a3) + 4 * a4) = 0.0;
      }
      else
      {
        *(float *)(*(_DWORD *)(*(_DWORD *)(v5 + 4 * a2 + 0x40) + 4 * a3) + 4 * a4) = a5;
      }
    }
  }
}
