int __thiscall TESObjectListHead_Clear(_DWORD *this)
{
  _DWORD *v3; // ecx
  int v4; // edi

  if ( *(this + 2) )
  {
    do
    {
      v3 = (_DWORD *)*(this + 2);
      v4 = v3[7];
      if ( v3 )
        (*(void (__thiscall **)(_DWORD *))(*v3 + 0x10))(v3);
      *(this + 2) = v4;
    }
    while ( v4 );
  }
  return TESObjectListHead_Clear_::ClearObjectListHead();
}
