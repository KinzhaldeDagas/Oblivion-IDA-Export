char __thiscall NiDX9Renderer::PresentScene(int this)
{
  LONG (__stdcall *v1)(volatile LONG *); // ebx
  _DWORD *v2; // edi
  int *v3; // ebp
  int v4; // eax
  bool v5; // zf
  volatile LONG *v6; // esi

  if ( !*(_BYTE *)(this + 0x6F0) )
  {
    if ( *(_DWORD *)(this + 0x900) )
    {
      v1 = InterlockedDecrement;
      v2 = (_DWORD *)(this + 0x8F4);
      do
      {
        v3 = (int *)v2[1];
        v4 = *v3;
        v5 = *v3 == 0;
        v2[1] = *v3;
        if ( v5 )
          v2[2] = 0;
        else
          *(_DWORD *)(v4 + 4) = 0;
        v6 = (volatile LONG *)v3[2];
        if ( v6 )
          InterlockedIncrement(v6 + 1);
        (*(void (__thiscall **)(_DWORD *, int *))(*v2 + 8))(v2, v3);
        --v2[3];
        (*(void (__thiscall **)(volatile LONG *))(*v6 + 0x28))(v6);
        if ( !v1(v6 + 1) )
          (**(void (__thiscall ***)(volatile LONG *, int))v6)(v6, 1);
      }
      while ( *(_DWORD *)(this + 0x900) );
    }
  }
  return 1;
}
