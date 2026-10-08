char __cdecl MemoryHeap_BeginPressureRecovery(int a1)
{
  UInt32 mainThreadID; // esi
  bool v2; // al
  char v3; // bl
  char v4; // al
  char v5; // al

  dword_B32B08 = a1; /*0x4014ac*/
  mainThreadID = MEMORY[0xB33398]->mainThreadID; /*0x4014b2*/
  v2 = mainThreadID == GetCurrentThreadId(); /*0x4014bd*/
  if ( !dword_B32B04 ) /*0x4014c7*/
    byte_B32B01 = 1; /*0x4014c9*/
  v3 = 0; /*0x4014d0*/
  if ( v2 || !MEMORY[0xB33E90][0x1245] || (Cmd_AddAchievement_PC_ReturnTrueNoOp(), v4) ) /*0x4014e5*/
  {
    Cmd_AddAchievement_PC_ReturnTrueNoOp(); /*0x4014e9*/
    v3 = v5; /*0x4014f1*/
  }
  NiEnterCriticalSection((struct _RTL_CRITICAL_SECTION *)&unk_B32C00, (int)&aMemoryheapMemo); /*0x4014fd*/
  byte_B32B00 = 1; /*0x401509*/
  if ( dword_B02184 ) /*0x401510*/
    dword_B32B04 = dword_B02184(0, a1, dword_B32B04); /*0x401522*/
  else
    dword_B32B04 = 0; /*0x401530*/
  return v3; /*0x401521*/
}
