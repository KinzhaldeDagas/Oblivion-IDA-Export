0x5B7360: push    0FFFFFFFFh
0x5B7362: push    offset ??0MapMenu@@QAE@XZ_SEH
0x5B7367: mov     eax, large fs:0
0x5B736D: push    eax
0x5B736E: push    ecx
0x5B736F: push    ebx
0x5B7370: push    esi
0x5B7371: mov     eax, ds:0B30AACh
0x5B7376: xor     eax, esp
0x5B7378: push    eax
0x5B7379: lea     eax, [esp+1Ch+var_C]
0x5B737D: mov     large fs:0, eax
0x5B7383: mov     esi, ecx
0x5B7385: mov     [esp+1Ch+var_10], esi
0x5B7389: call    ??0Menu@@QAE@XZ; Menu::Menu(void)
0x5B738E: xor     ebx, ebx
0x5B7390: mov     dword ptr [esi], offset ??_7MapMenu@@6B@; const MapMenu::`vftable'
0x5B7396: mov     [esp+1Ch+var_4], ebx
0x5B739A: mov     [esi+0B0h], ebx
0x5B73A0: mov     [esi+0B4h], bx
0x5B73A7: mov     [esi+0B6h], bx
0x5B73AE: fldz
0x5B73B0: fst     dword ptr [esi+88h]
0x5B73B6: push    8; Size
0x5B73B8: fstp    dword ptr [esi+8Ch]
0x5B73BE: mov     byte ptr [esp+20h+var_4], 1
0x5B73C3: mov     [esi+28h], ebx
0x5B73C6: mov     [esi+2Ch], ebx
0x5B73C9: mov     [esi+30h], ebx
0x5B73CC: mov     [esi+34h], ebx
0x5B73CF: mov     [esi+38h], ebx
0x5B73D2: mov     [esi+3Ch], ebx
0x5B73D5: mov     [esi+40h], ebx
0x5B73D8: mov     [esi+44h], ebx
0x5B73DB: mov     [esi+48h], ebx
0x5B73DE: mov     [esi+4Ch], ebx
0x5B73E1: mov     [esi+50h], ebx
0x5B73E4: mov     [esi+54h], ebx
0x5B73E7: mov     [esi+58h], ebx
0x5B73EA: mov     [esi+5Ch], ebx
0x5B73ED: mov     [esi+60h], ebx
0x5B73F0: mov     [esi+64h], ebx
0x5B73F3: mov     [esi+68h], ebx
0x5B73F6: mov     [esi+6Ch], ebx
0x5B73F9: mov     [esi+70h], ebx
0x5B73FC: mov     [esi+74h], ebx
0x5B73FF: mov     [esi+78h], ebx
0x5B7402: mov     [esi+0DCh], bl
0x5B7408: mov     byte ptr [esi+84h], 0FFh
0x5B740F: mov     [esi+0C4h], ebx
0x5B7415: mov     [esi+0D0h], ebx
0x5B741B: mov     [esi+0E0h], ebx
0x5B7421: mov     [esi+0F4h], ebx
0x5B7427: mov     [esi+0F8h], ebx
0x5B742D: mov     [esi+0FCh], ebx
0x5B7433: call    FormHeapAlloc
0x5B7438: add     esp, 4
0x5B743B: cmp     eax, ebx
0x5B743D: jz      short loc_5B745E
0x5B743F: mov     [eax], ebx
0x5B7441: mov     [eax+4], ebx
0x5B7444: mov     [esi+0C8h], eax
0x5B744A: mov     eax, esi
0x5B744C: mov     ecx, [esp+1Ch+var_C]
0x5B7450: mov     large fs:0, ecx
0x5B7457: pop     ecx
0x5B7458: pop     esi
0x5B7459: pop     ebx
0x5B745A: add     esp, 10h
0x5B745D: retn
0x5B745E: mov     [esi+0C8h], ebx
0x5B7464: mov     eax, esi
0x5B7466: mov     ecx, [esp+1Ch+var_C]
0x5B746A: mov     large fs:0, ecx
0x5B7471: pop     ecx
0x5B7472: pop     esi
0x5B7473: pop     ebx
0x5B7474: add     esp, 10h
0x5B7477: retn
