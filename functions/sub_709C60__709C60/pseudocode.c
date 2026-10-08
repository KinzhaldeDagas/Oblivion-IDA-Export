// MoonSugarEffect decode: NiScreenElements render thunk. Callers push NiDX9Renderer on the stack, then this thunk jumps to object vtable +0x84.
int __thiscall sub_709C60(NiScreenElements *this)
{
  return (*(int (__thiscall **)(NiScreenElements *))(*(_DWORD *)this + 0x84))(this);
}
