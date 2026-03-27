char __thiscall sub_6E51D0(int this, float a2, int a3, _DWORD *a4)
{
  double v5; // st7
  float v7; // [esp+18h] [ebp-1Ch]
  float v8; // [esp+20h] [ebp-14h]
  float v9; // [esp+24h] [ebp-10h]
  int v10[3]; // [esp+28h] [ebp-Ch] BYREF

  v5 = a2;
  if ( a2 == *(float *)(this + 8) )
  {
    *a4 = *(_DWORD *)(this + 0x1C);
    a4[1] = *(_DWORD *)(this + 0x20);
    a4[2] = *(_DWORD *)(this + 0x24);
    return 1;
  }
  else
  {
    if ( *(_DWORD *)(this + 0x28) != 0xFFFF )
    {
      v7 = (v5 - *(float *)(this + 0xC)) / (*(float *)(this + 0x10) - *(float *)(this + 0xC));
      sub_6E72F0(*(_DWORD **)(this + 0x14), v7, (int)v10, 3, *(_DWORD *)(this + 0x18), *(_DWORD *)(this + 0x28));
      v8 = *(float *)&v10[1];
      *(_DWORD *)(this + 0x1C) = v10[0];
      v9 = *(float *)&v10[2];
      *(float *)(this + 0x20) = v8;
      v5 = a2;
      *(float *)(this + 0x24) = v9;
    }
    *a4 = *(_DWORD *)(this + 0x1C);
    a4[1] = *(_DWORD *)(this + 0x20);
    a4[2] = *(_DWORD *)(this + 0x24);
    *(float *)(this + 8) = v5;
    return 1;
  }
}
