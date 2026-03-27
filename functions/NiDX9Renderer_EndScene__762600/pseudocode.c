char __thiscall NiDX9Renderer::EndScene(int this)
{
  if ( !*(_BYTE *)(this + 0x6F0) )
  {
    if ( (*(int (__stdcall **)(_DWORD))(**(_DWORD **)(this + 0x280) + 0xA8))(*(_DWORD *)(this + 0x280)) < 0 )
      return 0;
    sub_777A40(*(_DWORD **)(this + 0x8B0));
  }
  return 1;
}
