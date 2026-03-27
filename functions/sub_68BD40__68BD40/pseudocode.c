void __thiscall sub_68BD40(float ***this, Actor *a2, float *a3)
{
  float *v4; // eax

  if ( a2 )
  {
    sub_68A160(this);
    if ( sub_8AA390(v4, a3) || ((unsigned __int8 (__thiscall *)(float ***))(*this)[3])(this) )
    {
      sub_68AFB0(this, a2, a3);
      if ( !sub_6825C0((_DWORD *)dword_B3BF80, a2) )
        ((void (__thiscall *)(float ***, Actor *, float *, _DWORD))(*this)[5])(this, a2, a3, 0);
    }
  }
}
