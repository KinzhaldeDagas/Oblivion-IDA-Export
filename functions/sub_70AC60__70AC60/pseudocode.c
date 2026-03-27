void __thiscall sub_70AC60(char **this, NiGeometry *a2, _DWORD **a3)
{
  NiGeometry *v3; // ebx
  unsigned int i; // esi
  int v6; // ecx
  int v7; // eax
  NiGeometry *v8; // edi

  v3 = a2;
  sub_707E90(this, a2, a3);
  for ( i = 0; i < *((unsigned __int16 *)this + 0x5B); ++i )
  {
    v6 = *(_DWORD *)&(*(this + 0x2C))[4 * i];
    if ( v6 )
    {
      v7 = (*(int (__thiscall **)(int, _DWORD **))(*(_DWORD *)v6 + 0x18))(v6, a3);
      ((void (__thiscall *)(NiGeometry *, NiGeometry **, unsigned int, int))v3->__vftable->Unk_24)(v3, &a2, i, v7);
      if ( a2 )
      {
        v8 = a2;
        if ( !InterlockedDecrement((volatile LONG *)&a2->member) )
          v8->__vftable->super.super.super.Destructor((NiRefObject *)v8, 1);
      }
    }
  }
}
