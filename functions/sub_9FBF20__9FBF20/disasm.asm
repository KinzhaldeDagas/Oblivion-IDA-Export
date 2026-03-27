0x9FBF20: push    0FFFFFFFFh
0x9FBF22: push    offset SEH_9FBF20
0x9FBF27: mov     eax, large fs:0
0x9FBF2D: push    eax
0x9FBF2E: push    esi
0x9FBF2F: mov     eax, ___security_cookie
0x9FBF34: xor     eax, esp
0x9FBF36: push    eax
0x9FBF37: lea     eax, [esp+14h+var_C]
0x9FBF3B: mov     large fs:0, eax
0x9FBF41: xor     esi, esi
0x9FBF43: push    esi; a3
0x9FBF44: push    offset EmptyString; a2
0x9FBF49: mov     ecx, offset stru_B3B370; this
0x9FBF4E: call    BSStringT_Set
0x9FBF53: push    esi; a3
0x9FBF54: push    offset aItem_pickup; "item_pickup"
0x9FBF59: mov     ecx, offset stru_B3B378; this
0x9FBF5E: mov     [esp+1Ch+var_4], esi
0x9FBF62: mov     stru_B3B378.m_data, esi
0x9FBF68: mov     stru_B3B378.m_dataLen, si
0x9FBF6F: mov     stru_B3B378.m_bufLen, si
0x9FBF76: call    BSStringT_Set
0x9FBF7B: push    esi; a3
0x9FBF7C: push    offset aOpen_container; "open_container"
0x9FBF81: mov     ecx, offset stru_B3B380; this
0x9FBF86: mov     byte ptr [esp+1Ch+var_4], 1
0x9FBF8B: mov     stru_B3B380.m_data, esi
0x9FBF91: mov     stru_B3B380.m_dataLen, si
0x9FBF98: mov     stru_B3B380.m_bufLen, si
0x9FBF9F: call    BSStringT_Set
0x9FBFA4: push    esi; a3
0x9FBFA5: push    offset aChair_sit; "chair_sit"
0x9FBFAA: mov     ecx, offset stru_B3B388; this
0x9FBFAF: mov     byte ptr [esp+1Ch+var_4], 2
0x9FBFB4: mov     stru_B3B388.m_data, esi
0x9FBFBA: mov     stru_B3B388.m_dataLen, si
0x9FBFC1: mov     stru_B3B388.m_bufLen, si
0x9FBFC8: call    BSStringT_Set
0x9FBFCD: push    esi; a3
0x9FBFCE: push    offset aActivate_pull_; "activate_pull_push"
0x9FBFD3: mov     ecx, offset stru_B3B390; this
0x9FBFD8: mov     byte ptr [esp+1Ch+var_4], 3
0x9FBFDD: mov     stru_B3B390.m_data, esi
0x9FBFE3: mov     stru_B3B390.m_dataLen, si
0x9FBFEA: mov     stru_B3B390.m_bufLen, si
0x9FBFF1: call    BSStringT_Set
0x9FBFF6: push    esi; a3
0x9FBFF7: push    offset aBed_sleep; "bed_sleep"
0x9FBFFC: mov     ecx, offset stru_B3B398; this
0x9FC001: mov     byte ptr [esp+1Ch+var_4], 4
0x9FC006: mov     stru_B3B398.m_data, esi
0x9FC00C: mov     stru_B3B398.m_dataLen, si
0x9FC013: mov     stru_B3B398.m_bufLen, si
0x9FC01A: call    BSStringT_Set
0x9FC01F: push    esi; a3
0x9FC020: push    offset aBook_scroll_re; "book_scroll_read"
0x9FC025: mov     ecx, offset stru_B3B3A0; this
0x9FC02A: mov     byte ptr [esp+1Ch+var_4], 5
0x9FC02F: mov     stru_B3B3A0.m_data, esi
0x9FC035: mov     stru_B3B3A0.m_dataLen, si
0x9FC03C: mov     stru_B3B3A0.m_bufLen, si
0x9FC043: call    BSStringT_Set
0x9FC048: push    esi; a3
0x9FC049: push    offset aNpc_talk; "npc_talk"
0x9FC04E: mov     ecx, offset stru_B3B3A8; this
0x9FC053: mov     byte ptr [esp+1Ch+var_4], 6
0x9FC058: mov     stru_B3B3A8.m_data, esi
0x9FC05E: mov     stru_B3B3A8.m_dataLen, si
0x9FC065: mov     stru_B3B3A8.m_bufLen, si
0x9FC06C: call    BSStringT_Set
0x9FC071: push    esi; a3
0x9FC072: push    offset aOpen_door; "open_door"
0x9FC077: mov     ecx, offset stru_B3B3B0; this
0x9FC07C: mov     byte ptr [esp+1Ch+var_4], 7
0x9FC081: mov     stru_B3B3B0.m_data, esi
0x9FC087: mov     stru_B3B3B0.m_dataLen, si
0x9FC08E: mov     stru_B3B3B0.m_bufLen, si
0x9FC095: call    BSStringT_Set
0x9FC09A: mov     byte ptr [esp+14h+var_4], 8
0x9FC09F: mov     stru_B3B3B8.m_data, esi
0x9FC0A5: mov     stru_B3B3B8.m_dataLen, si
0x9FC0AC: push    esi; a3
0x9FC0AD: push    offset aHorses; "horses"
0x9FC0B2: mov     ecx, offset stru_B3B3B8; this
0x9FC0B7: mov     stru_B3B3B8.m_bufLen, si
0x9FC0BE: call    BSStringT_Set
0x9FC0C3: push    esi; a3
0x9FC0C4: push    offset aCrown; "crown"
0x9FC0C9: mov     ecx, offset stru_B3B3C0; this
0x9FC0CE: mov     byte ptr [esp+1Ch+var_4], 9
0x9FC0D3: mov     stru_B3B3C0.m_data, esi
0x9FC0D9: mov     stru_B3B3C0.m_dataLen, si
0x9FC0E0: mov     stru_B3B3C0.m_bufLen, si
0x9FC0E7: call    BSStringT_Set
0x9FC0EC: push    esi; a3
0x9FC0ED: push    offset aVampire; "vampire"
0x9FC0F2: mov     ecx, offset stru_B3B3C8; this
0x9FC0F7: mov     byte ptr [esp+1Ch+var_4], 0Ah
0x9FC0FC: mov     stru_B3B3C8.m_data, esi
0x9FC102: mov     stru_B3B3C8.m_dataLen, si
0x9FC109: mov     stru_B3B3C8.m_bufLen, si
0x9FC110: call    BSStringT_Set
0x9FC115: push    offset sub_A24B60; void (__cdecl *)()
0x9FC11A: call    _atexit
0x9FC11F: add     esp, 4
0x9FC122: mov     ecx, [esp+14h+var_C]
0x9FC126: mov     large fs:0, ecx
0x9FC12D: pop     ecx
0x9FC12E: pop     esi
0x9FC12F: add     esp, 0Ch
0x9FC132: retn
