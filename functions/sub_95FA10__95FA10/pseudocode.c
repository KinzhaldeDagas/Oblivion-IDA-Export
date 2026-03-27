void __thiscall sub_95FA10(unsigned __int16 *this, _DWORD *a2)
{
  _DWORD *v2; // ebx
  NiTArray_NiTexturingPropertyMap *v4; // ebp
  unsigned int i; // esi
  int v6; // edi
  _DWORD *v7; // eax
  int v8; // edx

  v2 = a2;
  if ( (*(int (__thiscall **)(_DWORD *))(*a2 + 0xC))(a2) == 4 )
  {
    sub_95F900(this);
    v4 = (NiTArray_NiTexturingPropertyMap *)(this + 2);
    NiTArray_SetSize(this + 2, *((unsigned __int16 *)v2 + 7));
    for ( i = 0; i < *((unsigned __int16 *)v2 + 7); NiTArray_SetAt(v4, i++, &a2) )
    {
      v6 = *(_DWORD *)(v2[2] + 4 * i);
      v7 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v6 + 0x18))(v6);
      v8 = *v7;
      a2 = v7;
      (*(void (__thiscall **)(_DWORD *, int))(v8 + 0x20))(v7, v6);
    }
  }
}
