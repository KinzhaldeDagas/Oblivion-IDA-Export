int __thiscall sub_8C6820(_DWORD *this, unsigned int a2)
{
  int v3; // eax
  int *v4; // eax
  int v5; // eax

  if ( a2 == 0xFFFFFFFF ) /*0x8c6827*/
    return *(this + 4); /*0x8c6829*/
  if ( this && (v3 = *(this + 2)) != 0 ) /*0x8c6838*/
    v4 = (int *)(*(_DWORD *)(v3 + 0x28) + 8 * (a2 >> 0x14)); /*0x8c6840*/
  else
    v4 = &unk_BA8138; /*0x8c6845*/
  v5 = *v4; /*0x8c684a*/
  if ( v5 ) /*0x8c684e*/
    return (*(unsigned __int16 *)(v5 + 0x2C) >> 6) & 0x3F; /*0x8c6857*/
  else
    return 0; /*0x8c685d*/
}
