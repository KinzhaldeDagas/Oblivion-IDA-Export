char __thiscall sub_714390(unsigned __int16 *this)
{
  char result; // al
  bool v3; // bl
  unsigned int v4; // edi
  int v5; // eax
  HANDLE *v6; // ecx
  int v7; // ecx
  HANDLE *v8; // ecx
  int v9; // ecx
  HANDLE *v10; // ecx
  int v11; // ecx
  int v12; // eax
  HANDLE *v13; // ecx
  int v14; // ecx
  unsigned int i; // ebx
  int v16; // ebp
  unsigned int j; // edi
  void (__cdecl *v18)(unsigned __int16 *, int); // eax
  DWORD CurrentThreadId; // eax
  bool v20; // zf
  DWORD v21; // eax

  result = (*(int (__thiscall **)(unsigned __int16 *))(*(_DWORD *)this + 0x34))(this); /*0x714398*/
  if ( result ) /*0x71439c*/
  {
    *((_DWORD *)this + 0x9C) = 0; /*0x7143a6*/
    *((_DWORD *)this + 0x9B) = 0; /*0x7143ac*/
    *((_DWORD *)this + 0x9A) = 0; /*0x7143b2*/
    sub_712930(this); /*0x7143b8*/
    v3 = *((_DWORD *)this + 0x36) >= 0x5000001u; /*0x7143c7*/
    if ( *((_DWORD *)this + 0x36) < 0x5000001u || (result = sub_713FF0((int **)this)) != 0 ) /*0x7143d7*/
    {
      if ( *((_DWORD *)this + 0x36) >= 0x5000006u ) /*0x7143e7*/
        sub_713030(this); /*0x7143eb*/
      v4 = *((_DWORD *)this + 0x7D); /*0x7143f1*/
      if ( *((_DWORD *)this + 0x9A) >= v4 ) /*0x7143fd*/
      {
LABEL_14:
        (*(void (__thiscall **)(unsigned __int16 *))(*(_DWORD *)this + 0x48))(this); /*0x714462*/
        for ( ; *((_DWORD *)this + 0x9B) < v4; ++*((_DWORD *)this + 0x9B) ) /*0x714471*/
        {
          if ( *((_DWORD *)this + 0x98) == 3 ) /*0x71447e*/
          {
            v8 = *((HANDLE **)this + 0x9D); /*0x714480*/
            *((_DWORD *)this + 0x98) = 4; /*0x714486*/
            sub_748810(v8); /*0x714490*/
          }
          v9 = *(_DWORD *)(*((_DWORD *)this + 0x7C) + 4 * *((_DWORD *)this + 0x9B)); /*0x7144a1*/
          (*(void (__thiscall **)(int, unsigned __int16 *))(*(_DWORD *)v9 + 0x20))(v9, this); /*0x7144aa*/
        }
        for ( ; *((_DWORD *)this + 0x9C) < v4; ++*((_DWORD *)this + 0x9C) ) /*0x7144d6*/
        {
          if ( *((_DWORD *)this + 0x98) == 3 ) /*0x7144de*/
          {
            v10 = *((HANDLE **)this + 0x9D); /*0x7144e0*/
            *((_DWORD *)this + 0x98) = 4; /*0x7144e6*/
            sub_748810(v10); /*0x7144f0*/
          }
          v11 = *(_DWORD *)(*((_DWORD *)this + 0x7C) + 4 * *((_DWORD *)this + 0x9C)); /*0x714501*/
          (*(void (__thiscall **)(int, unsigned __int16 *))(*(_DWORD *)v11 + 0x3C))(v11, this); /*0x71450a*/
        }
        v12 = *((_DWORD *)this + 0x98); /*0x71451b*/
        if ( v12 == 2 ) /*0x714524*/
          goto LABEL_36; /*0x714524*/
        if ( v12 == 3 ) /*0x71452c*/
        {
          v13 = *((HANDLE **)this + 0x9D); /*0x71452e*/
          *((_DWORD *)this + 0x98) = 4; /*0x714534*/
          sub_748810(v13); /*0x71453e*/
        }
        v14 = unk_B3FB84; /*0x714543*/
        if ( *(_WORD *)(unk_B3FB84 + 0xC) ) /*0x714549*/
        {
          for ( i = 0; i < *((_DWORD *)this + 0x84); ++i ) /*0x714551*/
          {
            v16 = *(_DWORD *)(*((_DWORD *)this + 0x82) + 4 * i); /*0x714566*/
            if ( v16 ) /*0x71456b*/
            {
              for ( j = 0; j < *(unsigned __int16 *)(v14 + 0xA); ++j ) /*0x71456f*/
              {
                v18 = *(void (__cdecl **)(unsigned __int16 *, int))(*(_DWORD *)(v14 + 4) + 4 * j); /*0x714578*/
                if ( v18 ) /*0x71457d*/
                {
                  v18(this, v16); /*0x714581*/
                  v14 = unk_B3FB84; /*0x714583*/
                }
              }
            }
          }
        }
        if ( *((_DWORD *)this + 0x98) == 2 ) /*0x7145ab*/
        {
LABEL_36:
          EnterCriticalSection(&unk_B3FC00); /*0x7145b2*/
          CurrentThreadId = GetCurrentThreadId(); /*0x7145b8*/
          ++unk_B3FC7C; /*0x7145c3*/
          unk_B3FC78 = CurrentThreadId; /*0x7145cf*/
          sub_8BCC50((_DWORD *)this + 0x7B); /*0x7145d4*/
          *((_DWORD *)this + 0x8B) = 0; /*0x7145d9*/
          *((_DWORD *)this + 0x8F) = 0; /*0x7145df*/
          *((_DWORD *)this + 0x8C) = 0; /*0x7145e5*/
          *((_DWORD *)this + 0x90) = 0; /*0x7145eb*/
          v20 = unk_B3FC7C-- == 1; /*0x7145f1*/
          if ( v20 ) /*0x7145f7*/
            unk_B3FC78 = 0; /*0x7145f9*/
          LeaveCriticalSection(&unk_B3FC00); /*0x714604*/
          return 0; /*0x71460d*/
        }
        else
        {
          sub_7126A0(this); /*0x714613*/
          EnterCriticalSection(&unk_B3FC00); /*0x71461d*/
          v21 = GetCurrentThreadId(); /*0x714623*/
          ++unk_B3FC7C; /*0x71462e*/
          unk_B3FC78 = v21; /*0x71463a*/
          sub_8BCC50((_DWORD *)this + 0x7B); /*0x71463f*/
          *((_DWORD *)this + 0x8B) = 0; /*0x714644*/
          *((_DWORD *)this + 0x8F) = 0; /*0x71464a*/
          *((_DWORD *)this + 0x8C) = 0; /*0x714650*/
          *((_DWORD *)this + 0x90) = 0; /*0x714656*/
          v20 = unk_B3FC7C-- == 1; /*0x71465c*/
          if ( v20 ) /*0x714662*/
            unk_B3FC78 = 0; /*0x714664*/
          LeaveCriticalSection(&unk_B3FC00); /*0x71466f*/
          return 1; /*0x714678*/
        }
      }
      else
      {
        while ( 1 ) /*0x714400*/
        {
          v5 = *((_DWORD *)this + 0x98); /*0x714400*/
          if ( v5 == 2 ) /*0x714409*/
            break; /*0x714409*/
          if ( v5 == 3 ) /*0x714412*/
          {
            v6 = *((HANDLE **)this + 0x9D); /*0x714414*/
            *((_DWORD *)this + 0x98) = 4; /*0x71441a*/
            sub_748810(v6); /*0x714424*/
          }
          if ( v3 ) /*0x71442b*/
          {
            v7 = *(_DWORD *)(*((_DWORD *)this + 0x7C) + 4 * *((_DWORD *)this + 0x9A)); /*0x714439*/
            (*(void (__thiscall **)(int, unsigned __int16 *))(*(_DWORD *)v7 + 0x1C))(v7, this); /*0x714442*/
          }
          else if ( !(*(unsigned __int8 (__thiscall **)(unsigned __int16 *))(*(_DWORD *)this + 0x50))(this) ) /*0x714451*/
          {
            break; /*0x714451*/
          }
          if ( ++*((_DWORD *)this + 0x9A) >= v4 ) /*0x714460*/
            goto LABEL_14; /*0x714460*/
        }
        sub_7135C0(this); /*0x7144bd*/
        return 0; /*0x7144c7*/
      }
    }
  }
  return result; /*0x71439e*/
}
