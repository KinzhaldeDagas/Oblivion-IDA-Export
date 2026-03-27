int __thiscall sub_7786C0(_DWORD *this)
{
  _DWORD *v1; // edi
  unsigned int v2; // ecx
  unsigned int v3; // eax
  _DWORD *v4; // edx
  NiTMap_Entry_TESCELL *v5; // eax
  TESObjectCELL *v6; // ebp
  TESForm::FormFlags *p_flags; // edi
  int v8; // ebx
  unsigned int v9; // esi
  int v10; // eax
  int result; // eax
  NiTMap_Entry_TESCELL *v12; // [esp+8h] [ebp-10h] BYREF
  TESObjectCELL *v13; // [esp+Ch] [ebp-Ch] BYREF
  _DWORD *v14; // [esp+10h] [ebp-8h]
  void *v15; // [esp+14h] [ebp-4h] BYREF

  v1 = this;
  v2 = *(this + 8);
  v3 = 0;
  v14 = v1;
  if ( v2 )
  {
    v4 = (_DWORD *)v1[9];
    while ( !*v4 )
    {
      ++v3;
      ++v4;
      if ( v3 >= v2 )
        goto LABEL_5;
    }
    v5 = *(NiTMap_Entry_TESCELL **)(v1[9] + 4 * v3);
  }
  else
  {
LABEL_5:
    v5 = 0;
  }
  v12 = v5;
  while ( v12 )
  {
    sub_452600((NiTMap_TESCELL *)(v1 + 7), &v12, &v15, &v13);
    v6 = v13;
    if ( v13 )
    {
      p_flags = &v13->members.super.flags;
      v8 = 5;
      do
      {
        v9 = *p_flags;
        if ( *p_flags )
        {
          if ( *(_DWORD *)(v9 + 0x20) )
            (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(v9 + 0x20) + 8))(*(_DWORD *)(v9 + 0x20));
          sub_77D1D0((_DWORD *)v9);
          FormHeapFree(v9);
        }
        ++p_flags;
        --v8;
      }
      while ( v8 );
      FormHeapFree((unsigned int)v6);
      v1 = v14;
    }
  }
  NiTMap_Clear(v1 + 7);
  v10 = v1[3];
  if ( v10 )
  {
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v10 + 8))(v1[3]);
    v1[3] = 0;
  }
  result = v1[5];
  if ( result )
  {
    result = (*(int (__stdcall **)(_DWORD))(*(_DWORD *)result + 8))(v1[5]);
    v1[5] = 0;
  }
  return result;
}
