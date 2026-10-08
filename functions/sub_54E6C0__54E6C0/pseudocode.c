char __thiscall sub_54E6C0(void *this, int a2)
{
  int v3; // edi
  int v4; // edi
  int v5; // edi
  double v7; // [esp+10h] [ebp-8h]

  if ( a2 ) /*0x54e6d3*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 0x40))(a2) ) /*0x54e6e0*/
    {
      v3 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 4))(a2); /*0x54e6ef*/
      if ( v3 == (*(int (__thiscall **)(void *))(*(_DWORD *)this + 4))(this) ) /*0x54e6fc*/
      {
        v4 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x50))(a2); /*0x54e707*/
        if ( v4 == (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x50))(this) ) /*0x54e714*/
        {
          v5 = 0; /*0x54e71d*/
          if ( !(*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x50))(this) ) /*0x54e723*/
            return 0; /*0x54e760*/
          while ( 1 ) /*0x54e72f*/
          {
            v7 = ((double (__thiscall *)(int, int))*(_DWORD *)(*(_DWORD *)a2 + 0x48))(a2, v5); /*0x54e72f*/
            if ( ((double (__thiscall *)(void *, int))*(_DWORD *)(*(_DWORD *)this + 0x48))(this, v5) != v7 ) /*0x54e746*/
              break; /*0x54e746*/
            if ( ++v5 >= (unsigned int)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x50))(this) ) /*0x54e756*/
              return 0; /*0x54e756*/
          }
        }
      }
    }
  }
  return 1; /*0x54e75a*/
}
