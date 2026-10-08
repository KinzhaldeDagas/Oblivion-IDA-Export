void __thiscall sub_4BF270(_DWORD *this, char a2, __int16 a3, __int16 a4, float a5)
{
  int v5; // ecx

  if ( (unsigned __int8)a2 < 4u && (unsigned __int16)a3 < 0x121u && (unsigned __int16)a4 < 8u ) /*0x4bf290*/
  {
    v5 = *(this + 9); /*0x4bf292*/
    if ( v5 ) /*0x4bf297*/
    {
      if ( a5 <= 0.0 ) /*0x4bf2a9*/
      {
        if ( *(_DWORD *)(v5 + 4 * (unsigned __int8)a2 + 0x40) ) /*0x4bf2c2*/
          *(float *)(*(_DWORD *)(*(_DWORD *)(v5 + 4 * (unsigned __int8)a2 + 0x40) + 4 * (unsigned __int16)a3) /*0x4bf2dc*/
                   + 4 * (unsigned __int16)a4) = 0.0;
      }
      else
      {
        *(float *)(*(_DWORD *)(*(_DWORD *)(v5 + 4 * (unsigned __int8)a2 + 0x40) + 4 * (unsigned __int16)a3) /*0x4bf2bc*/
                 + 4 * (unsigned __int16)a4) = a5;
      }
    }
  }
}
