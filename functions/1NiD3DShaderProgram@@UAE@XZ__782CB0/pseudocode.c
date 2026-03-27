void __thiscall NiD3DShaderProgram::~NiD3DShaderProgram(NiD3DShaderProgram *this)
{
  int v2; // eax
  unsigned int v3; // [esp-4h] [ebp-8h]

  v3 = *((_DWORD *)this + 2);
  *(_DWORD *)this = &NiD3DShaderProgram::`vftable';
  FormHeapFree(v3);
  FormHeapFree(*((_DWORD *)this + 3));
  FormHeapFree(*((_DWORD *)this + 5));
  v2 = *((_DWORD *)this + 7);
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0;
  if ( v2 )
    (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 8))(v2);
  *((_DWORD *)this + 7) = 0;
  *(_DWORD *)this = &NiRefObject::`vftable';
  InterlockedDecrement(&NiRefObject_objcount);
}
