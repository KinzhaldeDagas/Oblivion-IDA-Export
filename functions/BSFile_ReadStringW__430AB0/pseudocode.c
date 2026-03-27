unsigned int __thiscall BSFile_ReadStringW(_DWORD *this, unsigned __int16 *a2, unsigned int a3)
{
  bool v4; // zf
  int v5; // esi
  int v6; // ebp
  unsigned int v7; // ebx
  int (__cdecl *v8)(_DWORD *, int *, int, int *, int); // eax
  int v9; // eax
  __int16 v10; // ax
  int v12; // [esp+10h] [ebp-218h] BYREF
  unsigned __int16 *v13; // [esp+14h] [ebp-214h]
  int v14; // [esp+18h] [ebp-210h] BYREF
  __int16 v15[260]; // [esp+1Ch] [ebp-20Ch] BYREF

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
      v8 = (int (__cdecl *)(_DWORD *, int *, int, int *, int))*(this + 1);
      v14 = 1;
      v9 = v8(this, &v12, 2, &v14, 1);
      v7 += v9;
      if ( v9 == 2 )
      {
        v10 = v12;
      }
      else
      {
        v10 = 0;
        v12 = 0;
      }
      if ( v7 > a3 )
      {
        v10 = 0;
        v12 = 0;
      }
      v15[v5++] = v10;
    }
    while ( v5 != 0x104 && v10 );
    if ( v6 )
      BSWStringT_Append(v13, (const unsigned __int16 *)v15);
    else
      BSWStringT_Set(v13, (const unsigned __int16 *)v15, 0);
    v6 += v5;
    if ( !(_WORD)v12 )
      break;
    v5 = 0;
  }
  return v7 >> 1;
}
