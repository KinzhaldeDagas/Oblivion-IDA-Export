char __thiscall sub_517950(ScriptRunner **this, Script *a2, BSStringT *a3, ScriptEventList *a4)
{
  ScriptRunner *v8; // ebx
  int v9; // eax
  int v10; // eax

  v8 = 0;
  if ( !*this )
  {
    v9 = FormHeapAlloc(0xA4u);
    if ( v9 )
    {
      *(_DWORD *)(v9 + 0x20) = 0;
      *(_DWORD *)(v9 + 0x18) = 0;
      *(_DWORD *)(v9 + 0x1C) = 0;
      *(_DWORD *)(v9 + 0x24) = 0;
      *(_DWORD *)(v9 + 0x28) = 0;
      *(_DWORD *)(v9 + 0x2C) = 0;
      *(_DWORD *)(v9 + 0x30) = 0;
      *(_DWORD *)(v9 + 0x34) = 0;
      *(_DWORD *)(v9 + 0x38) = 0;
      *(_DWORD *)(v9 + 0x3C) = 0;
      *(_DWORD *)(v9 + 0x40) = 0;
      *(_DWORD *)(v9 + 0x44) = 0;
      *(_DWORD *)(v9 + 0x48) = 0;
      *(_DWORD *)v9 = 0;
      *(_DWORD *)(v9 + 4) = 0;
      *(_DWORD *)(v9 + 8) = 0;
      *(_DWORD *)(v9 + 0x10) = 0;
      *(_DWORD *)(v9 + 0x14) = 0;
      *(_BYTE *)(v9 + 0xA0) = 0;
    }
    else
    {
      v9 = 0;
    }
    *this = (ScriptRunner *)v9;
  }
  if ( (*this)->script )
  {
    v10 = FormHeapAlloc(0xA4u);
    if ( v10 )
    {
      *(_DWORD *)(v10 + 0x20) = 0;
      *(_DWORD *)(v10 + 0x18) = 0;
      *(_DWORD *)(v10 + 0x1C) = 0;
      *(_DWORD *)(v10 + 0x24) = 0;
      *(_DWORD *)(v10 + 0x28) = 0;
      *(_DWORD *)(v10 + 0x2C) = 0;
      *(_DWORD *)(v10 + 0x30) = 0;
      *(_DWORD *)(v10 + 0x34) = 0;
      *(_DWORD *)(v10 + 0x38) = 0;
      *(_DWORD *)(v10 + 0x3C) = 0;
      *(_DWORD *)(v10 + 0x40) = 0;
      *(_DWORD *)(v10 + 0x44) = 0;
      *(_DWORD *)(v10 + 0x48) = 0;
      *(_DWORD *)v10 = 0;
      *(_DWORD *)(v10 + 4) = 0;
      *(_DWORD *)(v10 + 8) = 0;
      *(_DWORD *)(v10 + 0x10) = 0;
      *(_DWORD *)(v10 + 0x14) = 0;
      *(_BYTE *)(v10 + 0xA0) = 0;
      v8 = (ScriptRunner *)v10;
    }
    Script_RunSomethingElse__(v8, a2, a3, a4);
    FormHeapFree((unsigned int)v8);
    return 1;
  }
  else
  {
    Script_RunSomethingElse__(*this, a2, a3, a4);
    return 1;
  }
}
