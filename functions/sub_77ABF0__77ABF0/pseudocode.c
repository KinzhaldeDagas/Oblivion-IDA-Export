_DWORD *__thiscall sub_77ABF0(_DWORD *this, int a2)
{
  int v3; // eax

  *this = &NiRefObject::`vftable'; /*0x77abf8*/
  *(this + 1) = 0; /*0x77abfe*/
  InterlockedIncrement(&MEMORY[0xB3FD64]); /*0x77ac05*/
  *this = &NiDX9TextureManager::`vftable'; /*0x77ac0f*/
  *(this + 3) = a2; /*0x77ac15*/
  v3 = *(_DWORD *)(a2 + 0x280); /*0x77ac18*/
  *(this + 2) = v3; /*0x77ac1e*/
  (*(void (__stdcall **)(int))(*(_DWORD *)v3 + 4))(v3); /*0x77ac27*/
  return this; /*0x77ac2b*/
}
