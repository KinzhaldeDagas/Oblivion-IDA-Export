int sub_77EEB0()
{
  int result; // eax

  result = NiTMap_Clear((_DWORD *)unk_B428AC); /*0x77eeb6*/
  if ( unk_B428AC ) /*0x77eebb*/
    result = (**(int (__thiscall ***)(int, int))unk_B428AC)(unk_B428AC, 1); /*0x77eecb*/
  unk_B428AC = 0; /*0x77eecd*/
  return result; /*0x77eed7*/
}
