double __thiscall sub_6DB660(_DWORD *this, int a2, int a3, float a4)
{
  int v4; // eax
  int v5; // edx
  int v6; // ecx
  unsigned __int8 v7; // bl
  float v9; // [esp+18h] [ebp-Ch] BYREF
  float v10; // [esp+1Ch] [ebp-8h]
  float v11; // [esp+20h] [ebp-4h]
  float v12; // [esp+2Ch] [ebp+8h]

  v4 = *(this + 6); /*0x6db660*/
  v5 = 0; /*0x6db667*/
  if ( v4 ) /*0x6db66c*/
  {
    v6 = *(_DWORD *)(v4 + 0x10); /*0x6db66e*/
    v7 = *(_BYTE *)(v4 + 0x14); /*0x6db671*/
    v5 = *(_DWORD *)(v4 + 0xC); /*0x6db674*/
  }
  else
  {
    v6 = 0; /*0x6db679*/
    v7 = 0; /*0x6db67b*/
  }
  (*(void (__cdecl **)(_DWORD, int, int, float *))(4 * v6 + 0xB3D250))(LODWORD(a4), v5 + a2 * v7, v5 + a3 * v7, &v9); /*0x6db6a6*/
  v12 = v10 * v10 + v9 * v9 + v11 * v11; /*0x6db6c7*/
  return (float)sqrt(v12); /*0x6db6dc*/
}
