int __thiscall sub_471990(void *this)
{
  unsigned __int16 v2; // ax
  _DWORD *v3; // esi
  int v4; // ebp
  int **v5; // edi
  int *v6; // edi
  int v7; // esi
  int v8; // eax
  int v9; // eax
  int v10; // eax
  void (__thiscall ***v11)(_DWORD, int); // esi
  int result; // eax
  int k; // [esp+28h] [ebp-10h]
  int j; // [esp+2Ch] [ebp-Ch]
  int i; // [esp+30h] [ebp-8h]
  int v16; // [esp+34h] [ebp-4h] BYREF

  for ( i = 0; i < 4; ++i )
  {
    for ( j = 0; j < 6; ++j )
    {
      for ( k = 0x16; k <= 0x1A; ++k )
      {
        v2 = sub_51A9B0(i, j, k);
        v3 = *((_DWORD **)this + 0x27);
        v4 = v2;
        v5 = *(int ***)(v3[2] + 4 * (*(int (__thiscall **)(_DWORD *, _DWORD))(*v3 + 4))(v3, v2));
        if ( v5 )
        {
          while ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v3 + 8))(
                     v3,
                     v4,
                     *((unsigned __int16 *)v5 + 2)) )
          {
            v5 = (int **)*v5;
            if ( !v5 )
              goto LABEL_24;
          }
          v6 = v5[2];
          v7 = (*(int (__thiscall **)(int *, unsigned int))(*v6 + 0x10))(v6, 0xFFFFFFFF);
          if ( *((_DWORD *)this + 0x2B) == v7 )
          {
            if ( *((_DWORD *)this + 0x26) )
            {
              v8 = *((_DWORD *)this + 0x2B);
              if ( v8 )
              {
                if ( *(_DWORD *)(v8 + 0x44) )
                {
                  v9 = *(_DWORD *)(v8 + 0x58);
                  if ( v9 )
                    sub_6C9CB0(v9, 0.0, 0);
                  if ( *(_DWORD *)(*((_DWORD *)this + 0x2B) + 0x44) == 5 )
                    sub_6C4480(*((_DWORD **)this + 0x26), 0.0);
                  sub_6C9CB0(*((_DWORD *)this + 0x2B), 0.0, 0);
                }
              }
            }
            *((_DWORD *)this + 0x2B) = 0;
            *((_WORD *)this + 0x21) = 0xFF;
            *((_WORD *)this + 0x3B) = 0xFF;
            *((_DWORD *)this + 0x15) = 0xFFFFFFFF;
          }
          v10 = sub_4359D0(ModelLoaderPtr, v7);
          if ( v10 )
            InterlockedDecrement((volatile LONG *)(v10 + 0xC));
          sub_4708B0(*((_DWORD **)this + 0x27), v4);
          sub_6C4A10(*((unsigned __int16 **)this + 0x26), &v16, v7);
          if ( v16 )
          {
            v11 = (void (__thiscall ***)(_DWORD, int))v16;
            if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) )
              (**v11)(v11, 1);
          }
          (*(void (__thiscall **)(int *, _DWORD))(*v6 + 4))(v6, 0);
          (*(void (__thiscall **)(int *, int))*v6)(v6, 1);
        }
LABEL_24:
        ;
      }
    }
    result = i + 1;
  }
  return result;
}
