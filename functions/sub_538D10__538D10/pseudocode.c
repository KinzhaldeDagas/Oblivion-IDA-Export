unsigned int __thiscall sub_538D10(bhkRefObject **this, float a2, int a3)
{
  bhkRefObject *v4; // eax
  bhkRefObject *v5; // edi
  bhkRefObject *v6; // esi
  bhkRefObject *v7; // eax
  int v8; // esi
  bool v9; // zf
  unsigned int result; // eax
  bool v11; // sf
  int v12; // ecx
  OB_CollisionPhantomCinfo_010201A0 info; // [esp+1Ch] [ebp-70h] BYREF
  int v14; // [esp+88h] [ebp-4h]

  v4 = (bhkRefObject *)FormHeapAlloc(0x14u); /*0x538d40*/
  v5 = 0; /*0x538d4c*/
  v14 = 0; /*0x538d50*/
  if ( v4 ) /*0x538d57*/
    v6 = bhkSphereShape_CtorRadius(v4, a2, COERCE_FLOAT(1)); /*0x538d69*/
  else
    v6 = 0; /*0x538d6d*/
  OB_bhkShapePhantomCinfo_InitIdentity_010201A0(&info); /*0x538d73*/
  v14 = 1; /*0x538d85*/
  *(this + 2) = (bhkRefObject *)a3; /*0x538d90*/
  info.collisionFilter = (a3 << 0x10) | 0x1D; /*0x538d93*/
  if ( v6 ) /*0x538d97*/
    info.shape = v6->hkObject; /*0x538d9c*/
  else
    info.shape = 0; /*0x538da2*/
  info.transform[1] = 0.0; /*0x538daa*/
  info.transform[2] = 0.0; /*0x538dae*/
  info.transform[3] = 0.0; /*0x538db2*/
  info.transform[4] = 0.0; /*0x538db6*/
  info.transform[6] = 0.0; /*0x538dba*/
  info.transform[7] = 0.0; /*0x538dbe*/
  info.transform[8] = 0.0; /*0x538dc2*/
  info.transform[9] = 0.0; /*0x538dc6*/
  info.transform[0xB] = 0.0; /*0x538dca*/
  info.transform[0] = 1.0; /*0x538dd0*/
  info.transform[5] = 1.0; /*0x538dd4*/
  info.transform[0xA] = 1.0; /*0x538dd8*/
  info.transform[0xC] = 0.0; /*0x538ddc*/
  info.transform[0xD] = 0.0; /*0x538de0*/
  info.transform[0xE] = 0.0; /*0x538de4*/
  info.transform[0xF] = 0.0; /*0x538de8*/
  v7 = (bhkRefObject *)FormHeapAlloc(0x14u); /*0x538dec*/
  LOBYTE(v14) = 2; /*0x538dfa*/
  if ( v7 ) /*0x538e02*/
    v5 = OB_bhkSimpleShapePhantom_CtorFromCinfo_010201A0(v7, &info); /*0x538e10*/
  v8 = (int)*this; /*0x538e12*/
  v9 = *this == v5; /*0x538e14*/
  LOBYTE(v14) = 1; /*0x538e16*/
  if ( !v9 ) /*0x538e1e*/
  {
    if ( v8 ) /*0x538e22*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v8 + 4)) ) /*0x538e28*/
        (**(void (__thiscall ***)(int, int))v8)(v8, 1); /*0x538e3e*/
    }
    *this = v5; /*0x538e42*/
    if ( v5 ) /*0x538e44*/
      InterlockedIncrement((volatile LONG *)&v5->members); /*0x538e4a*/
  }
  result = info.propertyCapacityFlags; /*0x538e50*/
  v11 = (int)info.propertyCapacityFlags < 0; /*0x538e54*/
  *((_BYTE *)this + 4) = 1; /*0x538e56*/
  v14 = 0xFFFFFFFF; /*0x538e5a*/
  if ( !v11 ) /*0x538e65*/
  {
    v12 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x538e77*/
    if ( !v12 ) /*0x538e7f*/
      v12 = unk_BA7D9C; /*0x538e81*/
    return sub_8A75D0(v12, (_DWORD *)info.propertyData, 8 * result, 0x14); /*0x538e9a*/
  }
  return result; /*0x538e9f*/
}
