0x435600: sub     esp, 400h
0x435606: mov     eax, ___security_cookie
0x43560B: xor     eax, esp
0x43560D: mov     [esp+400h+var_4], eax
0x435614: push    ebx
0x435615: push    ebp
0x435616: mov     ebp, [esp+408h+arg_8]
0x43561D: mov     ebx, [ebp+0]
0x435620: push    esi
0x435621: push    edi
0x435622: mov     edi, [esp+410h+arg_4]
0x435629: mov     eax, [edi]
0x43562B: mov     [esp+410h+var_400], ecx
0x43562F: mov     ecx, ioManager
0x435635: mov     edx, [ecx]
0x435637: mov     [esp+410h+var_3F8], eax
0x43563B: mov     eax, [edx+38h]
0x43563E: mov     [esp+410h+var_3F4], edi
0x435642: mov     [esp+410h+var_3F0], ebp
0x435646: mov     [esp+410h+var_3FC], ebx
0x43564A: call    eax
0x43564C: push    eax
0x43564D: lea     ecx, [esp+414h+var_3EC]
0x435651: push    offset aQueuedIoTaskCo; "Queued IO Task Count: %d"
0x435656: push    ecx
0x435657: call    __sprintf
0x43565C: fild    [esp+41Ch+var_3FC]
0x435660: add     esp, 0Ch
0x435663: push    0FFFFFFFFh; int
0x435665: mov     edx, 500h
0x43566A: sub     edx, iDebugTextLeftRightOffset
0x435670: push    3; int
0x435672: sub     esp, 8
0x435675: fstp    [esp+420h+var_41C]; float
0x435679: mov     [esp+420h+var_3FC], edx
0x43567D: fild    [esp+420h+var_3FC]
0x435681: lea     eax, [esp+420h+var_3EC]
0x435685: fstp    [esp+420h+var_420]; float
0x435688: push    eax; int
0x435689: call    InterfaceMgr_DebugTextLine
0x43568E: mov     ecx, [esp+424h+var_400]
0x435692: mov     ecx, [ecx+8]
0x435695: mov     esi, [esp+424h+arg_0]
0x43569C: mov     edx, [ecx]
0x43569E: mov     eax, [edx+38h]
0x4356A1: add     ebx, esi
0x4356A3: add     esp, 14h
0x4356A6: mov     [esp+410h+var_3FC], ebx
0x4356AA: call    eax
0x4356AC: push    eax
0x4356AD: lea     ecx, [esp+414h+var_3EC]
0x4356B1: push    offset aQueuedReferenc; "Queued Reference Count: %d"
0x4356B6: push    ecx
0x4356B7: call    __sprintf
0x4356BC: fild    [esp+41Ch+var_3FC]
0x4356C0: add     esp, 0Ch
0x4356C3: push    0FFFFFFFFh; int
0x4356C5: mov     edx, 500h
0x4356CA: sub     edx, iDebugTextLeftRightOffset
0x4356D0: push    3; int
0x4356D2: sub     esp, 8
0x4356D5: fstp    [esp+420h+var_41C]; float
0x4356D9: mov     [esp+420h+var_400], edx
0x4356DD: fild    [esp+420h+var_400]
0x4356E1: lea     eax, [esp+420h+var_3EC]
0x4356E5: fstp    [esp+420h+var_420]; float
0x4356E8: push    eax; int
0x4356E9: call    InterfaceMgr_DebugTextLine
0x4356EE: mov     ecx, Addend
0x4356F4: push    ecx
0x4356F5: lea     edx, [esp+428h+var_3EC]
0x4356F9: push    offset aTotalBstaskCou; "Total BSTask Count: %d"
0x4356FE: add     ebx, esi
0x435700: push    edx
0x435701: mov     [esp+430h+var_3FC], ebx
0x435705: call    __sprintf
0x43570A: fild    [esp+430h+var_3FC]
0x43570E: add     esp, 20h
0x435711: push    0FFFFFFFFh; int
0x435713: push    3; int
0x435715: sub     esp, 8
0x435718: mov     eax, 500h
0x43571D: fstp    [esp+420h+var_41C]; float
0x435721: sub     eax, iDebugTextLeftRightOffset
0x435727: mov     [esp+420h+var_400], eax
0x43572B: fild    [esp+420h+var_400]
0x43572F: lea     ecx, [esp+420h+var_3EC]
0x435733: fstp    [esp+420h+var_420]; float
0x435736: push    ecx; int
0x435737: call    InterfaceMgr_DebugTextLine
0x43573C: add     esp, 14h
0x43573F: add     ebx, esi
0x435741: cmp     [esp+410h+arg_C], 0
0x435749: jz      loc_435801
0x43574F: mov     edx, [esp+410h+var_3F8]
0x435753: fild    [esp+410h+arg_0]
0x43575A: lea     eax, [esi+edx]
0x43575D: lea     ebp, [eax+esi*4]
0x435760: fmul    ds:dbl_A368A0
0x435766: mov     [esp+410h+var_3F8], ebp
0x43576A: xor     edi, edi
0x43576C: call    Double_To_SInt32
0x435771: mov     [esp+410h+var_400], eax
0x435775: xor     esi, esi
0x435777: jmp     short loc_435780
0x435779: align 10h
0x435780: mov     ecx, ioManager
0x435786: mov     edx, [ecx+2Ch]
0x435789: mov     eax, [edx+esi+8]
0x43578D: mov     ecx, ioManager
0x435793: mov     edx, [ecx+2Ch]
0x435796: mov     ecx, [edx+esi+4]
0x43579A: push    eax
0x43579B: mov     eax, ioManager
0x4357A0: push    ecx
0x4357A1: mov     ecx, [eax+2Ch]
0x4357A4: mov     edx, [ecx+esi]
0x4357A7: push    edx
0x4357A8: push    edi
0x4357A9: lea     eax, [esp+420h+var_3EC]
0x4357AD: push    offset aPriorityITextu; "Priority %i - Textures: %3i Meshes: %3i"...
0x4357B2: push    eax
0x4357B3: call    __sprintf
0x4357B8: fild    [esp+428h+var_3F8]
0x4357BC: add     esp, 18h
0x4357BF: push    0FFFFFFFFh; int
0x4357C1: push    1; int
0x4357C3: sub     esp, 8
0x4357C6: fstp    [esp+420h+var_41C]; float
0x4357CA: lea     ecx, [esp+420h+var_3EC]
0x4357CE: fild    iDebugTextLeftRightOffset
0x4357D4: fstp    [esp+420h+var_420]; float
0x4357D7: push    ecx; int
0x4357D8: call    InterfaceMgr_DebugTextLine
0x4357DD: sub     ebp, [esp+424h+var_400]
0x4357E1: add     esi, 0Ch
0x4357E4: add     esp, 14h
0x4357E7: add     edi, 1
0x4357EA: cmp     esi, 48h ; 'H'
0x4357ED: mov     [esp+410h+var_3F8], ebp
0x4357F1: jb      short loc_435780
0x4357F3: mov     edx, [esp+410h+var_3F4]
0x4357F7: mov     eax, [esp+410h+var_3F0]
0x4357FB: mov     [edx], ebp
0x4357FD: mov     [eax], ebx
0x4357FF: jmp     short loc_43580A
0x435801: mov     ecx, [esp+410h+var_3F8]
0x435805: mov     [edi], ecx
0x435807: mov     [ebp+0], ebx
0x43580A: mov     ecx, [esp+410h+var_4]
0x435811: pop     edi
0x435812: pop     esi
0x435813: pop     ebp
0x435814: pop     ebx
0x435815: xor     ecx, esp
0x435817: call    @__security_check_cookie@4; __security_check_cookie(x)
0x43581C: add     esp, 400h
0x435822: retn    10h
