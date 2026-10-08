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

  if ( !sub_700670(this, a2) ) /*0x7325a9*/
    return 0; /*0x7325a9*/
  if ( LOBYTE(this->members.super.m_usVertices) != *(_BYTE *)(a2 + 8) ) /*0x7325bf*/
    return 0; /*0x7325bf*/
  x = this->members.super.m_kBound.Center.x; /*0x7325c1*/
  if ( LODWORD(x) != *(_DWORD *)(a2 + 0xC) ) /*0x7325c7*/
    return 0; /*0x7325b6*/
  v5 = *(unsigned __int8 **)(a2 + 0x14); /*0x7325c9*/
  z = this->members.super.m_kBound.Center.z; /*0x7325cc*/
  v7 = 0xFFFFFFFC * LODWORD(x) != 0; /*0x7325d7*/
  if ( !v7 ) /*0x7325f6*/
    goto LABEL_15; /*0x7325f6*/
  v8 = (unsigned __int8)*(_BYTE *)LODWORD(z) - *v5; /*0x7325fe*/
  if ( v8 ) /*0x732600*/
    goto LABEL_13; /*0x732600*/
  v9 = v7 - 1; /*0x732602*/
  v10 = v5 + 1; /*0x732605*/
  v11 = (unsigned __int8 *)(LODWORD(z) + 1); /*0x732608*/
  if ( !v9 ) /*0x73260d*/
    goto LABEL_15; /*0x73260d*/
  v8 = *v11 - *v10; /*0x732615*/
  if ( v8 /*0x732645*/
    || (v12 = v9 - 1, v13 = v10 + 1, v14 = v11 + 1, v12)
    && ((v8 = *v14 - *v13) != 0 || (v15 = v13 + 1, v16 = v14 + 1, v12 != 1) && (v8 = *v16 - *v15) != 0) )
  {
LABEL_13:
    v17 = 1; /*0x732649*/
    if ( v8 <= 0 ) /*0x73264e*/
      return 0; /*0x73265a*/
  }
  else
  {
LABEL_15:
    v17 = 0; /*0x73265d*/
  }
  return v17 == 0; /*0x7325b2*/
}
