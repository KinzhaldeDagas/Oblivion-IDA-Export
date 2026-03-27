void __cdecl sub_77EFA0(int a1)
{
  int v1; // eax
  _DWORD *v2; // ecx

  if ( shaderProgramFactory )
  {
    if ( a1 )
    {
      v1 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 4))(a1);
      if ( v1 )
      {
        v2 = *((_DWORD **)shaderProgramFactory + 6);
        if ( v2 )
          NiTMap_RemoveAt(v2, v1);
      }
    }
  }
}
