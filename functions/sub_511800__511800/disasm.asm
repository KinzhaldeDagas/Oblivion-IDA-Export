0x511800: sub     esp, 8
0x511803: mov     edx, [esp+8+l]
0x511807: fldz
0x511809: push    esi
0x51180A: mov     esi, dword ptr [esp+0Ch+arg_18]
0x51180E: lea     eax, [esp+0Ch+var_8]
0x511812: fstp    qword ptr [esi]
0x511814: push    eax
0x511815: mov     eax, [esp+10h+arg_10]
0x511819: lea     ecx, [esp+10h+arg_18]
0x51181D: push    ecx; UInt16
0x51181E: mov     ecx, [esp+14h+arg_C]
0x511822: push    edx; l
0x511823: mov     edx, [esp+18h+a4]
0x511827: push    eax; a6
0x511828: mov     eax, [esp+1Ch+a3]
0x51182C: push    ecx; a5
0x51182D: mov     ecx, [esp+20h+arg_4]
0x511831: push    edx; a4
0x511832: mov     edx, [esp+24h+a1]
0x511836: push    eax; a3
0x511837: push    ecx; a2
0x511838: push    edx; a1
0x511839: mov     dword ptr [esp+30h+arg_18], 0
0x511841: mov     [esp+30h+var_8], 0
0x511849: call    Script_ExtractArgs
0x51184E: add     esp, 24h
0x511851: test    al, al
0x511853: jnz     short loc_51185A
0x511855: pop     esi
0x511856: add     esp, 8
0x511859: retn
0x51185A: mov     ecx, dword ptr [esp+0Ch+arg_18]
0x51185E: test    ecx, ecx
0x511860: jz      short loc_51187E
0x511862: mov     eax, [esp+0Ch+var_8]
0x511866: test    eax, eax
0x511868: jz      short loc_51187E
0x51186A: push    eax
0x51186B: call    sub_51F0B0
0x511870: mov     ecx, dword ptr [esp+0Ch+arg_18]
0x511874: mov     [esp+0Ch+var_4], eax
0x511878: fild    [esp+0Ch+var_4]
0x51187C: fstp    qword ptr [esi]
0x51187E: cmp     byte ptr ds:0B361ACh, 0
0x511885: jz      short loc_5118BA
0x511887: mov     eax, [esp+0Ch+var_8]
0x51188B: mov     eax, [eax+1Ch]
0x51188E: test    eax, eax
0x511890: jnz     short loc_511897
0x511892: mov     eax, offset EmptyString
0x511897: mov     ecx, [ecx+1Ch]
0x51189A: test    ecx, ecx
0x51189C: jnz     short loc_5118A3
0x51189E: mov     ecx, offset EmptyString
0x5118A3: fld     qword ptr [esi]
0x5118A5: sub     esp, 8
0x5118A8: fstp    [esp+14h+var_18+4]
0x5118AB: push    eax
0x5118AC: push    ecx
0x5118AD: push    offset a_20sReactionTo; "%.20s reaction to %.20s is %.1f"
0x5118B2: call    Interface_ConsolePrint
0x5118B7: add     esp, 14h
0x5118BA: mov     al, 1
0x5118BC: pop     esi
0x5118BD: add     esp, 8
0x5118C0: retn
