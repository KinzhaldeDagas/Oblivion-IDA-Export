bool __thiscall sub_6E5990(int this, float a2, int a3, void *a4)
{
  int v6; // eax
  int v7; // eax
  int v8; // eax
  float v9; // [esp+28h] [ebp-24h]
  float v10[4]; // [esp+2Ch] [ebp-20h] BYREF
  int v11; // [esp+3Ch] [ebp-10h] BYREF
  float v12; // [esp+40h] [ebp-Ch]
  float v13; // [esp+44h] [ebp-8h]
  float v14; // [esp+48h] [ebp-4h]

  if ( a2 == *(float *)(this + 8) )
  {
    qmemcpy(a4, (const void *)(this + 0x1C), 0x20u);
    return !sub_6CBC10((float *)(this + 0x1C));
  }
  else
  {
    v6 = *(_DWORD *)(this + 0x3C);
    v9 = (a2 - *(float *)(this + 0xC)) / (*(float *)(this + 0x10) - *(float *)(this + 0xC));
    if ( v6 != 0xFFFF )
    {
      sub_6E7470(
        *(_DWORD **)(this + 0x14),
        v9,
        (int)&v11,
        3,
        *(_DWORD *)(this + 0x18),
        v6,
        *(float *)(this + 0x48),
        *(float *)(this + 0x4C));
      v10[0] = *(float *)&v11;
      v10[1] = v12;
      v10[2] = v13;
      sub_471390((_DWORD *)(this + 0x1C), v10);
    }
    v7 = *(_DWORD *)(this + 0x40);
    if ( v7 != 0xFFFF )
    {
      sub_6E7470(
        *(_DWORD **)(this + 0x14),
        v9,
        (int)&v11,
        4,
        *(_DWORD *)(this + 0x18),
        v7,
        *(float *)(this + 0x50),
        *(float *)(this + 0x54));
      sub_714C40(v10, *(float *)&v11, v12, v13, v14);
      sub_72FAC0(v10);
      sub_471430((_DWORD *)(this + 0x1C), v10);
    }
    v8 = *(_DWORD *)(this + 0x44);
    if ( v8 != 0xFFFF )
    {
      sub_6E7470(
        *(_DWORD **)(this + 0x14),
        v9,
        (int)&v11,
        1,
        *(_DWORD *)(this + 0x18),
        v8,
        *(float *)(this + 0x58),
        *(float *)(this + 0x5C));
      sub_471560((float *)(this + 0x1C), *(float *)&v11);
    }
    qmemcpy(a4, (const void *)(this + 0x1C), 0x20u);
    if ( sub_6CBC10((float *)(this + 0x1C)) )
    {
      return 0;
    }
    else
    {
      *(float *)(this + 8) = a2;
      return 1;
    }
  }
}
