// [Verified] TESSaveLoadGame_SaveTempEffectsList obtains the actor process manager's temp-effect save size, writes a bounded Temp Effects List chunk, calls ActorProcessManager_SaveTempEffects, checks full-buffer consumption, and frees the temporary buffer.
int __thiscall TESSaveLoadGame_SaveTempEffectsList(_DWORD *this, int a2)
{
  int result; // eax
  int v4; // ebp
  bool v5; // zf
  void (__cdecl *v6)(int, int *, int, int *, int); // ecx
  _DWORD *v7; // ecx
  FreeEntry *v8; // eax
  char *v9; // edi
  int v10; // eax
  void (__cdecl *v11)(int, char *, int, int *, int); // eax
  int v12; // [esp-14h] [ebp-20h]
  int v13; // [esp-10h] [ebp-1Ch]
  int v14; // [esp+0h] [ebp-Ch]
  int v15; // [esp+8h] [ebp-4h] BYREF

  result = ActorProcessManager_GetTempEffectsSaveSize((int *)&qword_B3BB2C[0x75]);// Verified call-chain anchor: TESSaveLoadGame_SaveGame invokes the temp-effect size/save wrapper from the global TESSaveLoadGame serialization pipeline. /*0x45fb5a*/
  v4 = a2; /*0x45fb62*/
  v5 = (*(this + 6) & 0x200) == 0; /*0x45fb69*/
  v15 = result; /*0x45fb6c*/
  if ( v5 ) /*0x45fb70*/
  {
    v6 = *(void (__cdecl **)(int, int *, int, int *, int))(a2 + 8); /*0x45fb7b*/
    v12 = a2; /*0x45fb8c*/
    a2 = 1; /*0x45fb8d*/
    v6(v12, &v15, 4, &a2, 1); /*0x45fb95*/
    result = v15; /*0x45fb97*/
  }
  else
  {
    *(this + 0x24) += 4; /*0x45fb72*/
  }
  if ( result ) /*0x45fba0*/
  {
    v7 = (_DWORD *)*(this + 0x10); /*0x45fba6*/
    if ( v7 ) /*0x45fbab*/
    {
      sub_4531B0(v7, v4, result, "Temp Effects List"); /*0x45fbb3*/
      result = v15; /*0x45fbb8*/
    }
    v8 = j_MemoryHeap_Alloc(&FormHeap, v4, (unsigned int)result | 0x100000000LL, v14); /*0x45fbc4*/
    *(this + 5) = v8; /*0x45fbcb*/
    if ( !v8 ) /*0x45fbce*/
      sub_404EC0("Could not create save buffer, out of memory."); /*0x45fbd5*/
    v9 = (char *)*(this + 5); /*0x45fbde*/
    ActorProcessManager_SaveTempEffects((char *)&qword_B3BB2C[0x75]); /*0x45fbe6*/
    v10 = v15; /*0x45fbeb*/
    if ( &v9[v15] != (char *)*(this + 5) ) /*0x45fbf5*/
    {
      (*(void (__thiscall **)(_DWORD, const char *))(**(_DWORD **)&MEMORY[0xB33E90][0xF00] + 0x18))( /*0x45fc07*/
        *(_DWORD *)&MEMORY[0xB33E90][0xF00],
        "SaveTempEffectsList() call did not properly fill buffer.  See Warnings.txt for more info.");
      v10 = v15; /*0x45fc09*/
    }
    if ( (*(this + 6) & 0x200) != 0 ) /*0x45fc16*/
    {
      *(this + 0x24) += v10; /*0x45fc18*/
    }
    else
    {
      v13 = v10; /*0x45fc27*/
      v11 = *(void (__cdecl **)(int, char *, int, int *, int))(v4 + 8); /*0x45fc28*/
      a2 = 1; /*0x45fc2d*/
      v11(v4, v9, v13, &a2, 1); /*0x45fc35*/
    }
    result = MemoryHeap_Free_checked(v9); /*0x45fc40*/
    *(this + 5) = 0; /*0x45fc45*/
  }
  return result; /*0x45fc4d*/
}
