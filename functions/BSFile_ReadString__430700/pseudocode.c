unsigned int __thiscall BSFile_ReadString(_DWORD *this, BSStringT *a2, unsigned int a3)
{
  bool v4; // zf
  int v5; // esi
  int v6; // ebx
  unsigned int v7; // ebp
  int (__cdecl *v8)(_DWORD *, char *, int, int *, int); // eax
  int v9; // eax
  char v10; // al
  int v12; // [esp+10h] [ebp-114h] BYREF
  BSStringT *v13; // [esp+14h] [ebp-110h]
  int v14; // [esp+18h] [ebp-10Ch] BYREF
  char v15[260]; // [esp+1Ch] [ebp-108h] BYREF

  v4 = *(this + 7) == 0;
  v13 = a2;
  if ( v4 )
    (*(void (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*this + 0x18))(this, 0, 0);
  v5 = 0;
  v6 = 0;
  v7 = 0;
  while ( 1 )
  {
    do
    {
      v8 = (int (__cdecl *)(_DWORD *, char *, int, int *, int))*(this + 1);
      v14 = 1;
      v9 = v8(this, (char *)&v12 + 3, 1, &v14, 1);
      v7 += v9;
      if ( v9 == 1 )
      {
        v10 = HIBYTE(v12);
      }
      else
      {
        v10 = 0;
        HIBYTE(v12) = 0;
      }
      if ( v7 > a3 )
      {
        v10 = 0;
        HIBYTE(v12) = 0;
      }
      v15[v5++] = v10;
    }
    while ( v5 != 0x103 && v10 );
    v15[v5] = 0;
    if ( v6 )
      BSStringT_Append(v13, v15);
    else
      BSStringT_Set(v13, v15, 0);
    v6 += v5;
    if ( !HIBYTE(v12) )
      break;
    v5 = 0;
  }
  return v7;
}
