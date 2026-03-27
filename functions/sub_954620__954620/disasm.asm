0x954620: sub     esp, 10h
0x954623: push    ebx
0x954624: push    ebp
0x954625: push    esi
0x954626: mov     esi, ecx
0x954628: xor     eax, eax
0x95462A: mov     al, [esi+10h]
0x95462D: push    edi
0x95462E: mov     edi, [esp+20h+arg_8]
0x954632: lea     ecx, [esp+20h+var_10]
0x954636: push    eax
0x954637: push    edi
0x954638: call    sub_9183A0
0x95463D: mov     ebx, [esp+20h+arg_C]
0x954641: mov     ebp, [esp+20h+arg_4]
0x954645: mov     edx, [esp+20h+arg_0]
0x954649: push    ebx
0x95464A: lea     ecx, [esp+24h+var_10]
0x95464E: push    ecx
0x95464F: push    ebp
0x954650: push    edx
0x954651: mov     ecx, esi
0x954653: call    sub_953A70
0x954658: mov     [esp+20h+arg_8], eax
0x95465C: push    edi
0x95465D: mov     eax, 10h
0x954662: call    sub_9536D0
0x954667: mov     eax, [esp+24h+arg_10]
0x95466B: mov     ecx, [esp+24h+arg_8]
0x95466F: add     esp, 4
0x954672: push    eax
0x954673: mov     eax, [esp+24h+arg_0]
0x954677: push    ecx
0x954678: push    ebx
0x954679: lea     edx, [esp+2Ch+var_10]
0x95467D: push    edx
0x95467E: push    ebp
0x95467F: push    eax
0x954680: mov     ecx, esi
0x954682: call    sub_953E10
0x954687: push    edi
0x954688: mov     eax, 10h
0x95468D: call    sub_9536D0
0x954692: add     esp, 4
0x954695: lea     ecx, [esp+20h+arg_0]
0x954699: push    ecx
0x95469A: lea     ecx, [esp+24h+var_10]
0x95469E: call    sub_918060
0x9546A3: mov     cl, [eax]
0x9546A5: xor     edx, edx
0x9546A7: test    cl, cl
0x9546A9: setz    dl
0x9546AC: lea     ecx, [esp+20h+var_10]
0x9546B0: mov     esi, edx
0x9546B2: call    sub_918180
0x9546B7: pop     edi
0x9546B8: mov     eax, esi
0x9546BA: pop     esi
0x9546BB: pop     ebp
0x9546BC: pop     ebx
0x9546BD: add     esp, 10h
0x9546C0: retn    14h
