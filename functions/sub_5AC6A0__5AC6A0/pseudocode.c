void __usercall sub_5AC6A0(int a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  _DWORD *v4; // edi
  unsigned int v5; // ebp
  unsigned int v6; // ebx
  _DWORD *v7; // esi
  char v8; // al
  int AVFromGroupOffset; // eax
  unsigned int v10; // [esp+Ch] [ebp-4h]

  v4 = *(_DWORD **)(*(_DWORD *)(a1 + 0x28) + 0x34);
  v5 = 0xFFFFFFFF;
  v6 = 0xFFFFFFFF;
  v10 = 0xFFFFFFFF;
  while ( v4 )
  {
    v7 = (_DWORD *)v4[2];
    v4 = (_DWORD *)*v4;
    if ( Tile_GetFloat(v7, 0xFAE) == fConstant_2 )
    {
      Tile_GetFloat(v7, 0xFAA);
      v8 = Double_To_SInt32(a4);
      AVFromGroupOffset = ActorValue_GetAVFromGroupOffset(0, v8);
      if ( v6 == 0xFFFFFFFF )
      {
        v6 = AVFromGroupOffset;
      }
      else if ( v10 == 0xFFFFFFFF )
      {
        v10 = AVFromGroupOffset;
      }
      else if ( v5 == 0xFFFFFFFF )
      {
        v5 = AVFromGroupOffset;
      }
    }
  }
  sub_66C3E0((int *)TESDataHandler_g_PlayerRef, v6, v5, (int)v4, a2, a3, a4, v6, v10, v5);
}
