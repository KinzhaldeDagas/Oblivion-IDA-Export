void __thiscall sub_8A2950(_DWORD *this, NiNode *a2)
{
  int v2; // esi
  int v3; // edi
  int v4; // ebx
  NiMaterialProperty *v5; // eax
  NiMaterialProperty *v6; // eax
  float z; // ecx
  int v8; // ecx
  float v9; // edx

  if ( a2 ) /*0x8a297a*/
  {
    if ( unk_BA7D74 ) /*0x8a2980*/
    {
      v2 = *(_DWORD *)(0xC * *(this + 4) + 0xB2E988); /*0x8a2993*/
      v3 = *(_DWORD *)(0xC * *(this + 4) + 0xB2E98C); /*0x8a299a*/
      v4 = *(_DWORD *)(0xC * *(this + 4) + 0xB2E990); /*0x8a29a1*/
      v5 = (NiMaterialProperty *)FormHeapAlloc(0x5Cu); /*0x8a29b1*/
      if ( v5 ) /*0x8a29c7*/
        v6 = NiMaterialProperty::NiMaterialProperty(v5); /*0x8a29cb*/
      else
        v6 = 0; /*0x8a29d2*/
      *((_DWORD *)v6 + 7) = LODWORD(stru_B25AC4.x); /*0x8a29da*/
      *((_DWORD *)v6 + 8) = LODWORD(stru_B25AC4.y); /*0x8a29e3*/
      z = stru_B25AC4.z; /*0x8a29e6*/
      ++*((_DWORD *)v6 + 0x15); /*0x8a29ec*/
      *((float *)v6 + 9) = z; /*0x8a29f0*/
      v8 = *((_DWORD *)v6 + 0x15); /*0x8a29f9*/
      *((_DWORD *)v6 + 0xA) = LODWORD(stru_B25AC4.x); /*0x8a29fc*/
      *((_DWORD *)v6 + 0xB) = LODWORD(stru_B25AC4.y); /*0x8a2a05*/
      v9 = stru_B25AC4.z; /*0x8a2a08*/
      *((_DWORD *)v6 + 0x10) = v2; /*0x8a2a11*/
      *((_DWORD *)v6 + 0x15) = v8 + 2; /*0x8a2a14*/
      *((_DWORD *)v6 + 0x11) = v3; /*0x8a2a17*/
      *((float *)v6 + 0xC) = v9; /*0x8a2a25*/
      *((_DWORD *)v6 + 0x12) = v4; /*0x8a2a28*/
      sub_405680(a2, (BSShaderProperty *)v6); /*0x8a2a2b*/
    }
  }
}
