void __thiscall sub_798630(int this, _DWORD *a2, unsigned __int16 a3, int a4, int a5, int a6)
{
  int v6; // edx

  v6 = *(_DWORD *)(this + 0x2C);
  if ( v6 )
  {
    if ( a3 < *(_WORD *)(this + 0x28) )
    {
      if ( *(_DWORD *)(this + 0x10) )
      {
        if ( *(_DWORD *)(this + 0x24) )
        {
          if ( *(_DWORD *)(this + 0x20) )
          {
            if ( *(_DWORD *)(this + 4) )
            {
              if ( *(_DWORD *)(this + 0xC) )
              {
                qmemcpy(a2, (const void *)(v6 + 0x44 * a3), 0x3Cu);
                *(_BYTE *)a2 = 1;
                a2[2] = a3;
              }
            }
          }
        }
      }
    }
  }
}
