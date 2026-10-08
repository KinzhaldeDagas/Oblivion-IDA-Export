int __thiscall sub_49A100(CellInfo *this, NiCamera *a2, int a3, int a4)
{
  int v4; // ecx
  double v5; // st7
  int result; // eax
  float v7; // [esp+0h] [ebp-8h]

  if ( !byte_B07050 || !OB_RendererGlobalState_010201A0[0xA5] ) /*0x49a10a*/
  {
    v4 = *((_DWORD *)this + 7); /*0x49a113*/
    if ( v4 ) /*0x49a118*/
    {
      v5 = (double)*(int *)&MEMORY[0xB33E90][0x10]; /*0x49a120*/
      if ( *(int *)&MEMORY[0xB33E90][0x10] < 0 ) /*0x49a12a*/
        v5 = v5 + flt_A2FC78; /*0x49a12c*/
      v7 = v5; /*0x49a136*/
      return (*(int (__stdcall **)(_DWORD))(*(_DWORD *)v4 + 0x54))(LODWORD(v7)); /*0x49a139*/
    }
  }
  return result; /*0x49a13c*/
}
