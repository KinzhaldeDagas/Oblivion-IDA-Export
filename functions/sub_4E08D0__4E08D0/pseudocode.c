__int16 __thiscall sub_4E08D0(_DWORD *this)
{
  int v2; // esi
  NiObject *v3; // eax
  int v4; // ecx
  int v5; // esi
  int v6; // eax
  NiRTTI *v7; // eax
  char v8; // al

  v2 = *(this + 0xF); /*0x4e08d1*/
  v3 = 0; /*0x4e08d4*/
  if ( v2 ) /*0x4e08d8*/
  {
    if ( *(_WORD *)(v2 + 0xB6) ) /*0x4e08da*/
    {
      v4 = **(_DWORD **)(v2 + 0xB0); /*0x4e08e9*/
      if ( v4 ) /*0x4e08ed*/
      {
        if ( *(_DWORD *)(v4 + 0xC) ) /*0x4e08ef*/
          v3 = NiRTTI_Cast((BSStringT *)&stru_B3CAC0, *(NiObject **)(v4 + 0xC)); /*0x4e08fd*/
      }
    }
  }
  sub_4DA7F0((int)v3, kTerrainLODQuadRayDirectionZ); /*0x4e0910*/
  if ( v2 && (v5 = *(_DWORD *)(v2 + 0xC)) != 0 )
  {
    v7 = (NiRTTI *)(*(int (__thiscall **)(int))(*(_DWORD *)v5 + 4))(v5); /*0x4e092e*/
    if ( v7 ) /*0x4e0932*/
    {
      while ( v7 != &stru_B3CAC0 ) /*0x4e0939*/
      {
        v7 = v7->parent; /*0x4e093b*/
        if ( !v7 ) /*0x4e0940*/
          goto LABEL_12; /*0x4e0940*/
      }
      v8 = 1; /*0x4e095f*/
    }
    else
    {
LABEL_12:
      v8 = 0; /*0x4e0942*/
    }
    v6 = v8 != 0 ? v5 : 0;
  }
  else
  {
    v6 = 0; /*0x4e0923*/
  }
  return sub_4DA7F0(v6, kTerrainLODQuadRayDirectionZ); /*0x4e095d*/
}
