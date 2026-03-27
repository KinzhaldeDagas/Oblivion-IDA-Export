double __userpurge sub_54F350@<st0>(int a1@<ecx>, double result@<st0>, double a3@<st1>, float *a4)
{
  BSTextureManager *v5; // ebx
  void *data; // esi
  int v7; // esi
  float *v8; // eax
  float *v9; // eax

  v5 = (BSTextureManager *)a4;
  if ( a4 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 0xC))(a1);
    if ( a3 >= *(float *)&SrcStr )
    {
      if ( !v5->unk00.numItems
        || (data = v5->unk00.end->data) != 0
        && (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)data + 0x40))(data)
        && (v7 = (*(int (__usercall **)@<eax>(void *@<ecx>, double@<st0>))(*(_DWORD *)data + 4))(data, result),
            v7 == (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 4))(a1)) )
      {
        v8 = (float *)FormHeapAlloc(0x14u);
        a4 = v8;
        if ( v8 )
          v9 = sub_54EAA0(v8, a1);
        else
          v9 = 0;
        a4 = v9;
        sub_5B1E20(v5, (void **)&a4);
      }
    }
  }
  return result;
}
