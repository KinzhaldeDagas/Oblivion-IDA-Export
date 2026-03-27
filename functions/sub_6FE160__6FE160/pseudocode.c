void __thiscall sub_6FE160(unsigned __int16 *this, _DWORD *a2)
{
  unsigned int v3; // eax
  unsigned int v4; // esi
  unsigned int v5; // esi
  unsigned int v6; // ebx
  int v7; // esi
  int v8; // eax

  nullsub_returnvVoid_1arg((int)a2);
  v3 = sub_7124D0(a2);
  v4 = v3;
  if ( v3 )
  {
    NiTArray_SetSize(this + 4, v3);
    v5 = v4 >> 1;
    if ( v5 )
    {
      v6 = v5;
      do
      {
        v7 = sub_7124A0(a2);
        v8 = sub_7124A0(a2);
        if ( v7 )
        {
          if ( v8 )
            (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v7 + 0x84))(v7, v8, 0);
        }
        --v6;
      }
      while ( v6 );
    }
  }
}
