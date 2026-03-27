void __userpurge sub_43A100(int *this@<ecx>, int a2@<edi>, int a3)
{
  int v3; // ebx
  int v5; // esi
  TESForm *v6; // ebx
  TESForm *v7; // eax
  int v8; // eax
  _DWORD *v9; // ecx
  UInt32 *p_refID; // esi
  unsigned __int8 (__thiscall **v11)(_DWORD, int); // edi
  int v12; // eax
  const char *v13; // eax
  unsigned __int8 (__thiscall **v14)(_DWORD, int); // edi
  int v15; // eax
  unsigned int i; // edi
  int v17; // esi
  size_t v18; // [esp-4h] [ebp-18h]
  int v19; // [esp+10h] [ebp-4h] BYREF

  v3 = a3;
  if ( a3 )
  {
    v5 = *(_DWORD *)(a3 + 8);
    HIDWORD(v18) = a2;
    if ( !v5 )
      goto LABEL_14;
    LODWORD(v18) = 9;
    if ( _strnicmp((const char *)v5, "FlameNode", v18) )
      goto LABEL_14;
    v6 = 0;
    if ( isdigit(*(char *)(v5 + 9)) )
    {
      v7 = TESForm_LookupByFormID(*(char *)(v5 + 9) - 0x12);
    }
    else
    {
      if ( !isalpha(*(char *)(v5 + 9)) )
      {
LABEL_9:
        v9 = (_DWORD *)*this;
        v19 = 0;
        p_refID = &v6[1].member.refID;
        v11 = (unsigned __int8 (__thiscall **)(_DWORD, int))(*v9 + 4);
        v12 = (*(int (__thiscall **)(UInt32 *, int *))(v6[1].member.refID + 0x14))(&v6[1].member.refID, &v19);
        if ( !(*v11)(*this, v12) )
        {
          v13 = (const char *)(*(int (__thiscall **)(UInt32 *))(*p_refID + 0x14))(&v6[1].member.refID);
          if ( sub_439EB0(this, v13, 0, 0, 1) )
          {
            v14 = (unsigned __int8 (__thiscall **)(_DWORD, int))(*(_DWORD *)*this + 4);
            v15 = (*(int (__thiscall **)(UInt32 *, int *))(*p_refID + 0x14))(&v6[1].member.refID, &v19);
            if ( (*v14)(*this, v15) )
              InterlockedDecrement((volatile LONG *)(v19 + 4));
          }
        }
        v3 = a3;
LABEL_14:
        for ( i = 0; *(unsigned __int16 *)(v3 + 0xB6) > i; ++i )
        {
          v17 = *(_DWORD *)(*(_DWORD *)(v3 + 0xB0) + 4 * i);
          if ( v17 )
          {
            if ( (char *)(*(int (__thiscall **)(int))(*(_DWORD *)v17 + 4))(v17) == dword_B3FAB0 )
              sub_43A100(this, i, v17);
          }
        }
        return;
      }
      v8 = tolower(*(char *)(v5 + 9));
      v7 = TESForm_LookupByFormID(v8 - 0x39);
    }
    v6 = v7;
    goto LABEL_9;
  }
}
