unsigned int __thiscall sub_4730B0(_DWORD *this)
{
  unsigned int result; // eax
  unsigned int v3; // ebx
  unsigned int i; // edi
  int v5; // ecx
  int v6; // esi
  int v7; // eax
  char v8; // al

  result = *(this + 0x26);
  if ( result )
  {
    v3 = *(unsigned __int16 *)(result + 0x46);
    for ( i = 0; i < v3; ++i )
    {
      result = *(this + 0x26);
      v5 = *(_DWORD *)(result + 0x40);
      v6 = *(_DWORD *)(v5 + 4 * i);
      if ( v6 )
      {
        v7 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v6 + 4))(*(_DWORD *)(v5 + 4 * i));
        if ( v7 )
        {
          while ( (char *)v7 != dword_B35270 )
          {
            v7 = *(_DWORD *)(v7 + 4);
            if ( !v7 )
              goto LABEL_7;
          }
          v8 = 1;
        }
        else
        {
LABEL_7:
          v8 = 0;
        }
        result = v8 != 0 ? v6 : 0;
        if ( result )
          result = sub_49F520((_DWORD *)result);
      }
    }
  }
  return result;
}
