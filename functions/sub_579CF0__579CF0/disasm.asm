0x579CF0: mov     ecx, ds:0B3A6B0h
0x579CF6: sub     esp, 20h
0x579CF9: push    1
0x579CFB: push    2
0x579CFD: mov     byte ptr ds:0B131FCh, 0FFh
0x579D04: call    sub_572EC0
0x579D09: push    1; arg1
0x579D0B: push    0; canCreate
0x579D0D: call    InterfaceManager_GetSingleton
0x579D12: add     esp, 8
0x579D15: test    eax, eax
0x579D17: jz      loc_579F79
0x579D1D: push    1; arg1
0x579D1F: push    0; canCreate
0x579D21: call    InterfaceManager_GetSingleton
0x579D26: add     esp, 8
0x579D29: cmp     dword ptr [eax+1Ch], 0
0x579D2D: jz      loc_579F79
0x579D33: lea     eax, [esp+20h+arg_C]
0x579D37: push    1; arg1
0x579D39: push    0; canCreate
0x579D3B: mov     [esp+28h+var_20], eax
0x579D3F: call    InterfaceManager_GetSingleton
0x579D44: add     esp, 8
0x579D47: test    eax, eax
0x579D49: jz      short loc_579DB6
0x579D4B: push    1; arg1
0x579D4D: push    0; canCreate
0x579D4F: call    InterfaceManager_GetSingleton
0x579D54: add     esp, 8
0x579D57: cmp     dword ptr [eax+1Ch], 0
0x579D5B: jz      short loc_579DB6
0x579D5D: push    1; arg1
0x579D5F: push    0; canCreate
0x579D61: call    InterfaceManager_GetSingleton
0x579D66: add     esp, 8
0x579D69: cmp     dword ptr [eax+68h], 0
0x579D6D: jz      short loc_579DB6
0x579D6F: push    1; arg1
0x579D71: push    0; canCreate
0x579D73: call    InterfaceManager_GetSingleton
0x579D78: mov     eax, [eax+68h]
0x579D7B: add     esp, 8
0x579D7E: push    0FAEh
0x579D83: mov     ecx, eax
0x579D85: call    Tile_GetFloat
0x579D8A: fcomp   dword ptr ds:0A379B4h
0x579D90: fnstsw  ax
0x579D92: test    ah, 44h
0x579D95: jp      short loc_579DB6
0x579D97: mov     edx, [esp+20h+arg_8]
0x579D9B: mov     eax, [esp+20h+arg_4]
0x579D9F: lea     ecx, [esp+20h+var_20]
0x579DA2: push    ecx
0x579DA3: mov     ecx, [esp+24h+arg_0]
0x579DA7: push    edx
0x579DA8: push    eax
0x579DA9: push    offset MissingContentCallback
0x579DAE: push    ecx
0x579DAF: call    sub_5BC8B0
0x579DB4: jmp     short loc_579DD3
0x579DB6: mov     eax, [esp+20h+arg_8]
0x579DBA: mov     ecx, [esp+20h+arg_4]
0x579DBE: lea     edx, [esp+20h+var_20]
0x579DC1: push    edx
0x579DC2: mov     edx, [esp+24h+arg_0]
0x579DC6: push    eax
0x579DC7: push    ecx
0x579DC8: push    offset MissingContentCallback
0x579DCD: push    edx
0x579DCE: call    sub_5BCC00
0x579DD3: add     esp, 14h
0x579DD6: test    al, al
0x579DD8: jz      loc_579F79
0x579DDE: mov     al, ds:0B131FCh
0x579DE3: cmp     al, 0FFh
0x579DE5: jnz     loc_579F7B
0x579DEB: push    ebx
0x579DEC: mov     ebx, ds:0A28264h
0x579DF2: push    esi
0x579DF3: mov     esi, ds:0A2826Ch
0x579DF9: push    edi
0x579DFA: mov     edi, ds:0A28268h
0x579E00: xor     eax, eax
0x579E02: push    1; wRemoveMsg
0x579E04: push    eax; wMsgFilterMax
0x579E05: push    eax; wMsgFilterMin
0x579E06: push    eax; hWnd
0x579E07: mov     [esp+3Ch+Msg.hwnd], eax
0x579E0B: mov     [esp+3Ch+Msg.message], eax
0x579E0F: mov     [esp+3Ch+Msg.wParam], eax
0x579E13: mov     [esp+3Ch+Msg.lParam], eax
0x579E17: mov     [esp+3Ch+Msg.time], eax
0x579E1B: mov     [esp+3Ch+Msg.pt.x], eax
0x579E1F: mov     [esp+3Ch+Msg.pt.y], eax
0x579E23: lea     eax, [esp+3Ch+Msg]
0x579E27: push    eax; lpMsg
0x579E28: call    esi ; PeekMessageA
0x579E2A: test    eax, eax
0x579E2C: jz      short loc_579E51
0x579E2E: mov     edi, edi
0x579E30: lea     ecx, [esp+2Ch+Msg]
0x579E34: push    ecx
0x579E35: call    edi
0x579E37: lea     edx, [esp+2Ch+Msg]
0x579E3B: push    edx; lpMsg
0x579E3C: call    ebx ; DispatchMessageA
0x579E3E: push    1; wRemoveMsg
0x579E40: push    0; wMsgFilterMax
0x579E42: push    0; wMsgFilterMin
0x579E44: push    0; hWnd
0x579E46: lea     eax, [esp+3Ch+Msg]
0x579E4A: push    eax; lpMsg
0x579E4B: call    esi ; PeekMessageA
0x579E4D: test    eax, eax
0x579E4F: jnz     short loc_579E30
0x579E51: mov     ecx, ds:0B33398h
0x579E57: mov     ecx, [ecx+20h]; this
0x579E5A: call    InputGlobals__PollAndUpdateInputState
0x579E5F: push    1; arg1
0x579E61: push    0; canCreate
0x579E63: call    InterfaceManager_GetSingleton
0x579E68: add     esp, 8
0x579E6B: test    eax, eax
0x579E6D: jz      short loc_579E94
0x579E6F: push    1; arg1
0x579E71: push    0; canCreate
0x579E73: call    InterfaceManager_GetSingleton
0x579E78: add     esp, 8
0x579E7B: cmp     dword ptr [eax+1Ch], 0
0x579E7F: jz      short loc_579E94
0x579E81: push    1; arg1
0x579E83: push    0; canCreate
0x579E85: call    InterfaceManager_GetSingleton
0x579E8A: add     esp, 8
0x579E8D: mov     ecx, eax
0x579E8F: call    sub_583E60
0x579E94: push    1; arg1
0x579E96: push    0; canCreate
0x579E98: call    InterfaceManager_GetSingleton
0x579E9D: add     esp, 8
0x579EA0: test    eax, eax
0x579EA2: jz      short loc_579EC9
0x579EA4: push    1; arg1
0x579EA6: push    0; canCreate
0x579EA8: call    InterfaceManager_GetSingleton
0x579EAD: add     esp, 8
0x579EB0: cmp     dword ptr [eax+1Ch], 0
0x579EB4: jz      short loc_579EC9
0x579EB6: push    1; arg1
0x579EB8: push    0; canCreate
0x579EBA: call    InterfaceManager_GetSingleton
0x579EBF: add     esp, 8
0x579EC2: mov     ecx, eax
0x579EC4: call    sub_5821F0
0x579EC9: push    1; arg1
0x579ECB: push    0; canCreate
0x579ECD: call    InterfaceManager_GetSingleton
0x579ED2: add     esp, 8
0x579ED5: test    eax, eax
0x579ED7: jz      short loc_579EFE
0x579ED9: push    1; arg1
0x579EDB: push    0; canCreate
0x579EDD: call    InterfaceManager_GetSingleton
0x579EE2: add     esp, 8
0x579EE5: cmp     dword ptr [eax+1Ch], 0
0x579EE9: jz      short loc_579EFE
0x579EEB: push    1; arg1
0x579EED: push    0; canCreate
0x579EEF: call    InterfaceManager_GetSingleton
0x579EF4: add     esp, 8
0x579EF7: mov     ecx, eax
0x579EF9: call    sub_583F40
0x579EFE: push    1; arg1
0x579F00: push    0; canCreate
0x579F02: call    InterfaceManager_GetSingleton
0x579F07: add     esp, 8
0x579F0A: test    eax, eax
0x579F0C: jz      short loc_579F3E
0x579F0E: push    1; arg1
0x579F10: push    0; canCreate
0x579F12: call    InterfaceManager_GetSingleton
0x579F17: add     esp, 8
0x579F1A: cmp     dword ptr [eax+1Ch], 0
0x579F1E: jz      short loc_579F3E
0x579F20: call    sub_40FDA0
0x579F25: test    al, al
0x579F27: jnz     short loc_579F3E
0x579F29: push    0
0x579F2B: push    1; arg1
0x579F2D: push    0; canCreate
0x579F2F: call    InterfaceManager_GetSingleton
0x579F34: add     esp, 8
0x579F37: mov     ecx, eax
0x579F39: call    MiscPass
0x579F3E: push    1; arg1
0x579F40: push    0; canCreate
0x579F42: call    InterfaceManager_GetSingleton
0x579F47: add     esp, 8
0x579F4A: test    eax, eax
0x579F4C: jz      short loc_579F65
0x579F4E: push    1; arg1
0x579F50: push    0; canCreate
0x579F52: call    InterfaceManager_GetSingleton
0x579F57: add     esp, 8
0x579F5A: cmp     dword ptr [eax+1Ch], 0
0x579F5E: jz      short loc_579F65
0x579F60: call    sub_40FDA0
0x579F65: mov     al, ds:0B131FCh
0x579F6A: cmp     al, 0FFh
0x579F6C: jz      loc_579E00
0x579F72: pop     edi
0x579F73: pop     esi
0x579F74: pop     ebx
0x579F75: add     esp, 20h
0x579F78: retn
0x579F79: xor     al, al
0x579F7B: add     esp, 20h
0x579F7E: retn
