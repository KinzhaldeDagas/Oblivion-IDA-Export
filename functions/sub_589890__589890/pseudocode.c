int __thiscall sub_589890(_DWORD *this)
{
  int result; // eax
  _DWORD *v3; // esi
  int v4; // edi

  result = *(this + 9);
  if ( result )
  {
    if ( *(_WORD *)(result + 0x14) )
    {
      result = *(_DWORD *)(result + 0x10);
      v3 = *(_DWORD **)result;
      v4 = 0;
      if ( *(_DWORD *)result )
      {
        while ( 1 )
        {
          result = (*(int (__thiscall **)(_DWORD *))(*v3 + 4))(v3);
          if ( result )
            break;
LABEL_7:
          result = *(_DWORD *)(*(this + 9) + 0x10);
          v3 = *(_DWORD **)(result + 4 * (unsigned __int16)++v4);
          if ( !v3 )
            return result;
        }
        while ( (char *)result != dword_B3FD44 )
        {
          result = *(_DWORD *)(result + 4);
          if ( !result )
            goto LABEL_7;
        }
        v3[3] = 0;
      }
    }
  }
  return result;
}
