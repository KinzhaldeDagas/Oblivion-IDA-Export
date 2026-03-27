0x9037A0: sub     esp, 1Ch
0x9037A3: mov     eax, [esp+1Ch+arg_C]
0x9037A7: push    ebx
0x9037A8: push    ebp
0x9037A9: push    esi
0x9037AA: push    edi
0x9037AB: mov     edi, ecx
0x9037AD: mov     [edi+8], eax
0x9037B0: mov     eax, [esp+2Ch+arg_0]
0x9037B4: mov     word ptr [edi+6], 1
0x9037BA: mov     dword ptr [edi], offset off_A9BCA8
0x9037C0: lea     ebp, [edi+0Ch]
0x9037C3: lea     ecx, [ebp+0Ch]
0x9037C6: mov     [ebp+0], ecx
0x9037C9: mov     dword ptr [ebp+4], 0
0x9037D0: mov     dword ptr [ebp+8], 80000004h
0x9037D7: mov     edx, [eax+8]
0x9037DA: mov     esi, [eax]
0x9037DC: mov     [esp+2Ch+var_4], eax
0x9037E0: mov     [esp+2Ch+var_8], edx
0x9037E4: mov     eax, [esi]
0x9037E6: mov     ecx, esi
0x9037E8: mov     [esp+2Ch+var_18], edi
0x9037EC: mov     [esp+2Ch+var_14], esi
0x9037F0: call    dword ptr [eax+1Ch]
0x9037F3: mov     ebx, eax
0x9037F5: mov     eax, [ebp+8]
0x9037F8: and     eax, 3FFFFFFFh
0x9037FD: cmp     eax, ebx
0x9037FF: jge     short loc_903815
0x903801: add     eax, eax
0x903803: cmp     ebx, eax
0x903805: jl      short loc_903809
0x903807: mov     eax, ebx
0x903809: push    4
0x90380B: push    eax
0x90380C: push    ebp
0x90380D: call    sub_8A6E40
0x903812: add     esp, 0Ch
0x903815: mov     [ebp+4], ebx
0x903818: mov     eax, [edi+10h]
0x90381B: xor     ebx, ebx
0x90381D: test    eax, eax
0x90381F: jle     loc_9038FC
0x903825: mov     edi, [esp+2Ch+arg_8]
0x903829: lea     esp, [esp+0]
0x903830: mov     ecx, [esi+10h]
0x903833: mov     edx, [ecx+ebx*8]
0x903836: mov     ecx, [edi+4]
0x903839: push    ebx
0x90383A: mov     [esp+30h+var_10], edx
0x90383E: mov     edx, [esp+30h+arg_0]
0x903842: push    esi
0x903843: push    edx
0x903844: mov     edx, [esp+38h+arg_4]
0x903848: push    edx
0x903849: push    edi
0x90384A: lea     edx, [esp+40h+arg_8]
0x90384E: mov     [esp+40h+var_C], ebx
0x903852: mov     eax, [ecx]
0x903854: push    edx
0x903855: call    dword ptr [eax]
0x903857: cmp     byte ptr [eax], 0
0x90385A: jz      short loc_9038CB
0x90385C: mov     ecx, [esp+2Ch+var_10]
0x903860: mov     eax, [edi]
0x903862: mov     edx, [ecx]
0x903864: mov     [esp+2Ch+var_1C], eax
0x903868: call    dword ptr [edx+8]
0x90386B: mov     esi, eax
0x90386D: mov     eax, [esp+2Ch+arg_4]
0x903871: mov     ecx, [eax]
0x903873: mov     edx, [ecx]
0x903875: call    dword ptr [edx+8]
0x903878: mov     cl, [edi+0Ch]
0x90387B: test    cl, cl
0x90387D: mov     ecx, [esp+2Ch+var_1C]
0x903881: jz      short loc_90388B
0x903883: add     ecx, 590h
0x903889: jmp     short loc_903891
0x90388B: add     ecx, 190h
0x903891: mov     edx, [ebp+0]
0x903894: shl     esi, 5
0x903897: add     esi, ecx
0x903899: movzx   eax, byte ptr [esi+eax]
0x90389D: mov     ecx, [esp+2Ch+var_1C]
0x9038A1: lea     eax, [eax+eax*4]
0x9038A4: mov     eax, [ecx+eax*4+990h]
0x9038AB: mov     ecx, [esp+2Ch+arg_C]
0x9038AF: push    ecx
0x9038B0: lea     esi, [edx+ebx*4]
0x9038B3: mov     edx, [esp+30h+arg_4]
0x9038B7: push    edi
0x9038B8: push    edx
0x9038B9: lea     ecx, [esp+38h+var_10]
0x9038BD: push    ecx
0x9038BE: call    eax
0x9038C0: mov     [esi], eax
0x9038C2: mov     esi, [esp+3Ch+var_14]
0x9038C6: add     esp, 10h
0x9038C9: jmp     short loc_9038E0
0x9038CB: mov     edx, [ebp+0]
0x9038CE: lea     eax, [edx+ebx*4]
0x9038D1: mov     [esp+2Ch+var_1C], eax
0x9038D5: call    sub_8E0970
0x9038DA: mov     ecx, [esp+2Ch+var_1C]
0x9038DE: mov     [ecx], eax
0x9038E0: mov     edx, [esp+2Ch+var_18]
0x9038E4: mov     eax, [edx+10h]
0x9038E7: inc     ebx
0x9038E8: cmp     ebx, eax
0x9038EA: jl      loc_903830
0x9038F0: pop     edi
0x9038F1: pop     esi
0x9038F2: pop     ebp
0x9038F3: mov     eax, edx
0x9038F5: pop     ebx
0x9038F6: add     esp, 1Ch
0x9038F9: retn    10h
0x9038FC: mov     eax, edi
0x9038FE: pop     edi
0x9038FF: pop     esi
0x903900: pop     ebp
0x903901: pop     ebx
0x903902: add     esp, 1Ch
0x903905: retn    10h
