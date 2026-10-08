unsigned int __thiscall sub_535730(_DWORD *this, float a2, int a3)
{
  bhkRefObject *v4; // eax
  bhkRefObject *v5; // edi
  bhkRefObject *v6; // esi
  bhkRefObject *v7; // eax
  bhkRefObject *v8; // esi
  unsigned int result; // eax
  bool v10; // sf
  int v11; // ecx
  OB_CollisionPhantomCinfo_010201A0 info; // [esp+1Ch] [ebp-70h] BYREF
  int v13; // [esp+88h] [ebp-4h]

  v4 = (bhkRefObject *)FormHeapAlloc(0x14u); /*0x535760*/
  v5 = 0; /*0x53576c*/
  v13 = 0; /*0x535770*/
  if ( v4 ) /*0x535777*/
    v6 = bhkSphereShape_CtorRadius(v4, a2, COERCE_FLOAT(1)); /*0x535789*/
  else
    v6 = 0; /*0x53578d*/
  OB_bhkShapePhantomCinfo_InitIdentity_010201A0(&info); /*0x535793*/
  v13 = 1; /*0x5357a5*/
  *(this + 0x6A) = a3; /*0x5357b0*/
  info.collisionFilter = (a3 << 0x10) | 0x1C; /*0x5357b6*/
  if ( v6 ) /*0x5357ba*/
    info.shape = v6->hkObject; /*0x5357bf*/
  else
    info.shape = 0; /*0x5357c5*/
  info.transform[1] = 0.0; /*0x5357cd*/
  info.transform[2] = 0.0; /*0x5357d1*/
  info.transform[3] = 0.0; /*0x5357d5*/
  info.transform[4] = 0.0; /*0x5357d9*/
  info.transform[6] = 0.0; /*0x5357dd*/
  info.transform[7] = 0.0; /*0x5357e1*/
  info.transform[8] = 0.0; /*0x5357e5*/
  info.transform[9] = 0.0; /*0x5357e9*/
  info.transform[0xB] = 0.0; /*0x5357ed*/
  info.transform[0] = 1.0; /*0x5357f3*/
  info.transform[5] = 1.0; /*0x5357f7*/
  info.transform[0xA] = 1.0; /*0x5357fb*/
  info.transform[0xC] = 0.0; /*0x5357ff*/
  info.transform[0xD] = 0.0; /*0x535803*/
  info.transform[0xE] = 0.0; /*0x535807*/
  info.transform[0xF] = 0.0; /*0x53580b*/
  v7 = (bhkRefObject *)FormHeapAlloc(0x14u); /*0x53580f*/
  LOBYTE(v13) = 2; /*0x53581d*/
  if ( v7 ) /*0x535825*/
    v5 = OB_bhkSimpleShapePhantom_CtorFromCinfo_010201A0(v7, &info); /*0x535833*/
  v8 = (bhkRefObject *)*(this + 0x68); /*0x535835*/
  LOBYTE(v13) = 1; /*0x53583d*/
  if ( v8 != v5 ) /*0x535845*/
  {
    if ( v8 ) /*0x535849*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v8->members) ) /*0x53584f*/
        v8->__vftable->super.Destructor((NiRefObject *)v8, 1); /*0x535865*/
    }
    *(this + 0x68) = v5; /*0x535869*/
    if ( v5 ) /*0x53586f*/
      InterlockedIncrement((volatile LONG *)&v5->members); /*0x535875*/
  }
  result = info.propertyCapacityFlags; /*0x53587b*/
  v10 = (int)info.propertyCapacityFlags < 0; /*0x53587f*/
  *((_BYTE *)this + 0x1A4) = 1; /*0x535881*/
  v13 = 0xFFFFFFFF; /*0x535888*/
  if ( !v10 ) /*0x535893*/
  {
    v11 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x5358a5*/
    if ( !v11 ) /*0x5358ad*/
      v11 = unk_BA7D9C; /*0x5358af*/
    return sub_8A75D0(v11, (_DWORD *)info.propertyData, 8 * result, 0x14); /*0x5358c8*/
  }
  return result; /*0x5358cd*/
}
