void __thiscall sub_8A2950(_DWORD *this, NiNode *a2)
{
  int v2; // esi
  int v3; // edi
  int v4; // ebx
  NiMaterialProperty *v5; // eax
  NiMaterialProperty *v6; // eax
  int v7; // ecx
  int v8; // ecx
  int v9; // edx

  if ( a2 )
  {
    if ( byte_BA7D74 )
    {
      v2 = *(_DWORD *)(0xC * *(this + 4) + 0xB2E988);
      v3 = *(_DWORD *)(0xC * *(this + 4) + 0xB2E98C);
      v4 = *(_DWORD *)(0xC * *(this + 4) + 0xB2E990);
      v5 = (NiMaterialProperty *)FormHeapAlloc(0x5Cu);
      if ( v5 )
        v6 = NiMaterialProperty::NiMaterialProperty(v5);
      else
        v6 = 0;
      *((_DWORD *)v6 + 7) = dword_B25AC4;
      *((_DWORD *)v6 + 8) = dword_B25AC8;
      v7 = dword_B25ACC;
      ++*((_DWORD *)v6 + 0x15);
      *((_DWORD *)v6 + 9) = v7;
      v8 = *((_DWORD *)v6 + 0x15);
      *((_DWORD *)v6 + 0xA) = dword_B25AC4;
      *((_DWORD *)v6 + 0xB) = dword_B25AC8;
      v9 = dword_B25ACC;
      *((_DWORD *)v6 + 0x10) = v2;
      *((_DWORD *)v6 + 0x15) = v8 + 2;
      *((_DWORD *)v6 + 0x11) = v3;
      *((_DWORD *)v6 + 0xC) = v9;
      *((_DWORD *)v6 + 0x12) = v4;
      sub_405680(a2, (BSShaderProperty *)v6);
    }
  }
}
