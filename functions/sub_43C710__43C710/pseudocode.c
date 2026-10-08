// Verified QueuedTreeModel vtable QueueMe override (+0x20). If the tree's icon texture name exists, it builds the TESIconTree default-path + texture name and schedules/reuses it as a child texture dependency, then hands off to the queued-model base path. Fallout's named QueuedTreeModel::QueueMe follows the same icon-texture then base-model queue pattern.
int __thiscall QueuedTreeModel_QueueMe(QueuedTreeModel_OblivionLayout *this)
{
  unsigned __int8 *v2; // ecx
  _BYTE *v3; // eax
  char *v4; // eax
  char *v5; // edx
  char v6; // cl
  const char *v7; // eax
  const char *v8; // edx
  unsigned int v9; // eax
  char *v10; // edi
  void (__thiscall *v12)(QueuedTreeModel_OblivionLayout *); // eax
  TESModel *treeModelComponent; // eax
  UInt8 *p_unk10; // ecx
  char v16; // [esp+3h] [ebp-20Dh] BYREF
  char Str1[260]; // [esp+4h] [ebp-20Ch] BYREF
  char path[260]; // [esp+108h] [ebp-108h] BYREF

  v2 = &this->tree->prefix_000_047[0x3C];       // Verified: optional TESIconTree texture dependency is queued before the tree's TESModel component dependency. Fallout QueueMe follows the same icon-then-model dependency ordering. /*0x43c72a*/
  v3 = *((_BYTE **)v2 + 1); /*0x43c72d*/
  if ( v3 ) /*0x43c732*/
  {
    if ( *v3 ) /*0x43c738*/
    {
      v4 = (char *)(*(int (__thiscall **)(unsigned __int8 *))(*(_DWORD *)v2 + 0x14))(v2); /*0x43c746*/
      v5 = Str1; /*0x43c748*/
      do /*0x43c75c*/
      {
        v6 = *v4; /*0x43c750*/
        *v5++ = *v4++; /*0x43c752*/
      }
      while ( v6 ); /*0x43c75c*/
      v7 = *(const char **)&this->tree->prefix_000_047[0x40]; /*0x43c764*/
      if ( !v7 ) /*0x43c769*/
        v7 = EmptyString; /*0x43c76b*/
      v8 = v7; /*0x43c770*/
      v9 = strlen(v7) + 1; /*0x43c781*/
      v10 = &v16; /*0x43c783*/
      while ( *++v10 ) /*0x43c78e*/
        ; /*0x43c786*/
      qmemcpy(v10, v8, v9); /*0x43c797*/
      sub_47D8F0(Str1, path); /*0x43c7ad*/
      QueuedTexture_QueueOrAttachPath(path, BYTE2(*(_DWORD *)&this->queuedBase_000_02B[0x10]), (IOTask *)this); /*0x43c7d5*/
      v12 = *(void (__thiscall **)(QueuedTreeModel_OblivionLayout *))(*(_DWORD *)this->queuedBase_000_02B + 0x28); /*0x43c7dc*/
      this->taskFlags_034 |= 8u; /*0x43c7df*/
      v12(this); /*0x43c7e5*/
    }
  }
  treeModelComponent = this->treeModelComponent; /*0x43c7e9*/
  p_unk10 = 0; /*0x43c7ec*/
  if ( treeModelComponent ) /*0x43c7f0*/
    p_unk10 = &treeModelComponent->unk10; /*0x43c7f2*/
  return (*(int (__thiscall **)(QueuedTreeModel_OblivionLayout *, UInt8 *))(*(_DWORD *)this->queuedBase_000_02B + 0x30))( /*0x43c7ff*/
           this,
           p_unk10);
}
