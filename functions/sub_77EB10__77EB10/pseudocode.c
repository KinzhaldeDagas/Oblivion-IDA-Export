// Ensures a vertex-shader device object exists. A live handle succeeds immediately; otherwise the retained program creator is asked to rebuild/restore it.
char __cdecl sub_77EB10(int a1)
{
  int v2; // eax

  if ( !MEMORY[0xB428A8] || !a1 ) /*0x77eb20*/
    return 0; /*0x77eb20*/
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x40))(a1) ) /*0x77eb29*/
    return 1; /*0x77eb32*/
  v2 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x20))(a1); /*0x77eb3a*/
  if ( v2 ) /*0x77eb3e*/
    return (*(char (__thiscall **)(int, int))(*(_DWORD *)v2 + 0x1C))(v2, a1); /*0x77eb48*/
  else
    return 0; /*0x77eb4c*/
}
