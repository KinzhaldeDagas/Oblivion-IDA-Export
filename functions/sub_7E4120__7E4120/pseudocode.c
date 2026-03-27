int sub_7E4120()
{
  int result; // eax
  int v1; // eax
  int v2; // edi
  UInt16 v3; // bp
  int v4; // esi
  UInt16 *v5; // ebx
  int v6; // eax
  float *v7; // ecx
  int v8; // esi
  _WORD *v9; // edx
  float *v10; // eax
  NiTriShapeData *v11; // eax
  unsigned __int16 *v12; // edi
  NiScreenElementsData *v13; // ebx
  NiObject *v14; // eax
  void *v15; // eax
  NiGeometry *v16; // eax
  NiAVObject *v17; // esi
  const char *m_pcName; // eax
  double v19; // st7
  int v20; // edx
  int v21; // edi
  void (__thiscall ***v22)(_DWORD, int); // edi
  int v23; // [esp+14h] [ebp-78h]
  int v24; // [esp+18h] [ebp-74h]
  int v25; // [esp+20h] [ebp-6Ch]
  UInt16 v26; // [esp+24h] [ebp-68h]
  int v27; // [esp+28h] [ebp-64h]
  float v28; // [esp+4Ch] [ebp-40h]
  float v29; // [esp+7Ch] [ebp-10h]

  if ( !ShaderPackage )
    return 0;
  result = dword_B46014;
  if ( !dword_B46014 )
  {
    v1 = dword_B4600C;
    if ( !dword_B4600C )
    {
      v1 = ShaderPackage < 2 ? 0x28 : 0x78;
      dword_B4600C = v1;
    }
    v2 = (unsigned __int16)v1;
    v3 = 2 * v1;
    v4 = 4 * (unsigned __int16)v1;
    v26 = 2 * v1;
    v25 = v4;
    v5 = (UInt16 *)FormHeapAlloc(
                     (unsigned __int64)(6 * (unsigned int)(unsigned __int16)v1) >> 0x1F != 0
                   ? 0xFFFFFFFF
                   : 0xC * (unsigned __int16)v1);
    v24 = FormHeapAlloc((0xC * (unsigned __int64)(unsigned int)v4) >> 0x20 != 0 ? 0xFFFFFFFF : 0xC * v4);
    v6 = FormHeapAlloc((unsigned __int64)(unsigned int)v4 >> 0x1D != 0 ? 0xFFFFFFFF : 8 * v4);
    v27 = v6;
    if ( v2 > 0 )
    {
      v7 = (float *)(v6 + 0x10);
      v28 = flt_A30634;
      v8 = 0;
      v9 = v5 + 2;
      v10 = (float *)(v24 + 0x18);
      v23 = v2;
      do
      {
        v10[0xFFFFFFFA] = v28;
        v10[0xFFFFFFFB] = v28;
        v10[0xFFFFFFFD] = 1.0;
        v10[0xFFFFFFFE] = v28;
        v10[0xFFFFFFFF] = 0.0;
        *v10 = 1.0;
        v10[1] = 1.0;
        v10[2] = 0.0;
        v10[3] = v28;
        v10[4] = 1.0;
        v10[5] = 0.0;
        v10[0xFFFFFFFC] = 0.0;
        v7[0xFFFFFFFC] = 0.0;
        v7[0xFFFFFFFD] = 0.0;
        v7[0xFFFFFFFE] = 1.0;
        v7[0xFFFFFFFF] = 0.0;
        *v7 = 1.0;
        v7[1] = 1.0;
        v7[2] = 0.0;
        v7[3] = 1.0;
        v9[0xFFFFFFFF] = v8 + 1;
        v9[0xFFFFFFFE] = v8;
        v9[2] = v8;
        *v9 = v8 + 2;
        v9[1] = v8 + 3;
        v9[3] = v8 + 2;
        v8 += 4;
        v10 += 0xC;
        v7 += 8;
        v9 += 6;
        --v23;
      }
      while ( v23 );
      v4 = v25;
      v3 = v26;
    }
    v11 = (NiTriShapeData *)FormHeapAlloc(0x58u);
    v12 = 0;
    if ( v11 )
      v13 = (NiScreenElementsData *)sub_71FB40(v11, v4, v24, 0, 0, v27, 1, 0, v3, v5);
    else
      v13 = 0;
    v14 = (NiObject *)FormHeapAlloc(0x2Cu);
    if ( v14 )
      v12 = (unsigned __int16 *)sub_7E3AE0(v14, v4, 1);
    sub_7263B0(v12, 1u);
    v15 = (void *)sub_7E48E0();
    sub_7260B0((int)v12, (int)v12, 0, v15, (_DWORD *)(4 * v4), 1);
    sub_7262A0((int)v12, 0, 0, 0, 1, v4, 4, 4);
    sub_6C61E0(v13, (int)v12);
    v16 = (NiGeometry *)FormHeapAlloc(0xC0u);
    if ( v16 )
      v17 = NiTriShape_NiTriShape(v16, v13);
    else
      v17 = 0;
    m_pcName = v17[1].members.super.m_pcName;
    v19 = flt_A427E0;
    v20 = *((_DWORD *)m_pcName + 4);
    v21 = *((_DWORD *)m_pcName + 5);
    *((_DWORD *)m_pcName + 3) = *((_DWORD *)m_pcName + 3);
    v29 = v19;
    *((_DWORD *)m_pcName + 4) = v20;
    *((_DWORD *)m_pcName + 5) = v21;
    *((float *)m_pcName + 6) = v29;
    result = dword_B46014;
    if ( (NiAVObject *)dword_B46014 != v17 )
    {
      if ( result )
      {
        v22 = (void (__thiscall ***)(_DWORD, int))dword_B46014;
        if ( !InterlockedDecrement((volatile LONG *)(result + 4)) )
          (**v22)(v22, 1);
      }
      dword_B46014 = (int)v17;
      InterlockedIncrement((volatile LONG *)&v17->members);
      return dword_B46014;
    }
  }
  return result;
}
