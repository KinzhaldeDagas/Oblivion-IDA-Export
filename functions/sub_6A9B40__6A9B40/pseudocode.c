void __thiscall sub_6A9B40(int this)
{
  bool v2; // zf
  int v3; // ecx
  unsigned int v4; // edx
  unsigned int v5; // eax
  _DWORD *v6; // esi
  _DWORD *v7; // ecx
  MEF_U32PointerMapEntry32 *v8; // eax
  unsigned int *v9; // esi
  void *valueOut; // [esp+4h] [ebp-Ch] BYREF
  MEF_U32PointerMapEntry32 *position; // [esp+8h] [ebp-8h] BYREF
  unsigned int keyOut; // [esp+Ch] [ebp-4h] BYREF

  *(_BYTE *)(this + 0xA4) = 1; /*0x6a9b46*/
  v2 = bSoundEnabled_Audio == 0; /*0x6a9b4d*/
  valueOut = 0; /*0x6a9b54*/
  if ( !v2 ) /*0x6a9b5c*/
  {
    v3 = *(_DWORD *)(this + 0x300); /*0x6a9b62*/
    v4 = *(_DWORD *)(v3 + 4); /*0x6a9b68*/
    v5 = 0; /*0x6a9b6b*/
    if ( v4 ) /*0x6a9b70*/
    {
      v6 = *(_DWORD **)(v3 + 8); /*0x6a9b72*/
      v7 = v6; /*0x6a9b75*/
      while ( !*v7 ) /*0x6a9b7a*/
      {
        ++v5; /*0x6a9b7c*/
        ++v7; /*0x6a9b7f*/
        if ( v5 >= v4 ) /*0x6a9b84*/
          goto LABEL_6; /*0x6a9b84*/
      }
      v8 = (MEF_U32PointerMapEntry32 *)v6[v5]; /*0x6a9be1*/
    }
    else
    {
LABEL_6:
      v8 = 0; /*0x6a9b86*/
    }
    position = v8; /*0x6a9b8a*/
    while ( position ) /*0x6a9b8e*/
    {
      NiTMap_U32Pointer_GetNextEntry(*(MEF_U32PointerMapLayout32 **)(this + 0x300), &position, &keyOut, &valueOut); /*0x6a9ba5*/
      v9 = (unsigned int *)valueOut; /*0x6a9baa*/
      if ( sub_6B6AF0((int)valueOut) ) /*0x6a9bb0*/
      {
        if ( (*v9 & 0x20) == 0 ) /*0x6a9bbd*/
        {
          *v9 |= 0x200u; /*0x6a9bc6*/
          if ( (unsigned __int8)sub_6B7120(v9) && (*(_BYTE *)v9 & 1) != 0 ) /*0x6a9bd4*/
            sub_6B7130((int)v9, 1); /*0x6a9bda*/
          else
            sub_6B6AA0((_DWORD **)v9); /*0x6a9be8*/
        }
      }
    }
  }
}
