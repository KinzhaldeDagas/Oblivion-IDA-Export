0x8CF6E0: push    ebp
0x8CF6E1: mov     ebp, esp
0x8CF6E3: and     esp, 0FFFFFFF0h
0x8CF6E6: sub     esp, 0B4h
0x8CF6EC: mov     eax, ds:0B30AACh
0x8CF6F1: xor     eax, esp
0x8CF6F3: mov     [esp+0B4h+var_4], eax
0x8CF6FA: fldz
0x8CF6FC: push    ebx
0x8CF6FD: push    esi
0x8CF6FE: mov     esi, [ebp+arg_0]
0x8CF701: mov     eax, [esi+1F4h]
0x8CF707: shr     eax, 8
0x8CF70A: test    al, 1
0x8CF70C: push    edi
0x8CF70D: mov     [esp+0C0h+var_B4], ecx
0x8CF711: jz      short loc_8CF74A
0x8CF713: fcom    dword ptr [esi+320h]
0x8CF719: mov     dword ptr [esi+2A0h], 0
0x8CF723: fnstsw  ax
0x8CF725: test    ah, 44h
0x8CF728: jnp     short loc_8CF72E
0x8CF72A: mov     al, 1
0x8CF72C: jmp     short loc_8CF730
0x8CF72E: xor     al, al
0x8CF730: test    al, al
0x8CF732: jz      short loc_8CF740
0x8CF734: or      dword ptr [esi+1F4h], 80h
0x8CF73E: jmp     short loc_8CF74A
0x8CF740: and     dword ptr [esi+1F4h], 0FFFFFF7Fh
0x8CF74A: fld     dword ptr [esi+324h]
0x8CF750: xor     bl, bl
0x8CF752: fcomp   qword ptr ds:0A30068h
0x8CF758: fnstsw  ax
0x8CF75A: test    ah, 5
0x8CF75D: jp      short loc_8CF76C
0x8CF75F: fcom    dword ptr [esi+2E8h]
0x8CF765: fnstsw  ax
0x8CF767: test    ah, 41h
0x8CF76A: jz      short loc_8CF7CA
0x8CF76C: fld1
0x8CF76E: fcomp   dword ptr [esi+310h]
0x8CF774: fnstsw  ax
0x8CF776: test    ah, 41h
0x8CF779: jp      short loc_8CF7D4
0x8CF77B: mov     ecx, [esi+8]
0x8CF77E: test    ecx, ecx
0x8CF780: movaps  xmm0, xmmword ptr [esi+340h]
0x8CF787: shufps  xmm0, xmm0, 0AAh ; 'ª'
0x8CF78B: movaps  [esp+0C0h+var_B0], xmm0
0x8CF790: jz      short loc_8CF79D
0x8CF792: fstp    st
0x8CF794: call    sub_8AC070
0x8CF799: fldz
0x8CF79B: jmp     short loc_8CF7A2
0x8CF79D: mov     eax, offset stru_BA7A40
0x8CF7A2: movaps  xmm0, xmmword ptr [eax]
0x8CF7A5: shufps  xmm0, xmm0, 0AAh ; 'ª'
0x8CF7A9: subss   xmm0, dword ptr [esp+0C0h+var_B0]
0x8CF7AF: movss   dword ptr [esp+0C0h+var_B0], xmm0
0x8CF7B5: fld     dword ptr [esp+0C0h+var_B0]
0x8CF7B9: fld     dword ptr [esi+318h]
0x8CF7BF: fcompp
0x8CF7C1: fnstsw  ax
0x8CF7C3: test    ah, 41h
0x8CF7C6: jnz     short loc_8CF7D4
0x8CF7C8: mov     bl, 1
0x8CF7CA: or      dword ptr [esi+1F4h], 400h
0x8CF7D4: mov     eax, [esi+2A0h]
0x8CF7DA: cmp     eax, 0Bh
0x8CF7DD: jz      short loc_8CF82C
0x8CF7DF: cmp     eax, 1
0x8CF7E2: jnz     short loc_8CF84D
0x8CF7E4: mov     ecx, [esi+1F4h]
0x8CF7EA: shr     ecx, 0Ah
0x8CF7ED: test    al, cl
0x8CF7EF: jz      short loc_8CF822
0x8CF7F1: mov     ecx, esi
0x8CF7F3: fstp    st
0x8CF7F5: call    sub_890720
0x8CF7FA: fldz
0x8CF7FC: test    bl, bl
0x8CF7FE: jz      short loc_8CF822
0x8CF800: movaps  xmm0, xmmword ptr [esi+2E0h]
0x8CF807: shufps  xmm0, xmm0, 0AAh ; 'ª'
0x8CF80B: movss   dword ptr [esp+0C0h+var_B0], xmm0
0x8CF811: fcom    dword ptr [esp+0C0h+var_B0]
0x8CF815: fnstsw  ax
0x8CF817: test    ah, 41h
0x8CF81A: jnz     short loc_8CF822
0x8CF81C: fst     dword ptr [esi+2E8h]
0x8CF822: mov     dword ptr [esi+2A0h], 0Bh
0x8CF82C: fcom    dword ptr [esi+310h]
0x8CF832: fnstsw  ax
0x8CF834: test    ah, 5
0x8CF837: jp      loc_8CF9B1
0x8CF83D: test    dword ptr [esi+1F4h], 1800h
0x8CF847: jz      short loc_8CF871
0x8CF849: fld1
0x8CF84B: jmp     short loc_8CF883
0x8CF84D: mov     ecx, esi
0x8CF84F: fstp    dword ptr [esi+324h]
0x8CF855: call    sub_890720
0x8CF85A: pop     edi
0x8CF85B: pop     esi
0x8CF85C: pop     ebx
0x8CF85D: mov     ecx, [esp+0B4h+var_4]
0x8CF864: xor     ecx, esp
0x8CF866: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8CF86B: mov     esp, ebp
0x8CF86D: pop     ebp
0x8CF86E: retn    4
0x8CF871: fld     dword ptr ds:0B2E76Ch
0x8CF877: fmul    dword ptr [esi+310h]
0x8CF87D: fadd    dword ptr ds:0BA7A60h
0x8CF883: movaps  xmm0, xmmword ptr [esi+2C0h]
0x8CF88A: fstp    dword ptr [esp+0C0h+var_90]
0x8CF88E: mov     edx, [esp+0C0h+var_B4]
0x8CF892: fld     dword ptr [edx+8]
0x8CF895: movaps  [esp+0C0h+var_80], xmm0
0x8CF89A: movaps  xmm0, xmmword ptr [esi+2B0h]
0x8CF8A1: fstp    [esp+0C0h+var_30]
0x8CF8A8: movaps  [esp+0C0h+var_70], xmm0
0x8CF8AD: movaps  [esp+0C0h+var_60], xmm0
0x8CF8B2: movaps  xmm0, xmmword ptr [esi+280h]
0x8CF8B9: movaps  [esp+0C0h+var_20], xmm0
0x8CF8C1: movaps  xmm0, xmmword ptr [esi+2E0h]
0x8CF8C8: lea     edi, [esi+2E0h]
0x8CF8CE: movaps  [esp+0C0h+var_50], xmm0
0x8CF8D3: movaps  xmm0, xmmword ptr [esi+290h]
0x8CF8DA: movss   dword ptr [esp+0C0h+var_A0], xmm0
0x8CF8E0: movaps  xmm0, xmmword ptr [esi+290h]
0x8CF8E7: shufps  xmm0, xmm0, 55h ; 'U'
0x8CF8EB: movss   dword ptr [esp+0C0h+var_B0], xmm0
0x8CF8F1: fld     dword ptr [esp+0C0h+var_B0]
0x8CF8F5: fstp    [esp+0C0h+var_40]
0x8CF8FC: lea     eax, [esp+0C0h+var_90]
0x8CF900: fld     dword ptr [esp+0C0h+var_A0]
0x8CF904: push    edi
0x8CF905: fstp    [esp+0C4h+var_3C]
0x8CF90C: push    eax
0x8CF90D: fst     [esp+0C8h+var_38]
0x8CF914: fstp    [esp+0C8h+var_34]
0x8CF91B: call    sub_91F430
0x8CF920: movaps  xmm1, xmmword ptr [esi+2B0h]
0x8CF927: movaps  xmm0, xmmword ptr [edi]
0x8CF92A: mulps   xmm0, xmm1
0x8CF92D: movaps  xmm2, xmm0
0x8CF930: shufps  xmm2, xmm0, 55h ; 'U'
0x8CF934: addss   xmm2, xmm0
0x8CF938: movaps  xmm3, xmm0
0x8CF93B: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x8CF93F: movss   xmm0, dword ptr ds:0A99E34h
0x8CF947: addss   xmm3, xmm2
0x8CF94B: xorps   xmm2, xmm2
0x8CF94E: movss   dword ptr [esp+0C8h+var_A0], xmm3
0x8CF954: subss   xmm0, dword ptr [esp+0C8h+var_A0]
0x8CF95A: movss   xmm2, xmm0
0x8CF95E: movaps  xmm0, xmm2
0x8CF961: movaps  xmm2, xmm0
0x8CF964: shufps  xmm2, xmm0, 0
0x8CF968: movaps  xmm0, xmmword ptr [edi]
0x8CF96B: mulps   xmm2, xmm1
0x8CF96E: addps   xmm2, xmm0
0x8CF971: movaps  xmmword ptr [edi], xmm2
0x8CF974: movaps  xmm1, xmmword ptr [esi+2B0h]
0x8CF97B: movaps  xmm2, [esp+0C8h+var_50]
0x8CF980: movaps  xmm0, xmm1
0x8CF983: mulps   xmm0, xmm2
0x8CF986: movaps  xmm2, xmm0
0x8CF989: shufps  xmm2, xmm0, 55h ; 'U'
0x8CF98D: addss   xmm2, xmm0
0x8CF991: shufps  xmm0, xmm0, 0AAh ; 'ª'
0x8CF995: addss   xmm0, xmm2
0x8CF999: movaps  xmm2, xmm0
0x8CF99C: shufps  xmm2, xmm0, 0
0x8CF9A0: movaps  xmm0, xmmword ptr [edi]
0x8CF9A3: mulps   xmm2, xmm1
0x8CF9A6: addps   xmm2, xmm0
0x8CF9A9: add     esp, 8
0x8CF9AC: movaps  xmmword ptr [edi], xmm2
0x8CF9AF: jmp     short loc_8CF9B3
0x8CF9B1: fstp    st
0x8CF9B3: mov     edx, [esi]
0x8CF9B5: mov     eax, [edx+58h]
0x8CF9B8: mov     ecx, esi
0x8CF9BA: call    eax
0x8CF9BC: mov     edx, [esi]
0x8CF9BE: mov     eax, [edx+58h]
0x8CF9C1: mov     ecx, esi
0x8CF9C3: call    eax
0x8CF9C5: movaps  xmm0, xmmword ptr [eax+20h]
0x8CF9C9: mov     edx, [esi]
0x8CF9CB: mov     eax, [edx+58h]
0x8CF9CE: mov     ecx, esi
0x8CF9D0: movaps  [esp+0C0h+var_A0], xmm0
0x8CF9D5: call    eax
0x8CF9D7: movss   xmm0, dword ptr [esi+328h]
0x8CF9DF: movss   xmm2, dword ptr [esi+2D8h]
0x8CF9E7: xorps   xmm1, xmm1
0x8CF9EA: movss   xmm1, xmm0
0x8CF9EE: mov     ecx, esi
0x8CF9F0: xorps   xmm0, xmm0
0x8CF9F3: movss   xmm0, xmm2
0x8CF9F7: movaps  xmm2, xmm1
0x8CF9FA: shufps  xmm2, xmm1, 0
0x8CF9FE: mulps   xmm2, [esp+0C0h+var_A0]
0x8CFA03: shufps  xmm0, xmm0, 0
0x8CFA07: mulps   xmm2, xmm0
0x8CFA0A: movaps  xmm0, xmmword ptr [esi+2E0h]
0x8CFA11: addps   xmm2, xmm0
0x8CFA14: movaps  xmmword ptr [esi+2E0h], xmm2
0x8CFA1B: call    sub_890740
0x8CFA20: mov     ecx, [esp+0C0h+var_4]
0x8CFA27: pop     edi
0x8CFA28: pop     esi
0x8CFA29: pop     ebx
0x8CFA2A: xor     ecx, esp
0x8CFA2C: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8CFA31: mov     esp, ebp
0x8CFA33: pop     ebp
0x8CFA34: retn    4
