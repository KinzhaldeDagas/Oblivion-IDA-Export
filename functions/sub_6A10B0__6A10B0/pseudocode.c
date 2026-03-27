char __thiscall sub_6A10B0(int this, float a2)
{
  int v3; // ecx
  void (__thiscall *v4)(int); // edx
  char v5; // bl
  int v6; // edi
  double v7; // st7
  double v8; // st7
  int v9; // eax
  int v10; // eax
  int v11; // ecx
  int v12; // ecx
  float v14; // [esp+18h] [ebp-8h]
  float v15; // [esp+1Ch] [ebp-4h]
  float v16; // [esp+1Ch] [ebp-4h]

  if ( !sub_69D9A0(this, a2) )
    return 0;
  v3 = *(_DWORD *)(this + 0x1C);
  if ( !v3 || !(*(int (__thiscall **)(int))(*(_DWORD *)v3 + 0x154))(v3) )
    return 0;
  v4 = *(void (__thiscall **)(int))(*(_DWORD *)this + 0x70);
  v5 = *(_BYTE *)(this + 0x24);
  *(float *)(this + 0x38) = *(float *)(this + 0x38) + a2;
  v4(this);
  v14 = 1.0;
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(this + 0x1C) + 0x190))(*(_DWORD *)(this + 0x1C)) )
  {
    if ( *(_DWORD *)(this + 0x34) != Magic_GetLifeDetectedShader() )
    {
      v6 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 0x1C) + 0x154))(*(_DWORD *)(this + 0x1C));
      if ( NiRTTI::IsObjectOfRTTIType((NiRTTI *)dword_B35288, (NiObject *)v6) )
        v7 = *(float *)(v6 + 0xE8);
      else
        v7 = ((double (__thiscall *)(_DWORD))*(_DWORD *)(**(_DWORD **)(this + 0x1C) + 0x328))(*(_DWORD *)(this + 0x1C));
      v14 = v7;
      sub_5E0AC0(*(_DWORD *)(this + 0x1C));
      v15 = v7;
      if ( v15 > 0.0 )
      {
        v8 = v14 / v15;
        if ( v8 <= 1.0 )
          v14 = v8;
        else
          v14 = 1.0;
      }
    }
  }
  v9 = *(_DWORD *)(this + 0x3C);
  if ( v9 )
  {
    if ( *(_DWORD *)(this + 0x40) )
    {
      v16 = *(float *)(v9 + 0x80);
      sub_4ADBA0(*(float **)(this + 0x34), v16, a2, *(float *)(this + 0x38), COERCE_FLOAT(*(_BYTE *)(this + 0x24)));
      *(float *)(*(_DWORD *)(this + 0x3C) + 0x80) = v16;
      *(float *)(*(_DWORD *)(this + 0x3C) + 0x124) = v14;
      sub_7E51F0(*(float **)(this + 0x3C), *(float *)(this + 0x38), 0, 1);
      if ( *(int *)(*(_DWORD *)(this + 0x3C) + 0x7C) > 0 )
        v5 = 0;
    }
  }
  v10 = *(_DWORD *)(this + 0x48);
  if ( v10 )
  {
    sub_4ADC90(
      *(float **)(this + 0x34),
      v10,
      a2,
      *(float *)(this + 0x38),
      *(float *)(this + 0x20),
      COERCE_FLOAT(*(_BYTE *)(this + 0x24)));
    *(float *)(*(_DWORD *)(this + 0x48) + 0x18) = *(float *)(*(_DWORD *)(this + 0x48) + 0x18) * v14;
    *(float *)(*(_DWORD *)(this + 0x48) + 0x28) = v14 * *(float *)(*(_DWORD *)(this + 0x48) + 0x28);
    v11 = *(_DWORD *)(this + 0x48);
    if ( *(float *)(v11 + 0x48) > 0.0 || *(float *)(v11 + 0x38) > 0.0 )
      v5 = 0;
  }
  if ( !*(_BYTE *)(this + 0x24) || !v5 )
    return 1;
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(this + 0x1C) + 0x190))(*(_DWORD *)(this + 0x1C)) )
  {
    v12 = *(_DWORD *)(*(_DWORD *)(this + 0x1C) + 0x58);
    if ( v12 )
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v12 + 0x428))(v12, 1);
  }
  return 0;
}
