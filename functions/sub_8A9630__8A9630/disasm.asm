0x8A9630: sub     esp, 0Ch
0x8A9633: push    ebx
0x8A9634: mov     ebx, [esp+10h+arg_0]
0x8A9638: push    esi
0x8A9639: lea     eax, [ebx-1]; switch 6 cases
0x8A963C: cmp     eax, 5
0x8A963F: push    edi
0x8A9640: mov     edi, [esp+18h+arg_10]
0x8A9644: ja      def_8A964A
0x8A964A: jmp     ds:jpt_8A964A[eax*4]; switch jump
0x8A9651: mov     ecx, ds:0BA7D98h; jumptable 008A964A case 2
0x8A9657: mov     eax, [ecx]
0x8A9659: push    2Bh ; '+'
0x8A965B: jmp     loc_8A9751
0x8A9660: mov     ecx, ds:0BA7D98h; jumptable 008A964A case 4
0x8A9666: mov     eax, [ecx]
0x8A9668: push    2Bh ; '+'
0x8A966A: push    100h
0x8A966F: call    dword ptr [eax+10h]
0x8A9672: mov     ecx, [esp+arg_20]
0x8A9676: mov     edx, [esp+arg_1C]
0x8A967A: push    ecx
0x8A967B: push    edx
0x8A967C: mov     ecx, eax
0x8A967E: mov     word ptr [eax+4], 100h
0x8A9684: call    sub_8EAD40
0x8A9689: jmp     loc_8A97C6
0x8A968E: mov     ecx, ds:0BA7D98h; jumptable 008A964A case 3
0x8A9694: mov     eax, [ecx]
0x8A9696: push    2Bh ; '+'
0x8A9698: push    0F0h ; 'ð'
0x8A969D: call    dword ptr [eax+10h]
0x8A96A0: mov     ecx, [esp+arg_20]
0x8A96A4: mov     edx, [esp+arg_1C]
0x8A96A8: push    ecx
0x8A96A9: push    edx
0x8A96AA: mov     ecx, eax
0x8A96AC: mov     word ptr [eax+4], 0F0h ; 'ð'
0x8A96B2: call    sub_8A9610
0x8A96B7: jmp     loc_8A97C6
0x8A96BC: mov     ecx, ds:0BA7D98h; jumptable 008A964A case 5
0x8A96C2: mov     eax, [ecx]
0x8A96C4: push    2Bh ; '+'
0x8A96C6: push    100h
0x8A96CB: call    dword ptr [eax+10h]
0x8A96CE: mov     ecx, [esp+arg_20]
0x8A96D2: mov     edx, [esp+arg_1C]
0x8A96D6: push    ecx
0x8A96D7: push    edx
0x8A96D8: mov     ecx, eax
0x8A96DA: mov     word ptr [eax+4], 100h
0x8A96E0: call    sub_8EA750
0x8A96E5: jmp     loc_8A97C6
0x8A96EA: mov     ecx, [edi+14h]; jumptable 008A964A case 1
0x8A96ED: mov     edx, [edi+28h]
0x8A96F0: mov     eax, [edi]
0x8A96F2: mov     [esp+18h+var_C], ecx
0x8A96F6: fld     [esp+18h+var_C]
0x8A96FA: mov     [esp+18h+arg_0], edx
0x8A96FE: fsub    [esp+18h+arg_0]
0x8A9702: mov     [esp+18h+var_8], eax
0x8A9706: mov     ecx, ds:0BA7D98h
0x8A970C: push    2Bh ; '+'
0x8A970E: fabs
0x8A9710: fld     [esp+1Ch+var_8]
0x8A9714: fsub    [esp+1Ch+arg_0]
0x8A9718: fabs
0x8A971A: fxch    st(1)
0x8A971C: fxch    st(1)
0x8A971E: faddp   st(1), st
0x8A9720: fld     [esp+1Ch+var_8]
0x8A9724: fsub    [esp+1Ch+var_C]
0x8A9728: fabs
0x8A972A: fst     [esp+1Ch+var_4]
0x8A972E: faddp   st(1), st
0x8A9730: fld     [esp+1Ch+arg_0]
0x8A9734: fadd    [esp+1Ch+var_C]
0x8A9738: fadd    [esp+1Ch+var_8]
0x8A973C: fmul    dword ptr ds:0A2FAACh
0x8A9742: fcompp
0x8A9744: fnstsw  ax
0x8A9746: test    ah, 41h
0x8A9749: mov     eax, [ecx]
0x8A974B: jnz     loc_8A966A
0x8A9751: push    0F0h ; 'ð'
0x8A9756: call    dword ptr [eax+10h]
0x8A9759: mov     ecx, [esp+arg_20]
0x8A975D: mov     edx, [esp+arg_1C]
0x8A9761: push    ecx
0x8A9762: push    edx
0x8A9763: mov     ecx, eax
0x8A9765: mov     word ptr [eax+4], 0F0h ; 'ð'
0x8A976B: call    sub_8A95F0
0x8A9770: jmp     short loc_8A97C6
0x8A9772: mov     ecx, ds:0BA7D98h; jumptable 008A964A case 6
0x8A9778: mov     eax, [ecx]
0x8A977A: push    2Bh ; '+'
0x8A977C: push    100h
0x8A9781: call    dword ptr [eax+10h]
0x8A9784: mov     ecx, [esp+arg_20]
0x8A9788: mov     edx, [esp+arg_1C]
0x8A978C: push    ecx
0x8A978D: push    edx
0x8A978E: mov     ecx, eax
0x8A9790: mov     word ptr [eax+4], 100h
0x8A9796: call    sub_8EA140
0x8A979B: jmp     short loc_8A97C6
