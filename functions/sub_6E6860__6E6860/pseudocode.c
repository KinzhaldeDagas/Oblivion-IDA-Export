char __thiscall sub_6E6860(int this, float a2, int a3, _DWORD *a4)
{
  double v5; // st7
  float v7; // [esp+18h] [ebp-24h]
  float v8; // [esp+20h] [ebp-1Ch]
  float v9; // [esp+24h] [ebp-18h]
  float v10; // [esp+28h] [ebp-14h]
  int v11[4]; // [esp+2Ch] [ebp-10h] BYREF

  v5 = a2;
  if ( a2 == *(float *)(this + 8) )
  {
    *a4 = *(_DWORD *)(this + 0x1C);
    a4[1] = *(_DWORD *)(this + 0x20);
    a4[2] = *(_DWORD *)(this + 0x24);
    a4[3] = *(_DWORD *)(this + 0x28);
    return 1;
  }
  else
  {
    if ( *(_DWORD *)(this + 0x2C) != 0xFFFF )
    {
      v7 = (v5 - *(float *)(this + 0xC)) / (*(float *)(this + 0x10) - *(float *)(this + 0xC));
      sub_6E72F0(*(_DWORD **)(this + 0x14), v7, (int)v11, 4, *(_DWORD *)(this + 0x18), *(_DWORD *)(this + 0x2C));
      v8 = *(float *)&v11[1];
      *(_DWORD *)(this + 0x1C) = v11[0];
      v9 = *(float *)&v11[2];
      *(float *)(this + 0x20) = v8;
      v10 = *(float *)&v11[3];
      *(float *)(this + 0x24) = v9;
      v5 = a2;
      *(float *)(this + 0x28) = v10;
    }
    *a4 = *(_DWORD *)(this + 0x1C);
    a4[1] = *(_DWORD *)(this + 0x20);
    a4[2] = *(_DWORD *)(this + 0x24);
    a4[3] = *(_DWORD *)(this + 0x28);
    *(float *)(this + 8) = v5;
    return 1;
  }
}
