char __thiscall sub_714390(unsigned __int16 *this)
{
  char result; // al
  bool v3; // bl
  unsigned int v4; // edi
  int v5; // eax
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // eax
  int v13; // ecx
  int v14; // ecx
  unsigned int i; // ebx
  int v16; // ebp
  unsigned int j; // edi
  void (__cdecl *v18)(unsigned __int16 *, int); // eax
  DWORD CurrentThreadId; // eax
  bool v20; // zf
  DWORD v21; // eax

  result = (*(int (__thiscall **)(unsigned __int16 *))(*(_DWORD *)this + 0x34))(this);
  if ( result )
  {
    *((_DWORD *)this + 0x9C) = 0;
    *((_DWORD *)this + 0x9B) = 0;
    *((_DWORD *)this + 0x9A) = 0;
    sub_712930(this);
    v3 = *((_DWORD *)this + 0x36) >= 0x5000001u;
    if ( *((_DWORD *)this + 0x36) < 0x5000001u || (result = sub_713FF0(this)) != 0 )
    {
      if ( *((_DWORD *)this + 0x36) >= 0x5000006u )
        sub_713030(this);
      v4 = *((_DWORD *)this + 0x7D);
      if ( *((_DWORD *)this + 0x9A) >= v4 )
      {
LABEL_14:
        (*(void (__thiscall **)(unsigned __int16 *))(*(_DWORD *)this + 0x48))(this);
        for ( ; *((_DWORD *)this + 0x9B) < v4; ++*((_DWORD *)this + 0x9B) )
        {
          if ( *((_DWORD *)this + 0x98) == 3 )
          {
            v8 = *((_DWORD *)this + 0x9D);
            *((_DWORD *)this + 0x98) = 4;
            sub_748810(v8);
          }
          v9 = *(_DWORD *)(*((_DWORD *)this + 0x7C) + 4 * *((_DWORD *)this + 0x9B));
          (*(void (__thiscall **)(int, unsigned __int16 *))(*(_DWORD *)v9 + 0x20))(v9, this);
        }
        for ( ; *((_DWORD *)this + 0x9C) < v4; ++*((_DWORD *)this + 0x9C) )
        {
          if ( *((_DWORD *)this + 0x98) == 3 )
          {
            v10 = *((_DWORD *)this + 0x9D);
            *((_DWORD *)this + 0x98) = 4;
            sub_748810(v10);
          }
          v11 = *(_DWORD *)(*((_DWORD *)this + 0x7C) + 4 * *((_DWORD *)this + 0x9C));
          (*(void (__thiscall **)(int, unsigned __int16 *))(*(_DWORD *)v11 + 0x3C))(v11, this);
        }
        v12 = *((_DWORD *)this + 0x98);
        if ( v12 == 2 )
          goto LABEL_36;
        if ( v12 == 3 )
        {
          v13 = *((_DWORD *)this + 0x9D);
          *((_DWORD *)this + 0x98) = 4;
          sub_748810(v13);
        }
        v14 = dword_B3FB84;
        if ( *(_WORD *)(dword_B3FB84 + 0xC) )
        {
          for ( i = 0; i < *((_DWORD *)this + 0x84); ++i )
          {
            v16 = *(_DWORD *)(*((_DWORD *)this + 0x82) + 4 * i);
            if ( v16 )
            {
              for ( j = 0; j < *(unsigned __int16 *)(v14 + 0xA); ++j )
              {
                v18 = *(void (__cdecl **)(unsigned __int16 *, int))(*(_DWORD *)(v14 + 4) + 4 * j);
                if ( v18 )
                {
                  v18(this, v16);
                  v14 = dword_B3FB84;
                }
              }
            }
          }
        }
        if ( *((_DWORD *)this + 0x98) == 2 )
        {
LABEL_36:
          EnterCriticalSection(&stru_B3FC00);
          CurrentThreadId = GetCurrentThreadId();
          ++dword_B3FC7C;
          dword_B3FC78 = CurrentThreadId;
          sub_8BCC50((_DWORD *)this + 0x7B);
          *((_DWORD *)this + 0x8B) = 0;
          *((_DWORD *)this + 0x8F) = 0;
          *((_DWORD *)this + 0x8C) = 0;
          *((_DWORD *)this + 0x90) = 0;
          v20 = dword_B3FC7C-- == 1;
          if ( v20 )
            dword_B3FC78 = 0;
          LeaveCriticalSection(&stru_B3FC00);
          return 0;
        }
        else
        {
          sub_7126A0(this);
          EnterCriticalSection(&stru_B3FC00);
          v21 = GetCurrentThreadId();
          ++dword_B3FC7C;
          dword_B3FC78 = v21;
          sub_8BCC50((_DWORD *)this + 0x7B);
          *((_DWORD *)this + 0x8B) = 0;
          *((_DWORD *)this + 0x8F) = 0;
          *((_DWORD *)this + 0x8C) = 0;
          *((_DWORD *)this + 0x90) = 0;
          v20 = dword_B3FC7C-- == 1;
          if ( v20 )
            dword_B3FC78 = 0;
          LeaveCriticalSection(&stru_B3FC00);
          return 1;
        }
      }
      else
      {
        while ( 1 )
        {
          v5 = *((_DWORD *)this + 0x98);
          if ( v5 == 2 )
            break;
          if ( v5 == 3 )
          {
            v6 = *((_DWORD *)this + 0x9D);
            *((_DWORD *)this + 0x98) = 4;
            sub_748810(v6);
          }
          if ( v3 )
          {
            v7 = *(_DWORD *)(*((_DWORD *)this + 0x7C) + 4 * *((_DWORD *)this + 0x9A));
            (*(void (__thiscall **)(int, unsigned __int16 *))(*(_DWORD *)v7 + 0x1C))(v7, this);
          }
          else if ( !(*(unsigned __int8 (__thiscall **)(unsigned __int16 *))(*(_DWORD *)this + 0x50))(this) )
          {
            break;
          }
          if ( ++*((_DWORD *)this + 0x9A) >= v4 )
            goto LABEL_14;
        }
        sub_7135C0(this);
        return 0;
      }
    }
  }
  return result;
}
