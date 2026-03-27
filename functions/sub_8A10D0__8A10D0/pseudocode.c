int __thiscall sub_8A10D0(_DWORD *this, int a2, _DWORD **a3)
{
  _DWORD *v3; // esi
  int (__stdcall *v4)(char *); // edx
  int v5; // eax
  int v6; // edi
  int v7; // ebx
  int v8; // eax
  int v9; // esi
  int v10; // eax
  int v11; // eax
  char v13; // [esp+Fh] [ebp-5h] BYREF
  _DWORD *v14; // [esp+10h] [ebp-4h]

  v3 = this;
  v4 = *(int (__stdcall **)(char *))(*this + 0x74);
  v14 = this;
  v5 = v4(&v13);
  v6 = v5;
  if ( v5 )
  {
    v7 = 0;
    if ( *(int *)(v5 + 8) > 0 )
    {
      do
      {
        v8 = *(_DWORD *)(*(_DWORD *)(v6 + 4) + 4 * v7);
        if ( v8 )
          v9 = *(_DWORD *)(v8 + 8);
        else
          v9 = 0;
        if ( v9 )
        {
          if ( !(*(unsigned __int8 (__thiscall **)(int, _DWORD **))(*(_DWORD *)v9 + 0x8C))(v9, a3) )
          {
            v10 = (*(int (__thiscall **)(int, _DWORD **))(*(_DWORD *)v9 + 0x18))(v9, a3);
            if ( v10 )
              v11 = *(_DWORD *)(v10 + 8);
            else
              v11 = 0;
            *(_DWORD *)(*(_DWORD *)(v6 + 4) + 4 * v7) = v11;
          }
        }
        ++v7;
      }
      while ( v7 < *(_DWORD *)(v6 + 8) );
      v3 = v14;
    }
  }
  return sub_8A2670(v3, a2, a3);
}
