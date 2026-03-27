void __thiscall sub_8CACE0(_DWORD *this, int a2)
{
  int v3; // ecx

  if ( *(this + 0xFFFFFFEE) )
  {
    v3 = *(_DWORD *)(a2 + 0xC);
    if ( v3 )
    {
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 0xC))(v3) != 0xB )
        sub_8CA1D0((int *)*(this + 0xFFFFFFEE), a2);
    }
  }
}
