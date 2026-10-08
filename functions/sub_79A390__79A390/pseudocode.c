// SpeedTree decode: stock CFrondEngine::ComputeBlade. For each blade, emits one strip over the shared highest-LOD vertices for the requested LOD. Fade-hint storage from later 4.1 is not visible in this compact stock writer path.
void __thiscall OB_CFrondEngine_ComputeBlade_010201A0(
        _DWORD *this,
        unsigned __int16 lodLevel,
        __int16 a3,
        _DWORD *stripLength)
{
  unsigned int i; // ebp
  unsigned __int16 *v6; // ebx
  unsigned int j; // esi
  unsigned __int16 stripLengtha; // [esp+10h] [ebp+Ch]

  if ( *this )
  {
    for ( i = 0; i < *(this + 0xB); ++i )
    {
      stripLengtha = 2 * OB_stVector_SFrondVertex_Size_010201A0(stripLength); /*0x79a3bc*/
      v6 = (unsigned __int16 *)FormHeapAlloc((unsigned __int64)stripLengtha >> 0x1F != 0 ? 0xFFFFFFFF : 2 * stripLengtha);
      for ( j = 0; j < 2 * OB_stVector_SFrondVertex_Size_010201A0(stripLength); ++j ) /*0x79a3e7*/
        v6[j] = j + a3 + 2 * i * OB_stVector_SFrondVertex_Size_010201A0(stripLength); /*0x79a403*/
      OB_CIndexedGeometry_AddStrip_010201A0((OB_CIndexedGeometry_010201A0 *)*this, lodLevel, v6, stripLengtha); /*0x79a428*/
      ++*(_WORD *)(*this + 0x26); /*0x79a42f*/
    }
  }
}
