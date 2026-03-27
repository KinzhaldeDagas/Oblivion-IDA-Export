void __thiscall ShieldEffect_ModSecondaryAV(_DWORD *this, int a2, float a3)
{
  int v4; // eax
  double v5; // st7
  double v6; // st6
  float v7; // [esp+4h] [ebp-10h]
  float v8; // [esp+1Ch] [ebp+8h]
  float v9; // [esp+1Ch] [ebp+8h]

  if ( a2 )
  {
    v4 = *(this + 0xF);
    if ( v4 != 0x48 )
    {
      if ( *(this + 0xA) == 4 )
      {
        (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)a2 + 0x2AC))(a2, v4, LODWORD(a3));
      }
      else if ( (*(_DWORD *)(*(_DWORD *)(*(this + 3) + 0x1C) + 0x58) & 2) != 0 )
      {
        (*(void (__thiscall **)(int, int, _DWORD, _DWORD))(*(_DWORD *)a2 + 0x294))(a2, v4, LODWORD(a3), 0);
      }
      else
      {
        v5 = a3;
        if ( a3 < 0.0 && *(this + 0xE) != 0xA )
        {
          v6 = ((double (__thiscall *)(int, _DWORD))*(_DWORD *)(*(_DWORD *)a2 + 0x288))(a2, *(this + 0xE)) + a3;
          v5 = a3;
          v8 = v6;
          if ( v8 < 0.0 )
          {
            v9 = v5 - v8;
            v5 = v9;
          }
        }
        v7 = v5;
        (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)a2 + 0x2A4))(a2, *(this + 0xF), LODWORD(v7), 0);
      }
    }
  }
}
