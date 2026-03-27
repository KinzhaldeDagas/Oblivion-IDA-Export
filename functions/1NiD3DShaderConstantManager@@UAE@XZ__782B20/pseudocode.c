void __thiscall NiD3DShaderConstantManager::~NiD3DShaderConstantManager(NiD3DShaderConstantManager *this)
{
  int v2; // eax
  unsigned int v3; // [esp-4h] [ebp-8h]

  v3 = *((_DWORD *)this + 2);
  *(_DWORD *)this = &NiD3DShaderConstantManager::`vftable';
  FormHeapFree(v3);
  FormHeapFree(*((_DWORD *)this + 3));
  FormHeapFree(*((_DWORD *)this + 4));
  FormHeapFree(*((_DWORD *)this + 5));
  FormHeapFree(*((_DWORD *)this + 0xC));
  FormHeapFree(*((_DWORD *)this + 0xD));
  FormHeapFree(*((_DWORD *)this + 0xE));
  FormHeapFree(*((_DWORD *)this + 0xF));
  FormHeapFree(*((_DWORD *)this + 0x16));
  FormHeapFree(*((_DWORD *)this + 0x17));
  FormHeapFree(*((_DWORD *)this + 0x18));
  FormHeapFree(*((_DWORD *)this + 0x19));
  v2 = *((_DWORD *)this + 0x20);
  if ( v2 )
  {
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v2 + 8))(*((_DWORD *)this + 0x20));
    *((_DWORD *)this + 0x20) = 0;
  }
  *(_DWORD *)this = &NiRefObject::`vftable';
  InterlockedDecrement(&NiRefObject_objcount);
}
