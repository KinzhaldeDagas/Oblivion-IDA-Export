void __userpurge sub_4E0A40(TESForm *this@<ecx>, TESForm a1)
{
  _WORD *v4; // ebx
  TESFormVtbl *vtbl; // esi
  _BYTE v6[8]; // [esp+8h] [ebp-1Ch] BYREF
  int v7; // [esp+10h] [ebp-14h]
  TESFormVtbl *v8; // [esp+14h] [ebp-10h]

  v4 = *((_WORD **)this + 0xF); /*0x4e0a47*/
  if ( v4 ) /*0x4e0a4c*/
  {
    vtbl = a1.vtbl; /*0x4e0a4f*/
    TESForm_SaveDataToCurrentSaveGame(this, a1.vtbl, 1u); /*0x4e0a56*/
    a1.vtbl = (TESFormVtbl *)(unsigned __int16)(HIWORD(vtbl->super.InitializeComponent) /*0x4e0a6c*/
                                              + LOWORD(vtbl->super.ClearComponentReferences));
    TESForm_SaveDataToCurrentSaveGame(this, &a1, 2u); /*0x4e0a73*/
    v7 = 0xF; /*0x4e0a83*/
    v6[4] = 1; /*0x4e0a8b*/
    v8 = vtbl; /*0x4e0a90*/
    sub_88A7D0(v4, (int)v6, (void (__cdecl *)(int, int))sub_4DACF0); /*0x4e0a94*/
  }
}
