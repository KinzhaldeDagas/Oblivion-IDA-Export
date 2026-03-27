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

  if ( (TESObjectCELL *)dword_B33A64 != a2 )
  {
    if ( TESObjectCELL_IsInterior(a2) )
    {
      v4 = (unsigned int)uGridsToLoad >> 1;
      v5 = v4;
      v6 = v4;
    }
    else
    {
      if ( a3 )
      {
        v7 = (int)*a3;
        v5 = ((unsigned int)uGridsToLoad >> 1) - (v7 >> 0xC) + TESObjectCELL_GetXCoordinate(a2);
        v8 = (int)a3[1];
        v4 = (unsigned int)uGridsToLoad >> 1;
        YCoordinate = TESObjectCELL_GetYCoordinate(a2);
        v10 = v4 - (v8 >> 0xC);
      }
      else
      {
        v5 = ((unsigned int)uGridsToLoad >> 1) - *(this + 8) + TESObjectCELL_GetXCoordinate(a2);
        v4 = (unsigned int)uGridsToLoad >> 1;
        YCoordinate = TESObjectCELL_GetYCoordinate(a2);
        v10 = v4 - *(this + 9);
      }
      v6 = v10 + YCoordinate;
    }
    v11 = v5 - v4;
    v12 = v6 - v4;
    if ( v11 <= v12 )
      v13 = abs32(v12);
    else
      v13 = abs32(v11);
    switch ( (unsigned __int8)(0xA * (v13 + 1)) > 0x14u ? 0x14 : 0 )
    {
      case 0xFFFFFFF6:
        dword_B33A60 = 0;
        result = dword_B33A60;
        dword_B33A64 = (int)a2;
        return result;
      case 0:
        dword_B33A60 = 1;
        result = dword_B33A60;
        dword_B33A64 = (int)a2;
        return result;
      case 0xA:
        dword_B33A60 = 2;
        result = dword_B33A60;
        dword_B33A64 = (int)a2;
        return result;
      case 0x14:
        dword_B33A60 = 3;
        result = dword_B33A60;
        dword_B33A64 = (int)a2;
        return result;
      case 0x1E:
        dword_B33A60 = 4;
        goto LABEL_17;
      default:
LABEL_17:
        dword_B33A64 = (int)a2;
        return dword_B33A60;
    }
  }
  return dword_B33A60;
}
