void __thiscall sub_628600(_DWORD *this)
{
  int v2; // ecx
  _DWORD *v3; // eax

  v2 = *(this + 0xB);
  if ( v2 )
  {
    v3 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v2 + 0x174))(v2);
    *(this + 0x35) = *v3;
    *(this + 0x36) = v3[1];
    *(this + 0x37) = v3[2];
  }
}
