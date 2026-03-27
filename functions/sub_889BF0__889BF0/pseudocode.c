void __thiscall sub_889BF0(_DWORD *this, char a2)
{
  int v3; // eax

  if ( a2 )
  {
    v3 = *(this + 3);
    if ( v3 )
    {
      if ( v3 != 0xA0 )
        (**(void (__thiscall ***)(int, int))(v3 - 0xA0))(v3 - 0xA0, 1);
    }
    *(this + 3) = 0;
  }
}
