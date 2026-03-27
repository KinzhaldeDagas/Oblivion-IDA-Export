bool __thiscall sub_7325A0(NiTriBasedGeomData *this, int a2)
{
  float x; // eax
  unsigned __int8 *v5; // ecx
  float z; // edx
  BOOL v7; // eax
  int v8; // esi
  int v9; // eax
  unsigned __int8 *v10; // ecx
  unsigned __int8 *v11; // edx
  int v12; // eax
  unsigned __int8 *v13; // ecx
  unsigned __int8 *v14; // edx
  unsigned __int8 *v15; // ecx
  unsigned __int8 *v16; // edx
  int v17; // eax

  if ( !sub_700670(this, a2) )
    return 0;
  if ( LOBYTE(this->members.super.m_usVertices) != *(_BYTE *)(a2 + 8) )
    return 0;
  x = this->members.super.m_kBound.Center.x;
  if ( LODWORD(x) != *(_DWORD *)(a2 + 0xC) )
    return 0;
  v5 = *(unsigned __int8 **)(a2 + 0x14);
  z = this->members.super.m_kBound.Center.z;
  v7 = 0xFFFFFFFC * LODWORD(x) != 0;
  if ( !v7 )
    goto LABEL_15;
  v8 = (unsigned __int8)*(_BYTE *)LODWORD(z) - *v5;
  if ( v8 )
    goto LABEL_13;
  v9 = v7 - 1;
  v10 = v5 + 1;
  v11 = (unsigned __int8 *)(LODWORD(z) + 1);
  if ( !v9 )
    goto LABEL_15;
  v8 = *v11 - *v10;
  if ( v8
    || (v12 = v9 - 1, v13 = v10 + 1, v14 = v11 + 1, v12)
    && ((v8 = *v14 - *v13) != 0 || (v15 = v13 + 1, v16 = v14 + 1, v12 != 1) && (v8 = *v16 - *v15) != 0) )
  {
LABEL_13:
    v17 = 1;
    if ( v8 <= 0 )
      return 0;
  }
  else
  {
LABEL_15:
    v17 = 0;
  }
  return v17 == 0;
}
