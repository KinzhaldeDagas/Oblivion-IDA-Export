int __thiscall sub_536B30(_DWORD *this, int a2, int a3, int a4)
{
  int result; // eax
  FreeEntry *v6; // eax
  unsigned __int8 v7; // cl
  int v8; // [esp+0h] [ebp-10h]
  int savedregs; // [esp+10h] [ebp+0h] BYREF

  result = *(this + 4); /*0x536b3c*/
  if ( !result ) /*0x536b45*/
    goto LABEL_5; /*0x536b45*/
  do /*0x536b51*/
  {
    if ( *(_DWORD *)(result + 0xC) == a2 ) /*0x536b4a*/
      break; /*0x536b4a*/
    result = *(_DWORD *)(result + 4); /*0x536b4c*/
  }
  while ( result ); /*0x536b51*/
  if ( !result ) /*0x536b55*/
  {
LABEL_5:
    v6 = j_MemoryHeap_Alloc(&FormHeap, (char)&savedregs, 0x100000050uLL, v8); /*0x536b60*/
    v7 = 0x10 - ((unsigned __int8)v6 & 0xF); /*0x536b6c*/
    result = (int)v6 + v7; /*0x536b71*/
    *(_BYTE *)(result - 1) = v7; /*0x536b76*/
    *(_DWORD *)result = 0; /*0x536b7c*/
    *(_DWORD *)(result + 4) = 0; /*0x536b82*/
    *(_DWORD *)(result + 8) = a3; /*0x536b89*/
    *(_DWORD *)(result + 0xC) = a2; /*0x536b8c*/
    *(_DWORD *)(result + 0x30) = 0x1F; /*0x536b8f*/
    *(_OWORD *)(result + 0x10) = 0; /*0x536b99*/
    *(_OWORD *)(result + 0x20) = 0; /*0x536b9d*/
    *(_DWORD *)result |= a4; /*0x536ba1*/
    *(_DWORD *)(result + 4) = *(this + 4); /*0x536ba6*/
    *(this + 4) = result; /*0x536ba9*/
  }
  return result; /*0x536bac*/
}
