// BSShaderAccumulator visible-array submit entry (vtable +0x54). Iterates the visible geometry array; directly renders excluded geometry and queues eligible geometry for accumulator/pass-bucket processing.
//
// CULLING MainWorld goal 2026-09-27: visible-array slot +0x54 does not route each entry through single-geometry slot +0x58. It independently tests property/object flags, either directly invokes geometry Render at 0x71ACBF or appends to the accumulator list at +0x0C. A hook on +0x58 alone cannot observe the complete array submission route.
void __thiscall BSShaderAccumulator_SubmitVisibleGeometryArray(BSShaderAccumulator *this, void *visibleArray)
{
  unsigned int v3; // esi
  unsigned int v4; // ebp
  int v5; // edi
  int v6; // eax
  _DWORD *v7; // eax
  _DWORD *v8; // ecx
  unsigned int i; // [esp+Ch] [ebp-8h]
  NiDX9Renderer *v10; // [esp+10h] [ebp-4h]

  v3 = *((_DWORD *)visibleArray + 1); /*0x71ac21*/
  v4 = 0; /*0x71ac24*/
  v10 = renderer; /*0x71ac28*/
  for ( i = v3; v4 < v3; ++v4 ) /*0x71ac30*/
  {
    v5 = *(_DWORD *)(*(_DWORD *)visibleArray + 4 * v4); /*0x71ac3d*/
    v6 = *(_DWORD *)(*(_DWORD *)(v5 + 0xAC) + 8); /*0x71ac46*/
    if ( (*(_BYTE *)(v6 + 0x18) & 1) == 0 /*0x71ac6c*/
      || *((_BYTE *)this + 0x34) && (*(_WORD *)(v6 + 0x18) & 0x2000) != 0
      || (*(_BYTE *)(v5 + 0x18) & 0x40) != 0 )
    {
      (*(void (__thiscall **)(int, NiDX9Renderer *))(*(_DWORD *)v5 + 0x84))(v5, v10); /*0x71acbf*/
    }
    else
    {
      v7 = (_DWORD *)(*(int (__thiscall **)(char *))(*((_DWORD *)this + 3) + 4))((char *)this + 0xC); /*0x71ac79*/
      v7[2] = v5; /*0x71ac7b*/
      *v7 = 0; /*0x71ac7e*/
      v7[1] = *((_DWORD *)this + 5); /*0x71ac87*/
      v8 = *((_DWORD **)this + 5); /*0x71ac8a*/
      if ( v8 ) /*0x71ac8f*/
      {
        *v8 = v7; /*0x71ac91*/
        ++*((_DWORD *)this + 6); /*0x71ac93*/
      }
      else
      {
        ++*((_DWORD *)this + 6); /*0x71aca0*/
        *((_DWORD *)this + 4) = v7; /*0x71aca4*/
      }
      *((_DWORD *)this + 5) = v7; /*0x71ac97*/
      v3 = i; /*0x71ac9a*/
    }
  }
}
