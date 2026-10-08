// 2026-05-21 SpeedTreeOBSE core/tail known-family load pass: Oblivion path wrapper reads the complete SPT, calls LoadTree(buffer) at 0x78E39F, then frees the original bytes. Compatibility keeps the decoded core/tail prefix byte-exact, strips known 23000..75000 sidecars from the supplemental tail, and honors unknown terminal stop boundaries in both after-known and before-known ordering. Full-file fixtures now cover stock-wrapped all-known sidecars and both terminal-opaque orderings behind a valid Oblivion core; remaining load gaps are nonterminal unknown vendor payloads, grammar variants, allocation failures, deployment logs, and feature consumers.
bool __thiscall CSpeedTreeRT__LoadTreeFromFile(OB_CSpeedTreeRT_010201A0 *this, const char *filename)
{
  const char *v2; // ebx
  void *v3; // edi
  signed int v4; // eax
  unsigned int v5; // esi
  void *v6; // ebx
  int *v8; // eax
  char *v9; // eax
  OB_stString28_010201A0 *v10; // eax
  bool v11; // cf
  OB_CSpeedTreeRT_010201A0 *p_storage; // eax
  int *v13; // eax
  char *v14; // eax
  OB_stString28_010201A0 *v15; // eax
  int *v16; // eax
  char *v17; // eax
  OB_stString28_010201A0 *v18; // eax
  int v19; // [esp+0h] [ebp-8Ch] BYREF
  OB_stString28_010201A0 result; // [esp+2Ch] [ebp-60h] BYREF
  _BYTE v21[12]; // [esp+48h] [ebp-44h] BYREF
  _BYTE v22[12]; // [esp+54h] [ebp-38h] BYREF
  char v23[12]; // [esp+60h] [ebp-2Ch] BYREF
  char ArgList[4]; // [esp+70h] [ebp-1Ch]
  OB_CSpeedTreeRT_010201A0 *v25; // [esp+74h] [ebp-18h] BYREF
  bool TreeFromMemory; // [esp+7Bh] [ebp-11h]
  int *v27; // [esp+7Ch] [ebp-10h]
  int v28; // [esp+88h] [ebp-4h]

  v27 = &v19; /*0x78e338*/
  v25 = this; /*0x78e33b*/
  v2 = filename; /*0x78e33e*/
  TreeFromMemory = 0; /*0x78e343*/
  v28 = 0; /*0x78e347*/
  if ( filename ) /*0x78e34e*/
  {
    v3 = sub_431130(filename, 0, 0x2800, 1); /*0x78e35f*/
    if ( !v3 ) /*0x78e366*/
    {
      v16 = _errno(); /*0x78e478*/
      v17 = strerror(*v16); /*0x78e480*/
      v18 = OB_IdvFormatString_010201A0(&result, "failed to load file '%s' [%s]", v2, v17); /*0x78e48f*/
      v11 = v18->capacity < 0x10; /*0x78e497*/
      LOBYTE(v28) = 3; /*0x78e49b*/
      if ( v11 ) /*0x78e49f*/
        filename = v18->storage.inlineData; /*0x78e4ac*/
      else
        filename = v18->storage.heapData; /*0x78e4a4*/
      std::exception::exception((std::exception *)v21, &filename); /*0x78e4b6*/
      ThrowException__((DWORD)v21, &_TI1_AVexception_std__); /*0x78e4c4*/
    }
    v4 = (*(int (__thiscall **)(void *))(*(_DWORD *)v3 + 0x1C))(v3); /*0x78e373*/
    v5 = v4; /*0x78e375*/
    if ( v4 <= 0 ) /*0x78e379*/
    {
      v13 = _errno(); /*0x78e427*/
      v14 = strerror(*v13); /*0x78e42f*/
      v15 = OB_IdvFormatString_010201A0(&result, "file seek failed on '%s' [%s]", v2, v14); /*0x78e43e*/
      v11 = v15->capacity < 0x10; /*0x78e446*/
      LOBYTE(v28) = 2; /*0x78e44a*/
      if ( v11 ) /*0x78e44e*/
        filename = v15->storage.inlineData; /*0x78e45b*/
      else
        filename = v15->storage.heapData; /*0x78e453*/
      std::exception::exception((std::exception *)v22, &filename); /*0x78e465*/
      ThrowException__((DWORD)v22, &_TI1_AVexception_std__); /*0x78e473*/
    }
    v6 = (void *)FormHeapAlloc(v4); /*0x78e388*/
    *(_DWORD *)ArgList = Archive_ReadBytes(v3, v6, v5); /*0x78e395*/
    if ( *(_DWORD *)ArgList != v5 ) /*0x78e398*/
    {
      v8 = _errno(); /*0x78e3d1*/
      v9 = strerror(*v8); /*0x78e3d9*/
      v10 = OB_IdvFormatString_010201A0( /*0x78e3f0*/
              &result,
              "only read %d of %d from %s [%s]",
              *(_DWORD *)ArgList,
              v5,
              filename,
              v9);
      v11 = v10->capacity < 0x10; /*0x78e3f8*/
      LOBYTE(v28) = 1; /*0x78e3fc*/
      if ( v11 ) /*0x78e400*/
        p_storage = (OB_CSpeedTreeRT_010201A0 *)&v10->storage; /*0x78e407*/
      else
        p_storage = (OB_CSpeedTreeRT_010201A0 *)v10->storage.heapData; /*0x78e402*/
      v25 = p_storage; /*0x78e411*/
      std::exception::exception((std::exception *)v23, (const char **)&v25); /*0x78e414*/
      ThrowException__((DWORD)v23, &_TI1_AVexception_std__); /*0x78e422*/
    }
    TreeFromMemory = CSpeedTreeRT__LoadTreeFromMemory(v25, (const unsigned __int8 *)v6, v5);// SpeedTreeOBSE 2026-05-23 runtime path-context recovery: this in-wrapper LoadTree(buffer) call is the authoritative live buffer hook. Current logs showed loads can reach 0x78E310 without hitting Bethesda caller 0x56070C, so the OBSE hook recovers the active path from the 0x78E310 frame ([EBP+8]) before tracing/sanitizing. This remains pre-stock, before wrapper-owned bytes are freed. /*0x78e3a5*/
    FormHeapFree((unsigned int)v6); /*0x78e3a8*/
    (**(void (__thiscall ***)(void *, int))v3)(v3, 1); /*0x78e3b8*/
  }
  return TreeFromMemory; /*0x78e3bd*/
}
