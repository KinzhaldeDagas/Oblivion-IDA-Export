0x5217E0: push    0FFFFFFFFh
0x5217E2: push    offset SEH_5217E0
0x5217E7: mov     eax, large fs:0
0x5217ED: push    eax
0x5217EE: sub     esp, 14h
0x5217F1: push    ebx
0x5217F2: push    ebp
0x5217F3: push    esi
0x5217F4: push    edi
0x5217F5: mov     eax, ds:0B30AACh
0x5217FA: xor     eax, esp
0x5217FC: push    eax
0x5217FD: lea     eax, [esp+34h+var_C]
0x521801: mov     large fs:0, eax
0x521807: mov     edi, ecx
0x521809: mov     [esp+34h+var_14], edi
0x52180D: mov     edx, [edi+4]
0x521810: xor     ebp, ebp
0x521812: xor     eax, eax
0x521814: cmp     edx, ebp
0x521816: jbe     short loc_521832
0x521818: mov     esi, [edi+8]
0x52181B: mov     ecx, esi
0x52181D: lea     ecx, [ecx+0]
0x521820: cmp     [ecx], ebp
0x521822: jnz     loc_5218DE
0x521828: add     eax, 1
0x52182B: add     ecx, 4
0x52182E: cmp     eax, edx
0x521830: jb      short loc_521820
0x521832: xor     eax, eax
0x521834: cmp     eax, ebp
0x521836: mov     [esp+34h+var_18], eax
0x52183A: jz      loc_521935
0x521840: lea     eax, [esp+34h+var_1C]
0x521844: push    eax
0x521845: lea     ecx, [esp+38h+var_10]
0x521849: push    ecx
0x52184A: lea     edx, [esp+3Ch+var_18]
0x52184E: push    edx
0x52184F: mov     ecx, edi
0x521851: mov     [esp+40h+var_1C], ebp
0x521855: call    sub_452600
0x52185A: mov     esi, [esp+34h+var_1C]
0x52185E: cmp     esi, ebp
0x521860: jz      loc_52192B
0x521866: mov     ebx, [esi+0Ch]
0x521869: xor     edi, edi
0x52186B: cmp     ebx, ebp
0x52186D: jbe     short loc_5218A3
0x52186F: nop
0x521870: push    ebp; int
0x521871: push    offset ??_R0?AVTESIdleForm@@@8; struct TypeDescriptor *
0x521876: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x52187B: push    ebp; int
0x52187C: push    edi
0x52187D: mov     ecx, esi
0x52187F: call    sub_494ED0
0x521884: push    eax; void *
0x521885: call    OblivionDynamicCast
0x52188A: add     esp, 14h
0x52188D: cmp     eax, ebp
0x52188F: jz      short loc_52189C
0x521891: mov     edx, [eax]
0x521893: mov     ecx, eax
0x521895: mov     eax, [edx+10h]
0x521898: push    1
0x52189A: call    eax
0x52189C: add     edi, 1
0x52189F: cmp     edi, ebx
0x5218A1: jb      short loc_521870
0x5218A3: cmp     [esi+20h], ebp
0x5218A6: jz      short loc_5218F3
0x5218A8: mov     eax, [esi+20h]
0x5218AB: cmp     [eax+4], ebp
0x5218AE: jnz     short loc_5218B4
0x5218B0: cmp     [eax], ebp
0x5218B2: jz      short loc_5218EA
0x5218B4: mov     ecx, [eax]
0x5218B6: push    ecx
0x5218B7: call    FormHeapFree
0x5218BC: mov     eax, [esi+20h]
0x5218BF: mov     ecx, [eax+4]
0x5218C2: add     esp, 4
0x5218C5: cmp     ecx, ebp
0x5218C7: jz      short loc_5218E6
0x5218C9: mov     edx, [ecx+4]
0x5218CC: mov     [eax+4], edx
0x5218CF: mov     edx, [ecx]
0x5218D1: push    ecx
0x5218D2: mov     [eax], edx
0x5218D4: call    FormHeapFree
0x5218D9: add     esp, 4
0x5218DC: jmp     short loc_5218A8
0x5218DE: mov     eax, [esi+eax*4]
0x5218E1: jmp     loc_521834
0x5218E6: mov     [eax], ebp
0x5218E8: jmp     short loc_5218A8
0x5218EA: push    eax
0x5218EB: call    FormHeapFree
0x5218F0: add     esp, 4
0x5218F3: mov     eax, [esi+18h]
0x5218F6: push    eax
0x5218F7: call    FormHeapFree
0x5218FC: mov     [esi+18h], ebp
0x5218FF: mov     [esi+1Eh], bp
0x521903: mov     [esi+1Ch], bp
0x521907: mov     eax, [esi+4]
0x52190A: push    eax
0x52190B: mov     [esp+3Ch+var_4], 0FFFFFFFFh
0x521913: mov     dword ptr [esi], offset ??_7?$NiTLargeArray@PAVTESForm@@@@6B@; const NiTLargeArray<TESForm *>::`vftable'
0x521919: call    FormHeapFree
0x52191E: push    esi
0x52191F: call    FormHeapFree
0x521924: mov     edi, [esp+40h+var_14]
0x521928: add     esp, 0Ch
0x52192B: cmp     [esp+34h+var_18], ebp
0x52192F: jnz     loc_521840
0x521935: mov     ecx, edi
0x521937: call    NiTMap_Clear
0x52193C: mov     ecx, dword ptr [esp+34h+var_C]
0x521940: mov     large fs:0, ecx
0x521947: pop     ecx
0x521948: pop     edi
0x521949: pop     esi
0x52194A: pop     ebp
0x52194B: pop     ebx
0x52194C: add     esp, 20h
0x52194F: retn
