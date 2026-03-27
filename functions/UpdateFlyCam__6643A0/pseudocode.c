int __thiscall UpdateFlyCam(float *this)
{
  InputGlobal *input; // edi
  LONG v3; // eax
  bool v4; // zf
  float v5; // eax
  float v6; // edx
  NiTransform *v7; // eax
  double v8; // st7
  float v9; // edx
  double v10; // st7
  SceneGraph *v11; // eax
  float *vtbl; // ecx
  NiAVObjectVtbl *v13; // ecx
  NiPoint3 v15; // [esp+Ch] [ebp-8Ch] BYREF
  int v16; // [esp+18h] [ebp-80h]
  LONG MouseAxisMovement; // [esp+1Ch] [ebp-7Ch]
  NiTransform v18; // [esp+20h] [ebp-78h] BYREF
  float v19[9]; // [esp+74h] [ebp-24h] BYREF

  input = OSGlobals->input;
  MouseAxisMovement = InputGlobals::GetMouseAxisMovement(input, 1);
  v3 = InputGlobals::GetMouseAxisMovement(input, 2);
  v4 = byte_B14F38 == 0;
  v16 = v3;
  if ( !v4 )
    v16 = -v3;
  *(this + 0x1D3) = (double)MouseAxisMovement * flt_B14EE8 + *(this + 0x1D3);
  *(this + 0x1D4) = (double)v16 * flt_B14EE8 + *(this + 0x1D4);
  NiMatrix33_InitRotationTransform(v19, *(this + 0x1D3));
  NiMatrix33_InitRotationTransposedTransform___(&v18.scale, *(this + 0x1D4));
  NiMAtrix33_Multiply(v19, v18.rot.data[1], &v18.scale);
  v5 = Vector3_InitValue_;
  v6 = dword_B3F9B0;
  v15.y = *(&Vector3_InitValue_ + 1);
  v15.x = v5;
  v15.z = v6;
  if ( InputGlobals::QueryControlState(input, 0, 0) )
    v15.y = v15.y + dbl_A3F3E8;
  if ( InputGlobals::QueryControlState(input, 1, 0) )
    v15.y = v15.y - dbl_A3F3E8;
  if ( InputGlobals::QueryControlState(input, 3, 0) )
    v15.x = v15.x + dbl_A3F3E8;
  if ( InputGlobals::QueryControlState(input, 2, 0) )
    v15.x = v15.x - dbl_A3F3E8;
  v7 = sub_7101F0((NiTransform *)v18.rot.data[1], &v18, &v15);
  v8 = *(this + 0x1D5);
  *(_QWORD *)&v15.x = *(_QWORD *)&v7->rot.data[0][0];
  v9 = v7->rot.data[0][2];
  *(this + 0x1D5) = v8 + v15.x;
  v10 = *(this + 0x1D6);
  v15.z = v9;
  *(this + 0x1D6) = v10 + v15.y;
  *(this + 0x1D7) = *(this + 0x1D7) + v15.z;
  v11 = g_worldScenegraph;
  if ( g_worldScenegraph->super.children.end )
    vtbl = (float *)v11->super.children.data->vtbl;
  else
    vtbl = 0;
  vtbl[0x15] = *(this + 0x1D5);
  vtbl[0x16] = *(this + 0x1D6);
  vtbl[0x17] = *(this + 0x1D7);
  if ( v11->super.children.end )
    v13 = v11->super.children.data->vtbl;
  else
    v13 = 0;
  qmemcpy(&v13->super.DumpAttributes, v18.rot.data[1], 0x24u);
  if ( v11->super.children.end )
    return NiAVObject_UpdateNiAVObject((NiAVObject *)v11->super.children.data->vtbl, 0.0, 0);
  else
    return NiAVObject_UpdateNiAVObject(0, 0.0, 0);
}
