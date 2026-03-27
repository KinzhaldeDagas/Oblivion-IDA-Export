void __thiscall sub_65DC50(void *this, int a2)
{
  float *v3; // esi
  float *v4; // eax
  float v5; // [esp+Ch] [ebp-Ch]
  float v6; // [esp+10h] [ebp-8h]
  float v7; // [esp+14h] [ebp-4h]
  float v8; // [esp+1Ch] [ebp+4h]
  float v9; // [esp+1Ch] [ebp+4h]
  float v10; // [esp+1Ch] [ebp+4h]

  if ( a2 )
  {
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x154))(a2) )
    {
      v3 = (float *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x174))(this);
      v4 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x174))(a2);
      v5 = *v4 - *v3;
      v6 = v4[1] - v3[1];
      v7 = v4[2] - v3[2];
      v8 = v6 * v6 + v5 * v5 + v7 * v7;
      v9 = sqrt(v8);
      v10 = sub_548A10(v9);
      if ( v10 > 0.0 )
        sub_7EB080(v10);
    }
  }
}
