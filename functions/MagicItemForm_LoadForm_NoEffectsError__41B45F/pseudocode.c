void __userpurge MagicItemForm_LoadForm_::NoEffectsError(int a1@<edi>, int a2)
{
  const char *v3; // [esp+0h] [ebp-4h]

  PrintError("Magic Item (%08X) %s has no effects defined.", *(_DWORD *)(a1 + 0xC), v3); /*0x41b469*/
  MagicItemForm_LoadForm_::Return_1(a2); /*0x41b46f*/
}
