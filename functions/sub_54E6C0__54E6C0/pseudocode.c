char __thiscall sub_54E6C0(void *this, int a2)
{
  int v3; // edi
  int v4; // edi
  int v5; // edi
  double v7; // [esp+10h] [ebp-8h]

  if ( a2 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 0x40))(a2) )
    {
      v3 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 4))(a2);
      if ( v3 == (*(int (__thiscall **)(void *))(*(_DWORD *)this + 4))(this) )
      {
        v4 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x50))(a2);
        if ( v4 == (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x50))(this) )
        {
          v5 = 0;
          if ( !(*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x50))(this) )
            return 0;
          while ( 1 )
          {
            v7 = ((double (__thiscall *)(int, int))*(_DWORD *)(*(_DWORD *)a2 + 0x48))(a2, v5);
            if ( ((double (__thiscall *)(void *, int))*(_DWORD *)(*(_DWORD *)this + 0x48))(this, v5) != v7 )
              break;
            if ( ++v5 >= (unsigned int)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x50))(this) )
              return 0;
          }
        }
      }
    }
  }
  return 1;
}
