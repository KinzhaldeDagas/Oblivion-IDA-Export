void __thiscall sub_6D1960(int this, float applicationTime)
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

  if ( (*(_BYTE *)(this + 8) & 0x20) != 0 ) /*0x6d196e*/
  {
    *(float *)(this + 0x28) = flt_A7A164; /*0x6d1976*/
LABEL_6:
    v4 = *(_DWORD *)(this + 0x3C); /*0x6d19a9*/
    if ( v4 ) /*0x6d19ae*/
    {
      if ( (*(unsigned __int8 (__stdcall **)(_DWORD, _DWORD, float *))(*(_DWORD *)v4 + 0x5C))( /*0x6d19c9*/
             *(float *)(this + 0x28),
             *(_DWORD *)(this + 0x30),
             &v14) )
      {
        v5 = *(unsigned __int16 *)(this + 0x4A); /*0x6d19d7*/
        v15 = (__int64)(v14 + fConstant_Inv100); /*0x6d19f7*/
        v6 = v15; /*0x6d19fb*/
        *(_DWORD *)(this + 0x50) = v15; /*0x6d1a01*/
        if ( v6 >= v5 ) /*0x6d1a08*/
          *(_DWORD *)(this + 0x50) = v5 - 1; /*0x6d1a0d*/
        v7 = *(_DWORD *)(this + 0x30); /*0x6d1a11*/
        if ( v7 ) /*0x6d1a16*/
        {
          v8 = *(_DWORD *)(this + 0x54); /*0x6d1a1c*/
          if ( v8 < *(unsigned __int16 *)(v7 + 0x26) && (v9 = (NiDX9Renderer **)(*(_DWORD *)(v7 + 0x20) + 4 * v8), *v9) ) /*0x6d1a26*/
          {
            NiDX9Renderer::SetShaderAccumulator( /*0x6d1a3b*/
              *v9,
              *(BSShaderAccumulator **)(*(_DWORD *)(this + 0x44) + 4 * *(_DWORD *)(this + 0x50)));
          }
          else
          {
            v10 = v8 - 0x400; /*0x6d1a49*/
            v11 = *(_DWORD *)(v7 + 0x2C); /*0x6d1a4f*/
            if ( v11 ) /*0x6d1a54*/
            {
              if ( v10 < *(unsigned __int16 *)(v11 + 0xA) ) /*0x6d1a5c*/
              {
                if ( sub_6D1920((_DWORD *)v7, v10) ) /*0x6d1a61*/
                {
                  v13 = *(BSShaderAccumulator **)(*(_DWORD *)(this + 0x44) + 4 * *(_DWORD *)(this + 0x50)); /*0x6d1a73*/
                  v12 = (NiDX9Renderer *)sub_6D1920((_DWORD *)v7, v10); /*0x6d1a77*/
                  NiDX9Renderer::SetShaderAccumulator(v12, v13); /*0x6d1a7e*/
                }
              }
            }
          }
        }
      }
    }
    return; /*0x6d1a45*/
  }
  if ( !NiTimeController_IsUpdateUnchanged((NiTimeController *)this, applicationTime) ) /*0x6d1983*/
    goto LABEL_6; /*0x6d1983*/
  v3 = *(_DWORD *)(this + 0x3C); /*0x6d198c*/
  if ( v3 ) /*0x6d1991*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v3 + 0x94))(v3) ) /*0x6d199f*/
      goto LABEL_6; /*0x6d19a3*/
  }
}
