void __thiscall sub_7748F0(int this)
{
  int v2; // ebp
  bool v3; // al
  NiDevImageConverter *v4; // eax
  int v5; // eax
  bool v6; // zf
  int v7; // edi
  unsigned int v8; // ebx

  if ( !*(_BYTE *)(this + 0x64) )
  {
    v2 = *(_DWORD *)(*(_DWORD *)(this + 4) + 0x3C);
    if ( v2 )
    {
      v3 = sub_760D70((Ni2DBuffer **)this, *(Ni2DBuffer **)(v2 + 0x4C));
      if ( *(_DWORD *)(v2 + 0x68) != *(_DWORD *)(this + 0x7C) || v3 )
      {
        v4 = sub_71B280();
        v5 = (*(int (__thiscall **)(NiDevImageConverter *, int, int, int, _DWORD))(*(_DWORD *)v4 + 0x10))(
               v4,
               v2,
               this + 0xC,
               v2,
               *(unsigned __int8 *)(this + 0x65));
        v6 = *(_DWORD *)(this + 0x50) == 0;
        v7 = v5;
        *(_DWORD *)(this + 0x7C) = *(_DWORD *)(v2 + 0x68);
        if ( !v6 )
        {
          v8 = 0;
          if ( *(_DWORD *)(v5 + 0x6C) )
          {
            do
              sub_7744D0((_DWORD *)this, (_DWORD *)v7, v8++);
            while ( v8 < *(_DWORD *)(v7 + 0x6C) );
          }
        }
        if ( v7 )
        {
          InterlockedIncrement((volatile LONG *)(v7 + 4));
          if ( !InterlockedDecrement((volatile LONG *)(v7 + 4)) )
            (**(void (__thiscall ***)(int, int))v7)(v7, 1);
        }
      }
    }
  }
}
