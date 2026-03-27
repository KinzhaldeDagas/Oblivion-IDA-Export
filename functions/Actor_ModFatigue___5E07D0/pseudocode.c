void __thiscall Actor_ModFatigue_(void *this, float a2)
{
  double v3; // st7
  float v4; // [esp+10h] [ebp-4h]

  if ( a2 < 0.0 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)this + 0x278))(this) )
    {
      v4 = ((double (__thiscall *)(void *, int))*(_DWORD *)(*(_DWORD *)this + 0x288))(this, 0xA);
      v3 = v4;
      if ( v4 > 0.0 )
      {
        if ( a2 + v3 < dbl_A2FC68 )
          a2 = -v3;
        (*(void (__thiscall **)(void *, int, _DWORD, _DWORD))(*(_DWORD *)this + 0x2A4))(this, 0xA, LODWORD(a2), 0);
      }
    }
  }
}
