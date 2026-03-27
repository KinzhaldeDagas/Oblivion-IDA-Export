int __thiscall sub_748330(_DWORD *this, _BYTE *a2, unsigned int a3)
{
  unsigned int v3; // ebx
  int v4; // edi
  int v5; // esi
  _BYTE *v6; // ebp
  int (__cdecl *v7)(_DWORD *, _BYTE **, int, int *, int); // eax
  int v8; // eax
  _DWORD *v10; // [esp+Ch] [ebp-8h]
  int v11; // [esp+10h] [ebp-4h] BYREF

  v3 = 1;
  v4 = 0;
  v5 = 0;
  v10 = this;
  if ( a3 <= 1 )
  {
    *a2 = 0;
    return 0;
  }
  else
  {
    v6 = a2;
    while ( 1 )
    {
      v7 = (int (__cdecl *)(_DWORD *, _BYTE **, int, int *, int))*(this + 1);
      v11 = 1;
      v8 = v7(this, &a2, 1, &v11, 1);
      v4 += v8;
      if ( v8 != 1 )
        break;
      if ( (_BYTE)a2 == 0xA )
        break;
      if ( (_BYTE)a2 != 0xD )
      {
        v6[v3 - 1] = (_BYTE)a2;
        ++v5;
        ++v3;
      }
      if ( v3 >= a3 )
        break;
      this = v10;
    }
    v6[v5] = 0;
    return v4;
  }
}
