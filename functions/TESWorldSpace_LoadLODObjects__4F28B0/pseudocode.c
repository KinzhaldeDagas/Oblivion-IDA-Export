void __thiscall TESWorldSpace::LoadLODObjects(TESWorldSpace *this)
{
  const char *(__thiscall *GetEditorName)(TESForm *); // edx
  const char *v3; // eax
  char *m_data; // ebp
  _BYTE *BSFile; // esi
  unsigned int v6; // eax
  int v7; // edi
  char v8; // [esp+1Bh] [ebp-1Dh] BYREF
  unsigned int v9; // [esp+1Ch] [ebp-1Ch]
  _WORD v10[2]; // [esp+20h] [ebp-18h] BYREF
  BSStringT v11; // [esp+24h] [ebp-14h] BYREF
  int v12; // [esp+34h] [ebp-4h]

  LOBYTE(this->unk0D8[0]) = 0;
  v11.m_data = 0;
  v11.m_dataLen = 0;
  v11.m_bufLen = 0;
  GetEditorName = this->vtbl->GetEditorName;
  v12 = 0;
  v3 = GetEditorName((TESForm *)this);
  BSStringT_Static_Format(&v11, "Data\\DistantLOD\\%s.cmp", v3);
  m_data = v11.m_data;
  BSFile = FileFinder_LoadBSFile(v11.m_data, 0, 0x800);
  if ( BSFile )
  {
    NiTMap_Clear(&this->CellsWithLODObjects.vtbl);
    (*(void (__thiscall **)(_BYTE *, _DWORD, _DWORD))(*(_DWORD *)BSFile + 0x18))(BSFile, 0, 0);
    v6 = ((unsigned int)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)BSFile + 0x1C))(BSFile) >> 2) - 1;
    if ( BSFile[0x24] )
    {
      if ( v6 )
      {
        v9 = v6;
        do
        {
          (*(void (__thiscall **)(_BYTE *, _WORD *, int))(*(_DWORD *)BSFile + 0x38))(BSFile, v10, 4);
          v7 = (v10[1] << 0x10) | v10[0];
          if ( !sub_4D6760(&this->CellsWithLODObjects.vtbl, v7, &v8) )
            NiTMap_SetAt(&this->CellsWithLODObjects.vtbl, v7, 1);
          --v9;
        }
        while ( v9 );
      }
      LOBYTE(this->unk0D8[0]) = 1;
      (*(void (__thiscall **)(_BYTE *, UInt32 *, int))(*(_DWORD *)BSFile + 0x38))(BSFile, &this->unk0D8[1], 4);
    }
    (**(void (__thiscall ***)(_BYTE *, int))BSFile)(BSFile, 1);
    FormHeapFree((unsigned int)v11.m_data);
  }
  else
  {
    FormHeapFree((unsigned int)m_data);
  }
}
