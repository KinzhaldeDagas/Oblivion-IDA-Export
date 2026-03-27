void __thiscall sub_5599B0(_DWORD *this)
{
  unsigned int v2; // ebx
  bool v3; // cc
  int *v4; // edi
  unsigned int v5; // ebp
  unsigned int v6; // ebx
  int *v7; // esi
  unsigned int v8; // ebp
  _DWORD v9[2]; // [esp+18h] [ebp-14h] BYREF
  unsigned int v10; // [esp+28h] [ebp-4h]

  v2 = *(this + 3);
  v3 = *(this + 2) <= v2;
  v4 = this + 1;
  v10 = 0;
  if ( !v3 )
    _invalid_parameter_noinfo();
  v5 = v4[1];
  if ( v5 > v4[2] )
    _invalid_parameter_noinfo();
  sub_559240(v4, v9, (int)v4, v5, (int)v4, v2);
  v6 = *(this + 7);
  v7 = this + 5;
  if ( v7[1] > v6 )
    _invalid_parameter_noinfo();
  v8 = v7[1];
  if ( v8 > v7[2] )
    _invalid_parameter_noinfo();
  sub_559240(v7, v9, (int)v7, v8, (int)v7, v6);
  v10 = 0xFFFFFFFF;
  _LN21(v4, 0x10u, 2, (void (__thiscall *)(void *))sub_558570);
}
