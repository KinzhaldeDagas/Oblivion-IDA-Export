0x83C740: push    0FFFFFFFFh
0x83C742: push    offset SEH_882120
0x83C747: mov     eax, large fs:0
0x83C74D: push    eax
0x83C74E: push    ebx
0x83C74F: push    ebp
0x83C750: push    esi
0x83C751: push    edi
0x83C752: mov     eax, ds:0B30AACh
0x83C757: xor     eax, esp
0x83C759: push    eax
0x83C75A: lea     eax, [esp+20h+var_C]
0x83C75E: mov     large fs:0, eax
0x83C764: mov     esi, ecx
0x83C766: mov     edi, [esp+20h+arg_8]
0x83C76A: mov     eax, [edi+10h]
0x83C76D: mov     ebx, ds:0B457D0h
0x83C773: push    eax
0x83C774: call    sub_848DA0
0x83C779: mov     edi, [edi+0Ch]
0x83C77C: push    edi
0x83C77D: mov     ecx, esi
0x83C77F: call    sub_848E50
0x83C784: mov     ecx, [esp+20h+arg_0]
0x83C788: mov     eax, [esi]
0x83C78A: mov     edx, [eax+0BCh]
0x83C790: push    0
0x83C792: push    edi
0x83C793: push    ecx
0x83C794: mov     ecx, esi
0x83C796: call    edx
0x83C798: mov     eax, [ebx+24h]
0x83C79B: mov     edi, [esp+20h+arg_C]
0x83C79F: mov     ebp, [eax]
0x83C7A1: mov     edx, [edi]
0x83C7A3: mov     eax, [edx+88h]
0x83C7A9: push    0
0x83C7AB: mov     ecx, edi
0x83C7AD: mov     [esp+24h+arg_8], ebp
0x83C7B1: call    eax
0x83C7B3: mov     ebp, [ebp+4]
0x83C7B6: cmp     ebp, eax
0x83C7B8: mov     [esp+20h+arg_0], eax
0x83C7BC: jz      short loc_83C7F8
0x83C7BE: test    ebp, ebp
0x83C7C0: jz      short loc_83C7E3
0x83C7C2: lea     ecx, [ebp+4]
0x83C7C5: push    ecx; lpAddend
0x83C7C6: call    dword ptr ds:0A2807Ch
0x83C7CC: test    eax, eax
0x83C7CE: jnz     short loc_83C7DF
0x83C7D0: test    ebp, ebp
0x83C7D2: jz      short loc_83C7DF
0x83C7D4: mov     edx, [ebp+0]
0x83C7D7: mov     eax, [edx]
0x83C7D9: push    1
0x83C7DB: mov     ecx, ebp
0x83C7DD: call    eax
0x83C7DF: mov     eax, [esp+20h+arg_0]
0x83C7E3: test    eax, eax
0x83C7E5: mov     ecx, [esp+20h+arg_8]
0x83C7E9: mov     [ecx+4], eax
0x83C7EC: jz      short loc_83C7F8
0x83C7EE: add     eax, 4
0x83C7F1: push    eax; lpAddend
0x83C7F2: call    dword ptr ds:0A28078h
0x83C7F8: mov     edx, [esp+20h+arg_8]
0x83C7FC: push    edi
0x83C7FD: push    edx
0x83C7FE: mov     ecx, esi
0x83C800: call    sub_848FA0
0x83C805: mov     eax, [ebx+24h]
0x83C808: mov     ebp, [eax+4]
0x83C80B: push    0
0x83C80D: push    edi
0x83C80E: mov     ecx, esi
0x83C810: mov     [esp+28h+arg_8], ebp
0x83C814: call    sub_848FD0
0x83C819: mov     ebp, [ebp+4]
0x83C81C: cmp     ebp, eax
0x83C81E: mov     [esp+20h+arg_0], eax
0x83C822: jz      short loc_83C85E
0x83C824: test    ebp, ebp
0x83C826: jz      short loc_83C849
0x83C828: lea     ecx, [ebp+4]
0x83C82B: push    ecx; lpAddend
0x83C82C: call    dword ptr ds:0A2807Ch
0x83C832: test    eax, eax
0x83C834: jnz     short loc_83C845
0x83C836: test    ebp, ebp
0x83C838: jz      short loc_83C845
0x83C83A: mov     edx, [ebp+0]
0x83C83D: mov     eax, [edx]
0x83C83F: push    1
0x83C841: mov     ecx, ebp
0x83C843: call    eax
0x83C845: mov     eax, [esp+20h+arg_0]
0x83C849: test    eax, eax
0x83C84B: mov     ecx, [esp+20h+arg_8]
0x83C84F: mov     [ecx+4], eax
0x83C852: jz      short loc_83C85E
0x83C854: add     eax, 4
0x83C857: push    eax; lpAddend
0x83C858: call    dword ptr ds:0A28078h
0x83C85E: mov     edx, [esp+20h+arg_8]
0x83C862: push    edi
0x83C863: push    edx
0x83C864: mov     ecx, esi
0x83C866: call    sub_848FA0
0x83C86B: mov     eax, [ebx+24h]
0x83C86E: mov     ebp, [eax+10h]
0x83C871: mov     edx, [edi]
0x83C873: mov     eax, [edx+90h]
0x83C879: push    0
0x83C87B: mov     ecx, edi
0x83C87D: mov     [esp+24h+arg_8], ebp
0x83C881: call    eax
0x83C883: mov     ebp, [ebp+4]
0x83C886: cmp     ebp, eax
0x83C888: mov     [esp+20h+arg_0], eax
0x83C88C: jz      short loc_83C8C8
0x83C88E: test    ebp, ebp
0x83C890: jz      short loc_83C8B3
0x83C892: lea     ecx, [ebp+4]
0x83C895: push    ecx; lpAddend
0x83C896: call    dword ptr ds:0A2807Ch
0x83C89C: test    eax, eax
0x83C89E: jnz     short loc_83C8AF
0x83C8A0: test    ebp, ebp
0x83C8A2: jz      short loc_83C8AF
0x83C8A4: mov     edx, [ebp+0]
0x83C8A7: mov     eax, [edx]
0x83C8A9: push    1
0x83C8AB: mov     ecx, ebp
0x83C8AD: call    eax
0x83C8AF: mov     eax, [esp+20h+arg_0]
0x83C8B3: test    eax, eax
0x83C8B5: mov     ecx, [esp+20h+arg_8]
0x83C8B9: mov     [ecx+4], eax
0x83C8BC: jz      short loc_83C8C8
0x83C8BE: add     eax, 4
0x83C8C1: push    eax; lpAddend
0x83C8C2: call    dword ptr ds:0A28078h
0x83C8C8: mov     edx, [esp+20h+arg_8]
0x83C8CC: push    edi
0x83C8CD: push    edx
0x83C8CE: mov     ecx, esi
0x83C8D0: call    sub_848FA0
0x83C8D5: mov     ecx, [ebx+24h]
0x83C8D8: mov     edi, [ecx+18h]
0x83C8DB: mov     eax, ds:0B43108h
0x83C8E0: mov     ebp, [edi+4]
0x83C8E3: add     edi, 4
0x83C8E6: cmp     ebp, eax
0x83C8E8: mov     [esp+20h+arg_8], eax
0x83C8EC: jz      short loc_83C923
0x83C8EE: test    ebp, ebp
0x83C8F0: jz      short loc_83C913
0x83C8F2: lea     edx, [ebp+4]
0x83C8F5: push    edx; lpAddend
0x83C8F6: call    dword ptr ds:0A2807Ch
0x83C8FC: test    eax, eax
0x83C8FE: jnz     short loc_83C90F
0x83C900: test    ebp, ebp
0x83C902: jz      short loc_83C90F
0x83C904: mov     eax, [ebp+0]
0x83C907: mov     edx, [eax]
0x83C909: push    1
0x83C90B: mov     ecx, ebp
0x83C90D: call    edx
0x83C90F: mov     eax, [esp+20h+arg_8]
0x83C913: test    eax, eax
0x83C915: mov     [edi], eax
0x83C917: jz      short loc_83C923
0x83C919: add     eax, 4
0x83C91C: push    eax; lpAddend
0x83C91D: call    dword ptr ds:0A28078h
0x83C923: mov     eax, [ebx+24h]
0x83C926: mov     ebp, [eax+1Ch]
0x83C929: mov     eax, ds:0B4310Ch
0x83C92E: mov     edi, [ebp+4]
0x83C931: cmp     edi, eax
0x83C933: mov     ecx, eax
0x83C935: mov     [esp+20h+arg_8], ecx
0x83C939: jz      short loc_83C970
0x83C93B: test    edi, edi
0x83C93D: jz      short loc_83C95F
0x83C93F: lea     ecx, [edi+4]
0x83C942: push    ecx; lpAddend
0x83C943: call    dword ptr ds:0A2807Ch
0x83C949: test    eax, eax
0x83C94B: jnz     short loc_83C95B
0x83C94D: test    edi, edi
0x83C94F: jz      short loc_83C95B
0x83C951: mov     edx, [edi]
0x83C953: mov     eax, [edx]
0x83C955: push    1
0x83C957: mov     ecx, edi
0x83C959: call    eax
0x83C95B: mov     ecx, [esp+20h+arg_8]
0x83C95F: test    ecx, ecx
0x83C961: mov     [ebp+4], ecx
0x83C964: jz      short loc_83C970
0x83C966: add     ecx, 4
0x83C969: push    ecx; lpAddend
0x83C96A: call    dword ptr ds:0A28078h
0x83C970: mov     edi, 1
0x83C975: add     [ebx+60h], edi
0x83C978: mov     [esp+20h+arg_8], ebx
0x83C97C: mov     edx, [esi+38h]
0x83C97F: lea     ecx, [esp+20h+arg_8]
0x83C983: push    ecx
0x83C984: push    edx
0x83C985: lea     ecx, [esi+40h]
0x83C988: mov     [esp+28h+var_4], 0
0x83C990: call    sub_76CE40
0x83C995: or      eax, 0FFFFFFFFh
0x83C998: add     [ebx+60h], eax
0x83C99B: mov     [esp+20h+var_4], eax
0x83C99F: jnz     short loc_83C9A8
0x83C9A1: mov     ecx, ebx
0x83C9A3: call    sub_7604D0
0x83C9A8: add     [esi+38h], edi
0x83C9AB: mov     ecx, [esp+20h+var_C]
0x83C9AF: mov     large fs:0, ecx
0x83C9B6: pop     ecx
0x83C9B7: pop     edi
0x83C9B8: pop     esi
0x83C9B9: pop     ebp
0x83C9BA: pop     ebx
0x83C9BB: add     esp, 0Ch
0x83C9BE: retn    10h
