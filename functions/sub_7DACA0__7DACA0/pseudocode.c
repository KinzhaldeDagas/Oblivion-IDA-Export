char __thiscall sub_7DACA0(unsigned int *this, const char *a2)
{
  char result; // al
  unsigned int v4; // edi
  void *BSFile; // eax
  int (__cdecl **v6)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD); // ebx
  int v7; // eax
  TESForm *v8; // esi
  _DWORD *v9; // ebp
  int v10; // [esp+10h] [ebp-114h]
  unsigned int v11; // [esp+14h] [ebp-110h]
  char v12[260]; // [esp+1Ch] [ebp-108h] BYREF

  result = 0;
  v4 = 0;
  if ( a2 )
  {
    _sprintf(v12, "\\Data\\Shaders\\%s", a2);
    BSFile = FileFinder_LoadBSFile(v12, 0, 0);
    v6 = (int (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))BSFile;
    if ( BSFile )
    {
      if ( (*((int (__stdcall **)(void *))BSFile + 1))(BSFile) == 0xC && v10 == 0x64 )
      {
        v7 = FormHeapAlloc(1u);
        *(this + 1) = v7;
        if ( ReadFile__(v6, v7, 1) == 1 )
        {
          v8 = (TESForm *)*(this + 1);
          if ( v11 )
          {
            v9 = this + 2;
            do
            {
              sub_412D30(v9, (int)v8, v8);
              ++v4;
              v8 = (TESForm *)((char *)v8 + (unsigned int)&v8[0xA].member.modlist.data->name[0xE8]);
            }
            while ( v4 < v11 );
          }
        }
        else
        {
          FormHeapFree(*(this + 1));
          *(this + 1) = 0;
        }
      }
      (*(void (__thiscall **)(int (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD), int))*v6)(v6, 1);
    }
    return 0;
  }
  return result;
}
