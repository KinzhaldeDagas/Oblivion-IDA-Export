char __stdcall sub_765290(_DWORD *a1)
{
  _DWORD *v1; // ebx
  int v2; // ebp
  NiRTTI *v3; // eax
  int v4; // eax
  int v5; // edi
  _DWORD *v6; // esi
  _DWORD *v8; // ebx
  int v9; // ebp
  int v10; // edi
  _DWORD *v11; // esi
  int v12; // [esp+8h] [ebp-4h]

  v1 = a1; /*0x765292*/
  v2 = a1[9]; /*0x765297*/
  v12 = v2; /*0x76529c*/
  if ( v2 ) /*0x7652a0*/
  {
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 0x18))(v2) ) /*0x7652aa*/
    {
      v3 = (NiRTTI *)(*(int (__thiscall **)(_DWORD *))(*a1 + 4))(a1); /*0x7652b9*/
      if ( v3 ) /*0x7652bd*/
      {
        while ( v3 != &stru_BAA880 ) /*0x7652c5*/
        {
          v3 = v3->parent; /*0x7652c7*/
          if ( !v3 ) /*0x7652cc*/
            goto LABEL_6; /*0x7652cc*/
        }
        v8 = a1 + 0x11; /*0x765321*/
        v9 = 6; /*0x765324*/
        do /*0x765364*/
        {
          v10 = *(_DWORD *)(*v8 + 0x10); /*0x765332*/
          v11 = (_DWORD *)(*v8 + 0x10); /*0x765335*/
          if ( v10 ) /*0x76533a*/
          {
            if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) ) /*0x765340*/
              (**(void (__thiscall ***)(int, int))v10)(v10, 1); /*0x765356*/
            *v11 = 0; /*0x765358*/
          }
          ++v8; /*0x76535e*/
          --v9; /*0x765361*/
        }
        while ( v9 ); /*0x765364*/
        v2 = v12; /*0x765366*/
        v1 = a1; /*0x76536a*/
      }
      else
      {
LABEL_6:
        v4 = (*(int (__thiscall **)(_DWORD *))(*a1 + 0x54))(a1); /*0x7652ce*/
        v5 = *(_DWORD *)(v4 + 0x10); /*0x7652d9*/
        v6 = (_DWORD *)(v4 + 0x10); /*0x7652dc*/
        if ( v5 ) /*0x7652e1*/
        {
          if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) ) /*0x7652e7*/
            (**(void (__thiscall ***)(int, int))v5)(v5, 1); /*0x7652fd*/
          *v6 = 0; /*0x7652ff*/
        }
      }
    }
    v1[9] = 0; /*0x765307*/
    (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x765317*/
  }
  return 1; /*0x765319*/
}
