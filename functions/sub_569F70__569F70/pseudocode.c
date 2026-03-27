bool __thiscall sub_569F70(_DWORD *this, char *a2)
{
  bool result; // al
  char v4; // cl
  char v5; // bl
  int v6; // edx
  int v7; // eax
  int v8; // edx
  int v9; // eax
  int v10; // edx
  int v11; // eax

  if ( !a2 )
    return 1;
  v4 = *a2;
  v5 = *(_BYTE *)this;
  result = *(_BYTE *)this != *a2
        || (v5 ? (v6 = 0) : (v6 = *(this + 1)),
            v4 ? (v7 = 0) : (v7 = *((_DWORD *)a2 + 1)),
            v6 != v7
         || (v5 != 1 ? (v8 = 0) : (v8 = *(this + 1)),
             v4 != 1 ? (v9 = 0) : (v9 = *((_DWORD *)a2 + 1)),
             v8 != v9
          || (v5 != 2 ? (v10 = 0) : (v10 = *(this + 1)), v4 != 2 ? (v11 = 0) : (v11 = *((_DWORD *)a2 + 1)), v10 != v11)))
        || *(this + 2) != *((_DWORD *)a2 + 2);
  return result;
}
