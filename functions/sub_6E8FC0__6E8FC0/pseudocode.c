char __thiscall sub_6E8FC0(NiRenderTargetGroup *this, int a2)
{
  char result; // al
  unsigned int i; // ebx
  _DWORD *v5; // esi
  unsigned int j; // edi
  int v7; // ecx

  result = NiTimeController_RegisterStreamables(this, a2); /*0x6e8fc8*/
  if ( result ) /*0x6e8fcf*/
  {
    for ( i = 0; i < *((unsigned __int16 *)this + 0x2F); ++i ) /*0x6e8fd8*/
    {
      v5 = *(_DWORD **)(*((_DWORD *)this + 0x16) + 4 * i); /*0x6e8fe3*/
      if ( v5 ) /*0x6e8fe8*/
      {
        for ( j = 0; j < v5[2]; ++j ) /*0x6e8fec*/
        {
          v7 = *(_DWORD *)(*(_DWORD *)(*v5 + 4 * j) + 4); /*0x6e8ff6*/
          if ( v7 ) /*0x6e8ffb*/
            (*(void (__thiscall **)(int, int))(*(_DWORD *)v7 + 0x24))(v7, a2); /*0x6e9007*/
        }
      }
    }
    return 1; /*0x6e901f*/
  }
  return result; /*0x6e8fd1*/
}
