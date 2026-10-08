void __thiscall sub_8B8120(void *this, float *a2)
{
  int v3; // eax
  _DWORD *v4; // edi
  void (__thiscall *v5)(void *, _DWORD *); // eax
  float v6; // [esp+1Ch] [ebp-44h]
  float v7; // [esp+20h] [ebp-40h]
  float v8; // [esp+24h] [ebp-3Ch]
  float v9; // [esp+28h] [ebp-38h]
  float v10[7]; // [esp+30h] [ebp-30h] BYREF
  unsigned int v11; // [esp+5Ch] [ebp-4h]

  if ( a2 ) /*0x8b815e*/
  {
    v3 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x20, 0x24); /*0x8b8173*/
    *(_WORD *)(v3 + 4) = 0x20; /*0x8b8175*/
    v9 = a2[4]; /*0x8b8182*/
    v8 = a2[5]; /*0x8b818e*/
    v11 = 0; /*0x8b8192*/
    v6 = a2[6]; /*0x8b819d*/
    v7 = a2[7]; /*0x8b81a4*/
    v10[0] = v9; /*0x8b81ac*/
    v10[1] = v8; /*0x8b81b4*/
    v10[2] = v6; /*0x8b81bc*/
    v10[3] = v7; /*0x8b81c4*/
    v4 = sub_8CDFE0((_DWORD *)v3, v10, SLODWORD(flt_B2EFC4)); /*0x8b81db*/
    v5 = *(void (__thiscall **)(void *, _DWORD *))(*(_DWORD *)this + 0x4C); /*0x8b81dd*/
    v11 = 0xFFFFFFFF; /*0x8b81e3*/
    v5(this, v4); /*0x8b81eb*/
    if ( *((_WORD *)v4 + 2) ) /*0x8b81ed*/
    {
      if ( !--*((_WORD *)v4 + 3) ) /*0x8b81f9*/
        (*(void (__thiscall **)(_DWORD *, int))*v4)(v4, 1); /*0x8b820a*/
    }
    (*(void (__thiscall **)(void *, float *))(*(_DWORD *)this + 0x7C))(this, a2); /*0x8b8214*/
  }
}
