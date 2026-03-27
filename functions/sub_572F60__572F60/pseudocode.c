void __stdcall sub_572F60(char a1)
{
  int i; // ebp
  int v2; // edx
  void (__thiscall ***v3)(_DWORD, int); // edi
  float v4; // [esp+10h] [ebp-8h]
  float v5; // [esp+10h] [ebp-8h]
  int v6; // [esp+14h] [ebp-4h] BYREF

  for ( i = 0; i < 3; ++i )
  {
    v2 = *(_DWORD *)(0x18 * i + 0xB12DD0);
    if ( v2 )
    {
      if ( *(_BYTE *)(0x18 * i + 0xB12DC8) )
      {
        if ( a1 )
        {
          if ( i == 2 )
            sub_5ADB40();
        }
        if ( *(float *)(0x18 * i + 0xB12DD4) < 1.0 )
        {
          v4 = 1.0 / *(float *)(0x18 * i + 0xB12DCC) * flt_B33E9C + *(float *)(0x18 * i + 0xB12DD4);
          *(float *)(0x18 * i + 0xB12DD4) = v4;
          if ( v4 > 1.0 )
            *(float *)(0x18 * i + 0xB12DD4) = 1.0;
          sub_4A2A90(*(_DWORD *)(0x18 * i + 0xB12DD0), *(float *)(0x18 * i + 0xB12DD4));
        }
      }
      else if ( *(float *)(0x18 * i + 0xB12DD4) > 0.0 )
      {
        v5 = *(float *)(0x18 * i + 0xB12DD4) - 1.0 / *(float *)(0x18 * i + 0xB12DCC) * flt_B33E9C;
        *(float *)(0x18 * i + 0xB12DD4) = v5;
        if ( v5 < 0.0 )
          *(float *)(0x18 * i + 0xB12DD4) = 0.0;
        sub_4A2A90(v2, *(float *)(0x18 * i + 0xB12DD4));
      }
      else
      {
        (*(void (__thiscall **)(_DWORD, int *, _DWORD))(**(_DWORD **)(v2 + 0x1C) + 0x88))(
          *(_DWORD *)(v2 + 0x1C),
          &v6,
          *(_DWORD *)(0x18 * i + 0xB12DD0));
        if ( v6 )
        {
          v3 = (void (__thiscall ***)(_DWORD, int))v6;
          if ( !InterlockedDecrement((volatile LONG *)(v6 + 4)) )
            (**v3)(v3, 1);
        }
        *(_DWORD *)(0x18 * i + 0xB12DD0) = 0;
        *(float *)(0x18 * i + 0xB12DD4) = 0.0;
      }
    }
  }
}
