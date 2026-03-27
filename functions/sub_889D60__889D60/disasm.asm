0x889D60: push    0FFFFFFFFh
0x889D62: push    offset SEH_889D60
0x889D67: mov     eax, large fs:0
0x889D6D: push    eax
0x889D6E: sub     esp, 10h
0x889D71: push    ebx
0x889D72: push    esi
0x889D73: push    edi
0x889D74: mov     eax, ds:0B30AACh
0x889D79: xor     eax, esp
0x889D7B: push    eax
0x889D7C: lea     eax, [esp+2Ch+var_C]
0x889D80: mov     large fs:0, eax
0x889D86: mov     esi, ecx
0x889D88: mov     eax, [esp+2Ch+arg_0]
0x889D8C: push    eax
0x889D8D: lea     ecx, [esp+30h+var_18]
0x889D91: call    sub_8BBF80
0x889D96: push    0
0x889D98: push    ecx
0x889D99: mov     eax, esp
0x889D9B: mov     byte ptr [eax], 0
0x889D9E: mov     edx, [esi]
0x889DA0: mov     eax, [edx+58h]
0x889DA3: mov     edi, [esp+34h+var_10]
0x889DA7: mov     ecx, esi
0x889DA9: mov     [esp+34h+var_4], 0
0x889DB1: mov     [esp+34h+var_1C], esp
0x889DB5: call    eax
0x889DB7: push    edi
0x889DB8: push    eax
0x889DB9: lea     ecx, [esp+3Ch+arg_0]
0x889DBD: push    ecx
0x889DBE: call    sub_8BC6C0
0x889DC3: add     esp, 14h
0x889DC6: cmp     byte ptr [esp+2Ch+arg_0], 0
0x889DCB: lea     ecx, [esp+2Ch+var_18]
0x889DCF: setnz   bl
0x889DD2: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x889DDA: call    sub_8BC000
0x889DDF: mov     al, bl
0x889DE1: mov     ecx, [esp+2Ch+var_C]
0x889DE5: mov     large fs:0, ecx
0x889DEC: pop     ecx
0x889DED: pop     edi
0x889DEE: pop     esi
0x889DEF: pop     ebx
0x889DF0: add     esp, 1Ch
0x889DF3: retn    4
