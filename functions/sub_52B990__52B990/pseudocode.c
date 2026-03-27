void __thiscall sub_52B990(unsigned int *this)
{
  _DWORD *v2; // edi
  _DWORD *v3; // esi
  int v4; // ebx
  _DWORD *v5; // edi
  _DWORD *v6; // esi
  int v7; // ebp
  int v8; // ebx

  sub_52B5A0(this);
  sub_52B660(this);
  v2 = this + 0x6E;
  v3 = this + 0x38;
  v4 = 9;
  do
  {
    (*(void (__thiscall **)(_DWORD *))(*v3 + 4))(v3);
    (*(void (__thiscall **)(_DWORD *))(*v2 + 4))(v2);
    v3 += 6;
    v2 += 3;
    --v4;
  }
  while ( v4 );
  v5 = this + 0x2C;
  v6 = this + 0x89;
  v7 = 2;
  do
  {
    v8 = 5;
    do
    {
      (*(void (__thiscall **)(_DWORD *))(*v6 + 4))(v6);
      v6 += 3;
      --v8;
    }
    while ( v8 );
    (*(void (__thiscall **)(_DWORD *))(*v5 + 4))(v5);
    v5 += 6;
    --v7;
  }
  while ( v7 );
  j_TESForm_ClearComponentReferences((TESForm *)this);
}
