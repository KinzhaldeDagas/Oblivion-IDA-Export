void __thiscall sub_7287C0(int this, char a2)
{
  int v3; // ebp
  void *v4; // eax
  void *v5; // edi
  int i; // ecx
  _DWORD *v7; // eax

  if ( !*(_DWORD *)(this + 0x24) )
  {
    v3 = *(unsigned __int16 *)(this + 8); /*0x7287ec*/
    v4 = (void *)FormHeapAlloc((unsigned __int64)*(unsigned __int16 *)(this + 8) >> 0x1C != 0 ? 0xFFFFFFFF : 0x10 * v3);
    v5 = v4; /*0x728808*/
    if ( v4 ) /*0x72881b*/
      sub_401080(v4, 0x10, v3, (void *(__thiscall *)(void *))sub_47EA50); /*0x728826*/
    else
      v5 = 0; /*0x72882d*/
    *(_DWORD *)(this + 0x24) = v5; /*0x72882f*/
  }
  if ( a2 ) /*0x728837*/
  {
    for ( i = 0; (unsigned __int16)i < *(_WORD *)(this + 8); v7[3] = dword_B25ADC ) /*0x72883b*/
    {
      v7 = (_DWORD *)(*(_DWORD *)(this + 0x24) + 0x10 * (unsigned __int16)i++); /*0x72884d*/
      *v7 = dword_B25AD0; /*0x728853*/
      v7[1] = dword_B25AD4; /*0x72885b*/
      v7[2] = dword_B25AD8; /*0x728864*/
    }
  }
}
