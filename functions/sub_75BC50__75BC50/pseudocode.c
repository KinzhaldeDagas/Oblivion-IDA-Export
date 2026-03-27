void __thiscall sub_75BC50(int this, float a2, int a3)
{
  int v5; // ecx
  double v6; // st7
  int v7; // esi
  float *v8; // edx
  int v10; // edi
  int v11; // esi
  float *v12; // eax
  float v13; // [esp+0h] [ebp-24h]
  float v14; // [esp+20h] [ebp-4h]
  float v15; // [esp+20h] [ebp-4h]
  int v16; // [esp+2Ch] [ebp+8h]
  float v17; // [esp+2Ch] [ebp+8h]

  if ( *(_BYTE *)(this + 0x18) && *(_DWORD *)(this + 0x1C) )
  {
    v5 = *(unsigned __int16 *)(a3 + 0x48);
    v16 = v5;
    if ( (_WORD)v5 )
    {
      v6 = a2;
      v7 = (unsigned __int16)(v5 - 1);
      do
      {
        v8 = (float *)(*(_DWORD *)(a3 + 0x5C) + 0x1C * (unsigned __int16)v7);
        v14 = v6 - v8[5] + v8[3];
        v8[3] = v14;
        if ( v8[4] < (double)v14 )
        {
          v15 = v8[4] + v6 - v14;
          v13 = v6;
          (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD, int, _DWORD))(**(_DWORD **)(this + 0x1C) + 0x5C))(
            *(_DWORD *)(this + 0x1C),
            LODWORD(v13),
            LODWORD(v15),
            v7,
            *(_DWORD *)(this + 0x10));
          (*(void (__thiscall **)(int, int))(*(_DWORD *)a3 + 0x58))(a3, v7);
          v6 = a2;
          v5 = v16;
        }
        v5 += 0xFFFF;
        v7 += 0xFFFF;
        v16 = v5;
      }
      while ( (_WORD)v5 );
    }
  }
  else
  {
    v10 = *(unsigned __int16 *)(a3 + 0x48);
    if ( (_WORD)v10 )
    {
      v11 = (unsigned __int16)(v10 - 1);
      do
      {
        v12 = (float *)(*(_DWORD *)(a3 + 0x5C) + 0x1C * (unsigned __int16)v11);
        v17 = a2 - v12[5] + v12[3];
        v12[3] = v17;
        if ( v12[4] < (double)v17 )
          (*(void (__thiscall **)(int, int))(*(_DWORD *)a3 + 0x58))(a3, v11);
        v10 += 0xFFFF;
        v11 += 0xFFFF;
      }
      while ( (_WORD)v10 );
    }
  }
}
