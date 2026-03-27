void __stdcall sub_7ABBC0(_DWORD *a1)
{
  _DWORD *v1; // esi
  int v2; // ecx

  if ( a1 )
  {
    if ( a1[4] )
    {
      v1 = (_DWORD *)a1[1];
      while ( v1 )
      {
        v2 = v1[2];
        v1 = (_DWORD *)*v1;
        (*(void (__thiscall **)(int, NiDX9Renderer *))(*(_DWORD *)v2 + 0x84))(v2, g_Renderer);
      }
      sub_7A9C30((int)a1);
      a1[3] = a1[1];
      a1[1] = 0;
      a1[2] = 0;
      a1[4] = 0;
    }
    sub_7ABAC0(a1 + 5, 0);
  }
}
