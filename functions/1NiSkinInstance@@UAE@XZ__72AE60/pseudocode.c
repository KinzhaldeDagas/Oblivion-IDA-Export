void __thiscall NiSkinInstance::~NiSkinInstance(NiSkinInstance *this)
{
  int v2; // edi
  LONG (__stdcall *v3)(volatile LONG *); // ebx
  int v4; // edi

  *(_DWORD *)this = &NiSkinInstance::`vftable';
  FormHeapFree(*((_DWORD *)this + 5));
  sub_701520((int)this);
  v2 = *((_DWORD *)this + 3);
  v3 = InterlockedDecrement;
  if ( v2 )
  {
    if ( !v3((volatile LONG *)(v2 + 4)) )
      (**(void (__thiscall ***)(int, int))v2)(v2, 1);
  }
  v4 = *((_DWORD *)this + 2);
  if ( v4 )
  {
    if ( !v3((volatile LONG *)(v4 + 4)) )
      (**(void (__thiscall ***)(int, int))v4)(v4, 1);
  }
  NiRefObject_destr(this);
}
