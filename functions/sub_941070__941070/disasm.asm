0x941070: push    ecx
0x941071: push    ebx
0x941072: push    edi
0x941073: mov     edi, [esp+0Ch+arg_0]
0x941077: lea     ebx, [ecx+14h]
0x94107A: mov     [esp+0Ch+var_4], ecx
0x94107E: push    edi
0x94107F: mov     ecx, ebx
0x941081: call    sub_8B0F00
0x941086: push    eax
0x941087: lea     eax, [esp+10h+arg_0]
0x94108B: push    eax
0x94108C: mov     ecx, ebx
0x94108E: call    sub_8B0D80
0x941093: mov     al, byte ptr [esp+0Ch+arg_0]
0x941097: test    al, al
0x941099: jnz     loc_94112D
0x94109F: push    ebp
0x9410A0: mov     ebp, [esp+10h+arg_10]
0x9410A4: push    esi
0x9410A5: mov     esi, [esp+14h+arg_4]
0x9410A9: lea     esp, [esp+0]
0x9410B0: lea     ecx, [esp+14h+arg_10]
0x9410B4: push    ecx
0x9410B5: mov     ecx, esi
0x9410B7: call    sub_90D380
0x9410BC: cmp     byte ptr [eax], 0
0x9410BF: jz      short loc_9410D1
0x9410C1: mov     ecx, [esp+14h+arg_8]
0x9410C5: test    ecx, ecx
0x9410C7: jz      short loc_941121
0x9410C9: mov     edx, [ecx]
0x9410CB: push    edi
0x9410CC: call    dword ptr [edx+0Ch]
0x9410CF: mov     esi, eax
0x9410D1: test    esi, esi
0x9410D3: jz      short loc_941121
0x9410D5: mov     eax, [esp+14h+arg_C]
0x9410D9: mov     ecx, [esp+14h+arg_8]
0x9410DD: push    ebp
0x9410DE: push    eax
0x9410DF: push    ecx
0x9410E0: mov     ecx, [esp+20h+var_4]
0x9410E4: push    esi
0x9410E5: push    edi
0x9410E6: call    sub_9411E0
0x9410EB: test    eax, eax
0x9410ED: jz      short loc_94112B
0x9410EF: mov     ebp, ds:0B30594h
0x9410F5: push    eax
0x9410F6: mov     ecx, ebx
0x9410F8: mov     esi, offset unk_BA8788
0x9410FD: mov     edi, eax
0x9410FF: call    sub_8B0F00
0x941104: push    eax
0x941105: lea     edx, [esp+18h+arg_0]
0x941109: push    edx
0x94110A: mov     ecx, ebx
0x94110C: call    sub_8B0D80
0x941111: mov     al, byte ptr [esp+14h+arg_0]
0x941115: test    al, al
0x941117: jz      short loc_9410B0
0x941119: pop     esi
0x94111A: pop     ebp
0x94111B: pop     edi
0x94111C: pop     ebx
0x94111D: pop     ecx
0x94111E: retn    14h
0x941121: push    0FFFFFFFFh
0x941123: push    edi
0x941124: mov     ecx, ebx
0x941126: call    sub_8B0E80
0x94112B: pop     esi
0x94112C: pop     ebp
0x94112D: pop     edi
0x94112E: pop     ebx
0x94112F: pop     ecx
0x941130: retn    14h
