void __thiscall sub_708B80(_DWORD *this)
{
  _DWORD *v2; // esi
  int *v3; // ecx
  _DWORD *v4; // ebx
  int v5; // eax
  bool v6; // zf

  if ( *(this + 0x32) )
  {
    v2 = this + 0x2F;
    do
    {
      v3 = (int *)*(this + 0x30);
      v4 = (_DWORD *)v3[2];
      v5 = *v3;
      v6 = *v3 == 0;
      *(this + 0x30) = *v3;
      if ( v6 )
        *(this + 0x31) = 0;
      else
        *(_DWORD *)(v5 + 4) = 0;
      (*(void (__thiscall **)(_DWORD *, int *))(*v2 + 8))(this + 0x2F, v3);
      --*(this + 0x32);
      sub_70B930(v4, (int)this);
    }
    while ( *(this + 0x32) );
  }
}
