Actor *__thiscall sub_675090(ActorProcessManager *this, BSExtraDataVtbl *a2)
{
  ActorProcessManager *v2; // esi
  int v3; // ebx
  Actor *v4; // eax
  Actor *result; // eax
  Actor *v6; // edi
  ActorVtbl *vtbl; // esi
  void (__thiscall *Unk_16)(TESForm *); // ecx
  char *v9; // ebx
  void (__thiscall *v10)(TESForm *); // ecx
  void (__thiscall *v11)(TESForm *); // edi
  char *v12; // ecx
  void (__thiscall *v13)(TESForm *); // eax
  ExtraDataList *p_ClearModified; // esi
  Actor *i; // [esp+10h] [ebp-Ch]
  int v17; // [esp+18h] [ebp-4h]

  v2 = this;
  v3 = 0;
  v17 = 0;
  do
  {
    if ( v3 )
    {
      if ( v3 == 1 )
      {
        v4 = sub_673A50(v2, 1);
      }
      else if ( v3 == 2 )
      {
        v4 = sub_673A50(v2, 2);
      }
      else
      {
        v4 = sub_673A50(v2, 3);
      }
    }
    else
    {
      v4 = sub_673A50(v2, 0);
    }
    result = sub_7616D0((ActorList *)v4);
    for ( i = result; result; i = result )
    {
      v6 = i;
      if ( !*(_DWORD *)&i->members.super.super.super.type && !i->vtbl )
        break;
      vtbl = 0;
      if ( (*((unsigned __int8 (__thiscall **)(ActorVtbl *))i->vtbl->super.super.super.super.InitializeComponent + 0x64))(i->vtbl) )
        vtbl = i->vtbl;
      if ( vtbl )
      {
        Unk_16 = vtbl->super.super.super.Unk_16;
        v9 = 0;
        if ( Unk_16 )
          v9 = (char *)(*(int (__thiscall **)(_DWORD))(*(_DWORD *)Unk_16 + 0x184))(Unk_16);
        v10 = vtbl->super.super.super.Unk_16;
        if ( !v10 || v9 == *((char **)v10 + 2) )
        {
          v12 = (char *)a2;
        }
        else
        {
          v11 = 0;
          if ( (unsigned int)(*(int (__thiscall **)(_DWORD *))(*(_DWORD *)v10 + 8))(v10) <= 1 )
            v11 = vtbl->super.super.super.Unk_16;
          v12 = (char *)a2;
          if ( v9 == (char *)a2 )
          {
            if ( v11 )
              *((_DWORD *)v11 + 0x30) = 0;
          }
        }
        v13 = vtbl->super.super.super.Unk_16;
        if ( v13 )
        {
          if ( *((char **)v13 + 2) == v12 )
          {
            *((_DWORD *)v13 + 2) = 0;
            if ( sub_567770(v12) )
              (*((void (__thiscall **)(ActorVtbl *, int))vtbl->super.super.super.super.InitializeComponent + 0x11))(
                vtbl,
                0x30000);
            if ( !sub_45A500(SaveLoad_CurrentSavegame) )
              (*(void (__thiscall **)(void (__thiscall *)(TESForm *), ActorVtbl *, int))(*(_DWORD *)vtbl->super.super.super.Unk_16
                                                                                       + 0x18))(
                vtbl->super.super.super.Unk_16,
                vtbl,
                1);
          }
        }
        p_ClearModified = (ExtraDataList *)&vtbl->super.super.super.ClearModified;
        if ( ExtraDataList::GetExtraPackage(p_ClearModified) == a2 )
          sub_4268B0(p_ClearModified, 0, 0, 0, 0, 0);
        v6 = i;
        v3 = v17;
      }
      result = *(Actor **)&v6->members.super.super.super.type;
      v2 = this;
    }
    v17 = ++v3;
  }
  while ( v3 < 4 );
  return result;
}
