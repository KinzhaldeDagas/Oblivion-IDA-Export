void __thiscall sub_88A660(_DWORD *this, float a2)
{
  int v3; // esi
  double v4; // st7
  int v5; // ecx
  float v6; // [esp+0h] [ebp-Ch]

  if ( *(this + 2) ) /*0x88a663*/
  {
    v3 = 0; /*0x88a66a*/
    if ( (int)*(this + 0x19) > 0 ) /*0x88a66f*/
    {
      v4 = a2; /*0x88a671*/
      do /*0x88a69f*/
      {
        v5 = *(_DWORD *)(*(this + 0x18) + 4 * v3); /*0x88a678*/
        if ( v5 ) /*0x88a67d*/
        {
          if ( 0.0 != v4 ) /*0x88a688*/
          {
            v6 = v4; /*0x88a690*/
            (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v5 + 0x14))(LODWORD(v6)); /*0x88a693*/
            v4 = a2; /*0x88a695*/
          }
        }
        ++v3; /*0x88a699*/
      }
      while ( v3 < *(this + 0x19) ); /*0x88a69f*/
    }
  }
}
