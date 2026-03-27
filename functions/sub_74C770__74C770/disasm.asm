0x74C770: sub     esp, 0Ch
0x74C773: push    esi
0x74C774: mov     esi, ecx
0x74C776: push    edi
0x74C777: movzx   edi, word ptr [esi+5Ch]
0x74C77B: test    edi, edi
0x74C77D: jz      loc_74C8EC
0x74C783: call    _rand
0x74C788: mov     [esp+14h+var_C], eax
0x74C78C: fild    [esp+14h+var_C]
0x74C790: mov     eax, edi
0x74C792: test    eax, eax
0x74C794: mov     dword ptr [esp+14h+var_8], eax
0x74C798: fdiv    qword ptr ds:0A3D5A8h
0x74C79E: fstp    [esp+14h+var_C]
0x74C7A2: fld     [esp+14h+var_C]
0x74C7A6: fild    dword ptr [esp+14h+var_8]
0x74C7AA: jge     short loc_74C7B2
0x74C7AC: fadd    dword ptr ds:0A2FC78h
0x74C7B2: fnstcw  word ptr [esp+14h+var_C]
0x74C7B6: movzx   eax, word ptr [esp+14h+var_C]
0x74C7BB: fmulp   st(1), st
0x74C7BD: or      eax, 0C00h
0x74C7C2: mov     dword ptr [esp+14h+var_8], eax
0x74C7C6: fldcw   word ptr [esp+14h+var_8]
0x74C7CA: fistp   [esp+14h+var_8]
0x74C7CE: mov     eax, dword ptr [esp+14h+var_8]
0x74C7D2: cmp     eax, edi
0x74C7D4: fldcw   word ptr [esp+14h+var_C]
0x74C7D8: jnz     short loc_74C7DD
0x74C7DA: lea     eax, [edi-1]
0x74C7DD: movzx   ecx, word ptr [esi+5Ch]
0x74C7E1: cmp     eax, ecx
0x74C7E3: jnb     loc_74C8EC
0x74C7E9: mov     edx, [esi+54h]
0x74C7EC: mov     edi, [edx+eax*4]
0x74C7EF: test    edi, edi
0x74C7F1: jz      loc_74C8EC
0x74C7F7: movzx   ecx, word ptr [esi+6Ch]
0x74C7FB: cmp     eax, ecx
0x74C7FD: push    ebx
0x74C7FE: push    ebp
0x74C7FF: mov     ebp, [edi+0B8h]
0x74C805: jnb     short loc_74C80F
0x74C807: mov     edx, [esi+64h]
0x74C80A: mov     ebx, [edx+eax*4]
0x74C80D: jmp     short loc_74C811
0x74C80F: xor     ebx, ebx
0x74C811: test    ebp, ebp
0x74C813: jz      short loc_74C827
0x74C815: test    ebx, ebx
0x74C817: jz      short loc_74C827
0x74C819: cmp     dword ptr [ebx+8], 0
0x74C81D: jnz     short loc_74C827
0x74C81F: push    edi
0x74C820: mov     ecx, ebx
0x74C822: call    sub_74A2D0
0x74C827: mov     eax, [esi+74h]
0x74C82A: add     eax, 0FFFFFFFFh; switch 4 cases
0x74C82D: cmp     eax, 3
0x74C830: ja      def_74C836
0x74C836: jmp     ds:jpt_74C836[eax*4]; switch jump
0x74C83D: test    ebp, ebp; jumptable 0074C836 cases 1,3
0x74C83F: jz      short loc_74C85E
0x74C841: mov     eax, [esp+1Ch+arg_4]
0x74C845: mov     ecx, [esp+1Ch+arg_0]
0x74C849: push    eax
0x74C84A: push    ecx
0x74C84B: push    edi
0x74C84C: push    ebx
0x74C84D: mov     ecx, esi
0x74C84F: call    sub_74B3C0
0x74C854: pop     ebp
0x74C855: pop     ebx
0x74C856: pop     edi
0x74C857: pop     esi
0x74C858: add     esp, 0Ch
0x74C85B: retn    8
0x74C85E: mov     edx, [esp+1Ch+arg_4]
0x74C862: mov     eax, [esp+1Ch+arg_0]
0x74C866: push    edx
0x74C867: push    eax
0x74C868: push    edi
0x74C869: mov     ecx, esi
0x74C86B: call    sub_74BCD0
0x74C870: pop     ebp
0x74C871: pop     ebx
0x74C872: pop     edi
0x74C873: pop     esi
0x74C874: add     esp, 0Ch
0x74C877: retn    8
0x74C87A: test    ebp, ebp; jumptable 0074C836 cases 2,4
0x74C87C: jz      short loc_74C89B
0x74C87E: mov     ecx, [esp+1Ch+arg_4]
0x74C882: mov     edx, [esp+1Ch+arg_0]
0x74C886: push    ecx
0x74C887: push    edx
0x74C888: push    edi
0x74C889: push    ebx
0x74C88A: mov     ecx, esi
0x74C88C: call    sub_74B7A0
0x74C891: pop     ebp
0x74C892: pop     ebx
0x74C893: pop     edi
0x74C894: pop     esi
0x74C895: add     esp, 0Ch
0x74C898: retn    8
0x74C89B: mov     eax, [esp+1Ch+arg_4]
0x74C89F: mov     ecx, [esp+1Ch+arg_0]
0x74C8A3: push    eax
0x74C8A4: push    ecx
0x74C8A5: push    edi
0x74C8A6: mov     ecx, esi
0x74C8A8: call    sub_74AE30
0x74C8AD: pop     ebp
0x74C8AE: pop     ebx
0x74C8AF: pop     edi
0x74C8B0: pop     esi
0x74C8B1: add     esp, 0Ch
0x74C8B4: retn    8
