void __thiscall sub_700160(unsigned __int16 *this, int a2)
{
  Atmosphere *v3; // esi
  NiAVObject *v4; // ebx
  unsigned int i; // esi
  int v6; // ecx

  nullsub_returnvVoid_1arg(a2);
  if ( *(_DWORD *)(a2 + 0xD8) < 0x500000Bu )
  {
    v3 = *((Atmosphere **)this + 4);
    if ( v3 )
    {
      *((_DWORD *)this + 4) = 0;
      do
      {
        v4 = sub_452A60(v3);
        sub_733830(v3);
        NiNode_AddNiExtraData((const void **)this, (int)v4, (unsigned int *)v3);
        v3 = (Atmosphere *)v4;
      }
      while ( v4 );
    }
  }
  for ( i = 0; i < *(this + 0xA); ++i )
  {
    v6 = *(_DWORD *)(*((_DWORD *)this + 4) + 4 * (unsigned __int16)i);
    if ( v6 )
    {
      if ( (char *)(*(int (__thiscall **)(int))(*(_DWORD *)v6 + 4))(v6) == dword_B3FFA8 )
      {
        sub_6FFBE0(this, i);
        i = 0xFFFFFFFF;
      }
    }
  }
}
