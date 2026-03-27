0x50FD10: push    0FFFFFFFFh
0x50FD12: push    offset SEH_50FD10
0x50FD17: mov     eax, large fs:0
0x50FD1D: push    eax
0x50FD1E: push    ecx
0x50FD1F: push    ebx
0x50FD20: push    ebp
0x50FD21: push    esi
0x50FD22: push    edi
0x50FD23: mov     eax, ds:0B30AACh
0x50FD28: xor     eax, esp
0x50FD2A: push    eax
0x50FD2B: lea     eax, [esp+24h+var_C]
0x50FD2F: mov     large fs:0, eax
0x50FD35: mov     ecx, ds:0B3339Ch
0x50FD3B: test    ecx, ecx
0x50FD3D: jz      short loc_50FD4F
0x50FD3F: mov     esi, ecx
0x50FD41: call    sub_494F30
0x50FD46: push    esi
0x50FD47: call    FormHeapFree
0x50FD4C: add     esp, 4
0x50FD4F: mov     esi, [esp+24h+arg_8]
0x50FD53: test    esi, esi
0x50FD55: mov     dword ptr ds:0B34F9Ch, offset sub_494F90
0x50FD5F: jz      loc_50FEC7
0x50FD65: mov     eax, [esi]
0x50FD67: mov     edx, [eax+154h]
0x50FD6D: mov     ecx, esi
0x50FD6F: call    edx
0x50FD71: test    eax, eax
0x50FD73: jz      loc_50FEC7
0x50FD79: mov     ecx, esi; this
0x50FD7B: call    TESObjectREFR_GetName
0x50FD80: cmp     esi, ds:0B333C4h
0x50FD86: mov     [esp+24h+arg_8], eax
0x50FD8A: push    20h ; ' '; Size
0x50FD8C: jnz     loc_50FE5D
0x50FD92: call    FormHeapAlloc
0x50FD97: mov     ebp, eax
0x50FD99: add     esp, 4
0x50FD9C: mov     [esp+24h+arg_8], ebp
0x50FDA0: test    ebp, ebp
0x50FDA2: mov     [esp+24h+var_4], 0
0x50FDAA: jz      short loc_50FDFC
0x50FDAC: mov     eax, ds:0B333C4h
0x50FDB1: cmp     byte ptr [eax+588h], 0
0x50FDB8: mov     ecx, offset aPlayer3rdPerso; "Player 3rd Person"
0x50FDBD: jnz     short loc_50FDC4
0x50FDBF: mov     ecx, offset aPlayer1stPerso; "Player 1st Person"
0x50FDC4: mov     eax, ds:0B33398h
0x50FDC9: mov     edx, [esi]
0x50FDCB: mov     edi, [eax+8]
0x50FDCE: mov     ebx, [eax+0Ch]
0x50FDD1: mov     eax, [edx+154h]
0x50FDD7: push    258h; nHeight
0x50FDDC: push    320h; nWidth
0x50FDE1: push    80000000h; Y
0x50FDE6: push    80000000h; X
0x50FDEB: push    ecx; int
0x50FDEC: mov     ecx, esi
0x50FDEE: call    eax
0x50FDF0: push    eax; int
0x50FDF1: push    edi; int
0x50FDF2: push    ebx; int
0x50FDF3: mov     ecx, ebp
0x50FDF5: call    ShowDetectorWindow
0x50FDFA: jmp     short loc_50FDFE
0x50FDFC: xor     eax, eax
0x50FDFE: mov     ecx, ds:0B333C4h
0x50FE04: mov     ds:0B3339Ch, eax
0x50FE09: mov     al, [ecx+588h]
0x50FE0F: test    al, al
0x50FE11: mov     [esp+24h+var_4], 0FFFFFFFFh
0x50FE19: mov     edx, offset aPlayer1stPerso; "Player 1st Person"
0x50FE1E: jnz     short loc_50FE25
0x50FE20: mov     edx, offset aPlayer3rdPerso; "Player 3rd Person"
0x50FE25: push    edx
0x50FE26: mov     byte ptr [esp+28h+arg_8], al
0x50FE2A: mov     edx, [esp+28h+arg_8]
0x50FE2E: push    edx
0x50FE2F: call    PlayerCharacter_GetPlayerNode
0x50FE34: mov     ecx, ds:0B3339Ch
0x50FE3A: push    eax
0x50FE3B: call    sub_496C00
0x50FE40: mov     eax, ds:0B333C4h
0x50FE45: mov     eax, [eax+5D8h]
0x50FE4B: test    eax, eax
0x50FE4D: jz      loc_50FF50
0x50FE53: push    offset aPlayerInventor; "Player Inventory Menu"
0x50FE58: jmp     loc_50FF44
0x50FE5D: call    FormHeapAlloc
0x50FE62: mov     ebp, eax
0x50FE64: add     esp, 4
0x50FE67: mov     [esp+24h+var_10], ebp
0x50FE6B: test    ebp, ebp
0x50FE6D: mov     [esp+24h+var_4], 1
0x50FE75: jz      short loc_50FEBB
0x50FE77: mov     eax, ds:0B33398h
0x50FE7C: mov     ecx, [esp+24h+arg_8]
0x50FE80: mov     edx, [esi]
0x50FE82: mov     edi, [eax+8]
0x50FE85: mov     ebx, [eax+0Ch]
0x50FE88: mov     eax, [edx+154h]
0x50FE8E: push    258h; nHeight
0x50FE93: push    320h; nWidth
0x50FE98: push    80000000h; Y
0x50FE9D: push    80000000h; X
0x50FEA2: push    ecx; int
0x50FEA3: mov     ecx, esi
0x50FEA5: call    eax
0x50FEA7: push    eax; int
0x50FEA8: push    edi; int
0x50FEA9: push    ebx; int
0x50FEAA: mov     ecx, ebp
0x50FEAC: call    ShowDetectorWindow
0x50FEB1: mov     ds:0B3339Ch, eax
0x50FEB6: jmp     loc_50FF50
0x50FEBB: xor     eax, eax
0x50FEBD: mov     ds:0B3339Ch, eax
0x50FEC2: jmp     loc_50FF50
0x50FEC7: push    20h ; ' '; Size
0x50FEC9: call    FormHeapAlloc
0x50FECE: add     esp, 4
0x50FED1: mov     [esp+24h+arg_8], eax
0x50FED5: test    eax, eax
0x50FED7: mov     [esp+24h+var_4], 2
0x50FEDF: jz      short loc_50FF18
0x50FEE1: mov     edx, ds:0B33398h
0x50FEE7: mov     ecx, ds:0B333CCh
0x50FEED: mov     esi, [edx+8]
0x50FEF0: mov     edx, [edx+0Ch]
0x50FEF3: push    258h; nHeight
0x50FEF8: push    320h; nWidth
0x50FEFD: push    80000000h; Y
0x50FF02: push    80000000h; X
0x50FF07: push    offset aOblivionWorldS; "Oblivion World Scene Graph"
0x50FF0C: push    ecx; int
0x50FF0D: push    esi; int
0x50FF0E: push    edx; int
0x50FF0F: mov     ecx, eax
0x50FF11: call    ShowDetectorWindow
0x50FF16: jmp     short loc_50FF1A
0x50FF18: xor     eax, eax
0x50FF1A: mov     edx, ds:0B333D0h
0x50FF20: push    offset aOblivionInterf; "Oblivion Interface Scene Graph"
0x50FF25: push    edx
0x50FF26: mov     ecx, eax
0x50FF28: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x50FF30: mov     ds:0B3339Ch, eax
0x50FF35: call    sub_496C00
0x50FF3A: mov     eax, ds:0B333D4h
0x50FF3F: push    offset aOblivionInte_0; "Oblivion Interface 3D Object Scene Grap"...
0x50FF44: mov     ecx, ds:0B3339Ch
0x50FF4A: push    eax
0x50FF4B: call    sub_496C00
0x50FF50: mov     al, 1
0x50FF52: mov     ecx, [esp+24h+var_C]
0x50FF56: mov     large fs:0, ecx
0x50FF5D: pop     ecx
0x50FF5E: pop     edi
0x50FF5F: pop     esi
0x50FF60: pop     ebp
0x50FF61: pop     ebx
0x50FF62: add     esp, 10h
0x50FF65: retn
