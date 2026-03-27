0x84C760: push    0FFFFFFFFh
0x84C762: push    offset SEH_882120
0x84C767: mov     eax, large fs:0
0x84C76D: push    eax
0x84C76E: push    ebx
0x84C76F: push    ebp
0x84C770: push    esi
0x84C771: push    edi
0x84C772: mov     eax, ds:0B30AACh
0x84C777: xor     eax, esp
0x84C779: push    eax
0x84C77A: lea     eax, [esp+20h+var_C]
0x84C77E: mov     large fs:0, eax
0x84C784: mov     ebx, ecx
0x84C786: mov     esi, [esp+20h+arg_8]
0x84C78A: mov     eax, [esi+10h]
0x84C78D: mov     edi, ds:0B4569Ch
0x84C793: push    eax
0x84C794: call    sub_848C40
0x84C799: mov     esi, [esi+0Ch]
0x84C79C: push    esi
0x84C79D: mov     ecx, ebx
0x84C79F: call    sub_848E50
0x84C7A4: mov     eax, [edi+24h]
0x84C7A7: mov     ebp, [esp+20h+arg_C]
0x84C7AB: mov     esi, [eax]
0x84C7AD: mov     edx, [ebp+0]
0x84C7B0: mov     eax, [edx+88h]
0x84C7B6: push    0
0x84C7B8: mov     ecx, ebp
0x84C7BA: mov     [esp+24h+arg_8], esi
0x84C7BE: call    eax
0x84C7C0: mov     esi, [esi+4]
0x84C7C3: cmp     esi, eax
0x84C7C5: mov     [esp+20h+arg_C], eax
0x84C7C9: jz      short loc_84C806
0x84C7CB: test    esi, esi
0x84C7CD: jz      short loc_84C7EF
0x84C7CF: lea     ecx, [esi+4]
0x84C7D2: push    ecx; lpAddend
0x84C7D3: call    dword ptr ds:0A2807Ch
0x84C7D9: test    eax, eax
0x84C7DB: jnz     short loc_84C7EB
0x84C7DD: test    esi, esi
0x84C7DF: jz      short loc_84C7EB
0x84C7E1: mov     edx, [esi]
0x84C7E3: mov     eax, [edx]
0x84C7E5: push    1
0x84C7E7: mov     ecx, esi
0x84C7E9: call    eax
0x84C7EB: mov     eax, [esp+20h+arg_C]
0x84C7EF: test    eax, eax
0x84C7F1: mov     esi, [esp+20h+arg_8]
0x84C7F5: mov     [esi+4], eax
0x84C7F8: jz      short loc_84C80A
0x84C7FA: add     eax, 4
0x84C7FD: push    eax; lpAddend
0x84C7FE: call    dword ptr ds:0A28078h
0x84C804: jmp     short loc_84C80A
0x84C806: mov     esi, [esp+20h+arg_8]
0x84C80A: test    esi, esi
0x84C80C: jz      short loc_84C829
0x84C80E: cmp     byte ptr ds:0B42CDDh, 0
0x84C815: jz      short loc_84C829
0x84C817: mov     edx, [ebp+0]
0x84C81A: mov     eax, [edx+78h]
0x84C81D: mov     ecx, ebp
0x84C81F: call    eax
0x84C821: push    eax
0x84C822: mov     ecx, esi
0x84C824: call    sub_7715E0
0x84C829: mov     ecx, [edi+24h]
0x84C82C: mov     esi, [ecx+4]
0x84C82F: mov     edx, [ebp+0]
0x84C832: mov     eax, [edx+8Ch]
0x84C838: push    0
0x84C83A: mov     ecx, ebp
0x84C83C: mov     [esp+24h+arg_8], esi
0x84C840: call    eax
0x84C842: test    eax, eax
0x84C844: jz      short loc_84C85B
0x84C846: mov     edx, [ebp+0]
0x84C849: mov     eax, [edx+8Ch]
0x84C84F: push    0
0x84C851: mov     ecx, ebp
0x84C853: call    eax
0x84C855: mov     [esp+20h+arg_C], eax
0x84C859: jmp     short loc_84C87A
0x84C85B: test    dword ptr [ebp+1Ch], 80h
0x84C862: jbe     short loc_84C870
0x84C864: mov     ecx, ds:0B430F0h
0x84C86A: mov     [esp+20h+arg_C], ecx
0x84C86E: jmp     short loc_84C87A
0x84C870: mov     edx, ds:0B430DCh
0x84C876: mov     [esp+20h+arg_C], edx
0x84C87A: mov     esi, [esi+4]
0x84C87D: cmp     esi, [esp+20h+arg_C]
0x84C881: jz      short loc_84C8BE
0x84C883: test    esi, esi
0x84C885: jz      short loc_84C8A3
0x84C887: lea     eax, [esi+4]
0x84C88A: push    eax; lpAddend
0x84C88B: call    dword ptr ds:0A2807Ch
0x84C891: test    eax, eax
0x84C893: jnz     short loc_84C8A3
0x84C895: test    esi, esi
0x84C897: jz      short loc_84C8A3
0x84C899: mov     edx, [esi]
0x84C89B: mov     eax, [edx]
0x84C89D: push    1
0x84C89F: mov     ecx, esi
0x84C8A1: call    eax
0x84C8A3: mov     eax, [esp+20h+arg_C]
0x84C8A7: test    eax, eax
0x84C8A9: mov     esi, [esp+20h+arg_8]
0x84C8AD: mov     [esi+4], eax
0x84C8B0: jz      short loc_84C8C2
0x84C8B2: add     eax, 4
0x84C8B5: push    eax; lpAddend
0x84C8B6: call    dword ptr ds:0A28078h
0x84C8BC: jmp     short loc_84C8C2
0x84C8BE: mov     esi, [esp+20h+arg_8]
0x84C8C2: test    esi, esi
0x84C8C4: jz      short loc_84C8E1
0x84C8C6: cmp     byte ptr ds:0B42CDDh, 0
0x84C8CD: jz      short loc_84C8E1
0x84C8CF: mov     edx, [ebp+0]
0x84C8D2: mov     eax, [edx+78h]
0x84C8D5: mov     ecx, ebp
0x84C8D7: call    eax
0x84C8D9: push    eax
0x84C8DA: mov     ecx, esi
0x84C8DC: call    sub_7715E0
0x84C8E1: mov     esi, 1
0x84C8E6: add     [edi+60h], esi
0x84C8E9: mov     [esp+20h+arg_8], edi
0x84C8ED: mov     edx, [ebx+38h]
0x84C8F0: lea     ecx, [esp+20h+arg_8]
0x84C8F4: push    ecx
0x84C8F5: push    edx
0x84C8F6: lea     ecx, [ebx+40h]
0x84C8F9: mov     [esp+28h+var_4], 0
0x84C901: call    sub_76CE40
0x84C906: or      eax, 0FFFFFFFFh
0x84C909: add     [edi+60h], eax
0x84C90C: mov     [esp+20h+var_4], eax
0x84C910: jnz     short loc_84C919
0x84C912: mov     ecx, edi
0x84C914: call    sub_7604D0
0x84C919: add     [ebx+38h], esi
0x84C91C: mov     ecx, [esp+20h+var_C]
0x84C920: mov     large fs:0, ecx
0x84C927: pop     ecx
0x84C928: pop     edi
0x84C929: pop     esi
0x84C92A: pop     ebp
0x84C92B: pop     ebx
0x84C92C: add     esp, 0Ch
0x84C92F: retn    10h
