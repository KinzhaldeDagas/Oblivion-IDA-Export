int __userpurge sub_730A50@<eax>(NiRenderer *this@<ecx>, size_t Size)
{
  int v2; // edi
  int (__cdecl *v4)(int, NiPropertyState **, int, size_t *, int); // edx
  int v6; // [esp-14h] [ebp-1Ch]
  size_t v7; // [esp-4h] [ebp-Ch]

  v2 = Size;
  LODWORD(v7) = Size;
  sub_721610(this, v7);
  v4 = *(int (__cdecl **)(int, NiPropertyState **, int, size_t *, int))(*(_DWORD *)(v2 + 0x21C) + 4);
  v6 = *(_DWORD *)(v2 + 0x21C);
  LODWORD(Size) = 4;
  return v4(v6, &this->members.propertyState, 4, &Size, 1);
}
