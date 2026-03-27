int __thiscall sub_4792F0(_DWORD *this, UInt32 a2, _DWORD *a3)
{
  _DWORD *v3; // esi
  Ni2DBuffer *v4; // eax
  int v5; // ebp
  int (__stdcall ***v7[4])(signed int); // [esp+14h] [ebp-28h] BYREF
  float v8; // [esp+24h] [ebp-18h]
  float v9; // [esp+28h] [ebp-14h]
  float v10; // [esp+2Ch] [ebp-10h]
  int v11; // [esp+38h] [ebp-4h]

  if ( *(this + 0x19) )
    return 0;
  if ( !a2 )
    return 0;
  v3 = a3;
  if ( !a3 )
    return 0;
  sub_478B90((NiTPointerMap<NiObject *,NiObject *> **)v7);
  v10 = 1.0;
  v9 = 1.0;
  v8 = 1.0;
  v11 = 1;
  a2 = 0;
  if ( sub_480820(v3) )
  {
    v4 = (Ni2DBuffer *)sub_4430C0(v3, (int)v7);
    NiSmartPointer_Set__((Ni2DBuffer **)&a2, v4);
    v5 = a2;
  }
  else
  {
    v5 = sub_700610(v3, (int)v7);
  }
  if ( !v5 )
  {
    LOBYTE(v11) = 0;
    sub_7016A0((NiD3DVertexShader *)&a2);
    v11 = 0xFFFFFFFF;
    sub_4781A0(v7);
    return 0;
  }
  if ( NiRTTI::IsObjectOfRTTIType((NiRTTI *)dword_B35288, (NiObject *)v5) )
    sub_4A01B0((_BYTE *)v5, 7);
  sub_6FFAC0((_WORD *)v5, off_A3CEB0);
  *(float *)(v5 + 0x54) = Vector3_InitValue_;
  *(float *)(v5 + 0x58) = *(&Vector3_InitValue_ + 1);
  *(float *)(v5 + 0x5C) = dword_B3F9B0;
  qmemcpy((void *)(v5 + 0x30), &stru_B26AF0[0xA].unk2C, 0x24u);
  LOBYTE(v11) = 0;
  sub_7016A0((NiD3DVertexShader *)&a2);
  v11 = 0xFFFFFFFF;
  sub_4781A0(v7);
  return v5;
}
