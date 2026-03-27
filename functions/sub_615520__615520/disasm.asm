0x615520: fldz
0x615522: sub     esp, 0Ch
0x615525: push    esi
0x615526: mov     esi, ecx
0x615528: fcom    dword ptr [esi+188h]
0x61552E: fnstsw  ax
0x615530: test    ah, 41h
0x615533: jp      short loc_615542
0x615535: fstp    st
0x615537: fld     dword ptr [esi+188h]
0x61553D: pop     esi
0x61553E: add     esp, 0Ch
0x615541: retn
0x615542: mov     eax, [esi+70h]
0x615545: fst     [esp+10h+var_C]
0x615549: test    eax, eax
0x61554B: push    edi
0x61554C: jz      short loc_61556B
0x61554E: cmp     eax, 1
0x615551: jz      short loc_61556B
0x615553: cmp     eax, 3
0x615556: jz      short loc_61556B
0x615558: cmp     eax, 2
0x61555B: jz      short loc_61556B
0x61555D: cmp     eax, 4
0x615560: jz      short loc_61556B
0x615562: cmp     eax, 0Dh
0x615565: jnz     def_61557B; jumptable 0061557B default case, cases 5-12
0x61556B: cmp     eax, 0Dh; switch 14 cases
0x61556E: ja      def_61557B; jumptable 0061557B default case, cases 5-12
0x615574: movzx   eax, ds:byte_6156B0[eax]
0x61557B: jmp     ds:jpt_61557B[eax*4]; switch jump
0x615582: mov     edi, [esi+3Ch]; jumptable 0061557B cases 0,13
0x615585: fstp    st
0x615587: mov     edx, [edi]
0x615589: mov     eax, [edx+26Ch]
0x61558F: mov     ecx, edi
0x615591: call    eax
0x615593: fstp    [esp+14h+var_8]
0x615597: mov     edx, [edi]
0x615599: mov     eax, [edx+0ECh]
0x61559F: mov     ecx, edi
0x6155A1: call    eax
0x6155A3: fmul    [esp+14h+var_8]
0x6155A7: pop     edi
0x6155A8: fstp    [esp+10h+var_C]
0x6155AC: fld     [esp+10h+var_C]
0x6155B0: fst     dword ptr [esi+188h]
0x6155B6: pop     esi
0x6155B7: add     esp, 0Ch
0x6155BA: retn
0x6155BB: mov     edi, [esi+3Ch]; jumptable 0061557B case 3
0x6155BE: fstp    st
0x6155C0: mov     edx, [edi]
0x6155C2: mov     eax, [edx+26Ch]
0x6155C8: mov     ecx, edi
0x6155CA: call    eax
0x6155CC: fstp    [esp+14h+var_8]
0x6155D0: mov     edx, [edi]
0x6155D2: mov     eax, [edx+0ECh]
0x6155D8: mov     ecx, edi
0x6155DA: call    eax
0x6155DC: fmul    [esp+14h+var_8]
0x6155E0: pop     edi
0x6155E1: fstp    [esp+10h+var_C]
0x6155E5: fld     [esp+10h+var_C]
0x6155E9: fst     dword ptr [esi+188h]
0x6155EF: pop     esi
0x6155F0: add     esp, 0Ch
0x6155F3: retn
0x6155F4: fstp    st; jumptable 0061557B case 1
0x6155F6: call    sub_612D60
0x6155FB: test    eax, eax
0x6155FD: jz      short loc_61560E
0x6155FF: mov     ecx, esi
0x615601: call    sub_612D60
0x615606: fld     dword ptr [eax+98h]
0x61560C: jmp     short loc_61561B
0x61560E: mov     ecx, [esi+3Ch]
0x615611: mov     edx, [ecx]
0x615613: mov     eax, [edx+26Ch]
0x615619: call    eax
0x61561B: mov     ecx, [esi+3Ch]
0x61561E: fstp    [esp+14h+var_C]
0x615622: mov     edx, [ecx]
0x615624: mov     eax, [edx+0ECh]
0x61562A: call    eax
0x61562C: fstp    [esp+14h+var_8]
0x615630: fld     [esp+14h+var_C]
0x615634: push    ecx
0x615635: fstp    [esp+18h+var_18]; float
0x615638: call    Calc_GetCombatDistance
0x61563D: fmul    [esp+18h+var_8]
0x615641: add     esp, 4
0x615644: pop     edi
0x615645: fstp    [esp+10h+var_C]
0x615649: fld     [esp+10h+var_C]
0x61564D: fst     dword ptr [esi+188h]
0x615653: pop     esi
0x615654: add     esp, 0Ch
0x615657: retn
0x615658: lea     ecx, [esp+14h+var_8]; jumptable 0061557B cases 2,4
0x61565C: fst     [esp+14h+var_C]
0x615660: push    ecx
0x615661: fstp    dword ptr [esp+18h+var_8]
0x615665: lea     edx, [esp+18h+var_C]
0x615669: push    edx
0x61566A: mov     ecx, esi
0x61566C: call    sub_6142D0
0x615671: fld     [esp+14h+var_C]
0x615675: fstp    [esp+14h+var_C]
0x615679: pop     edi
0x61567A: fld     [esp+10h+var_C]
0x61567E: fst     dword ptr [esi+188h]
0x615684: pop     esi
0x615685: add     esp, 0Ch
0x615688: retn
0x615689: fstp    st; jumptable 0061557B default case, cases 5-12
0x61568B: pop     edi
0x61568C: fld     [esp+10h+var_C]
0x615690: fst     dword ptr [esi+188h]
0x615696: pop     esi
0x615697: add     esp, 0Ch
0x61569A: retn
