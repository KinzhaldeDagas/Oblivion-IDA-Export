0x5F2E70: sub     esp, 8
0x5F2E73: push    ebx
0x5F2E74: push    ebp
0x5F2E75: mov     ebp, dword ptr [esp+10h+arg_8]
0x5F2E79: xor     bl, bl
0x5F2E7B: test    ebp, ebp
0x5F2E7D: push    esi
0x5F2E7E: mov     esi, ecx
0x5F2E80: jz      short loc_5F2ECE
0x5F2E82: mov     ecx, ebp
0x5F2E84: call    sub_41DF40
0x5F2E89: test    al, al
0x5F2E8B: jz      short loc_5F2ECE
0x5F2E8D: mov     eax, [esi]
0x5F2E8F: mov     edx, [eax+198h]
0x5F2E95: push    0
0x5F2E97: mov     ecx, esi
0x5F2E99: call    edx
0x5F2E9B: test    al, al
0x5F2E9D: jnz     short loc_5F2ECE
0x5F2E9F: cmp     esi, ds:0B333C4h
0x5F2EA5: jnz     short loc_5F2EC3
0x5F2EA7: fld     dword ptr ds:0A30634h
0x5F2EAD: mov     eax, ds:0B38A40h
0x5F2EB2: push    ecx
0x5F2EB3: fstp    [esp+1Ch+duration]; duration
0x5F2EB6: push    1; unk2
0x5F2EB8: push    0; unk1
0x5F2EBA: push    eax; string
0x5F2EBB: call    GameUI_QueueMessage
0x5F2EC0: add     esp, 10h
0x5F2EC3: pop     esi
0x5F2EC4: pop     ebp
0x5F2EC5: xor     al, al
0x5F2EC7: pop     ebx
0x5F2EC8: add     esp, 8
0x5F2ECB: retn    18h
0x5F2ECE: test    ebp, ebp
0x5F2ED0: mov     byte ptr [esp+18h+arg_4], 0
0x5F2ED5: jz      short loc_5F2EE9
0x5F2ED7: push    1
0x5F2ED9: mov     ecx, ebp
0x5F2EDB: call    ExtraDataList_HasWorn
0x5F2EE0: test    al, al
0x5F2EE2: jz      short loc_5F2EE9
0x5F2EE4: mov     byte ptr [esp+18h+arg_4], 1
0x5F2EE9: push    edi
0x5F2EEA: mov     edi, [esp+1Ch]
0x5F2EEE: test    edi, edi
0x5F2EF0: jz      loc_5F2FDC
0x5F2EF6: movzx   eax, byte ptr [edi+4]
0x5F2EFA: add     eax, 0FFFFFFECh; switch 15 cases
0x5F2EFD: cmp     eax, 0Eh
0x5F2F00: ja      Actor_UnequipItem___def_5F2F0D; jumptable 005F2F0D default case, cases 21,23-25,27-32
0x5F2F06: movzx   ecx, ds:byte_5F3128[eax]
0x5F2F0D: jmp     ds:jpt_5F2F0D[ecx*4]; switch jump
0x5F2F14: mov     edx, [esi]; jumptable 005F2F0D case 20
0x5F2F16: mov     eax, [edx+2C0h]
0x5F2F1C: mov     ecx, esi
0x5F2F1E: call    eax
0x5F2F20: push    1; jumptable 005F2F0D case 22
0x5F2F22: push    edi
0x5F2F23: lea     ecx, [esi+68h]
0x5F2F26: call    MagicTarget_RemoveBoundObj
0x5F2F2B: cmp     esi, ds:0B333C4h
0x5F2F31: jnz     short loc_5F2F78
0x5F2F33: call    InterfaceManager_IsMenuMode
0x5F2F38: test    al, al
0x5F2F3A: jz      short loc_5F2F5F
0x5F2F3C: mov     ecx, ds:0B333C4h; this
0x5F2F42: call    PlayerCharacter__IsSleeping?
0x5F2F47: test    al, al
0x5F2F49: jnz     short loc_5F2F5F
0x5F2F4B: fldz
0x5F2F4D: push    ecx
0x5F2F4E: mov     ecx, ds:0B333C4h
0x5F2F54: fstp    [esp+20h+var_20]
0x5F2F57: add     ecx, 68h ; 'h'; this
0x5F2F5A: call    MagicTarget_ProcessEffects
0x5F2F5F: mov     ecx, ds:0B333C4h
0x5F2F65: push    ebp
0x5F2F66: push    edi
0x5F2F67: call    sub_662C70
0x5F2F6C: push    0
0x5F2F6E: push    0
0x5F2F70: push    edi
0x5F2F71: mov     ecx, esi
0x5F2F73: call    sub_5E99C0
0x5F2F78: mov     ecx, dword ptr [esp+20h+arg_8]
0x5F2F7C: mov     edx, [esp+20h+arg_0]
0x5F2F80: mov     eax, [esp+20h]
0x5F2F84: push    ecx
0x5F2F85: push    edx
0x5F2F86: push    ebp
0x5F2F87: push    eax
0x5F2F88: push    edi
0x5F2F89: mov     ecx, esi
0x5F2F8B: call    sub_5E4260
0x5F2F90: mov     bl, al
0x5F2F92: jmp     Actor_UnequipItem___def_5F2F0D; jumptable 005F2F0D default case, cases 21,23-25,27-32
0x5F2F97: mov     edx, [esi]; jumptable 005F2F0D case 33
0x5F2F99: db 8Bh, 82h, 80h
0x5F2F9C: add     eax, [eax]
0x5F2F9E: add     [ebx-7A2F0032h], cl
0x5F2FA4: sal     byte ptr [ecx+eax*2-75h], 16h
0x5F2FA9: mov     eax, [edx+18Ch]
0x5F2FAF: mov     ecx, esi
0x5F2FB1: call    eax
0x5F2FB3: test    eax, eax
0x5F2FB5: jz      short loc_5F2FE8
0x5F2FB7: cmp     esi, ds:0B333C4h
0x5F2FBD: jnz     short loc_5F2FDC
0x5F2FBF: fld     dword ptr ds:0A30634h
0x5F2FC5: push    ecx
0x5F2FC6: mov     ecx, ds:0B38A40h
0x5F2FCC: fstp    [esp+20h+var_20]; duration
0x5F2FCF: push    1; unk2
0x5F2FD1: push    0; unk1
0x5F2FD3: push    ecx; string
0x5F2FD4: call    GameUI_QueueMessage
0x5F2FD9: add     esp, 10h
0x5F2FDC: pop     edi
0x5F2FDD: pop     esi
0x5F2FDE: pop     ebp
0x5F2FDF: xor     al, al
0x5F2FE1: pop     ebx
0x5F2FE2: add     esp, 8
0x5F2FE5: retn    18h
0x5F2FE8: push    0
0x5F2FEA: mov     ecx, esi
0x5F2FEC: call    sub_5EF9B0
0x5F2FF1: mov     edx, dword ptr [esp+1Ch+arg_8+4]
0x5F2FF5: mov     eax, [esp+1Ch+arg_4]
0x5F2FF9: mov     ecx, [esp+1Ch+arg_0]
0x5F2FFD: push    edx
0x5F2FFE: push    eax
0x5F2FFF: push    ebp
0x5F3000: push    ecx
0x5F3001: push    edi
0x5F3002: mov     ecx, esi
0x5F3004: call    sub_5E4260
0x5F3009: cmp     dword ptr [esi+58h], 0
0x5F300D: mov     bl, al
0x5F300F: jz      loc_5F30DE
0x5F3015: mov     ecx, [esi+58h]
0x5F3018: mov     edx, [ecx]
0x5F301A: mov     eax, [edx+308h]
0x5F3020: push    0
0x5F3022: call    eax
0x5F3024: jmp     loc_5F30DE
0x5F3029: test    ebp, ebp; jumptable 005F2F0D case 26
0x5F302B: mov     ecx, [edi+70h]
0x5F302E: mov     [esp+1Ch], ecx
0x5F3032: jz      short loc_5F3057
0x5F3034: fild    dword ptr [esp+1Ch]
0x5F3038: mov     ecx, ebp
0x5F303A: fstp    [esp+1Ch+var_C]
0x5F303E: call    ExtraDataList_GetTimeLeft
0x5F3043: fld     [esp+1Ch+var_C]
0x5F3047: fucompp
0x5F3049: fnstsw  ax
0x5F304B: test    ah, 44h
0x5F304E: jp      short loc_5F3057
0x5F3050: mov     ecx, ebp
0x5F3052: call    sub_41F630
0x5F3057: mov     ecx, ds:0B33A98h
0x5F305D: push    offset aItmtorchheldun; "ITMTorchHeldUnequip"
0x5F3062: call    sub_447490
0x5F3067: mov     ebx, eax
0x5F3069: test    ebx, ebx
0x5F306B: jz      short loc_5F30C4; jumptable 005F2F0D case 34
0x5F306D: cmp     esi, ds:0B333C4h
0x5F3073: jnz     short loc_5F309A
0x5F3075: call    InterfaceManager_IsMenuMode
0x5F307A: test    al, al
0x5F307C: jz      short loc_5F309A
0x5F307E: mov     ecx, [esi+58h]
0x5F3081: mov     edx, [ecx]
0x5F3083: mov     eax, [edx+0F0h]
0x5F3089: push    0
0x5F308B: call    eax
0x5F308D: test    eax, eax
0x5F308F: jz      short loc_5F30C4; jumptable 005F2F0D case 34
0x5F3091: push    1
0x5F3093: push    101h
0x5F3098: jmp     short loc_5F30A1
0x5F309A: push    1
0x5F309C: push    102h; a4
0x5F30A1: mov     ebx, [ebx+0Ch]
0x5F30A4: push    0; a3
0x5F30A6: push    ebx; a2
0x5F30A7: mov     ecx, esi; this
0x5F30A9: call    sub_65AC50
0x5F30AE: mov     ebx, eax
0x5F30B0: test    ebx, ebx
0x5F30B2: jz      short loc_5F30C4; jumptable 005F2F0D case 34
0x5F30B4: mov     ecx, ebx; this
0x5F30B6: call    sub_6B73E0
0x5F30BB: push    ebx
0x5F30BC: call    FormHeapFree
0x5F30C1: add     esp, 4
0x5F30C4: mov     ecx, dword ptr [esp+20h+arg_8]; jumptable 005F2F0D case 34
0x5F30C8: mov     edx, [esp+20h+arg_0]
0x5F30CC: mov     eax, [esp+20h]
0x5F30D0: push    ecx
0x5F30D1: push    edx
0x5F30D2: push    ebp
0x5F30D3: push    eax
0x5F30D4: push    edi
0x5F30D5: mov     ecx, esi
0x5F30D7: call    sub_5E4260
0x5F30DC: mov     bl, al
0x5F30DE: cmp     esi, ds:0B333C4h
0x5F30E4: jnz     short Actor_UnequipItem___def_5F2F0D; jumptable 005F2F0D default case, cases 21,23-25,27-32
0x5F30E6: push    0
0x5F30E8: push    0
0x5F30EA: push    edi
0x5F30EB: mov     ecx, esi
0x5F30ED: call    sub_5E99C0
0x5F30F2: cmp     [esp+20h+arg_8+4], 0; jumptable 005F2F0D default case, cases 21,23-25,27-32
0x5F30F7: jnz     short loc_5F3104
0x5F30F9: push    0
0x5F30FB: push    0
0x5F30FD: mov     ecx, esi
0x5F30FF: call    HideEquipment
0x5F3104: pop     edi
0x5F3105: pop     esi
0x5F3106: pop     ebp
0x5F3107: mov     al, bl
0x5F3109: pop     ebx
0x5F310A: add     esp, 8
0x5F310D: retn    18h
