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
  TESObjectCELL *ParentCell; // eax
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
  int v30; // [esp-10h] [ebp-260h]
  int v31; // [esp+14h] [ebp-23Ch]
  char *m_data; // [esp+18h] [ebp-238h]
  BSStringT v33; // [esp+1Ch] [ebp-234h] BYREF
  int v34; // [esp+24h] [ebp-22Ch]
  char *v35; // [esp+28h] [ebp-228h]
  int v36; // [esp+2Ch] [ebp-224h]
  char v37[8]; // [esp+30h] [ebp-220h] BYREF
  char Str[260]; // [esp+38h] [ebp-218h] BYREF
  char v39[260]; // [esp+13Ch] [ebp-114h] BYREF
  int v40; // [esp+24Ch] [ebp-4h]

  v10 = a1;
  v36 = (int)a1;
  v34 = a10;
  if ( a10 )
  {
    v33.m_data = 0;
    v33.m_dataLen = 0;
    v33.m_bufLen = 0;
    v11 = (TESObjectREFR *)TESDataHandler_g_PlayerRef;
    v12 = 0;
    v40 = 0;
    v31 = 0;
    Name = TESObjectREFR_GetName(v11);
    v14 = (TESObjectREFR *)TESDataHandler_g_PlayerRef;
    v35 = Name;
    GetTeleportCellName(v14, &v33);
    m_data = v33.m_data;
    if ( !v33.m_data )
    {
      if ( TESObjectREFR_GetParentCell((TESObjectREFR *)TESDataHandler_g_PlayerRef) )
      {
        ParentCell = TESObjectREFR_GetParentCell((TESObjectREFR *)TESDataHandler_g_PlayerRef);
        m_data = (char *)ParentCell->vtbl->GetEditorName((TESForm *)ParentCell);
      }
      else
      {
        m_data = EmptyString;
      }
    }
    while ( 1 )
    {
      if ( v12 )
        _sprintf(v37, " #%d", v12 + 1);
      else
        v37[0] = 0;
      v16 = GetTickCount;
      v17 = TESDataHandler_g_PlayerRef;
      v17->unk714 += GetTickCount() - v17->TickCount;
      v17->TickCount = v16();
      unk714 = v17->unk714;
      v19 = unk714 / 0x36EE80;
      unk714 %= 0x36EE80u;
      v20 = unk714 / 0xEA60;
      v21 = 0x10624DD3LL * (unk714 % 0xEA60);
      v22 = unk714 % 0xEA60 / 0x3E8;
      if ( !v10[0x22] )
        sub_464320(v10, a2, st4_0, a4, a5, a6, a7, a8, a9, SHIDWORD(v21));
      v23 = v10[0x22];
      Level = Actor_GetLevel((Actor *)TESDataHandler_g_PlayerRef, v19);
      _sprintf(Str, "Save %i - %s - %s, Level %i, Playing Time %02i.%02i.%02i", v23, v35, m_data, Level, v30, v20, v22);
      for ( i = strpbrk(Str, "\\/:*<>?|\""); i; i = strpbrk(i + 1, "\\/:*<>?|\"") )
        *i = *i != 0x22 ? 0x20 : 0x27;
      _sprintf(v39, "%s%s%s.ess", word_B3F280, lpString2, Str);
      v26 = OBSE_g_FileFinder ? OBSE_g_FileFinder->vtbl->FindFile(OBSE_g_FileFinder, v39, 0, 0, 0xFFFFFFFF) : 0;
      ++v31;
      if ( !v26 )
        break;
      v10 = (_DWORD *)v36;
      v12 = v31;
    }
    v27 = Str;
    v28 = v34 - (_DWORD)Str;
    do
    {
      v29 = *v27;
      v27[v28] = *v27;
      ++v27;
    }
    while ( v29 );
    FormHeapFree((unsigned int)v33.m_data);
  }
}
