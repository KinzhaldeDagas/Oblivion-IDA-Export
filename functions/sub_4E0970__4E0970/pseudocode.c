int __thiscall sub_4E0970(_DWORD *this, char *a2)
{
  _WORD *v2; // edi
  int result; // eax
  char *v4; // esi
  int v5; // ebp
  int v6; // eax
  __int16 v7; // cx
  unsigned __int16 v8; // dx
  int v9; // eax
  char v10; // [esp+8h] [ebp-30h] BYREF
  __int16 v11; // [esp+Ah] [ebp-2Eh]
  __int16 v12; // [esp+Ch] [ebp-2Ch]
  int v13; // [esp+10h] [ebp-28h]
  int v14; // [esp+14h] [ebp-24h]
  int v15; // [esp+18h] [ebp-20h]
  _BYTE v16[8]; // [esp+1Ch] [ebp-1Ch] BYREF
  int v17; // [esp+24h] [ebp-14h]
  char *v18; // [esp+28h] [ebp-10h]

  v2 = (_WORD *)*(this + 0xF); /*0x4e0975*/
  result = 0; /*0x4e097a*/
  if ( v2 ) /*0x4e097e*/
  {
    v4 = a2; /*0x4e0986*/
    v5 = 3; /*0x4e098c*/
    v10 = 0; /*0x4e0991*/
    v11 = 0; /*0x4e0995*/
    v12 = 0; /*0x4e099a*/
    v13 = 0; /*0x4e099f*/
    v14 = 0; /*0x4e09a3*/
    v15 = 0; /*0x4e09a7*/
    if ( !a2 ) /*0x4e09ab*/
      v4 = &v10; /*0x4e09ad*/
    *((_DWORD *)v4 + 2) = this; /*0x4e09b2*/
    *((_DWORD *)v4 + 3) = v2; /*0x4e09b5*/
    *((_DWORD *)v4 + 4) = sub_4A05E0((int)v2); /*0x4e09bd*/
    v17 = 0xF; /*0x4e09cb*/
    v16[4] = 1; /*0x4e09d3*/
    v18 = v4; /*0x4e09d8*/
    sub_88A7D0(v2, (int)v16, (void (__cdecl *)(int, int))sub_4DAC00); /*0x4e09dc*/
    v6 = *((unsigned __int16 *)v4 + 1); /*0x4e09e1*/
    v7 = *((_WORD *)v4 + 2); /*0x4e09e5*/
    v8 = v6 + v7; /*0x4e09f2*/
    if ( (_WORD)v6 ) /*0x4e09f5*/
    {
      if ( v7 ) /*0x4e09fa*/
      {
        *v4 |= 4u; /*0x4e09fc*/
        v5 = (unsigned __int16)(v8 + 3); /*0x4e0a02*/
      }
      else
      {
        *v4 |= 1u; /*0x4e0a0c*/
      }
      v5 += 0x18 * v6; /*0x4e0a17*/
    }
    v9 = v8; /*0x4e0a1e*/
    if ( (*v4 & 2) != 0 ) /*0x4e0a21*/
      v9 = (unsigned __int16)(v8 - 1); /*0x4e0a26*/
    return v5 + 0x1C * v9; /*0x4e0a33*/
  }
  return result; /*0x4e0a38*/
}
