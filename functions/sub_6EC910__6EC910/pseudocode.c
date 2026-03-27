void __thiscall sub_6EC910(float *this, _DWORD *a2, int *a3)
{
  int v4; // ecx
  int v5; // eax

  sub_715D80(this, (int)a2, a3);
  v4 = *((_DWORD *)this + 0x10);
  if ( v4 )
  {
    v5 = (*(int (__thiscall **)(int, int *))(*(_DWORD *)v4 + 0x18))(v4, a3);
    sub_6EC7C0(a2, v5);
  }
}
