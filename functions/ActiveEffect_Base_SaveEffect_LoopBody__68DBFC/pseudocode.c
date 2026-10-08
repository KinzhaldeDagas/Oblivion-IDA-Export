// Verified (Oblivion): save traversal calls each hit-effect vtable +0x78 with ECX=this, owner ActiveEffect* (EDI), and targetReference (EBX); then increments the serialized hit-effect count. This establishes the shared SaveExtraData virtual signature.
int __usercall ActiveEffect_Base_SaveEffect_::LoopBody@<eax>(
        int a1@<ebx>,
        int a2@<ebp>,
        _DWORD *a3@<esi>,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        _BYTE *a10,
        int a11,
        int a12,
        char Src)
{
  int v13; // edi
  char v14; // al
  TESSaveLoadGame_SerializationView *v15; // ecx
  _DWORD *v16; // esi

  v13 = *a3; /*0x68dbfc*/
  v14 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*a3 + 0x54))(*a3); /*0x68dc05*/
  v15 = g_TESSaveLoadGame; /*0x68dc0e*/
  Src = v14; /*0x68dc14*/
  SaveLoad_SaveData(v15, &Src, 1u); /*0x68dc18*/
  (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v13 + 0x78))(v13, a2, a1); /*0x68dc26*/
  ++HIBYTE(a5); /*0x68dc28*/
  v16 = (_DWORD *)a3[1]; /*0x68dc2d*/
  if ( v16 ) /*0x68dc32*/
    return ActiveEffect_Base_SaveEffect_::LoopTest(a1, a2, v16, a4, a5, a6, a7, a8, a9, (int)a10, a11, a12, Src); /*0x68dc32*/
  else
    return ActiveEffect_Base_SaveEffect_::LoopExit(a4, a5, a6, a7, a8, a9, a10); /*0x68dc33*/
}
