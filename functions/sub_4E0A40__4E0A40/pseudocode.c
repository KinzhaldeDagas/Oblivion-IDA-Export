void __userpurge sub_4E0A40(_DWORD *this@<ecx>, int a2@<esi>, TESForm a1)
{
  _WORD *v3; // ebx
  TESFormVtbl *vtbl; // esi
  size_t v5; // [esp-8h] [ebp-2Ch]
  size_t v6; // [esp-8h] [ebp-2Ch]
  _BYTE v7[8]; // [esp+8h] [ebp-1Ch] BYREF
  int v8; // [esp+10h] [ebp-14h]
  TESFormVtbl *v9; // [esp+14h] [ebp-10h]

  v3 = (_WORD *)*(this + 0xF);
  if ( v3 )
  {
    HIDWORD(v5) = a2;
    vtbl = a1.vtbl;
    LODWORD(v5) = 1;
    TESForm_SaveDataToCurrentSaveGame((TESForm *)a1.vtbl, v5);
    LODWORD(v6) = 2;
    a1.vtbl = (TESFormVtbl *)(unsigned __int16)(HIWORD(vtbl->super.InitializeComponent)
                                              + LOWORD(vtbl->super.ClearComponentReferences));
    TESForm_SaveDataToCurrentSaveGame(&a1, v6);
    v8 = 0xF;
    v7[4] = 1;
    v9 = vtbl;
    sub_88A7D0(v3, (int)v7, (void (__cdecl *)(int, int))sub_4DACF0);
  }
}
