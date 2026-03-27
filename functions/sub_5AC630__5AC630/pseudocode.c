void __userpurge sub_5AC630(int a1@<ecx>, double a2@<st0>, int a3, _DWORD *a4)
{
  char v8; // al
  unsigned int AVFromGroupOffset; // eax
  _DWORD *v10; // ebx
  unsigned int v11; // esi
  char *Icon; // eax
  _DWORD *v13; // edi
  char *Description; // eax

  if ( a3 == 3 )
  {
    Tile_GetFloat(a4, 0xFAA);
    v8 = Double_To_SInt32(a2);
    AVFromGroupOffset = ActorValue_GetAVFromGroupOffset(0, v8);
    v10 = *(_DWORD **)(a1 + 4);
    v11 = AVFromGroupOffset;
    Icon = (char *)ActorValue_GetIcon(AVFromGroupOffset);
    Tile_SetString(v10, (_DWORD *)0xFB2, Icon);
    v13 = *(_DWORD **)(a1 + 4);
    Description = (char *)ActorValue_GetDescription(v11);
    Tile_SetString(v13, (_DWORD *)0xFB3, Description);
    sub_57DE50(4);
  }
}
