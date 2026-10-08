void __thiscall sub_4B1530(int this, int a2)
{
  unsigned int v2; // eax
  int v3; // eax

  LOWORD(v2) = *(_WORD *)(this + 0x38); /*0x4b1530*/
  if ( (_WORD)v2 == 0xFFFF ) /*0x4b1538*/
    v2 = strlen(*(const char **)(this + 0x34)); /*0x4b153e*/
  else
    v2 = (unsigned __int16)v2; /*0x4b154f*/
  if ( v2 ) /*0x4b1554*/
  {
    v3 = (*(int (__thiscall **)(int))(*(_DWORD *)(this + 0x30) + 0x14))(this + 0x30); /*0x4b155f*/
    QueuedModelLoader_RemoveModel((int *)MEMORY[0xB33A1C], v3, 1, 1); /*0x4b156c*/
  }
}
