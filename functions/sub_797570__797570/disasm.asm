0x797570: push    0FFFFFFFFh
0x797572: push    offset SEH_7974F0
0x797577: mov     eax, large fs:0
0x79757D: push    eax
0x79757E: sub     esp, 10h
0x797581: push    esi
0x797582: push    edi
0x797583: mov     eax, ds:0B30AACh
0x797588: xor     eax, esp
0x79758A: push    eax
0x79758B: lea     eax, [esp+28h+var_C]
0x79758F: mov     large fs:0, eax
0x797595: mov     esi, ecx
0x797597: xor     edi, edi
0x797599: mov     [esp+28h+var_18], edi
0x79759D: mov     [esp+28h+var_14], edi
0x7975A1: mov     [esp+28h+var_10], edi
0x7975A5: mov     ecx, [esp+28h+arg_0]
0x7975A9: lea     eax, [esp+28h+var_1C]
0x7975AD: push    eax; int
0x7975AE: push    ecx; char *
0x7975AF: mov     ecx, esi
0x7975B1: mov     [esp+30h+var_4], edi
0x7975B5: call    sub_796F20
0x7975BA: mov     eax, [esp+28h+var_18]
0x7975BE: cmp     eax, edi
0x7975C0: jz      short loc_7975CB
0x7975C2: push    eax
0x7975C3: call    FormHeapFree
0x7975C8: add     esp, 4
0x7975CB: mov     eax, esi
0x7975CD: mov     ecx, [esp+28h+var_C]
0x7975D1: mov     large fs:0, ecx
0x7975D8: pop     ecx
0x7975D9: pop     edi
0x7975DA: pop     esi
0x7975DB: add     esp, 1Ch
0x7975DE: retn    4
