char __thiscall sub_56AC50(unsigned __int8 *this, int a2, int a3, _BYTE *a4)
{
  int v5; // ebp
  int v6; // edi
  int v7; // ebx
  Cmd_Eval *eval; // ecx
  int v9; // eax
  double v10; // st7
  char result; // al
  char v12; // cl
  float v13; // [esp+4h] [ebp-1Ch]
  double v14; // [esp+18h] [ebp-8h] BYREF
  float v15; // [esp+24h] [ebp+4h]
  float v16; // [esp+24h] [ebp+4h]

  v14 = 0.0;
  *a4 = 0;
  v5 = a2;
  v6 = a3;
  if ( (*this & 2) != 0 )
  {
    v5 = a3;
    v6 = a2;
  }
  v7 = *((_DWORD *)this + 3);
  if ( !v7 )
  {
    if ( sub_56B1D0(*((unsigned __int16 *)this + 4), 0) )
      v7 = v6;
  }
  eval = Script_CommandList_[*((unsigned __int16 *)this + 4)].eval;
  if ( !eval
    || LOBYTE(Script_CommandList_[*((unsigned __int16 *)this + 4)].needsParent) && !v5
    || !((unsigned __int8 (__cdecl *)(int, int, _DWORD, double *))eval)(v5, v7, *((_DWORD *)this + 4), &v14) )
  {
    return 0;
  }
  if ( (*this & 4) != 0 && (v9 = *((_DWORD *)this + 1)) != 0 )
    v10 = *(float *)(v9 + 0x24);
  else
    v10 = *((float *)this + 1);
  v15 = v10;
  v13 = v15;
  v16 = v14;
  result = sub_56A3B0(*this >> 5, v16, v13);
  if ( !result && *((_WORD *)this + 4) == 0x4C )
  {
    v12 = *this >> 5;
    if ( v12 == 2 || v12 == 3 )
      *a4 = 1;
  }
  return result;
}
