0x5044E0: push    ecx
0x5044E1: mov     ecx, [esp+4+arg_10]
0x5044E5: mov     edx, [esp+4+arg_C]
0x5044E9: push    esi
0x5044EA: mov     esi, [esp+8+a4]
0x5044EE: push    edi
0x5044EF: mov     edi, [esp+0Ch+l]
0x5044F3: lea     eax, [esp+0Ch+var_4]
0x5044F7: push    eax; UInt16
0x5044F8: mov     eax, [esp+10h+a3]
0x5044FC: push    edi; l
0x5044FD: push    ecx; a6
0x5044FE: mov     ecx, [esp+18h+arg_4]
0x504502: push    edx; a5
0x504503: mov     edx, [esp+1Ch+a1]
0x504507: push    esi; a4
0x504508: push    eax; a3
0x504509: push    ecx; a2
0x50450A: push    edx; a1
0x50450B: mov     dword ptr [esp+2Ch+var_4], 0
0x504513: call    Script_ExtractArgs
0x504518: add     esp, 20h
0x50451B: test    al, al
0x50451D: jnz     short loc_504523
0x50451F: pop     edi
0x504520: pop     esi
0x504521: pop     ecx
0x504522: retn
0x504523: test    esi, esi
0x504525: fldz
0x504527: push    ebx
0x504528: mov     ebx, [esp+10h+arg_18]
0x50452C: fstp    qword ptr [ebx]
0x50452E: jz      short loc_50454D
0x504530: test    edi, edi
0x504532: jz      short loc_50454D
0x504534: mov     eax, dword ptr [esp+10h+var_4]
0x504538: push    800h
0x50453D: push    eax
0x50453E: mov     ecx, edi
0x504540: call    sub_4FB5F0
0x504545: test    al, al
0x504547: jz      short loc_50454D
0x504549: fld1
0x50454B: fstp    qword ptr [ebx]
0x50454D: pop     ebx
0x50454E: pop     edi
0x50454F: mov     al, 1
0x504551: pop     esi
0x504552: pop     ecx
0x504553: retn
