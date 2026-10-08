// Collects up to three selected LevelUpMenu attribute tiles, maps their group-0 offsets to attribute AVs, and commits them through Player_CommitLevelUp. Missing selections remain 0xFFFFFFFF and are ignored by Player_LevelUpAttribute.
void __usercall LevelUpMenu_CommitSelectedAttributes(int a1@<ecx>, double a2@<st0>)
{
  _DWORD *v4; // edi
  unsigned int v5; // ebp
  unsigned int v6; // ebx
  _DWORD *v7; // esi
  char v8; // al
  int AVFromGroupOffset; // eax
  unsigned int v10; // [esp+Ch] [ebp-4h]

  v4 = *(_DWORD **)(*(_DWORD *)(a1 + 0x28) + 0x34); /*0x5ac6a7*/
  v5 = 0xFFFFFFFF; /*0x5ac6aa*/
  v6 = 0xFFFFFFFF; /*0x5ac6af*/
  v10 = 0xFFFFFFFF; /*0x5ac6b1*/
  while ( v4 ) /*0x5ac6b5*/
  {
    v7 = (_DWORD *)v4[2]; /*0x5ac6b8*/
    v4 = (_DWORD *)*v4; /*0x5ac6be*/
    if ( Tile_GetFloat(v7, 0xFAE) == fConstant_2 ) /*0x5ac6d7*/
    {
      Tile_GetFloat(v7, 0xFAA); /*0x5ac6e0*/
      v8 = Double_To_SInt32(a2); /*0x5ac6e5*/
      AVFromGroupOffset = ActorValue_GetAVFromGroupOffset(0, v8); /*0x5ac6ed*/
      if ( v6 == 0xFFFFFFFF ) /*0x5ac6f8*/
      {
        v6 = AVFromGroupOffset; /*0x5ac6fa*/
      }
      else if ( v10 == 0xFFFFFFFF ) /*0x5ac703*/
      {
        v10 = AVFromGroupOffset; /*0x5ac705*/
      }
      else if ( v5 == 0xFFFFFFFF ) /*0x5ac70e*/
      {
        v5 = AVFromGroupOffset; /*0x5ac710*/
      }
    }
  }
  Player_CommitLevelUp(reference, v6, v10, v5); /*0x5ac724*/
}
