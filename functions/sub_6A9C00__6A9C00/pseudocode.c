void __thiscall sub_6A9C00(int this)
{
  bool v2; // zf
  int v3; // edx
  unsigned int v4; // ecx
  unsigned int v5; // eax
  _DWORD *v6; // esi
  _DWORD *v7; // edx
  MEF_U32PointerMapEntry32 *v8; // eax
  void *v9; // esi
  void *valueOut; // [esp+Ch] [ebp-Ch] BYREF
  MEF_U32PointerMapEntry32 *position; // [esp+10h] [ebp-8h] BYREF
  unsigned int keyOut; // [esp+14h] [ebp-4h] BYREF

  *(_BYTE *)(this + 0xA4) = 0; /*0x6a9c06*/
  v2 = bSoundEnabled_Audio == 0; /*0x6a9c0d*/
  valueOut = 0; /*0x6a9c14*/
  if ( !v2 ) /*0x6a9c1c*/
  {
    v3 = *(_DWORD *)(this + 0x300); /*0x6a9c22*/
    v4 = *(_DWORD *)(v3 + 4); /*0x6a9c28*/
    v5 = 0; /*0x6a9c2b*/
    if ( v4 ) /*0x6a9c30*/
    {
      v6 = *(_DWORD **)(v3 + 8); /*0x6a9c32*/
      v7 = v6; /*0x6a9c35*/
      while ( !*v7 ) /*0x6a9c3a*/
      {
        ++v5; /*0x6a9c3c*/
        ++v7; /*0x6a9c3f*/
        if ( v5 >= v4 ) /*0x6a9c44*/
          goto LABEL_6; /*0x6a9c44*/
      }
      v8 = (MEF_U32PointerMapEntry32 *)v6[v5]; /*0x6a9ca3*/
    }
    else
    {
LABEL_6:
      v8 = 0; /*0x6a9c46*/
    }
    position = v8; /*0x6a9c4a*/
    while ( position ) /*0x6a9c4e*/
    {
      NiTMap_U32Pointer_GetNextEntry(*(MEF_U32PointerMapLayout32 **)(this + 0x300), &position, &keyOut, &valueOut); /*0x6a9c65*/
      v9 = valueOut; /*0x6a9c6a*/
      if ( (*(_DWORD *)valueOut & 0x200) != 0 && (!sub_6B6AF0((int)valueOut) || (*(_BYTE *)v9 & 1) != 0) ) /*0x6a9c84*/
      {
        *(_DWORD *)v9 ^= 0x200u; /*0x6a9c86*/
        if ( (*(_DWORD *)v9 & 0x10) != 0 ) /*0x6a9c90*/
        {
          if ( (*(_DWORD *)v9 & 1) != 0 ) /*0x6a9c94*/
            sub_6B7130((int)v9, 0); /*0x6a9c9a*/
          sub_6B6E60((int *)v9, 1); /*0x6a9ca1*/
        }
        else
        {
          sub_6B6E60((int *)v9, 0); /*0x6a9cac*/
        }
        sub_6B6F20((float *)v9, *((float *)v9 + 0xF)); /*0x6a9cba*/
      }
    }
  }
}
