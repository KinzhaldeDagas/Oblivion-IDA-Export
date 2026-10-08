void __thiscall sub_52B990(unsigned int *this)
{
  unsigned int *v2; // edi
  unsigned int *v3; // esi
  int v4; // ebx
  unsigned int *v5; // edi
  unsigned int *v6; // esi
  int v7; // ebp
  int v8; // ebx

  sub_52B5A0(this); /*0x52b99b*/
  sub_52B660(this); /*0x52b9a2*/
  v2 = this + 0x6E; /*0x52b9a7*/
  v3 = this + 0x38; /*0x52b9ad*/
  v4 = 9; /*0x52b9b3*/
  do /*0x52b9d3*/
  {
    (*(void (__thiscall **)(unsigned int *))(*v3 + 4))(v3); /*0x52b9bf*/
    (*(void (__thiscall **)(unsigned int *))(*v2 + 4))(v2); /*0x52b9c8*/
    v3 += 6; /*0x52b9ca*/
    v2 += 3; /*0x52b9cd*/
    --v4; /*0x52b9d0*/
  }
  while ( v4 ); /*0x52b9d3*/
  v5 = this + 0x2C; /*0x52b9d5*/
  v6 = this + 0x89; /*0x52b9db*/
  v7 = 2; /*0x52b9e1*/
  do /*0x52ba10*/
  {
    v8 = 5; /*0x52b9e6*/
    do /*0x52b9ff*/
    {
      (*(void (__thiscall **)(unsigned int *))(*v6 + 4))(v6); /*0x52b9f7*/
      v6 += 3; /*0x52b9f9*/
      --v8; /*0x52b9fc*/
    }
    while ( v8 ); /*0x52b9ff*/
    (*(void (__thiscall **)(unsigned int *))(*v5 + 4))(v5); /*0x52ba08*/
    v5 += 6; /*0x52ba0a*/
    --v7; /*0x52ba0d*/
  }
  while ( v7 ); /*0x52ba10*/
  j_TESForm_ClearComponentReferences((TESForm *)this); /*0x52ba1d*/
}
