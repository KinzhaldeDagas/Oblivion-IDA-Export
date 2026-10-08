void __thiscall sub_75BC50(int this, float a2, int a3)
{
  int v5; // ecx
  double v6; // st7
  int v7; // esi
  float *v8; // edx
  int v10; // edi
  int v11; // esi
  float *v12; // eax
  float v13; // [esp+0h] [ebp-24h]
  float v14; // [esp+20h] [ebp-4h]
  float v15; // [esp+20h] [ebp-4h]
  int v16; // [esp+2Ch] [ebp+8h]
  float v17; // [esp+2Ch] [ebp+8h]

  if ( *(_BYTE *)(this + 0x18) && *(_DWORD *)(this + 0x1C) ) /*0x75bc60*/
  {
    v5 = *(unsigned __int16 *)(a3 + 0x48); /*0x75bc6e*/
    v16 = v5; /*0x75bc75*/
    if ( (_WORD)v5 ) /*0x75bc79*/
    {
      v6 = a2; /*0x75bc7f*/
      v7 = (unsigned __int16)(v5 - 1); /*0x75bc86*/
      do /*0x75bd0c*/
      {
        v8 = (float *)(*(_DWORD *)(a3 + 0x5C) + 0x1C * (unsigned __int16)v7); /*0x75bc9b*/
        v14 = v6 - v8[5] + v8[3]; /*0x75bca4*/
        v8[3] = v14; /*0x75bcac*/
        if ( v8[4] < (double)v14 ) /*0x75bcb9*/
        {
          v15 = v8[4] + v6 - v14; /*0x75bcd2*/
          v13 = v6; /*0x75bcde*/
          (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD, int, _DWORD))(**(_DWORD **)(this + 0x1C) + 0x5C))( /*0x75bce1*/
            *(_DWORD *)(this + 0x1C),
            LODWORD(v13),
            LODWORD(v15),
            v7,
            *(_DWORD *)(this + 0x10));
          (*(void (__thiscall **)(int, int))(*(_DWORD *)a3 + 0x58))(a3, v7); /*0x75bceb*/
          v6 = a2; /*0x75bced*/
          v5 = v16; /*0x75bcf1*/
        }
        v5 += 0xFFFF; /*0x75bcf9*/
        v7 += 0xFFFF; /*0x75bcff*/
        v16 = v5; /*0x75bd08*/
      }
      while ( (_WORD)v5 ); /*0x75bd0c*/
    }
  }
  else
  {
    v10 = *(unsigned __int16 *)(a3 + 0x48); /*0x75bd20*/
    if ( (_WORD)v10 ) /*0x75bd27*/
    {
      v11 = (unsigned __int16)(v10 - 1); /*0x75bd2c*/
      do /*0x75bd7c*/
      {
        v12 = (float *)(*(_DWORD *)(a3 + 0x5C) + 0x1C * (unsigned __int16)v11); /*0x75bd43*/
        v17 = a2 - v12[5] + v12[3]; /*0x75bd4c*/
        v12[3] = v17; /*0x75bd54*/
        if ( v12[4] < (double)v17 ) /*0x75bd61*/
          (*(void (__thiscall **)(int, int))(*(_DWORD *)a3 + 0x58))(a3, v11); /*0x75bd6b*/
        v10 += 0xFFFF; /*0x75bd6d*/
        v11 += 0xFFFF; /*0x75bd73*/
      }
      while ( (_WORD)v10 ); /*0x75bd7c*/
    }
  }
}
