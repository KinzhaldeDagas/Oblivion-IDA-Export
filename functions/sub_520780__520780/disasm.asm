0x520780: push    0FFFFFFFFh
0x520782: push    offset ??0bhkNiTriStripsShape@@QAE@XZ_SEH
0x520787: mov     eax, large fs:0
0x52078D: push    eax
0x52078E: push    ecx
0x52078F: push    ebx
0x520790: push    ebp
0x520791: push    esi
0x520792: push    edi
0x520793: mov     eax, ds:0B30AACh
0x520798: xor     eax, esp
0x52079A: push    eax
0x52079B: lea     eax, [esp+24h+var_C]
0x52079F: mov     large fs:0, eax
0x5207A5: mov     edi, ecx
0x5207A7: mov     ebp, [esp+24h+arg_4]
0x5207AB: xor     ebx, ebx
0x5207AD: cmp     ebp, ebx
0x5207AF: jz      loc_520869
0x5207B5: cmp     [edi+3Ch], ebx
0x5207B8: jnz     short loc_5207F0
0x5207BA: push    18h; Size
0x5207BC: call    FormHeapAlloc
0x5207C1: add     esp, 4
0x5207C4: cmp     eax, ebx
0x5207C6: jz      short loc_5207E3
0x5207C8: mov     [eax+8], ebx
0x5207CB: mov     dword ptr [eax+14h], 1
0x5207D2: mov     [eax+0Ch], ebx
0x5207D5: mov     [eax+10h], ebx
0x5207D8: mov     [eax+4], ebx
0x5207DB: mov     dword ptr [eax], offset ??_7NiFormArray@@6B@; const NiFormArray::`vftable'
0x5207E1: jmp     short loc_5207E5
0x5207E3: xor     eax, eax
0x5207E5: mov     [esp+24h+var_4], 0FFFFFFFFh
0x5207ED: mov     [edi+3Ch], eax
0x5207F0: mov     eax, [edi+3Ch]
0x5207F3: mov     eax, [eax+0Ch]
0x5207F6: mov     esi, [esp+24h+arg_0]
0x5207FA: cmp     esi, eax
0x5207FC: jbe     short loc_520800
0x5207FE: mov     esi, eax
0x520800: cmp     esi, ebx
0x520802: mov     [ebp+40h], edi
0x520805: jz      short loc_520833
0x520807: mov     ecx, [edi+3Ch]
0x52080A: xor     eax, eax
0x52080C: cmp     ecx, ebx
0x52080E: jz      short loc_52082E
0x520810: push    ebx; int
0x520811: push    offset ??_R0?AVTESIdleForm@@@8; struct TypeDescriptor *
0x520816: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x52081B: push    ebx; int
0x52081C: lea     edx, [esi-1]
0x52081F: push    edx
0x520820: call    sub_494ED0
0x520825: push    eax; void *
0x520826: call    OblivionDynamicCast
0x52082B: add     esp, 14h
0x52082E: mov     [ebp+44h], eax
0x520831: jmp     short loc_520836
0x520833: mov     [ebp+44h], ebx
0x520836: mov     ecx, [edi+3Ch]
0x520839: cmp     ecx, ebx
0x52083B: jz      short loc_52085F
0x52083D: push    ebx; int
0x52083E: push    offset ??_R0?AVTESIdleForm@@@8; struct TypeDescriptor *
0x520843: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x520848: push    ebx; int
0x520849: push    esi
0x52084A: call    sub_494ED0
0x52084F: push    eax; void *
0x520850: call    OblivionDynamicCast
0x520855: add     esp, 14h
0x520858: cmp     eax, ebx
0x52085A: jz      short loc_52085F
0x52085C: mov     [eax+44h], ebp
0x52085F: mov     ecx, [edi+3Ch]
0x520862: push    ebp
0x520863: push    esi
0x520864: call    sub_52F3C0
0x520869: mov     ecx, [esp+24h+var_C]
0x52086D: mov     large fs:0, ecx
0x520874: pop     ecx
0x520875: pop     edi
0x520876: pop     esi
0x520877: pop     ebp
0x520878: pop     ebx
0x520879: add     esp, 10h
0x52087C: retn    8
