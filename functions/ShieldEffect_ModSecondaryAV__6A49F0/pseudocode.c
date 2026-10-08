void __thiscall ShieldEffect_ModSecondaryAV(_DWORD *this, int a2, float a3)
{
  int v4; // eax
  double v5; // st7
  double v6; // st6
  float v7; // [esp+4h] [ebp-10h]
  float v8; // [esp+1Ch] [ebp+8h]
  float v9; // [esp+1Ch] [ebp+8h]

  if ( a2 ) /*0x6a49fa*/
  {
    v4 = *(this + 0xF); /*0x6a4a00*/
    if ( v4 != 0x48 ) /*0x6a4a06*/
    {
      if ( *(this + 0xA) == 4 ) /*0x6a4a10*/
      {
        (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)a2 + 0x2AC))(a2, v4, LODWORD(a3)); /*0x6a4a25*/
      }
      else if ( (*(_DWORD *)(*(_DWORD *)(*(this + 3) + 0x1C) + 0x58) & 2) != 0 ) /*0x6a4a3a*/
      {
        (*(void (__thiscall **)(int, int, _DWORD, _DWORD))(*(_DWORD *)a2 + 0x294))(a2, v4, LODWORD(a3), 0); /*0x6a4a51*/
      }
      else
      {
        v5 = a3; /*0x6a4a62*/
        if ( a3 < 0.0 && *(this + 0xE) != 0xA ) /*0x6a4a6f*/
        {
          v6 = ((double (__thiscall *)(int, _DWORD))*(_DWORD *)(*(_DWORD *)a2 + 0x288))(a2, *(this + 0xE)) + a3; /*0x6a4a88*/
          v5 = a3; /*0x6a4a88*/
          v8 = v6; /*0x6a4a8a*/
          if ( v8 < 0.0 ) /*0x6a4a9d*/
          {
            v9 = v5 - v8; /*0x6a4aa1*/
            v5 = v9; /*0x6a4aa5*/
          }
        }
        v7 = v5; /*0x6a4abb*/
        (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)a2 + 0x2A4))(a2, *(this + 0xF), LODWORD(v7), 0); /*0x6a4ac1*/
      }
    }
  }
}
