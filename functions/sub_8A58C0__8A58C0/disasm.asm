0x8A58C0: push    0FFFFFFFFh
0x8A58C2: push    offset SEH_8C8970
0x8A58C7: mov     eax, large fs:0
0x8A58CD: push    eax
0x8A58CE: push    ecx
0x8A58CF: push    esi
0x8A58D0: push    edi
0x8A58D1: mov     eax, ds:0B30AACh
0x8A58D6: xor     eax, esp
0x8A58D8: push    eax
0x8A58D9: lea     eax, [esp+1Ch+var_C]
0x8A58DD: mov     large fs:0, eax
0x8A58E3: mov     edi, ecx
0x8A58E5: push    offset stru_BA7C80; lpCriticalSection
0x8A58EA: call    dword ptr ds:0A2806Ch
0x8A58F0: call    dword ptr ds:0A2808Ch
0x8A58F6: add     dword ptr ds:0BA7CFCh, 1
0x8A58FD: push    1Ch; Size
0x8A58FF: mov     ds:0BA7CF8h, eax
0x8A5904: call    FormHeapAlloc
0x8A5909: add     esp, 4
0x8A590C: mov     [esp+1Ch+var_10], eax
0x8A5910: test    eax, eax
0x8A5912: mov     [esp+1Ch+var_4], 0
0x8A591A: jz      short loc_8A5927
0x8A591C: mov     ecx, eax
0x8A591E: call    sub_8A4150
0x8A5923: mov     esi, eax
0x8A5925: jmp     short loc_8A5929
0x8A5927: xor     esi, esi
0x8A5929: mov     eax, [esp+1Ch+arg_0]
0x8A592D: push    eax
0x8A592E: push    esi
0x8A592F: mov     ecx, edi
0x8A5931: mov     [esp+24h+var_4], 0FFFFFFFFh
0x8A5939: call    sub_8A4E30
0x8A593E: sub     dword ptr ds:0BA7CFCh, 1
0x8A5945: jnz     short loc_8A5951
0x8A5947: mov     dword ptr ds:0BA7CF8h, 0
0x8A5951: push    offset stru_BA7C80; lpCriticalSection
0x8A5956: call    dword ptr ds:0A28074h
0x8A595C: mov     eax, esi
0x8A595E: mov     ecx, [esp+1Ch+var_C]
0x8A5962: mov     large fs:0, ecx
0x8A5969: pop     ecx
0x8A596A: pop     edi
0x8A596B: pop     esi
0x8A596C: add     esp, 10h
0x8A596F: retn    4
