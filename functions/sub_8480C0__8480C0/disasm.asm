0x8480C0: push    0FFFFFFFFh
0x8480C2: push    offset SEH_852030
0x8480C7: mov     eax, large fs:0
0x8480CD: push    eax
0x8480CE: push    ecx
0x8480CF: push    ebx
0x8480D0: push    esi
0x8480D1: push    edi
0x8480D2: mov     eax, ds:0B30AACh
0x8480D7: xor     eax, esp
0x8480D9: push    eax
0x8480DA: lea     eax, [esp+20h+var_C]
0x8480DE: mov     large fs:0, eax
0x8480E4: mov     edi, ecx
0x8480E6: fldz
0x8480E8: mov     esi, ds:0B455B8h
0x8480EE: fcomp   dword ptr ds:0B44EE4h
0x8480F4: mov     ecx, esi; this
0x8480F6: fnstsw  ax
0x8480F8: test    ah, 5
0x8480FB: jp      short loc_848111
0x8480FD: mov     eax, ds:0B4523Ch
0x848102: push    eax; a2
0x848103: call    sub_7AEC60
0x848108: mov     ecx, ds:0B45444h
0x84810E: push    ecx
0x84810F: jmp     short loc_848123
0x848111: mov     edx, ds:0B4522Ch
0x848117: push    edx; a2
0x848118: call    sub_7AEC60
0x84811D: mov     eax, ds:0B45434h
0x848122: push    eax; a2
0x848123: mov     ecx, esi; this
0x848125: call    sub_7AECB0
0x84812A: test    esi, esi
0x84812C: mov     [esp+20h+var_10], esi
0x848130: mov     ebx, 1
0x848135: jz      short loc_84813A
0x848137: add     [esi+60h], ebx
0x84813A: mov     edx, [edi+38h]
0x84813D: lea     ecx, [esp+20h+var_10]
0x848141: push    ecx
0x848142: push    edx
0x848143: lea     ecx, [edi+40h]
0x848146: mov     [esp+28h+var_4], 0
0x84814E: call    sub_76CE40
0x848153: or      eax, 0FFFFFFFFh
0x848156: test    esi, esi
0x848158: mov     [esp+20h+var_4], eax
0x84815C: jz      short loc_84816A
0x84815E: add     [esi+60h], eax
0x848161: jnz     short loc_84816A
0x848163: mov     ecx, esi
0x848165: call    sub_7604D0
0x84816A: add     [edi+38h], ebx
0x84816D: mov     ecx, [esp+20h+var_C]
0x848171: mov     large fs:0, ecx
0x848178: pop     ecx
0x848179: pop     edi
0x84817A: pop     esi
0x84817B: pop     ebx
0x84817C: add     esp, 10h
0x84817F: retn    10h
