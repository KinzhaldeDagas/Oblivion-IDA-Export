double __userpurge sub_5AC630@<st0>(int a1@<ecx>, double result@<st0>, int a3, _DWORD *a4)
{
  char v5; // al
  unsigned int AVFromGroupOffset; // eax
  _DWORD *v7; // ebx
  unsigned int v8; // esi
  char *Icon; // eax
  _DWORD *v10; // edi
  char *Description; // eax

  if ( a3 == 3 ) /*0x5ac638*/
  {
    Tile_GetFloat(a4, 0xFAA); /*0x5ac645*/
    v5 = Double_To_SInt32(result); /*0x5ac64a*/
    AVFromGroupOffset = ActorValue_GetAVFromGroupOffset(0, v5); /*0x5ac652*/
    v7 = *(_DWORD **)(a1 + 4); /*0x5ac657*/
    v8 = AVFromGroupOffset; /*0x5ac65a*/
    Icon = (char *)ActorValue_GetIcon(AVFromGroupOffset); /*0x5ac65d*/
    Tile_SetString(v7, (_DWORD *)0xFB2, Icon); /*0x5ac66d*/
    v10 = *(_DWORD **)(a1 + 4); /*0x5ac672*/
    Description = (char *)ActorValue_GetDescription(v8); /*0x5ac676*/
    Tile_SetString(v10, (_DWORD *)0xFB3, Description); /*0x5ac686*/
    sub_57DE50(4); /*0x5ac68d*/
  }
  return result; /*0x5ac697*/
}
