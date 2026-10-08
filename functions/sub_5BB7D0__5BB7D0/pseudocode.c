// positive sp value has been detected, the output may be wrong!
int __usercall sub_5BB7D0@<eax>(
        Tile *a1@<ecx>,
        int a2@<ebx>,
        int a3@<edi>,
        Menu *a4@<esi>,
        double a5@<st1>,
        double Float@<st0>)
{
  char v7; // al
  UInt32 v9; // [esp-18h] [ebp-18h]
  float v10; // [esp-14h] [ebp-14h]

  Tile_SetFloat(a1, v9, v10); /*0x5bb7d0*/
  Tile_SetFloat(*(Tile **)(a2 + 0x40), 0xFB3u, 0.0); /*0x5bb7e3*/
  sub_5B8FC0((_DWORD **)a2, 0); /*0x5bb7ec*/
  EnableMenu(a4, 0.0, a5, Float, 1); /*0x5bb7f5*/
  sub_58FBA0(a3, 0.0, a5, Float, 0); /*0x5bb7fe*/
  v7 = BYTE1(InterfaceManager_GetSingleton(0, 1)->unk008[1]); /*0x5bb80c*/
  if ( v7 == (char)0xFF ) /*0x5bb814*/
  {
    Float = Tile_GetFloat((_DWORD *)*(_DWORD *)(a2 + 0x28), 0xFAE); /*0x5bb81e*/
    v7 = Double_To_SInt32(Float); /*0x5bb823*/
  }
  if ( v7 > 5 ) /*0x5bb82a*/
  {
    v7 = 5; /*0x5bb84a*/
  }
  else if ( v7 < 1 ) /*0x5bb832*/
  {
    sub_5BB210((_DWORD *)a2, a5, Float, (_DWORD *)1, 0); /*0x5bb83e*/
    return a3; /*0x5bb849*/
  }
  sub_5BB210((_DWORD *)a2, a5, Float, (_DWORD *)v7, 0); /*0x5bb854*/
  return a3; /*0x5bb849*/
}
