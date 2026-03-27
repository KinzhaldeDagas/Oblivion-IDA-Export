int sub_7F4970()
{
  int result; // eax
  int v1; // eax
  int v2; // esi
  int v3; // edi
  UInt16 v4; // bp
  int v5; // ebx
  int v6; // eax
  _WORD *v7; // ecx
  float *v8; // eax
  int v9; // edx
  int v10; // edi
  NiTriShapeData *v11; // eax
  unsigned __int16 *v12; // esi
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
  UInt16 *v23; // [esp+20h] [ebp-44h]
  float v24; // [esp+24h] [ebp-40h]
  float v25; // [esp+54h] [ebp-10h]

  result = dword_B4690C;
  if ( !dword_B4690C )
  {
    v1 = dword_B468FC;
    if ( !dword_B468FC )
    {
      v1 = ShaderPackage < 2 ? 0x4B : 0xEB;
      dword_B468FC = v1;
    }
    if ( (_WORD)v1 )
    {
      v2 = dword_B2DC90 * (unsigned __int16)v1;
      v3 = 4 * v2;
      v4 = 2 * v2;
      v5 = FormHeapAlloc((0xC * (unsigned __int64)(unsigned int)(4 * v2)) >> 0x20 != 0 ? 0xFFFFFFFF : 0x30 * v2);
      v6 = FormHeapAlloc((unsigned __int64)(unsigned int)(6 * v2) >> 0x1F != 0 ? 0xFFFFFFFF : 0xC * v2);
      v23 = (UInt16 *)v6;
      if ( v2 )
      {
        v7 = (_WORD *)(v6 + 4);
        v24 = flt_A30634;
        v8 = (float *)(v5 + 0x18);
        v9 = 0;
        v10 = v2;
        do
        {
          v8[0xFFFFFFFA] = v24;
          v8[0xFFFFFFFB] = v24;
          v8[0xFFFFFFFD] = 1.0;
          v8[0xFFFFFFFE] = v24;
          v8[0xFFFFFFFF] = 0.0;
          *v8 = 1.0;
          v8[1] = 1.0;
          v8[2] = 0.0;
          v8[3] = v24;
          v8[4] = 1.0;
          v8[5] = 0.0;
          v8[0xFFFFFFFC] = 0.0;
          v7[0xFFFFFFFF] = v9 + 1;
          v7[0xFFFFFFFE] = v9;
          v7[2] = v9;
          *v7 = v9 + 2;
          v7[1] = v9 + 3;
          v7[3] = v9 + 2;
          v9 += 4;
          v8 += 0xC;
          v7 += 6;
          --v10;
        }
        while ( v10 );
        v3 = 4 * v2;
        v4 = 2 * v2;
      }
      v11 = (NiTriShapeData *)FormHeapAlloc(0x58u);
      v12 = 0;
      if ( v11 )
        v13 = (NiScreenElementsData *)sub_71FB40(v11, v3, v5, 0, 0, 0, 0, 0, v4, v23);
      else
        v13 = 0;
      v14 = (NiObject *)FormHeapAlloc(0x2Cu);
      if ( v14 )
        v12 = (unsigned __int16 *)sub_7E3AE0(v14, v3, 1);
      sub_7263B0(v12, 1u);
      v15 = (void *)sub_7F3790();
      sub_7260B0((int)v12, v3, 0, v15, (_DWORD *)(4 * v3), 1);
      sub_7262A0((int)v12, 0, 0, 0, 1, v3, 4, 4);
      sub_6C61E0(v13, (int)v12);
      v16 = (NiGeometry *)FormHeapAlloc(0xC0u);
      if ( v16 )
        v17 = NiTriShape_NiTriShape(v16, v13);
      else
        v17 = 0;
      m_pcName = v17[1].members.super.m_pcName;
      v19 = flt_A2FF44;
      v20 = *((_DWORD *)m_pcName + 4);
      v21 = *((_DWORD *)m_pcName + 5);
      *((_DWORD *)m_pcName + 3) = *((_DWORD *)m_pcName + 3);
      v25 = v19;
      *((_DWORD *)m_pcName + 4) = v20;
      *((_DWORD *)m_pcName + 5) = v21;
      *((float *)m_pcName + 6) = v25;
      result = dword_B4690C;
      if ( (NiAVObject *)dword_B4690C != v17 )
      {
        if ( result )
        {
          v22 = (void (__thiscall ***)(_DWORD, int))dword_B4690C;
          if ( !InterlockedDecrement((volatile LONG *)(result + 4)) )
            (**v22)(v22, 1);
        }
        dword_B4690C = (int)v17;
        InterlockedIncrement((volatile LONG *)&v17->members);
        return dword_B4690C;
      }
    }
    else
    {
      return 0;
    }
  }
  return result;
}
