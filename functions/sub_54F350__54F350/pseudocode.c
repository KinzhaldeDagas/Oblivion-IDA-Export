double __userpurge sub_54F350@<st0>(int a1@<ecx>, double result@<st0>, double a3@<st1>, double a4@<st2>, float *a5)
{
  BSTextureManager *v6; // ebx
  void *data; // esi
  int v8; // esi
  float *v9; // eax
  float *v10; // eax

  v6 = (BSTextureManager *)a5; /*0x54f375*/
  if ( a5 ) /*0x54f37b*/
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 0xC))(a1); /*0x54f399*/
    if ( a4 >= *(float *)&SrcStr ) /*0x54f3a6*/
    {
      if ( !v6->unk00.numItems /*0x54f3db*/
        || (data = v6->unk00.end->data) != 0
        && (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)data + 0x40))(data)
        && (v8 = (*(int (__usercall **)@<eax>(void *@<ecx>, double@<st0>, double@<st1>))(*(_DWORD *)data + 4))(
                   data,
                   result,
                   a3),
            v8 == (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 4))(a1)) )
      {
        v9 = (float *)FormHeapAlloc(0x14u); /*0x54f3df*/
        a5 = v9; /*0x54f3e7*/
        if ( v9 ) /*0x54f3f5*/
          v10 = sub_54EAA0(v9, a1); /*0x54f3fa*/
        else
          v10 = 0; /*0x54f401*/
        a5 = v10; /*0x54f412*/
        NiTPointerList__AddTail(v6, (void **)&a5); /*0x54f416*/
      }
    }
  }
  return result; /*0x54f37f*/
}
