// MoonSugarEffect decode: pixel analog of 77EFA0. Removes wrapper from shaderProgramFactory+0x1C by key from wrapper base vtable +0x04.
void __cdecl sub_77EFD0(int a1)
{
  int v1; // eax
  _DWORD *v2; // ecx

  if ( MEMORY[0xB428A8] ) /*0x77efd0*/
  {
    if ( a1 ) /*0x77efdf*/
    {
      v1 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 4))(a1); /*0x77efe6*/
      if ( v1 ) /*0x77efea*/
      {
        v2 = *((_DWORD **)MEMORY[0xB428A8] + 7); /*0x77eff2*/
        if ( v2 ) /*0x77eff7*/
          NiTMap_RemoveAt(v2, v1); /*0x77effa*/
      }
    }
  }
}
