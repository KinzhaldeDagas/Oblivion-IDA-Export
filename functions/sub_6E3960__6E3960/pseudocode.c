int __thiscall sub_6E3960(_DWORD *this)
{
  int result; // eax
  unsigned int v3; // ecx
  _DWORD *v4; // esi
  int v5; // edi
  void (__thiscall ***v6)(_DWORD, int); // esi
  int v7; // eax
  int v8; // edx
  char v9; // bl
  unsigned int i; // edi
  int v11; // esi
  int v12; // edx
  int v13; // ecx
  unsigned __int8 v14; // [esp+7h] [ebp-15h]
  unsigned int v15; // [esp+8h] [ebp-14h]
  int v16; // [esp+Ch] [ebp-10h] BYREF
  int v17; // [esp+10h] [ebp-Ch]
  int v18; // [esp+14h] [ebp-8h]
  int v19; // [esp+18h] [ebp-4h]

  result = *(this + 7); /*0x6e3966*/
  if ( result ) /*0x6e396b*/
  {
    v3 = *(_DWORD *)(result + 8); /*0x6e3971*/
    v4 = *(_DWORD **)(result + 0xC); /*0x6e397a*/
    v5 = *(_DWORD *)(result + 0x10); /*0x6e397e*/
    v15 = v3; /*0x6e3981*/
    v14 = *(_BYTE *)(result + 0x14); /*0x6e3985*/
    if ( !v3 ) /*0x6e3989*/
    {
      v6 = (void (__thiscall ***)(_DWORD, int))result; /*0x6e398b*/
      if ( !InterlockedDecrement((volatile LONG *)(result + 4)) ) /*0x6e3995*/
        (**v6)(v6, 1); /*0x6e39ab*/
      *(this + 7) = 0; /*0x6e39ad*/
      *(this + 3) = dword_B24FD4; /*0x6e39ba*/
      *(this + 4) = dword_B24FD8; /*0x6e39c3*/
      result = dword_B24FDC; /*0x6e39c6*/
      *(this + 5) = dword_B24FDC; /*0x6e39cb*/
      *(this + 6) = dword_B24FE0; /*0x6e39d6*/
      return result; /*0x6e39dd*/
    }
    v7 = v4[2]; /*0x6e39e4*/
    v16 = v4[1]; /*0x6e39e7*/
    v8 = v4[3]; /*0x6e39eb*/
    v17 = v7; /*0x6e39ee*/
    result = v4[4]; /*0x6e39f2*/
    v18 = v8; /*0x6e39f6*/
    v19 = result; /*0x6e39fa*/
    if ( v3 == 1 ) /*0x6e39fe*/
      goto LABEL_16; /*0x6e39fe*/
    if ( v5 == 1 || v5 == 5 ) /*0x6e3a08*/
    {
      v9 = 1; /*0x6e3a0e*/
      for ( i = 1; i < v3; ++i ) /*0x6e3a10*/
      {
        result = sub_632310((float *)((char *)v4 + i * v14 + 4), (float *)&v16); /*0x6e3a30*/
        if ( (_BYTE)result ) /*0x6e3a37*/
          v9 = 0; /*0x6e3a39*/
        if ( !v9 ) /*0x6e3a40*/
          return result; /*0x6e3a40*/
        v3 = v15; /*0x6e3a17*/
      }
LABEL_16:
      v11 = *(this + 7); /*0x6e3a4e*/
      if ( v11 ) /*0x6e3a53*/
      {
        if ( !InterlockedDecrement((volatile LONG *)(v11 + 4)) ) /*0x6e3a59*/
          (**(void (__thiscall ***)(int, int))v11)(v11, 1); /*0x6e3a6f*/
        *(this + 7) = 0; /*0x6e3a71*/
      }
      v12 = v17; /*0x6e3a7c*/
      result = v18; /*0x6e3a80*/
      *(this + 3) = v16; /*0x6e3a84*/
      v13 = v19; /*0x6e3a87*/
      *(this + 4) = v12; /*0x6e3a8b*/
      *(this + 5) = result; /*0x6e3a8e*/
      *(this + 6) = v13; /*0x6e3a91*/
    }
  }
  return result; /*0x6e39d9*/
}
