int __thiscall sub_45FB50(_DWORD *this, int a2)
{
  int result; // eax
  int v4; // ebp
  bool v5; // zf
  void (__cdecl *v6)(int, int *, int, int *, int); // ecx
  _DWORD *v7; // ecx
  FreeEntry *v8; // eax
  char *v9; // edi
  int v10; // eax
  void (__cdecl *v11)(int, char *, int, int *, int); // eax
  int v12; // [esp-14h] [ebp-20h]
  int v13; // [esp-10h] [ebp-1Ch]
  int v14; // [esp+0h] [ebp-Ch]
  int v15; // [esp+8h] [ebp-4h] BYREF

  result = sub_679480((int *)&ActorProcessManager_ptr);
  v4 = a2;
  v5 = (*(this + 6) & 0x200) == 0;
  v15 = result;
  if ( v5 )
  {
    v6 = *(void (__cdecl **)(int, int *, int, int *, int))(a2 + 8);
    v12 = a2;
    a2 = 1;
    v6(v12, &v15, 4, &a2, 1);
    result = v15;
  }
  else
  {
    *(this + 0x24) += 4;
  }
  if ( result )
  {
    v7 = (_DWORD *)*(this + 0x10);
    if ( v7 )
    {
      sub_4531B0(v7, v4, result, "Temp Effects List");
      result = v15;
    }
    v8 = j_MemoryHeap_Alloc(&FormHeap, v4, (unsigned int)result | 0x100000000LL, v14);
    *(this + 5) = v8;
    if ( !v8 )
      sub_404EC0("Could not create save buffer, out of memory.");
    v9 = (char *)*(this + 5);
    sub_679630((char *)&ActorProcessManager_ptr);
    v10 = v15;
    if ( &v9[v15] != (char *)*(this + 5) )
    {
      (*(void (__thiscall **)(int, const char *))(*(_DWORD *)dword_B34D90 + 0x18))(
        dword_B34D90,
        "SaveTempEffectsList() call did not properly fill buffer.  See Warnings.txt for more info.");
      v10 = v15;
    }
    if ( (*(this + 6) & 0x200) != 0 )
    {
      *(this + 0x24) += v10;
    }
    else
    {
      v13 = v10;
      v11 = *(void (__cdecl **)(int, char *, int, int *, int))(v4 + 8);
      a2 = 1;
      v11(v4, v9, v13, &a2, 1);
    }
    result = MemoryHeap_Free_checked(v9);
    *(this + 5) = 0;
  }
  return result;
}
