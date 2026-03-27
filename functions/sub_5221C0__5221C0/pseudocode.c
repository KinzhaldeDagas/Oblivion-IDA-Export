void __thiscall sub_5221C0(int *this, _DWORD *a2)
{
  int *v3; // eax
  bool v4; // zf
  int *v5; // eax

  sub_552880(a2);
  if ( *(this + 0x3A) )
  {
    v4 = (*(int (__thiscall **)(int *, int))(*this + 0x128))(this, 0x45) == 0;
    v5 = this + 0x5A;
    if ( v4 )
      v5 = this + 0x42;
    sub_552990((int *)(*(this + 0x3A) + 0x29C), v5, (int)a2, 0, 0.0);
  }
  else
  {
    v3 = (int *)sub_5538D0();
    sub_5528F0(v3, (int)a2);
  }
}
