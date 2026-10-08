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

  v4 = *(this + 7) == 0; /*0x430721*/
  v13 = a2; /*0x430725*/
  if ( v4 ) /*0x430729*/
    (*(void (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*this + 0x18))(this, 0, 0); /*0x430734*/
  v5 = 0; /*0x430736*/
  v6 = 0; /*0x430738*/
  v7 = 0; /*0x43073a*/
  while ( 1 ) /*0x430792*/
  {
    do /*0x430792*/
    {
      v8 = (int (__cdecl *)(_DWORD *, char *, int, int *, int))*(this + 1); /*0x430740*/
      v14 = 1; /*0x430752*/
      v9 = v8(this, (char *)&v12 + 3, 1, &v14, 1); /*0x43075a*/
      v7 += v9; /*0x43075f*/
      if ( v9 == 1 ) /*0x430764*/
      {
        v10 = HIBYTE(v12); /*0x43076e*/
      }
      else
      {
        v10 = 0; /*0x430766*/
        HIBYTE(v12) = 0; /*0x430768*/
      }
      if ( v7 > a3 ) /*0x430779*/
      {
        v10 = 0; /*0x43077b*/
        HIBYTE(v12) = 0; /*0x43077d*/
      }
      v15[v5++] = v10; /*0x430781*/
    }
    while ( v5 != 0x103 && v10 ); /*0x430792*/
    v15[v5] = 0; /*0x430796*/
    if ( v6 ) /*0x43079b*/
      BSStringT_Append(v13, v15); /*0x4307a6*/
    else
      BSStringT_Set(v13, v15, 0); /*0x4307b8*/
    v6 += v5; /*0x4307bd*/
    if ( !HIBYTE(v12) ) /*0x4307c4*/
      break; /*0x4307c4*/
    v5 = 0; /*0x4307c6*/
  }
  return v7; /*0x4307cd*/
}
