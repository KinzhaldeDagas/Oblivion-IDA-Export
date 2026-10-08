// Pass225: NiDX9Renderer vtable +0xC0 screen-texture purge trampoline; purges NiScreenTexture +0x1C through geometry group manager.
int __thiscall sub_763020(_DWORD **this, int a2)
{
  int result; // eax

  result = a2; /*0x763020*/
  if ( a2 ) /*0x763026*/
  {
    if ( *(_DWORD *)(a2 + 0x1C) ) /*0x763028*/
      return (*(int (__thiscall **)(_DWORD, int))(**(this + 0x228) + 0x18))(*(this + 0x228), a2); /*0x76303d*/
  }
  return result; /*0x76303f*/
}
