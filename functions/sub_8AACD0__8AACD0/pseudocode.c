int __thiscall sub_8AACD0(_DWORD *this, unsigned int a2)
{
  unsigned int v2; // ebp
  int (__cdecl *v4)(int, unsigned int *, int, int *, int); // eax
  int result; // eax
  unsigned int v6; // esi
  int v7; // ebx
  int (__cdecl *v8)(int, int, int, int *, int); // eax
  int v9; // [esp-1Ch] [ebp-28h]
  int v10; // [esp-18h] [ebp-24h]
  int v11; // [esp-18h] [ebp-24h]
  int v12; // [esp+8h] [ebp-4h] BYREF

  v2 = a2; /*0x8aacd2*/
  NiTimeController_SaveBinary(this, a2); /*0x8aacdb*/
  a2 = *(this + 0x14); /*0x8aacea*/
  v10 = *(_DWORD *)(v2 + 0x220); /*0x8aacfb*/
  v4 = *(int (__cdecl **)(int, unsigned int *, int, int *, int))(v10 + 8); /*0x8aacfc*/
  v12 = 4; /*0x8aacff*/
  result = v4(v10, &a2, 4, &v12, 1); /*0x8aad07*/
  v6 = 0; /*0x8aad09*/
  if ( a2 ) /*0x8aad12*/
  {
    v7 = 0; /*0x8aad15*/
    do /*0x8aad50*/
    {
      v11 = v7 + *(this + 0x11); /*0x8aad34*/
      v9 = *(_DWORD *)(v2 + 0x220); /*0x8aad35*/
      v8 = *(int (__cdecl **)(int, int, int, int *, int))(v9 + 8); /*0x8aad36*/
      v12 = 0xC; /*0x8aad39*/
      result = v8(v9, v11, 0xC, &v12, 1); /*0x8aad41*/
      ++v6; /*0x8aad43*/
      v7 += 0xC; /*0x8aad49*/
    }
    while ( v6 < a2 ); /*0x8aad50*/
  }
  return result; /*0x8aad54*/
}
