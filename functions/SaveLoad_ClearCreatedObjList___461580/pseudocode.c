void __thiscall SaveLoad_ClearCreatedObjList__(char *this)
{
  char *v1; // edi
  char *v2; // ebx
  UInt32 *v3; // ebp
  UInt32 v4; // esi
  unsigned __int8 *v5; // eax
  TESForm *v6; // eax
  _DWORD *v7; // edi
  unsigned int v8; // ebx
  int v9; // esi
  unsigned int v10; // [esp+10h] [ebp-Ch] BYREF
  char *v11; // [esp+14h] [ebp-8h]
  char *v12; // [esp+18h] [ebp-4h]

  v1 = this;
  v2 = this + 0x28;
  v3 = (UInt32 *)(this + 0x28);
  v12 = this;
  v11 = this + 0x28;
  if ( this != (char *)0xFFFFFFD8 )
  {
    while ( v3[1] || *v3 )
    {
      v4 = *v3;
      v5 = (unsigned __int8 *)TESForm_LookupByFormID(*v3);
      if ( v5 )
        sub_449D20((char *)TESDataHandler, v5);
      v6 = TESForm_LookupByFormID(v4);
      if ( v6 )
      {
        sub_45C7A0(v1, v6);
      }
      else
      {
        v7 = *(_DWORD **)v1;
        if ( (SaveLoad_CurrentSavegame->flags & 0x1000) == 0 )
        {
          v10 = 0;
          NiTMap_GetAt(v7, v4, &v10);
          v8 = v10;
          if ( v10 )
          {
            NiTMap_RemoveAt(v7, v4);
            if ( *(_DWORD *)(v8 + 4) )
              MemoryHeap_Free_checked(*(void **)(v8 + 4));
            FormHeapFree(v8);
          }
          v2 = v11;
        }
      }
      v3 = (UInt32 *)v3[1];
      if ( !v3 )
        break;
      v1 = v12;
    }
  }
  if ( *((_DWORD *)v2 + 1) )
  {
    do
    {
      v9 = *(_DWORD *)(*((_DWORD *)v2 + 1) + 4);
      FormHeapFree(*((_DWORD *)v2 + 1));
      *((_DWORD *)v2 + 1) = v9;
    }
    while ( v9 );
  }
  *(_DWORD *)v2 = 0;
}
