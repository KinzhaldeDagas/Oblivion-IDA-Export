void __thiscall NiD3DShaderConstantManager::~NiD3DShaderConstantManager(NiD3DShaderConstantManager *this)
{
  int v2; // eax
  unsigned int v3; // [esp-4h] [ebp-8h]

  v3 = *((_DWORD *)this + 2); /*0x782b26*/
  *(_DWORD *)this = &NiD3DShaderConstantManager::`vftable'; /*0x782b27*/
  FormHeapFree(v3); /*0x782b2d*/
  FormHeapFree(*((_DWORD *)this + 3)); /*0x782b36*/
  FormHeapFree(*((_DWORD *)this + 4)); /*0x782b3f*/
  FormHeapFree(*((_DWORD *)this + 5)); /*0x782b48*/
  FormHeapFree(*((_DWORD *)this + 0xC)); /*0x782b51*/
  FormHeapFree(*((_DWORD *)this + 0xD)); /*0x782b5a*/
  FormHeapFree(*((_DWORD *)this + 0xE)); /*0x782b63*/
  FormHeapFree(*((_DWORD *)this + 0xF)); /*0x782b6c*/
  FormHeapFree(*((_DWORD *)this + 0x16)); /*0x782b75*/
  FormHeapFree(*((_DWORD *)this + 0x17)); /*0x782b7e*/
  FormHeapFree(*((_DWORD *)this + 0x18)); /*0x782b87*/
  FormHeapFree(*((_DWORD *)this + 0x19)); /*0x782b90*/
  v2 = *((_DWORD *)this + 0x20); /*0x782b95*/
  if ( v2 ) /*0x782ba0*/
  {
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v2 + 8))(*((_DWORD *)this + 0x20)); /*0x782ba8*/
    *((_DWORD *)this + 0x20) = 0; /*0x782baa*/
  }
  *(_DWORD *)this = &NiRefObject::`vftable'; /*0x782bb9*/
  InterlockedDecrement(&MEMORY[0xB3FD64]); /*0x782bbf*/
}
