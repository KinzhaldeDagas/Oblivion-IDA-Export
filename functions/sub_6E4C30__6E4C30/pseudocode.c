bool __thiscall sub_6E4C30(int this, float a2, int a3, void *a4)
{
  int v6; // eax
  float v7; // [esp+20h] [ebp-24h]
  float v8[4]; // [esp+24h] [ebp-20h] BYREF
  int v9; // [esp+34h] [ebp-10h] BYREF
  float v10; // [esp+38h] [ebp-Ch]
  float v11; // [esp+3Ch] [ebp-8h]
  float v12; // [esp+40h] [ebp-4h]

  if ( a2 == *(float *)(this + 8) )
  {
    qmemcpy(a4, (const void *)(this + 0x1C), 0x20u);
    return !sub_6CBC10((float *)(this + 0x1C));
  }
  else
  {
    v6 = *(_DWORD *)(this + 0x3C);
    v7 = (a2 - *(float *)(this + 0xC)) / (*(float *)(this + 0x10) - *(float *)(this + 0xC));
    if ( v6 != 0xFFFF )
    {
      sub_6E72F0(*(_DWORD **)(this + 0x14), v7, (int)&v9, 3, *(_DWORD *)(this + 0x18), v6);
      v8[0] = *(float *)&v9;
      v8[1] = v10;
      v8[2] = v11;
      sub_471390((_DWORD *)(this + 0x1C), v8);
    }
    if ( *(_DWORD *)(this + 0x40) != 0xFFFF )
    {
      sub_6E72F0(*(_DWORD **)(this + 0x14), v7, (int)&v9, 4, *(_DWORD *)(this + 0x18), *(_DWORD *)(this + 0x40));
      sub_714C40(v8, *(float *)&v9, v10, v11, v12);
      sub_72FAC0(v8);
      sub_471430((_DWORD *)(this + 0x1C), v8);
    }
    if ( *(_DWORD *)(this + 0x44) != 0xFFFF )
    {
      sub_6E72F0(*(_DWORD **)(this + 0x14), v7, (int)&v9, 1, *(_DWORD *)(this + 0x18), *(_DWORD *)(this + 0x44));
      sub_471560((float *)(this + 0x1C), *(float *)&v9);
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
