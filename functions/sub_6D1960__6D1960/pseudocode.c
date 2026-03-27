void __thiscall sub_6D1960(int this, float a2)
{
  int v3; // ecx
  int v4; // ecx
  unsigned int v5; // ecx
  unsigned int v6; // eax
  int v7; // edi
  unsigned int v8; // eax
  NiDX9Renderer **v9; // ecx
  unsigned int v10; // ebx
  int v11; // eax
  NiDX9Renderer *v12; // eax
  BSShaderAccumulator *v13; // [esp+0h] [ebp-1Ch]
  float v14; // [esp+10h] [ebp-Ch] BYREF
  __int64 v15; // [esp+14h] [ebp-8h]

  if ( (*(_BYTE *)(this + 8) & 0x20) != 0 )
  {
    *(float *)(this + 0x28) = flt_A7A164;
LABEL_6:
    v4 = *(_DWORD *)(this + 0x3C);
    if ( v4 )
    {
      if ( (*(unsigned __int8 (__stdcall **)(_DWORD, _DWORD, float *))(*(_DWORD *)v4 + 0x5C))(
             *(float *)(this + 0x28),
             *(_DWORD *)(this + 0x30),
             &v14) )
      {
        v5 = *(unsigned __int16 *)(this + 0x4A);
        v15 = (__int64)(v14 + fConstant_Inv100);
        v6 = v15;
        *(_DWORD *)(this + 0x50) = v15;
        if ( v6 >= v5 )
          *(_DWORD *)(this + 0x50) = v5 - 1;
        v7 = *(_DWORD *)(this + 0x30);
        if ( v7 )
        {
          v8 = *(_DWORD *)(this + 0x54);
          if ( v8 < *(unsigned __int16 *)(v7 + 0x26) && (v9 = (NiDX9Renderer **)(*(_DWORD *)(v7 + 0x20) + 4 * v8), *v9) )
          {
            NiDX9Renderer::SetShaderAccumulator(
              *v9,
              *(BSShaderAccumulator **)(*(_DWORD *)(this + 0x44) + 4 * *(_DWORD *)(this + 0x50)));
          }
          else
          {
            v10 = v8 - 0x400;
            v11 = *(_DWORD *)(v7 + 0x2C);
            if ( v11 )
            {
              if ( v10 < *(unsigned __int16 *)(v11 + 0xA) )
              {
                if ( sub_6D1920((_DWORD *)v7, v10) )
                {
                  v13 = *(BSShaderAccumulator **)(*(_DWORD *)(this + 0x44) + 4 * *(_DWORD *)(this + 0x50));
                  v12 = (NiDX9Renderer *)sub_6D1920((_DWORD *)v7, v10);
                  NiDX9Renderer::SetShaderAccumulator(v12, v13);
                }
              }
            }
          }
        }
      }
    }
    return;
  }
  if ( !sub_6C36B0((float *)this, a2) )
    goto LABEL_6;
  v3 = *(_DWORD *)(this + 0x3C);
  if ( v3 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v3 + 0x94))(v3) )
      goto LABEL_6;
  }
}
