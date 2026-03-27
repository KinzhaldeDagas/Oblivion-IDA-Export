void __thiscall sub_7287C0(int this, char a2)
{
  int v3; // ebp
  void *v4; // eax
  void *v5; // edi
  int i; // ecx
  _DWORD *v7; // eax

  if ( !*(_DWORD *)(this + 0x24) )
  {
    v3 = *(unsigned __int16 *)(this + 8);
    v4 = (void *)FormHeapAlloc((unsigned __int64)*(unsigned __int16 *)(this + 8) >> 0x1C != 0 ? 0xFFFFFFFF : 0x10 * v3);
    v5 = v4;
    if ( v4 )
      sub_401080(v4, 0x10, v3, (void *(__thiscall *)(void *))sub_47EA50);
    else
      v5 = 0;
    *(_DWORD *)(this + 0x24) = v5;
  }
  if ( a2 )
  {
    for ( i = 0; (unsigned __int16)i < *(_WORD *)(this + 8); v7[3] = dword_B25ADC )
    {
      v7 = (_DWORD *)(*(_DWORD *)(this + 0x24) + 0x10 * (unsigned __int16)i++);
      *v7 = dword_B25AD0;
      v7[1] = dword_B25AD4;
      v7[2] = dword_B25AD8;
    }
  }
}
