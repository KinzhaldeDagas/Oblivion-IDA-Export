int __thiscall sub_96E250(_DWORD *this, int a2)
{
  int v2; // edi

  v2 = a2;
  sub_711D00(this, a2);
  sub_96DE80(v2, (int)(this + 9));
  sub_96DE80(v2, (int)(this + 0xA));
  if ( *(this + 0xB) )
  {
    LOBYTE(a2) = 1;
    sub_7127E0(v2, (int)&a2);
    return (*(int (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 0xB) + 4))(*(this + 0xB), v2);
  }
  else
  {
    LOBYTE(a2) = 0;
    return sub_7127E0(v2, (int)&a2);
  }
}
