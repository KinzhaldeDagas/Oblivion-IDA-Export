void __stdcall sub_7D1C90(NiGeometry *a1, int a2)
{
  int v2; // eax
  volatile LONG *v3; // edi
  float v4; // esi
  int v5; // ecx
  int v6; // [esp+4h] [ebp-20h]
  int v7; // [esp+8h] [ebp-1Ch]
  int v8; // [esp+Ch] [ebp-18h]
  int v9; // [esp+18h] [ebp-Ch]
  float v10; // [esp+28h] [ebp+4h]

  if ( *(float *)&a2 != 0.0 )
  {
    v2 = *(_DWORD *)(a2 + 0xE0);
    if ( v2 )
    {
      dword_B44F38 = *(_DWORD *)(v2 + 0xC);
      dword_B44F3C = *(_DWORD *)(v2 + 0x10);
      dword_B44F40 = *(_DWORD *)(v2 + 0x14);
      dword_B44F44 = *(_DWORD *)(v2 + 0x18);
      dword_B44F48 = *(_DWORD *)(v2 + 0x1C);
      dword_B44F4C = *(_DWORD *)(v2 + 0x20);
      dword_B44F50 = *(_DWORD *)(v2 + 0x24);
      dword_B44F54 = *(_DWORD *)(v2 + 0x28);
      flt_B44ED0 = *(float *)(v2 + 0x4C);
      flt_B44ED4 = *(float *)(v2 + 0x50);
      flt_B44F58 = *(float *)(v2 + 0x54);
      flt_B44F5C = 1.0;
    }
    *(float *)&dword_B44F6C = 0.0;
    *(float *)&dword_B44F68 = 0.0;
    *(float *)&dword_B44F78 = 0.0;
    *(float *)&dword_B44F84 = 0.0;
    *(float *)&dword_B44F70 = 0.0;
    *(float *)&dword_B44F74 = 0.0;
    *(float *)&dword_B44F7C = 0.0;
    *(float *)&dword_B44F80 = 0.0;
    if ( a1 )
    {
      v3 = *sub_405760(a1, (volatile LONG **)&a2);
      if ( *(float *)&a2 != 0.0 )
      {
        v4 = *(float *)&a2;
        if ( !InterlockedDecrement((volatile LONG *)(a2 + 4)) )
          (**(void (__thiscall ***)(float, int))LODWORD(v4))(COERCE_FLOAT(LODWORD(v4)), 1);
      }
      v5 = *((_DWORD *)v3 + 3);
      if ( v5 )
      {
        v10 = *(float *)(v5 + 0x2C);
        a2 = *(int *)(v5 + 0x30);
        if ( *(float *)&a2 != 0.0 || 0.0 != v10 )
        {
          v6 = *(_DWORD *)(v5 + 0x20);
          *(float *)&v9 = *(float *)&a2 - v10;
          v7 = *(_DWORD *)(v5 + 0x24);
          v8 = *(_DWORD *)(v5 + 0x28);
          dword_B44F78 = a2;
          dword_B44F7C = v9;
          *(float *)&dword_B44F80 = 1.0;
          *(float *)&dword_B44F84 = 0.0;
          dword_B44F68 = v6;
          dword_B44F6C = v7;
          dword_B44F70 = v8;
          *(float *)&dword_B44F74 = 0.0;
        }
      }
    }
  }
}
