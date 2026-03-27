0x6E2620: push    0FFFFFFFFh
0x6E2622: push    offset SEH_8C8900
0x6E2627: mov     eax, large fs:0
0x6E262D: push    eax
0x6E262E: push    ecx
0x6E262F: mov     eax, ds:0B30AACh
0x6E2634: xor     eax, esp
0x6E2636: push    eax
0x6E2637: lea     eax, [esp+14h+var_C]
0x6E263B: mov     large fs:0, eax
0x6E2641: push    40h ; '@'; Size
0x6E2643: call    FormHeapAlloc
0x6E2648: add     esp, 4
0x6E264B: mov     [esp+14h+var_10], eax
0x6E264F: test    eax, eax
0x6E2651: mov     [esp+14h+var_4], 0
0x6E2659: jz      short loc_6E2686
0x6E265B: mov     ecx, [esp+14h+arg_10]
0x6E265F: fld     [esp+14h+arg_C]
0x6E2663: mov     edx, dword ptr [esp+14h+arg_4]
0x6E2667: push    ecx; int
0x6E2668: push    ecx
0x6E2669: fstp    [esp+1Ch+var_1C]; float
0x6E266C: push    edx; char
0x6E266D: mov     ecx, eax
0x6E266F: call    sub_6EA850
0x6E2674: mov     ecx, [esp+14h+var_C]
0x6E2678: mov     large fs:0, ecx
0x6E267F: pop     ecx
0x6E2680: add     esp, 10h
0x6E2683: retn    14h
0x6E2686: xor     eax, eax
0x6E2688: mov     ecx, [esp+14h+var_C]
0x6E268C: mov     large fs:0, ecx
0x6E2693: pop     ecx
0x6E2694: add     esp, 10h
0x6E2697: retn    14h
