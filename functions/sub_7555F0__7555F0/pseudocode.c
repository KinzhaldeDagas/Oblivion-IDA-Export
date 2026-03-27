float *__stdcall sub_7555F0(float a1, int a2)
{
  float *result; // eax
  int v4; // edi
  int i; // edx
  float *v6; // ecx
  float v7; // [esp+8h] [ebp-Ch]
  float v8; // [esp+Ch] [ebp-8h]
  float v9; // [esp+10h] [ebp-4h]
  float v10; // [esp+1Ch] [ebp+8h]

  result = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x5C))(a2);
  v4 = *(_DWORD *)(a2 + 0x5C);
  for ( i = 0; (unsigned __int16)i < *(_WORD *)(a2 + 0x48); v6[5] = a1 )
  {
    v6 = (float *)(v4 + 0x1C * (unsigned __int16)i);
    result = (float *)(*(_DWORD *)(a2 + 0x1C) + 0xC * (unsigned __int16)i++);
    v10 = a1 - v6[5];
    v7 = *v6 * v10;
    v8 = v6[1] * v10;
    v9 = v10 * v6[2];
    *result = *result + v7;
    result[1] = v8 + result[1];
    result[2] = result[2] + v9;
  }
  return result;
}
