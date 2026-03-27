void __userpurge MagicItemForm_LoadForm_::NoEffectsError(int a1@<ebp>, int a2@<edi>, int a3)
{
  const char *v3; // [esp+0h] [ebp-4h]

  PrintError("Magic Item (%08X) %s has no effects defined.", *(_DWORD *)(a2 + 0xC), v3);
  MagicItemForm_LoadForm_::Return_1(a1, a3);
}
