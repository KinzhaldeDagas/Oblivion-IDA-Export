void __stdcall sub_7FEE40(NiGeometry *a1, int a2, int a3)
{
  int v3; // eax
  volatile LONG *v4; // edi
  float v5; // esi
  int v6; // ecx
  int v7; // [esp+4h] [ebp-20h]
  int v8; // [esp+8h] [ebp-1Ch]
  int v9; // [esp+Ch] [ebp-18h]
  int v10; // [esp+18h] [ebp-Ch]
  float v11; // [esp+28h] [ebp+4h]

  if ( *(float *)&a2 != 0.0 )
  {
    v3 = *(_DWORD *)(a2 + 0xE0);
    if ( v3 )
    {
      dword_B46B48 = *(_DWORD *)(v3 + 0xC);
      dword_B46B4C = *(_DWORD *)(v3 + 0x10);
      dword_B46B50 = *(_DWORD *)(v3 + 0x14);
      dword_B46B54 = *(_DWORD *)(v3 + 0x18);
      dword_B46B58 = *(_DWORD *)(v3 + 0x1C);
      dword_B46B5C = *(_DWORD *)(v3 + 0x20);
      dword_B46B60 = *(_DWORD *)(v3 + 0x24);
      dword_B46B64 = *(_DWORD *)(v3 + 0x28);
      flt_B46B3C = *(float *)(v3 + 0x4C);
      flt_B46B40 = *(float *)(v3 + 0x50);
      flt_B46B68 = *(float *)(v3 + 0x54);
      flt_B46B6C = 1.0;
    }
    *(float *)&dword_B46B7C = 0.0;
    *(float *)&dword_B46B78 = 0.0;
    *(float *)&dword_B46B88 = 0.0;
    *(float *)&dword_B46B94 = 0.0;
    *(float *)&dword_B46B80 = 0.0;
    *(float *)&dword_B46B84 = 0.0;
    *(float *)&dword_B46B8C = 0.0;
    *(float *)&dword_B46B90 = 0.0;
    if ( a1 )
    {
      v4 = *sub_405760(a1, (volatile LONG **)&a2);
      if ( *(float *)&a2 != 0.0 )
      {
        v5 = *(float *)&a2;
        if ( !InterlockedDecrement((volatile LONG *)(a2 + 4)) )
          (**(void (__thiscall ***)(float, int))LODWORD(v5))(COERCE_FLOAT(LODWORD(v5)), 1);
      }
      v6 = *((_DWORD *)v4 + 3);
      if ( v6 )
      {
        v11 = *(float *)(v6 + 0x2C);
        a2 = *(int *)(v6 + 0x30);
        if ( *(float *)&a2 != 0.0 || 0.0 != v11 )
        {
          v7 = *(_DWORD *)(v6 + 0x20);
          *(float *)&v10 = *(float *)&a2 - v11;
          v8 = *(_DWORD *)(v6 + 0x24);
          v9 = *(_DWORD *)(v6 + 0x28);
          dword_B46B88 = a2;
          dword_B46B8C = v10;
          *(float *)&dword_B46B90 = 1.0;
          *(float *)&dword_B46B94 = 0.0;
          dword_B46B78 = v7;
          dword_B46B7C = v8;
          dword_B46B80 = v9;
          *(float *)&dword_B46B84 = 0.0;
        }
      }
    }
  }
}
