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
0x9FBF49: mov     ecx, (offset dword_B3B0B4+2BCh); this
0x9FBF4E: call    BSStringT_Set
0x9FBF53: push    esi; a3
0x9FBF54: push    offset aItem_pickup; "item_pickup"
0x9FBF59: mov     ecx, (offset dword_B3B0B4+2C4h); this
0x9FBF5E: mov     [esp+1Ch+var_4], esi
0x9FBF62: mov     dword_B3B0B4+2C4h, esi
0x9FBF68: mov     word ptr dword_B3B0B4+2C8h, si
0x9FBF6F: mov     word ptr dword_B3B0B4+2CAh, si
0x9FBF76: call    BSStringT_Set
0x9FBF7B: push    esi; a3
0x9FBF7C: push    offset aOpen_container; "open_container"
0x9FBF81: mov     ecx, (offset dword_B3B0B4+2CCh); this
0x9FBF86: mov     byte ptr [esp+1Ch+var_4], 1
0x9FBF8B: mov     dword_B3B0B4+2CCh, esi
0x9FBF91: mov     word ptr dword_B3B0B4+2D0h, si
0x9FBF98: mov     word ptr dword_B3B0B4+2D2h, si
0x9FBF9F: call    BSStringT_Set
0x9FBFA4: push    esi; a3
0x9FBFA5: push    offset aChair_sit; "chair_sit"
0x9FBFAA: mov     ecx, (offset dword_B3B0B4+2D4h); this
0x9FBFAF: mov     byte ptr [esp+1Ch+var_4], 2
0x9FBFB4: mov     dword_B3B0B4+2D4h, esi
0x9FBFBA: mov     word ptr dword_B3B0B4+2D8h, si
0x9FBFC1: mov     word ptr dword_B3B0B4+2DAh, si
0x9FBFC8: call    BSStringT_Set
0x9FBFCD: push    esi; a3
0x9FBFCE: push    offset aActivate_pull_; "activate_pull_push"
0x9FBFD3: mov     ecx, (offset dword_B3B0B4+2DCh); this
0x9FBFD8: mov     byte ptr [esp+1Ch+var_4], 3
0x9FBFDD: mov     dword_B3B0B4+2DCh, esi
0x9FBFE3: mov     word ptr dword_B3B0B4+2E0h, si
0x9FBFEA: mov     word ptr dword_B3B0B4+2E2h, si
0x9FBFF1: call    BSStringT_Set
0x9FBFF6: push    esi; a3
0x9FBFF7: push    offset aBed_sleep; "bed_sleep"
0x9FBFFC: mov     ecx, (offset dword_B3B0B4+2E4h); this
0x9FC001: mov     byte ptr [esp+1Ch+var_4], 4
0x9FC006: mov     dword_B3B0B4+2E4h, esi
0x9FC00C: mov     word ptr dword_B3B0B4+2E8h, si
0x9FC013: mov     word ptr dword_B3B0B4+2EAh, si
0x9FC01A: call    BSStringT_Set
0x9FC01F: push    esi; a3
0x9FC020: push    offset aBook_scroll_re; "book_scroll_read"
0x9FC025: mov     ecx, (offset dword_B3B0B4+2ECh); this
0x9FC02A: mov     byte ptr [esp+1Ch+var_4], 5
0x9FC02F: mov     dword_B3B0B4+2ECh, esi
0x9FC035: mov     word ptr dword_B3B0B4+2F0h, si
0x9FC03C: mov     word ptr dword_B3B0B4+2F2h, si
0x9FC043: call    BSStringT_Set
0x9FC048: push    esi; a3
0x9FC049: push    offset aNpc_talk; "npc_talk"
0x9FC04E: mov     ecx, (offset dword_B3B0B4+2F4h); this
0x9FC053: mov     byte ptr [esp+1Ch+var_4], 6
0x9FC058: mov     dword_B3B0B4+2F4h, esi
0x9FC05E: mov     word ptr dword_B3B0B4+2F8h, si
0x9FC065: mov     word ptr dword_B3B0B4+2FAh, si
0x9FC06C: call    BSStringT_Set
0x9FC071: push    esi; a3
0x9FC072: push    offset aOpen_door; "open_door"
0x9FC077: mov     ecx, (offset dword_B3B0B4+2FCh); this
0x9FC07C: mov     byte ptr [esp+1Ch+var_4], 7
0x9FC081: mov     dword_B3B0B4+2FCh, esi
0x9FC087: mov     word ptr dword_B3B0B4+300h, si
0x9FC08E: mov     word ptr dword_B3B0B4+302h, si
0x9FC095: call    BSStringT_Set
0x9FC09A: mov     byte ptr [esp+14h+var_4], 8
0x9FC09F: mov     dword_B3B0B4+304h, esi
0x9FC0A5: mov     word ptr dword_B3B0B4+308h, si
0x9FC0AC: push    esi; a3
0x9FC0AD: push    offset aHorses; "horses"
0x9FC0B2: mov     ecx, (offset dword_B3B0B4+304h); this
0x9FC0B7: mov     word ptr dword_B3B0B4+30Ah, si
0x9FC0BE: call    BSStringT_Set
0x9FC0C3: push    esi; a3
0x9FC0C4: push    offset aCrown; "crown"
0x9FC0C9: mov     ecx, (offset dword_B3B0B4+30Ch); this
0x9FC0CE: mov     byte ptr [esp+1Ch+var_4], 9
0x9FC0D3: mov     dword_B3B0B4+30Ch, esi
0x9FC0D9: mov     word ptr dword_B3B0B4+310h, si
0x9FC0E0: mov     word ptr dword_B3B0B4+312h, si
0x9FC0E7: call    BSStringT_Set
0x9FC0EC: push    esi; a3
0x9FC0ED: push    offset aVampire; "vampire"
0x9FC0F2: mov     ecx, (offset dword_B3B0B4+314h); this
0x9FC0F7: mov     byte ptr [esp+1Ch+var_4], 0Ah
0x9FC0FC: mov     dword_B3B0B4+314h, esi
0x9FC102: mov     word ptr dword_B3B0B4+318h, si
0x9FC109: mov     word ptr dword_B3B0B4+31Ah, si
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
0x9C0450: mov     ecx, (offset dword_B3B0B4+2BCh); void *
0x9C0455: jmp     BSStringT_Clear
0x9C045A: mov     ecx, (offset dword_B3B0B4+2C4h); void *
0x9C045F: jmp     BSStringT_Clear
0x9C0464: mov     ecx, (offset dword_B3B0B4+2CCh); void *
0x9C0469: jmp     BSStringT_Clear
0x9C046E: mov     ecx, (offset dword_B3B0B4+2D4h); void *
0x9C0473: jmp     BSStringT_Clear
0x9C0478: mov     ecx, (offset dword_B3B0B4+2DCh); void *
0x9C047D: jmp     BSStringT_Clear
0x9C0482: mov     ecx, (offset dword_B3B0B4+2E4h); void *
0x9C0487: jmp     BSStringT_Clear
0x9C048C: mov     ecx, (offset dword_B3B0B4+2ECh); void *
0x9C0491: jmp     BSStringT_Clear
0x9C0496: mov     ecx, (offset dword_B3B0B4+2F4h); void *
0x9C049B: jmp     BSStringT_Clear
0x9C04A0: mov     ecx, (offset dword_B3B0B4+2FCh); void *
0x9C04A5: jmp     BSStringT_Clear
0x9C04AA: mov     ecx, (offset dword_B3B0B4+304h); void *
0x9C04AF: jmp     BSStringT_Clear
0x9C04B4: mov     ecx, (offset dword_B3B0B4+30Ch); void *
0x9C04B9: jmp     BSStringT_Clear
0x9C04BE: mov     edx, [esp+arg_4]
0x9C04C2: lea     eax, [edx-4]
0x9C04C5: mov     ecx, [edx-8]
0x9C04C8: xor     ecx, eax
0x9C04CA: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C04CF: mov     eax, offset stru_AE9730
0x9C04D4: jmp     ___CxxFrameHandler3
