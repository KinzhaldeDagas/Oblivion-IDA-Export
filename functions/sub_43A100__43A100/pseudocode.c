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

  v3 = a3; /*0x43a102*/
  if ( a3 ) /*0x43a10b*/
  {
    v5 = *(_DWORD *)(a3 + 8); /*0x43a112*/
    HIDWORD(v18) = a2; /*0x43a117*/
    if ( !v5 ) /*0x43a118*/
      goto LABEL_14; /*0x43a118*/
    LODWORD(v18) = 9; /*0x43a11e*/
    if ( _strnicmp((const char *)v5, "FlameNode", v18) ) /*0x43a126*/
      goto LABEL_14; /*0x43a130*/
    v6 = 0; /*0x43a13b*/
    if ( isdigit(*(char *)(v5 + 9)) ) /*0x43a13d*/
    {
      v7 = TESForm_LookupByFormID(*(char *)(v5 + 9) - 0x12); /*0x43a151*/
    }
    else
    {
      if ( !isalpha(*(char *)(v5 + 9)) ) /*0x43a16a*/
      {
LABEL_9:
        v9 = (_DWORD *)*this; /*0x43a184*/
        v19 = 0; /*0x43a187*/
        p_refID = &v6[1].member.refID; /*0x43a194*/
        v11 = (unsigned __int8 (__thiscall **)(_DWORD, int))(*v9 + 4); /*0x43a1a1*/
        v12 = (*(int (__thiscall **)(UInt32 *, int *))(v6[1].member.refID + 0x14))(&v6[1].member.refID, &v19); /*0x43a1a4*/
        if ( !(*v11)(*this, v12) ) /*0x43a1ac*/
        {
          v13 = (const char *)(*(int (__thiscall **)(UInt32 *))(*p_refID + 0x14))(&v6[1].member.refID); /*0x43a1bf*/
          if ( ModelLoader_LoadModelData(this, v13, 0, 0, 1) ) /*0x43a1c4*/
          {
            v14 = (unsigned __int8 (__thiscall **)(_DWORD, int))(*(_DWORD *)*this + 4); /*0x43a1de*/
            v15 = (*(int (__thiscall **)(UInt32 *, int *))(*p_refID + 0x14))(&v6[1].member.refID, &v19); /*0x43a1e1*/
            if ( (*v14)(*this, v15) ) /*0x43a1e9*/
              InterlockedDecrement((volatile LONG *)(v19 + 4)); /*0x43a1f7*/
          }
        }
        v3 = a3; /*0x43a1fd*/
LABEL_14:
        for ( i = 0; *(unsigned __int16 *)(v3 + 0xB6) > i; ++i ) /*0x43a201*/
        {
          v17 = *(_DWORD *)(*(_DWORD *)(v3 + 0xB0) + 4 * i); /*0x43a218*/
          if ( v17 ) /*0x43a21d*/
          {
            if ( (NiRTTI *)(*(int (__thiscall **)(int))(*(_DWORD *)v17 + 4))(v17) == &parent ) /*0x43a232*/
              sub_43A100(this, i, v17); /*0x43a237*/
          }
        }
        return; /*0x43a248*/
      }
      v8 = tolower(*(char *)(v5 + 9)); /*0x43a171*/
      v7 = TESForm_LookupByFormID(v8 - 0x39); /*0x43a17a*/
    }
    v6 = v7; /*0x43a182*/
    goto LABEL_9; /*0x43a182*/
  }
}
