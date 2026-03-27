_DWORD *__thiscall TESDataHandler_constr(_DWORD *this)
{
  int v2; // eax
  _DWORD *v3; // eax
  _DWORD *v4; // eax
  _DWORD *v5; // eax
  _DWORD *v6; // eax
  int v7; // edi
  _DWORD *v8; // ebp
  int v9; // eax
  int v10; // eax
  _DWORD *v11; // eax
  _DWORD *v12; // eax
  int v14; // [esp+14h] [ebp-14h]

  *(this + 1) = 0;
  *(this + 2) = 0;
  *(this + 3) = 0;
  *(this + 4) = 0;
  *(this + 5) = 0;
  *(this + 6) = 0;
  *(this + 7) = 0;
  *(this + 8) = 0;
  *(this + 9) = 0;
  *(this + 0xA) = 0;
  *(this + 0xB) = 0;
  *(this + 0xC) = 0;
  *(this + 0xD) = 0;
  *(this + 0xE) = 0;
  *(this + 0xF) = 0;
  *(this + 0x10) = 0;
  *(this + 0x11) = 0;
  *(this + 0x12) = 0;
  *(this + 0x13) = 0;
  *(this + 0x14) = 0;
  *(this + 0x15) = 0;
  *(this + 0x16) = 0;
  *(this + 0x17) = 0;
  *(this + 0x18) = 0;
  *(this + 0x19) = 0;
  *(this + 0x1A) = 0;
  *(this + 0x1B) = 0;
  *(this + 0x1C) = 0;
  *(this + 0x1D) = 0;
  *(this + 0x1E) = 0;
  *(this + 0x1F) = 0;
  *(this + 0x20) = 0;
  *(this + 0x21) = 0;
  *(this + 0x22) = 0;
  *(this + 0x23) = 0;
  *(this + 0x24) = 0;
  *(this + 0x25) = 0;
  *(this + 0x26) = 0;
  *(this + 0x27) = 0;
  *(this + 0x28) = 0;
  *(this + 0x29) = 0;
  *(this + 0x2A) = 0;
  *(this + 0x2B) = 0;
  *(this + 0x2C) = 0;
  *(this + 0x2D) = 0;
  *(this + 0x2E) = 0;
  *(this + 0x30) = &NiTLargeArray<TESObjectCELL *>::`vftable';
  *(this + 0x32) = 0;
  *(this + 0x35) = 1;
  *(this + 0x33) = 0;
  *(this + 0x34) = 0;
  *(this + 0x31) = 0;
  ArrayConstructor(this + 0x36, 0x60u, 0x15, (int)TESSkill::TESSkill, TESSkill::~TESSkill);
  v2 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
  *(this + 0x22E) = 0;
  *(this + 0x22F) = 0;
  *(this + 0x232) = 0;
  *(this + 0x233) = 0;
  *(this + 0x230) = 0x800;
  *(this + 0x234) = 0;
  *(this + 0x231) = 0;
  *((_BYTE *)this + 0xCD0) = 0;
  *((_BYTE *)this + 0xCD1) = 0;
  *(_BYTE *)(v2 + 0x184) = 0;
  *((_BYTE *)this + 0xCD2) = 0;
  *((_BYTE *)this + 0xCD3) = 0;
  *((_BYTE *)this + 0xCD4) = 0;
  *((_BYTE *)this + 0xCD5) = 1;
  _memset(this + 0x235, 0, 0x3FC);
  v3 = (_DWORD *)FormHeapAlloc(0x10u);
  if ( v3 )
    v4 = TESObjectListHead_constr(v3, 1);
  else
    v4 = 0;
  *this = v4;
  v5 = (_DWORD *)FormHeapAlloc(0x10u);
  if ( v5 )
    v6 = TESRegionList_constr(v5, 1);
  else
    v6 = 0;
  *(this + 0x2F) = v6;
  *(this + 0x337) = 0;
  *(this + 0x35) = 0x64;
  v7 = 0x3D;
  v8 = this + 0x41;
  v14 = 0x15;
  do
  {
    if ( v7 < 0x5A )
      TESForm_SetFormID((TESForm *)(v8 + 0xFFFFFFF5), v7, 1);
    *v8 = v7 - 0x31;
    ++v7;
    v8 += 0x18;
    --v14;
  }
  while ( v14 );
  v9 = FormHeapAlloc(8u);
  if ( v9 )
    v10 = TESRegionDataManager_constr(v9);
  else
    v10 = 0;
  *(this + 0x336) = v10;
  v11 = (_DWORD *)FormHeapAlloc(0x14u);
  if ( v11 )
    v12 = sub_521950(v11);
  else
    v12 = 0;
  g_idleAnimationMap = (int)v12;
  *((_BYTE *)this + 0xCD6) = 0;
  return this;
}
