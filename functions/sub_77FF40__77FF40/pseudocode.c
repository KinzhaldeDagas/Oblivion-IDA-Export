// DX10 bridge note: Oblivion texture-stage/sampler default replay. dword_B28CB0 is 2. dword_B2A7C0 stage 0 defaults are COLOROP=MODULATE, COLORARG1=TEXTURE, COLORARG2=CURRENT, ALPHAOP=SELECTARG1, ALPHAARG1=TEXTURE, ALPHAARG2=CURRENT; for stages after 0 the function forces COLOROP/ALPHAOP to DISABLE. DX10 seed/fallback shaders mirror this two-stage table, including stage 0/1 texture SRV sampling and CURRENT chaining when enabled.
void __thiscall sub_77FF40(_DWORD **this)
{
  unsigned int v1; // ebp
  int v3; // eax
  int *v4; // ecx
  int *v5; // ebx
  _DWORD *v6; // edx
  _DWORD **v7; // edi
  int v8; // ecx
  int *v9; // edx
  int *v10; // edi
  int v11; // eax
  int *v12; // ebx
  int v13; // [esp+20h] [ebp-Ch]
  unsigned int v14; // [esp+24h] [ebp-8h]
  int v15; // [esp+28h] [ebp-4h]

  v1 = 0; /*0x77ff44*/
  v14 = 0; /*0x77ff4f*/
  if ( dword_B28CB0 ) /*0x77ff46*/
  {
    v13 = 0x1A4; /*0x77ff5a*/
    do /*0x780051*/
    {
      v3 = dword_B2A7C0; /*0x77ff63*/
      v4 = &dword_B2A7C0; /*0x77ff6b*/
      if ( dword_B2A7C0 != 0xFFFFFFFF ) /*0x77ff70*/
      {
        v15 = 8 * v1; /*0x77ff79*/
        v5 = &dword_B2A7C0; /*0x77ff7d*/
        do /*0x77ffe6*/
        {
          if ( v3 == 0xB ) /*0x77ff83*/
          {
            v4[1] = v1; /*0x77ff85*/
          }
          else if ( (v3 == 1 || v3 == 4) && v13 != 0x1A4 ) /*0x77ff9c*/
          {
            v4[1] = 1; /*0x77ff9e*/
          }
          v6 = (_DWORD *)v4[1]; /*0x77ffad*/
          v1 = v14; /*0x77ffb4*/
          v7 = this + 2 * v15 + 2 * *(unsigned __int16 *)(2 * v3 + 0xB427E0) + 0x248; /*0x77ffb8*/
          *v7 = v6; /*0x77ffbf*/
          v7[1] = v6; /*0x77ffc1*/
          (*(void (__stdcall **)(_DWORD, unsigned int, int, int))(**(this + 0x3FE) + 0x10C))( /*0x77ffd9*/
            *(this + 0x3FE),
            v14,
            v3,
            v4[1]);
          v3 = v5[2]; /*0x77ffdb*/
          v5 += 2; /*0x77ffde*/
          v4 = v5; /*0x77ffe4*/
        }
        while ( v3 != 0xFFFFFFFF ); /*0x77ffe6*/
      }
      v8 = dword_B2A808; /*0x77ffe8*/
      v9 = &dword_B2A808; /*0x77fff1*/
      if ( dword_B2A808 != 0xFFFFFFFF ) /*0x77fff6*/
      {
        v10 = &dword_B2A808; /*0x77fff8*/
        do /*0x78003d*/
        {
          v1 = v14; /*0x78000f*/
          v11 = v9[1] + 1; /*0x780013*/
          v12 = (int *)(this + 2 * v13 + 2 * *(unsigned __int16 *)(2 * v8 + 0xB427B0)); /*0x780016*/
          *v12 = v11; /*0x780019*/
          v12[1] = v11; /*0x78001b*/
          ((void (__thiscall *)(_DWORD **, unsigned int, int, int, _DWORD))(*this)[0x34])(this, v14, v8, v9[1], 0); /*0x780030*/
          v8 = v10[2]; /*0x780032*/
          v10 += 2; /*0x780035*/
          v9 = v10; /*0x78003b*/
        }
        while ( v8 != 0xFFFFFFFF ); /*0x78003d*/
      }
      v13 += 5; /*0x78003f*/
      v14 = ++v1; /*0x78004d*/
    }
    while ( v1 < dword_B28CB0 ); /*0x780051*/
  }
}
