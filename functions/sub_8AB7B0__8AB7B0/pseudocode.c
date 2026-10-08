void __thiscall sub_8AB7B0(NiRenderer *this, signed int a2)
{
  signed int v2; // edi
  void (__cdecl *v4)(int, unsigned int *, int, float *, int); // eax
  int v5; // ebp
  int v6; // eax
  unsigned int v7; // edi
  int v8; // [esp-14h] [ebp-38h]
  unsigned int v9; // [esp+10h] [ebp-14h] BYREF
  float v10; // [esp+14h] [ebp-10h] BYREF
  NiPoint3 v11; // [esp+18h] [ebp-Ch] BYREF

  v2 = a2; /*0x8ab7b7*/
  NiTimeController_LoadBinary(this, a2); /*0x8ab7be*/
  v8 = *(_DWORD *)(a2 + 0x21C); /*0x8ab7d7*/
  v4 = *(void (__cdecl **)(int, unsigned int *, int, float *, int))(v8 + 4); /*0x8ab7d8*/
  LODWORD(v10) = 4; /*0x8ab7db*/
  v4(v8, &v9, 4, &v10, 1); /*0x8ab7e3*/
  sub_8AA480(&this->members.pad014[0xB], v9); /*0x8ab7f2*/
  v5 = 0; /*0x8ab7f7*/
  if ( v9 ) /*0x8ab7fd*/
  {
    v10 = 0.0 / fCostant_100; /*0x8ab80b*/
    while ( 1 ) /*0x8ab82a*/
    {
      v6 = *(_DWORD *)(v2 + 0x21C); /*0x8ab82a*/
      v11.x = kTerrainLODQuadRayDirectionZ; /*0x8ab830*/
      v11.z = v10; /*0x8ab83c*/
      v11.y = v10; /*0x8ab84b*/
      (*(void (__cdecl **)(int, NiPoint3 *, int, _DWORD, _DWORD))(v6 + 4))(v6, &v11, 0xC, 0, 0); /*0x8ab853*/
      v7 = this->members.pad014[0xE]; /*0x8ab855*/
      if ( v7 >= this->members.pad014[0xD] ) /*0x8ab85e*/
        sub_8AA480(&this->members.pad014[0xB], v7 + this->members.pad014[0x10]); /*0x8ab868*/
      sub_8AA710(&this->members.pad014[0xB], v7, &v11); /*0x8ab875*/
      this->members.pad014[0xA] = 0; /*0x8ab87c*/
      sub_8AABE0((int)this); /*0x8ab883*/
      if ( ++v5 >= v9 ) /*0x8ab88f*/
        break; /*0x8ab88f*/
      v2 = a2; /*0x8ab820*/
    }
  }
}
