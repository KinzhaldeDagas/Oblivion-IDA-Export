void __thiscall NiD3DShaderProgram::~NiD3DShaderProgram(NiD3DShaderProgram *this)
{
  int v2; // eax
  unsigned int v3; // [esp-4h] [ebp-8h]

  v3 = *((_DWORD *)this + 2); /*0x782cb6*/
  *(_DWORD *)this = &NiD3DShaderProgram::`vftable'; /*0x782cb7*/
  FormHeapFree(v3); /*0x782cbd*/
  FormHeapFree(*((_DWORD *)this + 3)); /*0x782cc6*/
  FormHeapFree(*((_DWORD *)this + 5)); /*0x782ccf*/
  v2 = *((_DWORD *)this + 7); /*0x782cd4*/
  *((_DWORD *)this + 8) = 0; /*0x782cdc*/
  *((_DWORD *)this + 9) = 0; /*0x782ce3*/
  if ( v2 ) /*0x782cea*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 8))(v2); /*0x782cf2*/
  *((_DWORD *)this + 7) = 0; /*0x782cf9*/
  *(_DWORD *)this = &NiRefObject::`vftable'; /*0x782d00*/
  InterlockedDecrement(&MEMORY[0xB3FD64]); /*0x782d06*/
}
