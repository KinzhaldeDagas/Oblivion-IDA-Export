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

  result = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x5C))(a2); /*0x755600*/
  v4 = *(_DWORD *)(a2 + 0x5C); /*0x755602*/
  for ( i = 0; (unsigned __int16)i < *(_WORD *)(a2 + 0x48); v6[5] = a1 ) /*0x755607*/
  {
    v6 = (float *)(v4 + 0x1C * (unsigned __int16)i); /*0x755623*/
    result = (float *)(*(_DWORD *)(a2 + 0x1C) + 0xC * (unsigned __int16)i++); /*0x755629*/
    v10 = a1 - v6[5]; /*0x755632*/
    v7 = *v6 * v10; /*0x755642*/
    v8 = v6[1] * v10; /*0x75564b*/
    v9 = v10 * v6[2]; /*0x755652*/
    *result = *result + v7; /*0x75565c*/
    result[1] = v8 + result[1]; /*0x755665*/
    result[2] = result[2] + v9; /*0x75566f*/
  }
  return result; /*0x75567e*/
}
