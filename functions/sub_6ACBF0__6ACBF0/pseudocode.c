int __thiscall sub_6ACBF0(float *this, int a2, float a3, float a4, float a5)
{
  _DWORD *v6; // ecx
  float *v7; // [esp+Ch] [ebp-4h] BYREF

  v7 = this; /*0x6acbf0*/
  if ( !bSoundEnabled_Audio ) /*0x6acbf1*/
    return 0; /*0x6acbfa*/
  v6 = *((_DWORD **)this + 0xC0); /*0x6acc04*/
  v7 = 0; /*0x6acc0f*/
  NiTMap_GetAt(v6, a2, &v7); /*0x6acc17*/
  if ( v7 ) /*0x6acc21*/
    return sub_6B6BE0(v7, a3, a4, a5); /*0x6acc3d*/
  else
    return 0x80004005; /*0x6acc46*/
}
