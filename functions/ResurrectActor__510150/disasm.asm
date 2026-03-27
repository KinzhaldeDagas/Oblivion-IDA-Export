0x510150: push    ecx
0x510151: push    esi
0x510152: push    edi
0x510153: mov     edi, [esp+0Ch+a4]
0x510157: push    0; int
0x510159: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x51015E: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x510163: push    0; int
0x510165: push    edi; void *
0x510166: call    OblivionDynamicCast
0x51016B: mov     ecx, [esp+20h+l]
0x51016F: mov     edx, [esp+20h+arg_10]
0x510173: mov     esi, eax
0x510175: lea     eax, [esp+20h+var_4]
0x510179: push    eax; UInt16
0x51017A: mov     eax, [esp+24h+arg_C]
0x51017E: push    ecx; l
0x51017F: mov     ecx, [esp+28h+a3]
0x510183: push    edx; a6
0x510184: mov     edx, [esp+2Ch+arg_4]
0x510188: push    eax; a5
0x510189: mov     eax, [esp+30h+a1]
0x51018D: push    edi; a4
0x51018E: push    ecx; a3
0x51018F: push    edx; a2
0x510190: push    eax; a1
0x510191: mov     [esp+40h+var_4], 0
0x510199: call    Script_ExtractArgs
0x51019E: add     esp, 34h
0x5101A1: test    al, al
0x5101A3: jnz     short loc_5101A9
0x5101A5: pop     edi
0x5101A6: pop     esi
0x5101A7: pop     ecx
0x5101A8: retn
0x5101A9: test    esi, esi
0x5101AB: jz      short loc_5101CC
0x5101AD: cmp     [esp+0Ch+var_4], 1
0x5101B2: mov     edx, [esi]
0x5101B4: mov     edx, [edx+20Ch]
0x5101BA: setz    al
0x5101BD: cmp     dword ptr [esi+3Ch], 0
0x5101C1: setnz   cl
0x5101C4: push    eax
0x5101C5: push    ecx
0x5101C6: push    1
0x5101C8: mov     ecx, esi
0x5101CA: call    edx
0x5101CC: pop     edi
0x5101CD: mov     al, 1
0x5101CF: pop     esi
0x5101D0: pop     ecx
0x5101D1: retn
