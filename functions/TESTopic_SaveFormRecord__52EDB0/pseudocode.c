char __thiscall TESTopic_SaveFormRecord(char *this, Data *a2)
{
  int *v3; // eax
  int v4; // ebx
  unsigned int v5; // ebp
  unsigned int v6; // esi
  TESForm *v7; // edi
  int v8; // eax
  int *i; // [esp+4h] [ebp-4h]

  (*(void (__thiscall **)(char *))(*(_DWORD *)this + 0x24))(this);
  TESFile_WriteFormRecord(a2, (int)this);
  v3 = (int *)(this + 0x28);
  if ( this != (char *)0xFFFFFFD8 )
  {
    while ( 1 )
    {
      v4 = *v3;
      if ( !*v3 )
        break;
      v5 = *(_DWORD *)(v4 + 0x10);
      v6 = 0;
      for ( i = (int *)v3[1]; v6 < v5; ++v6 )
      {
        v7 = *(TESForm **)(*(_DWORD *)(v4 + 8) + 4 * v6);
        if ( v7 )
        {
          LOBYTE(v8) = TESFile_GetIsMaster(a2);
          TESDataHandler_SaveForm((Data **)TESDataHandler, v7, v8);
        }
      }
      if ( !i )
        break;
      v3 = i;
    }
  }
  return 1;
}
