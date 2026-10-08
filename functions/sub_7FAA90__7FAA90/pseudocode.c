// Shared BSShader lifecycle thunk: invokes the concrete shader's LoadVertexShaders and LoadPixelShaders virtuals in that order. Later Fallout symbols corroborate the method term only; this behavior is established from Oblivion vtables.
void __thiscall BSShader__LoadVertexAndPixelShaders(void *this)
{
  (*(void (__thiscall **)(void *))(*(_DWORD *)this + 0xAC))(this); /*0x7faa9b*/
  (*(void (__thiscall **)(void *))(*(_DWORD *)this + 0xB0))(this); /*0x7faaa8*/
}
