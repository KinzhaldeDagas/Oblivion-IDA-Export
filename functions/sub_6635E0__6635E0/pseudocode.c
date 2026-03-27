void __thiscall sub_6635E0(_DWORD *this, int a2)
{
  int *v3; // ecx
  float *v4; // eax
  _DWORD **sound; // ecx
  int SchoolFailureSound; // eax

  v3 = (int *)*(this + a2 + 0x1DA);
  if ( v3 )
  {
    sub_6B7240(v3);
    v4 = (float *)(*(int (__thiscall **)(_DWORD *))(*this + 0x174))(this);
    sub_6B7360((int *)*(this + a2 + 0x1DA), *v4, v4[1], v4[2]);
    sound = (_DWORD **)OSGlobals->sound;
    if ( sound )
      sub_6AC3E0(sound, *(_DWORD *)*(this + a2 + 0x1DA), (LONG)this);
    sub_6B7190((int *)*(this + a2 + 0x1DA), 0);
  }
  else
  {
    SchoolFailureSound = Magic_GetSchoolFailureSound(a2);
    if ( SchoolFailureSound )
      *(this + a2 + 0x1DA) = sub_65AC50(this, *(_DWORD *)(SchoolFailureSound + 0xC), 0, 2, 1);
  }
}
