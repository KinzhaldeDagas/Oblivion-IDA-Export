signed int __thiscall sub_440C80(_DWORD *this, TESObjectCELL *a2, float *a3)
{
  unsigned int v4; // esi
  unsigned int v5; // edi
  unsigned int v6; // eax
  int v7; // esi
  int v8; // ebx
  int YCoordinate; // eax
  unsigned int v10; // ecx
  int v11; // edi
  int v12; // eax
  char v13; // al
  signed int result; // eax

  if ( (TESObjectCELL *)unk_B33A64 != a2 )
  {
    if ( TESObjectCELL_IsInterior(a2) ) /*0x440c9c*/
    {
      v4 = (unsigned int)uGridsToLoad >> 1; /*0x440cab*/
      v5 = v4; /*0x440cad*/
      v6 = v4; /*0x440caf*/
    }
    else
    {
      if ( a3 ) /*0x440cbd*/
      {
        v7 = (int)*a3; /*0x440ccd*/
        v5 = ((unsigned int)uGridsToLoad >> 1) - (v7 >> 0xC) + TESObjectCELL_GetXCoordinate(a2); /*0x440ced*/
        v8 = (int)a3[1]; /*0x440cfd*/
        v4 = (unsigned int)uGridsToLoad >> 1; /*0x440d03*/
        YCoordinate = TESObjectCELL_GetYCoordinate(a2); /*0x440d05*/
        v10 = v4 - (v8 >> 0xC); /*0x440d0f*/
      }
      else
      {
        v5 = ((unsigned int)uGridsToLoad >> 1) - *(this + 8) + TESObjectCELL_GetXCoordinate(a2); /*0x440d2c*/
        v4 = (unsigned int)uGridsToLoad >> 1; /*0x440d2e*/
        YCoordinate = TESObjectCELL_GetYCoordinate(a2); /*0x440d30*/
        v10 = v4 - *(this + 9); /*0x440d3b*/
      }
      v6 = v10 + YCoordinate; /*0x440d3e*/
    }
    v11 = v5 - v4; /*0x440d41*/
    v12 = v6 - v4; /*0x440d43*/
    if ( v11 <= v12 ) /*0x440d47*/
      v13 = abs32(v12); /*0x440d5b*/
    else
      v13 = abs32(v11); /*0x440d4e*/
    switch ( (unsigned __int8)(0xA * (v13 + 1)) > 0x14u ? 0x14 : 0 )
    {
      case 0xFFFFFFF6:
        unk_B33A60 = 0; /*0x440d8c*/
        result = unk_B33A60; /*0x440d96*/
        unk_B33A64 = (int)a2; /*0x440d9b*/
        return result; /*0x440da3*/
      case 0:
        unk_B33A60 = 1; /*0x440da7*/
        result = unk_B33A60; /*0x440db1*/
        unk_B33A64 = (int)a2; /*0x440db6*/
        return result; /*0x440dbe*/
      case 0xA:
        unk_B33A60 = 2; /*0x440dc2*/
        result = unk_B33A60; /*0x440dcc*/
        unk_B33A64 = (int)a2; /*0x440dd1*/
        return result; /*0x440dd9*/
      case 0x14:
        unk_B33A60 = 3; /*0x440ddd*/
        result = unk_B33A60; /*0x440de7*/
        unk_B33A64 = (int)a2; /*0x440dec*/
        return result; /*0x440df4*/
      case 0x1E:
        unk_B33A60 = 4; /*0x440df7*/
        goto LABEL_17; /*0x440df7*/
      default:
LABEL_17:
        unk_B33A64 = (int)a2; /*0x440e01*/
        return unk_B33A60; /*0x440e01*/
    }
  }
  return unk_B33A60; /*0x440d8b*/
}
