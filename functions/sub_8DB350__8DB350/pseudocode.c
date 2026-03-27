int __thiscall sub_8DB350(int *this, int a2)
{
  int v3; // ebx
  int v4; // edi
  int v5; // eax
  int v6; // eax
  int result; // eax
  int v8; // [esp+Ch] [ebp-18h] BYREF
  int v9; // [esp+10h] [ebp-14h]
  int v10; // [esp+14h] [ebp-10h]
  int v11; // [esp+18h] [ebp-Ch]
  int *v12; // [esp+20h] [ebp-4h]

  v3 = *(this + 4);
  v4 = *(this + 3);
  LOWORD(v8) = a2;
  v9 = 0;
  v10 = v4;
  v11 = v3;
  v12 = this;
  if ( (_WORD)a2 != 0xFFFF )
  {
    v5 = (*(int (__thiscall **)(int *, int))(*this + 0x20))(this, a2);
    if ( v5 )
      v9 = v5 + 8;
    else
      v9 = 0;
  }
  sub_8DC920((int)&v8, *(this + 2), (int)&v8);
  v6 = *(_DWORD *)(v4 + 0x98);
  if ( v6 )
    sub_8DC0A0(v6, v4, (int)&v8);
  result = *(_DWORD *)(v3 + 0x98);
  if ( result )
    return sub_8DC0A0((int)&v8, v3, (int)&v8);
  return result;
}
