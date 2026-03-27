0x6927E0: push    0FFFFFFFFh
0x6927E2: push    offset SEH_8C8970
0x6927E7: mov     eax, large fs:0
0x6927ED: push    eax
0x6927EE: push    ecx
0x6927EF: push    esi
0x6927F0: push    edi
0x6927F1: mov     eax, ds:0B30AACh
0x6927F6: xor     eax, esp
0x6927F8: push    eax
0x6927F9: lea     eax, [esp+1Ch+var_C]
0x6927FD: mov     large fs:0, eax
0x692803: mov     esi, ecx
0x692805: push    38h ; '8'; Size
0x692807: call    FormHeapAlloc
0x69280C: mov     edi, eax
0x69280E: add     esp, 4
0x692811: mov     [esp+1Ch+var_10], edi
0x692815: test    edi, edi
0x692817: mov     [esp+1Ch+var_4], 0
0x69281F: jz      short loc_69283C
0x692821: mov     eax, [esi+0Ch]
0x692824: mov     ecx, [esi+8]
0x692827: mov     edx, [esi+24h]
0x69282A: push    eax; int
0x69282B: push    ecx; int
0x69282C: push    edx; int
0x69282D: mov     ecx, edi; this
0x69282F: call    CommandEffect_constr
0x692834: mov     dword ptr [edi], offset ??_7CommandHumanoidEffect@@6B@; const CommandHumanoidEffect::`vftable'
0x69283A: jmp     short loc_69283E
0x69283C: xor     edi, edi
0x69283E: mov     eax, [esi]
0x692840: mov     edx, [eax+2Ch]
0x692843: push    edi
0x692844: mov     ecx, esi
0x692846: mov     [esp+20h+var_4], 0FFFFFFFFh
0x69284E: call    edx
0x692850: mov     eax, edi
0x692852: mov     ecx, dword ptr [esp+1Ch+var_C]
0x692856: mov     large fs:0, ecx
0x69285D: pop     ecx
0x69285E: pop     edi
0x69285F: pop     esi
0x692860: add     esp, 10h
0x692863: retn
