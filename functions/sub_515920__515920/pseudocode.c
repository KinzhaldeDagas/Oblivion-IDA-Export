char __cdecl sub_515920(int a1, int a2, int a3)
{
  int v6; // edi
  Actor *v7; // esi
  TESForm *v8; // ebp
  int v9; // edi
  int v10; // eax
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  int v14; // ecx
  char *Name; // eax
  char *m_data; // esi
  UInt32 refID; // [esp+8h] [ebp-30h]
  const char *v19; // [esp+Ch] [ebp-2Ch]
  BSStringT Format; // [esp+24h] [ebp-14h] BYREF
  int v21; // [esp+34h] [ebp-4h]

  v6 = a3;
  v7 = (Actor *)TESDataHandler_g_PlayerRef;
  if ( a3 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a3 + 0x190))(a3) )
    {
      if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v6 + 0x170))(v6) + 4) == 0x23 )
        v7 = (Actor *)v6;
    }
  }
  if ( v7 )
  {
    if ( sub_5E32D0(v7) )
    {
      v8 = v7->vtbl->super.super.GetBaseForm((TESObjectREFR *)v7);
      v9 = 0;
      v10 = (int)v7->vtbl->super.super.GetNiNode((TESObjectREFR *)v7);
      a3 = 0;
      if ( v10 )
        a3 = (*(int (__thiscall **)(int))(*(_DWORD *)v10 + 8))(v10);
      if ( !Actor_IsFemale(v7) )
        v9 = 1;
      if ( v9 == 1 )
        v8[1].member.modlist.data = (Data *)((int)v8[1].member.modlist.data | 1);
      else
        v8[1].member.modlist.data = (Data *)((int)v8[1].member.modlist.data & ~1u);
      (*(void (__thiscall **)(UInt32 *, int))(v8[1].member.refID + 0x50))(&v8[1].member.refID, 0x10);
      if ( a3 )
      {
        v11 = ((int (__thiscall *)(Actor *, _DWORD))v7->vtbl->super.super.Unk_4D)(v7, 0);
        if ( v11 )
        {
          v12 = *(_DWORD *)(v11 + 0x1C);
          if ( v12 )
          {
            (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)v12 + 0x88))(v12, &a3, v11);
            sub_7016A0((NiD3DVertexShader *)&a3);
          }
        }
        v13 = ((int (__thiscall *)(Actor *, _DWORD))v7->vtbl->super.super.Unk_4C)(v7, 0);
        if ( v13 )
        {
          v14 = *(_DWORD *)(v13 + 0x1C);
          if ( v14 )
          {
            (*(void (__thiscall **)(int, BSStringT *, int))(*(_DWORD *)v14 + 0x88))(v14, &Format, v13);
            sub_7016A0((NiD3DVertexShader *)&Format);
          }
        }
      }
      sub_405CE0(v8);
      v7->members.super.process->Unk_17(v7->members.super.process);
      ((void (__thiscall *)(LowProcess *, int))v7->members.super.process->SetUnk16C)(v7->members.super.process, 1);
      ((void (__thiscall *)(LowProcess *, Actor *))v7->members.super.process->Unk_C5)(v7->members.super.process, v7);
      Format.m_data = 0;
      Format.m_dataLen = 0;
      Format.m_bufLen = 0;
      v19 = *(const char **)(4 * v9 + 0xB10BC4);
      refID = v7->members.super.super.super.refID;
      v21 = 0;
      Name = TESObjectREFR_GetName((TESObjectREFR *)v7);
      BSStringT_Static_Format(&Format, "\"%s\" (%08x) is now %s", Name, refID, v19);
      m_data = Format.m_data;
      Interface_ConsolePrint(Format.m_data);
      FormHeapFree((unsigned int)m_data);
    }
  }
  return 1;
}
