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

  v4 = *(this + 7) == 0; /*0x430ad1*/
  v13 = a2; /*0x430ad5*/
  if ( v4 ) /*0x430ad9*/
    (*(void (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*this + 0x18))(this, 0, 0); /*0x430ae4*/
  v5 = 0; /*0x430ae6*/
  v6 = 0; /*0x430ae8*/
  v7 = 0; /*0x430aea*/
  while ( 1 ) /*0x430b44*/
  {
    do /*0x430b44*/
    {
      v8 = (int (__cdecl *)(_DWORD *, int *, int, int *, int))*(this + 1); /*0x430af0*/
      v14 = 1; /*0x430b02*/
      v9 = v8(this, &v12, 2, &v14, 1); /*0x430b0a*/
      v7 += v9; /*0x430b0f*/
      if ( v9 == 2 ) /*0x430b14*/
      {
        v10 = v12; /*0x430b1e*/
      }
      else
      {
        v10 = 0; /*0x430b16*/
        v12 = 0; /*0x430b18*/
      }
      if ( v7 > a3 ) /*0x430b29*/
      {
        v10 = 0; /*0x430b2b*/
        v12 = 0; /*0x430b2d*/
      }
      v15[v5++] = v10; /*0x430b31*/
    }
    while ( v5 != 0x104 && v10 ); /*0x430b44*/
    if ( v6 ) /*0x430b48*/
      BSWStringT_Append(v13, (const unsigned __int16 *)v15); /*0x430b53*/
    else
      BSWStringT_Set(v13, (const unsigned __int16 *)v15, 0); /*0x430b65*/
    v6 += v5; /*0x430b6a*/
    if ( !(_WORD)v12 ) /*0x430b72*/
      break; /*0x430b72*/
    v5 = 0; /*0x430b74*/
  }
  return v7 >> 1; /*0x430b7b*/
}
