void __thiscall sub_585820(_BYTE *this)
{
  float *v6; // eax
  int v7; // ecx
  int v8; // eax
  float v9; // [esp+0h] [ebp-1Ch]
  float v10; // [esp+4h] [ebp-18h]
  float v11; // [esp+10h] [ebp-Ch]
  int v12; // [esp+14h] [ebp-8h]

  if ( (char)*(this + 0x31) > 0 ) /*0x585827*/
  {
    v12 = dword_B13994; /*0x585834*/
    v11 = kTerrainLODQuadRayDirectionZ; /*0x585836*/
    v10 = (float)unk_B3A704; /*0x585846*/
    v9 = (float)unk_B3A700; /*0x585850*/
    v6 = sub_571F90(1); /*0x58585a*/
    sub_5723E0((char *)v6, "|", v9, v10, 1, 0xFFFFFFFF, v11, v12); /*0x585864*/
    v7 = *((_DWORD *)this + 4); /*0x585869*/
    v8 = v7 + *((_DWORD *)this + 0xB); /*0x58586f*/
    if ( v8 > v7 ) /*0x585873*/
      v8 = *((_DWORD *)this + 4); /*0x585875*/
    if ( v8 - dword_B1398C <= 0 ) /*0x585885*/
      v8 = dword_B1398C; /*0x585887*/
    if ( v8 > v7 ) /*0x58588b*/
      v8 = *((_DWORD *)this + 4); /*0x58588d*/
    *((_DWORD *)this + 0xB) = v8; /*0x585891*/
    sub_585620(this); /*0x585894*/
    sub_5794C0(0); /*0x58589b*/
  }
}
