void __thiscall sub_7EE740(_DWORD *this, _DWORD *a2)
{
  _DWORD *v3; // eax
  _DWORD *v4; // eax
  _DWORD *v5; // [esp+4h] [ebp-4h] BYREF

  if ( *(this + 0x23) )
  {
    v3 = (_DWORD *)*(this + 0x21);
    *(this + 0x24) = v3;
    if ( v3 )
    {
      *(this + 0x24) = *v3;
      v3 = (_DWORD *)v3[2];
    }
    v5 = v3;
    if ( v3 )
    {
      while ( v3 != a2 )
      {
        if ( *(this + 0x24) )
        {
          v4 = (_DWORD *)*(this + 0x24);
          *(this + 0x24) = *v4;
          v3 = (_DWORD *)v4[2];
          v5 = v3;
          if ( v3 )
            continue;
        }
        return;
      }
      sub_776690((BSTextureManager *)(this + 0x20), (int *)&v5);
      *(this + 9) = 0;
    }
  }
}
