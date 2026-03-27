void __thiscall sub_8451B0(NiTArray_NiD3DPass *this, float *a2, int a3, int a4, NiD3DPass *a5)
{
  NiD3DPass *v7; // edi
  bool v8; // zf
  float *v9; // ecx
  double v10; // st7
  _DWORD *v11; // eax
  int v12; // edx
  int v13; // eax
  int v14; // ecx
  _DWORD *v15; // eax
  int v16; // eax
  int v17; // ecx
  UInt32 Stage; // ebp
  int v19; // eax
  int v20; // ebx
  NiTexture *Texture; // ebp
  UInt32 m_uiRefCount; // ebx
  int v23; // eax
  float v24; // [esp+14h] [ebp-24h]
  int v25; // [esp+14h] [ebp-24h]
  float v26; // [esp+18h] [ebp-20h]
  float v27; // [esp+3Ch] [ebp+4h]
  int v28; // [esp+3Ch] [ebp+4h]

  v7 = (NiD3DPass *)dword_B45BBC;
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, float *, _DWORD, _DWORD))this->_vtbl + 0x2F))(this, a2, 0, 0);
  v8 = byte_B42CE3 == 0;
  v9 = (float *)a5;
  v27 = a2[8] - CameraWorldTranslate;
  v24 = a2[9] - flt_B3F930;
  v26 = a2[0xA] - flt_B3F934;
  v10 = v27;
  v28 = dword_B43114;
  flt_B44F28 = v10;
  flt_B44F2C = v24;
  flt_B44F30 = v26;
  if ( v8 )
  {
    *(float *)&dword_B464A4 = v9[0x29] * *(float *)&dword_B464A4;
    v11 = sub_7ED1A0(v9);
    if ( !v11 || !*((_BYTE *)v11 + 0xFC) )
    {
      v12 = dword_B4649C;
      v13 = dword_B464A0;
      dword_B464A8 = dword_B46498;
      v14 = dword_B464A4;
      dword_B464AC = v12;
      dword_B464B0 = v13;
      dword_B464B4 = v14;
    }
  }
  else
  {
    v15 = sub_7ED1A0(v9);
    if ( !v15 || !*((_BYTE *)v15 + 0xFC) )
    {
      *(float *)&v16 = flt_A3D65C;
      *(float *)&v17 = flt_A3D65C;
      *(float *)&dword_B464A8 = flt_A3D65C;
      dword_B464AC = v16;
      dword_B464B0 = v17;
      *(float *)&dword_B464B4 = 1.0;
    }
  }
  Stage = v7->Stages.data->Stage;
  v19 = sub_848FD0(a5, 0);
  v20 = *(_DWORD *)(Stage + 4);
  v25 = v19;
  if ( v20 != v19 )
  {
    if ( v20 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v20 + 4)) )
        (**(void (__thiscall ***)(int, int))v20)(v20, 1);
      v19 = v25;
    }
    *(_DWORD *)(Stage + 4) = v19;
    if ( v19 )
      InterlockedIncrement((volatile LONG *)(v19 + 4));
  }
  sub_848FA0((_DWORD **)Stage, (int)a5);
  Texture = v7->Stages.data->Texture;
  m_uiRefCount = Texture->members.super.super.m_uiRefCount;
  v23 = v28;
  if ( m_uiRefCount != v28 )
  {
    if ( m_uiRefCount )
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) )
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1);
      v23 = v28;
    }
    Texture->members.super.super.m_uiRefCount = v23;
    if ( v23 )
      InterlockedIncrement((volatile LONG *)(v23 + 4));
  }
  ++v7->RefCount;
  a5 = v7;
  sub_76CE40(this + 4, *((NiD3DPass **)this + 0xE), &a5);
  v8 = v7->RefCount-- == 1;
  if ( v8 )
    sub_7604D0(v7);
  ++*((_DWORD *)this + 0xE);
}
