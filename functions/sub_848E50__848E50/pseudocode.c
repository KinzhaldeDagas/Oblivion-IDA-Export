int __stdcall sub_848E50(int a1)
{
  int v2; // ecx
  int v3; // edx
  int result; // eax
  int v5; // ecx
  double v6; // st6
  float v7; // [esp+0h] [ebp-24h]
  int v8; // [esp+8h] [ebp-1Ch]
  int v9; // [esp+Ch] [ebp-18h]
  int v10; // [esp+14h] [ebp-10h]
  int v11; // [esp+18h] [ebp-Ch]
  float v12; // [esp+28h] [ebp+4h]

  if ( a1 )
  {
    v7 = *(float *)(a1 + 0x2C);
    v12 = *(float *)(a1 + 0x30);
    if ( v12 == 0.0 && 0.0 == v7 )
    {
      *(float *)&dword_B46638 = flt_A93350;
      *(float *)&dword_B4663C = 0.0;
      v2 = dword_B25AD0;
      *(float *)&dword_B46640 = 0.0;
      v3 = dword_B25AD4;
      *(float *)&dword_B46644 = 0.0;
      result = dword_B25AD8;
      dword_B46648 = v2;
      v5 = dword_B25ADC;
      dword_B4664C = v3;
      dword_B46650 = result;
      dword_B46654 = v5;
    }
    else
    {
      *(float *)&v11 = v12 - v7;
      v8 = *(_DWORD *)(a1 + 0x24);
      v9 = *(_DWORD *)(a1 + 0x28);
      v6 = *(float *)(a1 + 0x20);
      *(float *)&dword_B46638 = v12;
      *(float *)&v10 = v6;
      dword_B4663C = v11;
      *(float *)&dword_B46640 = 0.0;
      *(float *)&dword_B46644 = 0.0;
      dword_B46648 = v10;
      dword_B4664C = v8;
      dword_B46650 = v9;
      *(float *)&dword_B46654 = 0.0;
      *(float *)&result = 0.0;
    }
  }
  return result;
}
