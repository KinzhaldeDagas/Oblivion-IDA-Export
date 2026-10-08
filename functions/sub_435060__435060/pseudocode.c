// Verified queued distant-model transform: writes position at NiAVObject+0x54, abs(scale) at +0x60, and builds rotation from rotationAnglesXYZ using X, then Y, then Z axis matrices. NiMatrix33_Multiply is row-major left*right; composition is BaseRotation * RxTransposed(angleX) * Ry(angleY) * Rz(angleZ). The resulting 3x3 matrix is stored at NiAVObject+0x30.
LONG __thiscall QueuedDistantLOD_ApplyTransform(
        QueuedDistantLOD *this,
        NiAVObject *loadedModelRoot,
        DistantLODQueuedInstanceData *instanceData)
{
  NiNode *v4; // eax
  NiObject *v5; // esi
  NiObject *v6; // edi
  NiPoint3 *v8; // eax
  double x; // st7
  NiMatrix33 *v10; // eax
  double y; // st7
  NiMatrix33 *v12; // eax
  double z; // st7
  float angleX; // [esp+4h] [ebp-80h]
  float angleXa; // [esp+4h] [ebp-80h]
  float angleXb; // [esp+4h] [ebp-80h]
  NiMatrix33 baseRotation; // [esp+18h] [ebp-6Ch] BYREF
  NiMatrix33 right; // [esp+3Ch] [ebp-48h] BYREF
  NiMatrix33 out; // [esp+60h] [ebp-24h] BYREF
  float instanceDataa; // [esp+8Ch] [ebp+8h]

  v4 = sub_434B40((volatile LONG **)loadedModelRoot); /*0x43506d*/
  v5 = NiObject_CloneWithPointerMap((NiObject *)v4); /*0x435079*/
  sub_483590((float *)v5); /*0x43507c*/
  v6 = *((NiObject **)this + 0xF); /*0x435081*/
  if ( v6 != v5 ) /*0x435089*/
  {
    if ( v6 ) /*0x43508d*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v6->members) ) /*0x435093*/
        v6->__vftable->super.Destructor((NiRefObject *)v6, 1); /*0x4350a9*/
    }
    *((_DWORD *)this + 0xF) = v5; /*0x4350ad*/
    if ( v5 ) /*0x4350b0*/
      InterlockedIncrement((volatile LONG *)&v5->members); /*0x4350b6*/
  }
  v8 = *((NiPoint3 **)this + 0xF); /*0x4350c6*/
  instanceDataa = fabs(instanceData->scale);    // Verified: takes absolute value of normalized per-instance scale and stores it at NiAVObject transform scale offset +0x60. /*0x4350d0*/
  v8[8].x = instanceDataa; /*0x4350e2*/
  v8[7] = instanceData->position;               // Verified: copies the three position floats from DistantLODQueuedInstanceData.position to the cloned NiAVObject transform translation at +0x54..+0x5C. /*0x4350e7*/
  x = instanceData->rotationAnglesXYZ.x;        // Verified takes rotationAnglesXYZ.x directly into the X-axis matrix helper; source record values are radians because the helper uses sin/cos without conversion. /*0x4350f6*/
  qmemcpy(&baseRotation, &stru_B26AF0[0xA].unk2C, sizeof(baseRotation)); /*0x4350fe*/
  angleX = x; /*0x435105*/
  NiMatrix33_InitRotationXTransposed(&right, angleX);// Verified first rotationAnglesXYZ component initializes the X-axis rotation matrix; coefficient placement is confined to the Y/Z submatrix. /*0x435108*/
  v10 = NiMAtrix33_Multiply(&baseRotation, &out, &right);// Verified NiMatrix33_Multiply computes left * right; this first multiply appends the X-axis rotation to the base matrix. /*0x43511b*/
  y = instanceData->rotationAnglesXYZ.y;        // Verified takes rotationAnglesXYZ.y directly into the Y-axis matrix helper; values are radians. /*0x435120*/
  qmemcpy(&baseRotation, v10, sizeof(baseRotation)); /*0x43512e*/
  angleXa = y; /*0x435135*/
  NiMatrix33_InitRotationY(&right, angleXa);    // Verified second rotationAnglesXYZ component initializes the Y-axis rotation matrix; coefficient placement is confined to the X/Z submatrix. /*0x435138*/
  v12 = NiMAtrix33_Multiply(&baseRotation, &out, &right);// Verified second matrix multiply appends the Y-axis rotation after the base and X-axis matrices. /*0x43514b*/
  z = instanceData->rotationAnglesXYZ.z;        // Verified takes rotationAnglesXYZ.z directly into the Z-axis matrix helper; values are radians. /*0x435150*/
  qmemcpy(&baseRotation, v12, sizeof(baseRotation)); /*0x43515e*/
  angleXb = z; /*0x435165*/
  NiMatrix33_InitRotationZ(&right, angleXb);    // Verified third rotationAnglesXYZ component initializes the Z-axis rotation matrix; coefficient placement is confined to the X/Y submatrix. /*0x435168*/
  qmemcpy(&baseRotation, NiMAtrix33_Multiply(&baseRotation, &out, &right), sizeof(baseRotation));// Verified final matrix multiply appends the Z-axis rotation after X and Y, producing BaseRotation * RxTransposed * Ry * Rz. /*0x43518b*/
  qmemcpy((void *)(*((_DWORD *)this + 0xF) + 0x30), &baseRotation, 0x24u);// Verified stores the composed 3x3 rotation matrix at the cloned NiAVObject transform's rotation field, offset +0x30. /*0x4351a0*/
  BSShaderManager_AssignShadersRecursive(*((NiAVObject **)this + 0xF), 1u, 1, 0); /*0x4351a8*/
  sub_7D93E0(*((NiNode **)this + 0xF), 0x2000, 1); /*0x4351b8*/
  return InterlockedIncrement((volatile LONG *)&loadedModelRoot->members); /*0x4351d1*/
}
