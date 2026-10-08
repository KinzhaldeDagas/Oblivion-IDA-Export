void __userpurge sub_45D920(
        _DWORD *a1@<ecx>,
        double a2@<st0>,
        double st4_0@<st3>,
        double a4@<st2>,
        double a5@<st1>,
        double a6@<st4>,
        double a7@<st7>,
        double a8@<st6>,
        double a9@<st5>,
        int a10)
{
  _DWORD *v10; // ebx
  TESObjectREFR *v11; // ecx
  int v12; // esi
  char *Name; // eax
  TESObjectREFR *v14; // ecx
  UInt32 DwordAtOffset40; // eax
  DWORD (__stdcall *v16)(); // edi
  PlayerCharacter *v17; // esi
  UInt32 unk714; // esi
  unsigned int v19; // edi
  unsigned int v20; // ebp
  __int64 v21; // rax
  unsigned int v22; // esi
  int v23; // ebx
  unsigned __int16 Level; // ax
  char *i; // eax
  UInt32 v26; // eax
  char *v27; // eax
  int v28; // edx
  char v29; // cl
  int v30; // [esp+14h] [ebp-23Ch]
  char *m_data; // [esp+18h] [ebp-238h]
  BSStringT v32; // [esp+1Ch] [ebp-234h] BYREF
  int v33; // [esp+24h] [ebp-22Ch]
  char *v34; // [esp+28h] [ebp-228h]
  _DWORD *v35; // [esp+2Ch] [ebp-224h]
  char v36[8]; // [esp+30h] [ebp-220h] BYREF
  char Str[260]; // [esp+38h] [ebp-218h] BYREF
  char v38[260]; // [esp+13Ch] [ebp-114h] BYREF
  int v39; // [esp+24Ch] [ebp-4h]

  v10 = a1; /*0x45d966*/
  v35 = a1; /*0x45d968*/
  v33 = a10; /*0x45d96c*/
  if ( a10 )
  {
    v32.m_data = 0; /*0x45d976*/
    v32.m_dataLen = 0; /*0x45d97a*/
    v32.m_bufLen = 0; /*0x45d97f*/
    v11 = (TESObjectREFR *)reference; /*0x45d984*/
    v12 = 0; /*0x45d98a*/
    v39 = 0; /*0x45d98c*/
    v30 = 0; /*0x45d993*/
    Name = TESObjectREFR_GetName(v11); /*0x45d997*/
    v14 = (TESObjectREFR *)reference; /*0x45d99c*/
    v34 = Name; /*0x45d9a2*/
    GetTeleportCellName(v14, &v32); /*0x45d9ab*/
    m_data = v32.m_data; /*0x45d9b6*/
    if ( !v32.m_data ) /*0x45d9ba*/
    {
      if ( Shared_GetDwordAtOffset40(reference) ) /*0x45d9c2*/
      {
        DwordAtOffset40 = Shared_GetDwordAtOffset40(reference); /*0x45d9d1*/
        m_data = (char *)(*(int (__thiscall **)(UInt32))(*(_DWORD *)DwordAtOffset40 + 0xD4))(DwordAtOffset40); /*0x45d9e2*/
      }
      else
      {
        m_data = EmptyString; /*0x45d9e8*/
      }
    }
    while ( 1 )
    {
      if ( v12 ) /*0x45d9fe*/
        _sprintf(v36, " #%d", v12 + 1); /*0x45da15*/
      else
        v36[0] = 0; /*0x45da00*/
      v16 = GetTickCount; /*0x45da1d*/
      v17 = reference; /*0x45da23*/
      v17->unk714 += GetTickCount() - v17->TickCount; /*0x45da31*/
      v17->TickCount = v16(); /*0x45da39*/
      unk714 = v17->unk714; /*0x45da3f*/
      v19 = unk714 / 0x36EE80; /*0x45da4e*/
      unk714 %= 0x36EE80u; /*0x45da59*/
      v20 = unk714 / 0xEA60; /*0x45da64*/
      v21 = 0x10624DD3LL * (unk714 % 0xEA60); /*0x45da76*/
      v22 = unk714 % 0xEA60 / 0x3E8; /*0x45da7a*/
      if ( !v10[0x22] ) /*0x45da7d*/
        sub_464320(v10, a2, st4_0, a4, a5, a6, a7, a8, a9, SHIDWORD(v21)); /*0x45da88*/
      v23 = v10[0x22]; /*0x45da8d*/
      Level = Actor_GetLevel((Actor *)reference); /*0x45daa1*/
      _sprintf(Str, "Save %i - %s - %s, Level %i, Playing Time %02i.%02i.%02i", v23, v34, m_data, Level, v19, v20, v22); /*0x45dabf*/
      for ( i = strpbrk(Str, "\\/:*<>?|\""); i; i = strpbrk(i + 1, "\\/:*<>?|\"") )
        *i = *i != 0x22 ? 0x20 : 0x27;
      _sprintf(v38, "%s%s%s.ess", unk_B3F280, lpString2, Str); /*0x45db23*/
      v26 = MEMORY[0xB33A04] ? MEMORY[0xB33A04]->vtbl->FindFile(MEMORY[0xB33A04], v38, 0, 0, 0xFFFFFFFF) : 0;
      ++v30; /*0x45db53*/
      if ( !v26 ) /*0x45db5a*/
        break; /*0x45db5a*/
      v10 = v35; /*0x45d9f2*/
      v12 = v30; /*0x45d9f6*/
    }
    v27 = Str; /*0x45db64*/
    v28 = v33 - (_DWORD)Str; /*0x45db6a*/
    do /*0x45db7a*/
    {
      v29 = *v27; /*0x45db70*/
      v27[v28] = *v27; /*0x45db72*/
      ++v27; /*0x45db75*/
    }
    while ( v29 ); /*0x45db7a*/
    FormHeapFree((unsigned int)v32.m_data); /*0x45db81*/
  }
}
