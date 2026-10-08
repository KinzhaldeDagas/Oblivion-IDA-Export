0x77BD90: push    ebx
0x77BD91: xor     ebx, ebx
0x77BD93: cmp     ds:0B4288Ch, bl
0x77BD99: jz      loc_77BE50
0x77BD9F: mov     eax, ds:0B428C8h
0x77BDA4: cmp     eax, ebx
0x77BDA6: mov     ds:0B4288Ch, bl
0x77BDAC: jz      short loc_77BDC9
0x77BDAE: push    eax
0x77BDAF: call    sub_77EE20
0x77BDB4: mov     ecx, ds:0B428C8h
0x77BDBA: add     esp, 4
0x77BDBD: cmp     ecx, ebx
0x77BDBF: jz      short loc_77BDC9
0x77BDC1: mov     eax, [ecx]
0x77BDC3: mov     edx, [eax]
0x77BDC5: push    1
0x77BDC7: call    edx
0x77BDC9: mov     eax, ds:0B428D0h
0x77BDCE: cmp     eax, ebx
0x77BDD0: mov     ds:0B428C8h, ebx
0x77BDD6: jz      short loc_77BDF3
0x77BDD8: push    eax
0x77BDD9: call    sub_77EE20
0x77BDDE: mov     ecx, ds:0B428D0h
0x77BDE4: add     esp, 4
0x77BDE7: cmp     ecx, ebx
0x77BDE9: jz      short loc_77BDF3
0x77BDEB: mov     eax, [ecx]
0x77BDED: mov     edx, [eax]
0x77BDEF: push    1
0x77BDF1: call    edx
0x77BDF3: mov     eax, ds:0B428CCh
0x77BDF8: cmp     eax, ebx
0x77BDFA: mov     ds:0B428D0h, ebx
0x77BE00: jz      short loc_77BE1D
0x77BE02: push    eax
0x77BE03: call    sub_77EE20
0x77BE08: mov     ecx, ds:0B428CCh
0x77BE0E: add     esp, 4
0x77BE11: cmp     ecx, ebx
0x77BE13: jz      short loc_77BE1D
0x77BE15: mov     eax, [ecx]
0x77BE17: mov     edx, [eax]
0x77BE19: push    1
0x77BE1B: call    edx
0x77BE1D: push    ebx
0x77BE1E: mov     ds:0B428CCh, ebx
0x77BE24: call    sub_77F7E0
0x77BE29: add     esp, 4
0x77BE2C: call    sub_77EEB0
0x77BE31: call    sub_77C270
0x77BE36: call    sub_76F900
0x77BE3B: call    sub_7797C0
0x77BE40: call    sub_772B20
0x77BE45: call    sub_773580
0x77BE4A: pop     ebx
0x77BE4B: jmp     loc_7645C0
0x77BE50: pop     ebx
0x77BE51: retn
0x7645C0: mov     eax, ds:0B42154h
0x7645C5: test    eax, eax
0x7645C7: jz      short loc_7645DB
0x7645C9: mov     ecx, [eax]
0x7645CB: mov     edx, [ecx+8]
0x7645CE: push    eax
0x7645CF: call    edx
0x7645D1: mov     dword ptr ds:0B42154h, 0
0x7645DB: mov     ecx, ds:0B42160h
0x7645E1: test    ecx, ecx
0x7645E3: push    esi
0x7645E4: mov     esi, ecx
0x7645E6: jz      short loc_7645F6
0x7645E8: call    sub_775F10
0x7645ED: push    esi
0x7645EE: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x7645F3: add     esp, 4
0x7645F6: mov     eax, ds:0B42150h
0x7645FB: test    eax, eax
0x7645FD: mov     dword ptr ds:0B42160h, 0
0x764607: pop     esi
0x764608: jz      short loc_764611
0x76460A: push    eax; hLibModule
0x76460B: call    dword ptr ds:0A28204h
0x764611: mov     dword ptr ds:0B42158h, 0
0x76461B: mov     ecx, offset off_B28E00
0x764620: jmp     NiTPointerList__FreeAllNodes; Free every active NiTPointerList node through the list's FreeNode virtual and clear head/tail/count. The generic list helper does not destroy payload objects; owner code must do that separately when required.
