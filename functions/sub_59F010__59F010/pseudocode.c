void __userpurge sub_59F010(
        int a1@<ecx>,
        const char **a2@<ebp>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        signed int a6,
        const char **a7)
{
  CHAR *v8; // eax
  int **v9; // edi
  double Float; // st7
  int v11; // eax
  _DWORD *v12; // eax
  Tile *OpenMenuTile; // edi
  float *Singleton; // eax
  double v15; // st7
  TESTopic *v16; // eax
  Unk1C *DialogueInfo; // eax
  Tile *v18; // edi
  float *v19; // eax
  double v20; // st7
  double v21; // st7
  Tile *v22; // eax
  TESTopic *v23; // ebp
  Tile *v24; // edi
  TESObjectREFR *v25; // edx
  float *v26; // eax
  double v27; // st7
  TESTopic *v28; // ebp
  Tile *v29; // edi
  TESObjectREFR *v30; // edx
  float *v31; // eax
  double v32; // st7
  double v33; // st7
  TESTopic *v34; // ebp
  Tile *v35; // edi
  TESObjectREFR *v36; // edx
  float *v37; // eax
  double v38; // st7
  double v39; // st7
  TESTopic *v40; // ebp
  Tile *v41; // edi
  TESObjectREFR *v42; // edx
  float *v43; // eax
  double v44; // st7

  if ( a6 >= 0x64 )
  {
    v8 = sub_588C10(a7, 0xFDE);
    BSStringT_Set((BSStringT *)(a1 + 0x8C), v8, 0);
    Tile_SetFloat(*(Tile **)(a1 + 0x38), (_DWORD *)0xFA1, 1.0);
    v9 = (int **)sub_6B8660();
    Float = Tile_GetFloat(a7, 0xFAA);
    v11 = Double_To_SInt32(Float);
    if ( (unsigned __int8)sub_6B8610(v9, v11) )
    {
      v12 = (_DWORD *)sub_6B8650(v9);
      sub_6B8560(v12);
      if ( *(_BYTE *)(sub_6B8650(v9) + 0x20) )
        *(_BYTE *)(sub_6B8650(v9) + 0x21) = 0;
      if ( (*(_BYTE *)(*(_DWORD *)(sub_6B8650(v9) + 0x18) + 0x25) & 1) != 0 )
      {
        *(_BYTE *)(a1 + 0x88) = 1;
        dword_B3B294 = *(_DWORD *)(sub_6B8650(v9) + 0x18);
      }
      sub_59EB90(a1, a7, Float, a3, a4);
    }
    return;
  }
  switch ( a6 )
  {
    case 4:
      sub_5EF930(*(Actor **)(a1 + 0x60));
      sub_59EB90(a1, a2, a5, a3, a4);
      return;
    case 7:
      OpenMenuTile = (Tile *)Menu_GetOpenMenuTile(0x3F1);
      if ( !OpenMenuTile )
        return;
      Singleton = (float *)InterfaceManager_GetSingleton(0, 1);
      v15 = sub_57F9F0(Singleton, a3, a5, a4, 0.0, (_DWORD *)0xFDD, 0);
      Tile_SetFloat(OpenMenuTile, (_DWORD *)0xFA1, 1.0);
      sub_58FBA0((int)OpenMenuTile, a3, a4, v15, 0);
      sub_57DE50(1);
      (*(void (__thiscall **)(int, int, const char **))(*(_DWORD *)a1 + 0x14))(a1, 7, a7);
      sub_5C01D0(*(_DWORD *)(a1 + 0x60));
      FormHeapFree(*(_DWORD *)(a1 + 0x8C));
      goto LABEL_47;
    case 8:
      dword_B131F8 = 0;
      v16 = (TESTopic *)TESTopic::GEtTopic(5, 0);
      if ( v16 )
      {
        DialogueInfo = TESTopic::CreateDialogueInfo(
                         v16,
                         *(Actor **)(a1 + 0x60),
                         (TESObjectREFR *)TESDataHandler_g_PlayerRef,
                         (int)v16,
                         0);
        dword_B131F8 = 0xFFFFFFFF;
        if ( DialogueInfo )
        {
LABEL_27:
          sub_59EAA0(a1, a4, DialogueInfo);
          FormHeapFree(*(_DWORD *)(a1 + 0x8C));
          goto LABEL_47;
        }
        v18 = (Tile *)Menu_GetOpenMenuTile(0x3F1);
        if ( !v18 )
          return;
        v19 = (float *)InterfaceManager_GetSingleton(0, 1);
        v20 = sub_57F9F0(v19, a3, a5, a4, 0.0, (_DWORD *)0xFDD, 0);
        Tile_SetFloat(v18, (_DWORD *)0xFA1, 1.0);
        sub_58FBA0((int)v18, a3, a4, v20, 0);
        LOBYTE(TESDataHandler_g_PlayerRef->unk124) = 1;
        sub_57DE50(1);
        v21 = ((double (__thiscall *)(int, int, const char **))*(_DWORD *)(*(_DWORD *)a1 + 0x14))(a1, 8, a7);
      }
      else
      {
        v22 = (Tile *)Menu_GetOpenMenuTile(0x3F1);
        v18 = v22;
        if ( !v22 )
          return;
        Tile_SetFloat(v22, (_DWORD *)0xFA1, 1.0);
        sub_58FBA0((int)v18, a3, a4, a5, 0);
        LOBYTE(TESDataHandler_g_PlayerRef->unk124) = 1;
        sub_57DE50(1);
        v21 = ((double (__thiscall *)(int, int, const char **))*(_DWORD *)(*(_DWORD *)a1 + 0x14))(a1, 8, a7);
      }
      sub_57A8D0((char)v18, a3, a4, v21, *(TESObjectREFR **)(a1 + 0x60), 1, 1, 0);
      goto LABEL_22;
    case 9:
      v23 = (TESTopic *)TESTopic::GEtTopic(5, 0);
      v24 = (Tile *)Menu_GetOpenMenuTile(0x3F1);
      if ( !v24 )
        return;
      if ( !v23
        || (v25 = (TESObjectREFR *)TESDataHandler_g_PlayerRef,
            dword_B131F8 = 2,
            DialogueInfo = TESTopic::CreateDialogueInfo(v23, *(Actor **)(a1 + 0x60), v25, (int)v23, 0),
            dword_B131F8 = 0xFFFFFFFF,
            !DialogueInfo) )
      {
        v26 = (float *)InterfaceManager_GetSingleton(0, 1);
        v27 = sub_57F9F0(v26, a3, a5, a4, 0.0, (_DWORD *)0xFDD, 0);
        Tile_SetFloat(v24, (_DWORD *)0xFA1, 1.0);
        sub_58FBA0((int)v24, a3, a4, v27, 0);
        sub_57DE50(1);
        (*(void (__thiscall **)(int, int, const char **))(*(_DWORD *)a1 + 0x14))(a1, 9, a7);
        sub_57A940((int)v23, a3, a4, *(void **)(a1 + 0x60));
        FormHeapFree(*(_DWORD *)(a1 + 0x8C));
        goto LABEL_47;
      }
      goto LABEL_27;
    case 0xC:
      v28 = (TESTopic *)TESTopic::GEtTopic(5, 0);
      v29 = (Tile *)Menu_GetOpenMenuTile(0x3F1);
      if ( !v29 )
        return;
      if ( v28 )
      {
        v30 = (TESObjectREFR *)TESDataHandler_g_PlayerRef;
        dword_B131F8 = 1;
        DialogueInfo = TESTopic::CreateDialogueInfo(v28, *(Actor **)(a1 + 0x60), v30, (int)v28, 0);
        dword_B131F8 = 0xFFFFFFFF;
        if ( DialogueInfo )
          goto LABEL_27;
      }
      v31 = (float *)InterfaceManager_GetSingleton(0, 1);
      v32 = sub_57F9F0(v31, a3, a5, a4, 0.0, (_DWORD *)0xFDD, 0);
      Tile_SetFloat(v29, (_DWORD *)0xFA1, 1.0);
      sub_58FBA0((int)v29, a3, a4, v32, 0);
      sub_57DE50(1);
      v33 = ((double (__thiscall *)(int, int, const char **))*(_DWORD *)(*(_DWORD *)a1 + 0x14))(a1, 0xC, a7);
      sub_5D2070((char)v28, (int)v29, a1, a3, v33, a4, 2, 0, 0, *(_DWORD *)(a1 + 0x60));
LABEL_22:
      FormHeapFree(*(_DWORD *)(a1 + 0x8C));
LABEL_47:
      *(_WORD *)(a1 + 0x90) = 0;
      *(_WORD *)(a1 + 0x92) = 0;
      *(_DWORD *)(a1 + 0x8C) = 0;
      return;
    case 0xD:
      v34 = (TESTopic *)TESTopic::GEtTopic(5, 0);
      v35 = (Tile *)Menu_GetOpenMenuTile(0x3F1);
      if ( !v35 )
        return;
      if ( !v34
        || (v36 = (TESObjectREFR *)TESDataHandler_g_PlayerRef,
            dword_B131F8 = 3,
            DialogueInfo = TESTopic::CreateDialogueInfo(v34, *(Actor **)(a1 + 0x60), v36, (int)v34, 0),
            dword_B131F8 = 0xFFFFFFFF,
            !DialogueInfo) )
      {
        v37 = (float *)InterfaceManager_GetSingleton(0, 1);
        v38 = sub_57F9F0(v37, a3, a5, a4, 0.0, (_DWORD *)0xFDD, 0);
        Tile_SetFloat(v35, (_DWORD *)0xFA1, 1.0);
        sub_58FBA0((int)v35, a3, a4, v38, 0);
        sub_57DE50(1);
        v39 = ((double (__thiscall *)(int, int, const char **))*(_DWORD *)(*(_DWORD *)a1 + 0x14))(a1, 0xD, a7);
        sub_5CFCE0((char)v34, a3, a4, v39, *(_DWORD *)(a1 + 0x60));
        FormHeapFree(*(_DWORD *)(a1 + 0x8C));
        goto LABEL_47;
      }
      goto LABEL_27;
    case 0x10:
      v40 = (TESTopic *)TESTopic::GEtTopic(5, 0);
      v41 = (Tile *)Menu_GetOpenMenuTile(0x3F1);
      if ( !v41 )
        return;
      if ( !v40
        || (v42 = (TESObjectREFR *)TESDataHandler_g_PlayerRef,
            dword_B131F8 = 4,
            DialogueInfo = TESTopic::CreateDialogueInfo(v40, *(Actor **)(a1 + 0x60), v42, (int)v40, 0),
            dword_B131F8 = 0xFFFFFFFF,
            !DialogueInfo) )
      {
        v43 = (float *)InterfaceManager_GetSingleton(0, 1);
        v44 = sub_57F9F0(v43, a3, a5, a4, 0.0, (_DWORD *)0xFDD, 0);
        Tile_SetFloat(v41, (_DWORD *)0xFA1, 1.0);
        sub_58FBA0((int)v41, a3, a4, v44, 0);
        sub_57DE50(1);
        (*(void (__thiscall **)(int, int, const char **))(*(_DWORD *)a1 + 0x14))(a1, 0x10, a7);
        sub_5D9590((char)v40, (char)v41, a3, a4, *(_DWORD *)(a1 + 0x60));
        FormHeapFree(*(_DWORD *)(a1 + 0x8C));
        goto LABEL_47;
      }
      goto LABEL_27;
    case 3:
    case 0xA:
      sub_57DE50(2);
      *(_BYTE *)(a1 + 0x64) = 0;
      sub_59DD40(a1, a3, a4);
      FormHeapFree(*(_DWORD *)(a1 + 0x8C));
      goto LABEL_47;
  }
}
