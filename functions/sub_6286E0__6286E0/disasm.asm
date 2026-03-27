0x6286E0: mov     eax, [esp+arg_4]
0x6286E4: sub     esp, 8
0x6286E7: push    ebx
0x6286E8: push    ebp
0x6286E9: push    esi
0x6286EA: push    edi
0x6286EB: push    eax
0x6286EC: mov     esi, ecx
0x6286EE: call    sub_520F00
0x6286F3: push    1
0x6286F5: call    sub_520F40
0x6286FA: mov     edi, [esp+20h+arg_8]
0x6286FE: mov     ebp, [esp+20h+arg_0]
0x628702: add     esp, 8
0x628705: xor     ebx, ebx
0x628707: test    edi, edi
0x628709: jz      short loc_628757
0x62870B: mov     edx, [ebp+0]
0x62870E: mov     eax, [edx+174h]
0x628714: mov     ecx, ebp
0x628716: call    eax
0x628718: fld     dword ptr [eax+8]
0x62871B: mov     edx, [edi]
0x62871D: fstp    [esp+18h+arg_4]
0x628721: fld     [esp+18h+arg_4]
0x628725: mov     eax, [edx+174h]
0x62872B: fadd    qword ptr ds:0A2FCC8h
0x628731: mov     ecx, edi
0x628733: fstp    [esp+18h+var_8]
0x628737: call    eax
0x628739: fld     dword ptr [eax+8]
0x62873C: fcomp   [esp+18h+var_8]
0x628740: fnstsw  ax
0x628742: test    ah, 41h
0x628745: jz      short loc_628752
0x628747: mov     ecx, edi; this
0x628749: call    Actor_IsNPC
0x62874E: test    al, al
0x628750: jz      short loc_628757
0x628752: mov     ebx, 1
0x628757: push    ebx
0x628758: call    sub_520F20
0x62875D: mov     edx, [esi]
0x62875F: mov     eax, [edx+48h]
0x628762: add     esp, 4
0x628765: push    ebp
0x628766: mov     ecx, esi
0x628768: call    eax
0x62876A: push    0
0x62876C: call    sub_520F00
0x628771: push    0
0x628773: call    sub_520F40
0x628778: push    0FFFFFFFFh
0x62877A: call    sub_520F20
0x62877F: add     esp, 0Ch
0x628782: pop     edi
0x628783: pop     esi
0x628784: pop     ebp
0x628785: pop     ebx
0x628786: add     esp, 8
0x628789: retn    0Ch
