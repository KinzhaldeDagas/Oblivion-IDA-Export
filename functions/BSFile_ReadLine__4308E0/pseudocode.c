int __thiscall BSFile_ReadLine(_DWORD *this, _BYTE *a2, unsigned int a3, unsigned __int16 a4)
{
  unsigned int v4; // esi
  int v5; // ebx
  int v6; // edi
  _BYTE *v7; // ebp
  int (__cdecl *v8)(_DWORD *, _BYTE **, int, int *, int); // eax
  int v9; // eax
  _DWORD *v11; // [esp+Ch] [ebp-8h]
  int v12; // [esp+10h] [ebp-4h] BYREF

  v4 = 1;
  v5 = 0;
  v6 = 0;
  v11 = this;
  if ( a3 <= 1 )
  {
    *a2 = 0;
    return 0;
  }
  else
  {
    v7 = a2;
    while ( 1 )
    {
      v8 = (int (__cdecl *)(_DWORD *, _BYTE **, int, int *, int))*(this + 1);
      v12 = 1;
      v9 = v8(this, &a2, 1, &v12, 1);
      v5 += v9;
      if ( v9 != 1 )
        break;
      if ( (char)a2 == a4 )
        break;
      v7[v4++ - 1] = (_BYTE)a2;
      ++v6;
      if ( v4 >= a3 )
        break;
      this = v11;
    }
    v7[v6] = 0;
    return v5;
  }
}
