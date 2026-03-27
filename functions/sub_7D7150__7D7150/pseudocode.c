char sub_7D7150()
{
  int v0; // eax
  LONG (__stdcall *v1)(volatile LONG *); // ebx
  int v2; // esi
  _DWORD *v3; // edi

  v0 = dword_B45D74;
  if ( dword_B45D74 )
  {
    v1 = InterlockedDecrement;
    do
    {
      --v0;
      v2 = *(_DWORD *)(4 * v0 + 0xB45D78);
      v3 = (_DWORD *)(4 * v0 + 0xB45D78);
      dword_B45D74 = v0;
      if ( v2 )
      {
        if ( !v1((volatile LONG *)(v2 + 4)) )
          (**(void (__thiscall ***)(int, int))v2)(v2, 1);
        v0 = dword_B45D74;
        *v3 = 0;
      }
    }
    while ( v0 );
  }
  if ( g_Renderer->member.super.IsReady )
    LOBYTE(v0) = sub_7D6B00(g_Renderer);
  return v0;
}
