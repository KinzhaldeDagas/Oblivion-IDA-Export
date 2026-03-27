void __thiscall sub_88A660(_DWORD *this, float a2)
{
  int v3; // esi
  double v4; // st7
  int v5; // ecx
  float v6; // [esp+0h] [ebp-Ch]

  if ( *(this + 2) )
  {
    v3 = 0;
    if ( (int)*(this + 0x19) > 0 )
    {
      v4 = a2;
      do
      {
        v5 = *(_DWORD *)(*(this + 0x18) + 4 * v3);
        if ( v5 )
        {
          if ( 0.0 != v4 )
          {
            v6 = v4;
            (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v5 + 0x14))(LODWORD(v6));
            v4 = a2;
          }
        }
        ++v3;
      }
      while ( v3 < *(this + 0x19) );
    }
  }
}
