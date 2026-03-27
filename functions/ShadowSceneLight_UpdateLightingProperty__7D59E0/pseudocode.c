char __thiscall ShadowSceneLight_UpdateLightingProperty(int this, float *a2)
{
  int v4; // eax
  int v5; // esi
  unsigned int v6; // edi
  int v7; // eax
  float *v8; // eax
  float *v9; // esi
  int v10; // ecx
  int v11; // eax
  int v12; // [esp+4h] [ebp-4h]

  if ( !ShaderPackage )
    return 0;
  v12 = *(_DWORD *)(this + 0x1B0);
  if ( !sub_7D2EA0((char *)this, a2, *(float **)(this + 0x100)) )
    goto LABEL_19;
  v4 = (*(int (__thiscall **)(float *))(*(_DWORD *)a2 + 8))(a2);
  v5 = v4;
  if ( !v4 )
  {
    if ( (*(int (__thiscall **)(float *))(*(_DWORD *)a2 + 0x10))(a2) )
    {
      v11 = (*(int (__thiscall **)(float *))(*(_DWORD *)a2 + 0x10))(a2);
      sub_7D5790((_DWORD *)this, v11);
    }
    goto LABEL_19;
  }
  v6 = 0;
  v7 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 4))(v4) == (_DWORD)dword_B3FD70 ? v4 : 0;
  if ( v7 )
  {
    v8 = (float *)sub_7C59E0(v7);
    v9 = v8;
    if ( v8 && sub_49FFC0(v8) && ((_BYTE)v9[6] & 1) == 0 )
    {
      ShadowSceneLight_UpdateLightingProperty(this, (int *)v9);
      *(_DWORD *)(this + 0x1B0) = v12;
      return 1;
    }
    goto LABEL_19;
  }
  if ( !*(_WORD *)(v5 + 0xB6) )
  {
LABEL_19:
    *(_DWORD *)(this + 0x1B0) = v12;
    return 1;
  }
  do
  {
    v10 = *(_DWORD *)(*(_DWORD *)(v5 + 0xB0) + 4 * v6);
    if ( v10 )
    {
      if ( 0.0 != *(float *)(v10 + 0x2C) && (*(_BYTE *)(v10 + 0x18) & 1) == 0 )
        ShadowSceneLight_UpdateLightingProperty(this, *(int **)(*(_DWORD *)(v5 + 0xB0) + 4 * v6));
    }
    ++v6;
  }
  while ( *(unsigned __int16 *)(v5 + 0xB6) > v6 );
  *(_DWORD *)(this + 0x1B0) = v12;
  return 1;
}
