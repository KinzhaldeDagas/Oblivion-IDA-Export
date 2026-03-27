int __thiscall sub_715E70(_DWORD *this, _DWORD *a2)
{
  int v3; // eax
  int v4; // esi
  int v5; // ebx
  int result; // eax
  int v7; // edi

  v3 = sub_7124A0(a2);
  v4 = *(this + 0xD);
  v5 = v3;
  if ( v4 != v3 )
  {
    if ( v4 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) )
        (**(void (__thiscall ***)(int, int))v4)(v4, 1);
    }
    *(this + 0xD) = v5;
    if ( v5 )
      InterlockedIncrement((volatile LONG *)(v5 + 4));
  }
  result = sub_7124A0(a2);
  *(this + 0xC) = result;
  if ( a2[0x36] < 0xA000110u )
  {
    result = (*(int (__thiscall **)(_DWORD *))(*this + 0x60))(this);
    if ( (_BYTE)result )
    {
      v7 = *(this + 0xC);
      if ( v7 )
        *(_WORD *)(*(_DWORD *)(v7 + 0xB4) + 0x2E) = *(_WORD *)(*(_DWORD *)(v7 + 0xB4) + 0x2E) & 0xFFF | 0x8000;
    }
  }
  return result;
}
