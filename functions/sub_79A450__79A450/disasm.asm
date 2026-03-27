0x79A450: sub     esp, 40h
0x79A453: push    ebx
0x79A454: mov     ebx, ecx
0x79A456: cmp     dword ptr [ebx], 0
0x79A459: mov     [esp+44h+var_4], ebx
0x79A45D: jz      loc_79A806
0x79A463: mov     eax, [ebx+50h]
0x79A466: cmp     eax, 1
0x79A469: jnz     short loc_79A46F
0x79A46B: fld1
0x79A46D: jmp     short loc_79A49D
0x79A46F: mov     ecx, [esp+44h+arg_0]
0x79A473: fild    [esp+44h+arg_0]
0x79A477: test    ecx, ecx
0x79A479: jge     short loc_79A481
0x79A47B: fadd    dword ptr ds:0A2FC78h
0x79A481: test    eax, eax
0x79A483: mov     [esp+44h+var_8], eax
0x79A487: fild    [esp+44h+var_8]
0x79A48B: jge     short loc_79A493
0x79A48D: fadd    dword ptr ds:0A2FC78h
0x79A493: fld1
0x79A495: fsub    st(1), st
0x79A497: fxch    st(2)
0x79A499: fdivrp  st(1), st
0x79A49B: fsubp   st(1), st
0x79A49D: push    ebp
0x79A49E: fstp    [esp+48h+var_34]
0x79A4A2: push    esi
0x79A4A3: push    edi
0x79A4A4: mov     edi, [esp+50h+arg_8]
0x79A4A8: mov     esi, [edi+4]
0x79A4AB: test    esi, esi
0x79A4AD: jnz     short loc_79A4B3
0x79A4AF: xor     eax, eax
0x79A4B1: jmp     short loc_79A4CB
0x79A4B3: mov     ecx, [edi+8]
0x79A4B6: sub     ecx, esi
0x79A4B8: mov     eax, 92492493h
0x79A4BD: imul    ecx
0x79A4BF: add     edx, ecx
0x79A4C1: sar     edx, 5
0x79A4C4: mov     eax, edx
0x79A4C6: shr     eax, 1Fh
0x79A4C9: add     eax, edx
0x79A4CB: mov     edx, [ebx+64h]
0x79A4CE: add     edx, 1
0x79A4D1: test    edx, edx
0x79A4D3: mov     [esp+50h+arg_8], edx
0x79A4D7: fild    [esp+50h+arg_8]
0x79A4DB: jge     short loc_79A4E3
0x79A4DD: fadd    dword ptr ds:0A2FC78h
0x79A4E3: test    eax, eax
0x79A4E5: fstp    [esp+50h+arg_8]
0x79A4E9: mov     [esp+50h+var_8], eax
0x79A4ED: fild    [esp+50h+var_8]
0x79A4F1: jge     short loc_79A4F9
0x79A4F3: fadd    dword ptr ds:0A2FC78h
0x79A4F9: fld     [esp+50h+arg_8]
0x79A4FD: fld     st
0x79A4FF: fsubp   st(2), st
0x79A501: fld     [esp+50h+var_34]
0x79A505: fld     st
0x79A507: fmulp   st(3), st
0x79A509: fxch    st(2)
0x79A50B: faddp   st(1), st
0x79A50D: fstp    [esp+50h+arg_8]
0x79A511: fld     [esp+50h+arg_8]
0x79A515: call    Double_To_SInt32
0x79A51A: test    esi, esi
0x79A51C: mov     ebp, eax
0x79A51E: mov     [esp+50h+var_24], ebp
0x79A522: jnz     short loc_79A528
0x79A524: xor     eax, eax
0x79A526: jmp     short loc_79A540
0x79A528: mov     ecx, [edi+8]
0x79A52B: sub     ecx, esi
0x79A52D: mov     eax, 92492493h
0x79A532: imul    ecx
0x79A534: add     edx, ecx
0x79A536: sar     edx, 5
0x79A539: mov     eax, edx
0x79A53B: shr     eax, 1Fh
0x79A53E: add     eax, edx
0x79A540: test    eax, eax
0x79A542: lea     esi, [ebp-1]
0x79A545: mov     [esp+50h+arg_8], eax
0x79A549: fild    [esp+50h+arg_8]
0x79A54D: mov     [esp+50h+var_34], esi
0x79A551: jge     short loc_79A559
0x79A553: fadd    dword ptr ds:0A2FC78h
0x79A559: fidiv   [esp+50h+var_34]
0x79A55D: mov     eax, [ebx+68h]
0x79A560: lea     ecx, [eax+eax+1]
0x79A564: test    ecx, ecx
0x79A566: mov     [esp+50h+arg_8], ecx
0x79A56A: fstp    [esp+50h+var_30]
0x79A56E: fild    [esp+50h+arg_8]
0x79A572: jge     short loc_79A57A
0x79A574: fadd    dword ptr ds:0A2FC78h
0x79A57A: mov     edx, [edi+2Ch]
0x79A57D: fstp    [esp+50h+var_20]
0x79A581: test    edx, edx
0x79A583: fild    dword ptr [edi+2Ch]
0x79A586: jge     short loc_79A58E
0x79A588: fadd    dword ptr ds:0A2FC78h
0x79A58E: fstp    [esp+50h+arg_8]
0x79A592: fld     [esp+50h+arg_8]
0x79A596: fld     st
0x79A598: fld     [esp+50h+var_20]
0x79A59C: fld     st
0x79A59E: fsubp   st(2), st
0x79A5A0: fxch    st(1)
0x79A5A2: fmulp   st(3), st
0x79A5A4: faddp   st(2), st
0x79A5A6: fxch    st(1)
0x79A5A8: fstp    [esp+50h+arg_8]
0x79A5AC: fld     [esp+50h+arg_8]
0x79A5B0: call    Double_To_SInt32
0x79A5B5: lea     ecx, [eax-1]
0x79A5B8: mov     [esp+50h+var_3C], ecx
0x79A5BC: fidiv   [esp+50h+var_3C]
0x79A5C0: lea     ebp, [eax+eax+1]
0x79A5C4: mov     [esp+50h+var_2C], eax
0x79A5C8: xor     ecx, ecx
0x79A5CA: mov     edx, 2
0x79A5CF: imul    ebp, esi
0x79A5D2: fstp    [esp+50h+var_28]
0x79A5D6: sub     ebp, 1
0x79A5D9: mov     eax, ebp
0x79A5DB: mul     edx
0x79A5DD: seto    cl
0x79A5E0: mov     [esp+50h+var_8], ebp
0x79A5E4: neg     ecx
0x79A5E6: or      ecx, eax
0x79A5E8: push    ecx; Size
0x79A5E9: call    FormHeapAlloc
0x79A5EE: xor     esi, esi
0x79A5F0: add     esp, 4
0x79A5F3: cmp     [esp+50h+var_34], esi
0x79A5F7: mov     ebx, eax
0x79A5F9: mov     [esp+50h+var_40], esi
0x79A5FD: jle     loc_79A7EA
0x79A603: mov     eax, [esp+50h+var_24]
0x79A607: add     eax, 0FFFFFFFEh
0x79A60A: mov     [esp+50h+var_38], eax
0x79A60E: mov     edi, edi
0x79A610: fld     [esp+50h+var_30]
0x79A614: fild    [esp+50h+var_40]
0x79A618: fmul    st, st(1)
0x79A61A: call    Double_To_SInt32
0x79A61F: mov     ecx, [esp+50h+var_40]
0x79A623: add     ecx, 1
0x79A626: mov     [esp+50h+var_20], ecx
0x79A62A: fimul   [esp+50h+var_20]
0x79A62E: mov     [esp+50h+arg_8], eax
0x79A632: call    Double_To_SInt32
0x79A637: mov     edx, [esp+50h+var_38]
0x79A63B: cmp     [esp+50h+var_40], edx
0x79A63F: mov     ebp, eax
0x79A641: jz      short loc_79A651
0x79A643: mov     ecx, edi
0x79A645: call    sub_799EE0
0x79A64A: sub     eax, 1
0x79A64D: cmp     ebp, eax
0x79A64F: jle     short loc_79A65D
0x79A651: mov     ecx, edi
0x79A653: call    sub_799EE0
0x79A658: mov     ebp, eax
0x79A65A: sub     ebp, 1
0x79A65D: mov     ecx, [esp+50h+arg_8]
0x79A661: mov     eax, [esp+50h+var_40]
0x79A665: sub     ebp, ecx
0x79A667: and     eax, 80000001h
0x79A66C: mov     [esp+50h+var_24], ebp
0x79A670: jns     short loc_79A677
0x79A672: dec     eax
0x79A673: or      eax, 0FFFFFFFEh
0x79A676: inc     eax
0x79A677: mov     eax, [edi+2Ch]
0x79A67A: jnz     loc_79A722
0x79A680: imul    eax, ecx
0x79A683: xor     ecx, ecx
0x79A685: cmp     [esp+50h+var_2C], ecx
0x79A689: mov     dword ptr [esp+50h+var_10], eax
0x79A68D: mov     [esp+50h+arg_8], ecx
0x79A691: jle     loc_79A7BE
0x79A697: mov     edx, [esp+50h+arg_4]
0x79A69B: fld     [esp+50h+var_28]
0x79A69F: add     edx, eax
0x79A6A1: mov     [esp+50h+var_14], edx
0x79A6A5: fild    [esp+50h+arg_8]
0x79A6A9: fnstcw  word ptr [esp+50h+arg_8]
0x79A6AD: movzx   eax, word ptr [esp+50h+arg_8]
0x79A6B2: fmul    st, st(1)
0x79A6B4: or      eax, 0C00h
0x79A6B9: cmp     ecx, [esp+50h+var_3C]
0x79A6BD: mov     dword ptr [esp+50h+var_1C], eax
0x79A6C1: fldcw   word ptr [esp+50h+var_1C]
0x79A6C5: fistp   [esp+50h+var_1C]
0x79A6C9: mov     eax, dword ptr [esp+50h+var_1C]
0x79A6CD: fldcw   word ptr [esp+50h+arg_8]
0x79A6D1: jnz     short loc_79A6D9
0x79A6D3: mov     eax, [edi+2Ch]
0x79A6D6: sub     eax, 1
0x79A6D9: mov     edx, [edi+2Ch]
0x79A6DC: add     edx, 0FFFFFFFFh
0x79A6DF: cmp     eax, edx
0x79A6E1: jbe     short loc_79A6E5
0x79A6E3: mov     eax, edx
0x79A6E5: mov     edx, [esp+50h+var_14]
0x79A6E9: add     edx, eax
0x79A6EB: mov     [ebx+esi*2], dx
0x79A6EF: mov     dx, [edi+2Ch]
0x79A6F3: imul    dx, word ptr [esp+50h+var_24]
0x79A6F9: add     dx, word ptr [esp+50h+arg_4]
0x79A6FE: add     esi, 1
0x79A701: add     dx, word ptr [esp+50h+var_10]
0x79A706: add     ecx, 1
0x79A709: add     dx, ax
0x79A70C: mov     [ebx+esi*2], dx
0x79A710: add     esi, 1
0x79A713: cmp     ecx, [esp+50h+var_2C]
0x79A717: mov     [esp+50h+arg_8], ecx
0x79A71B: jl      short loc_79A6A5
0x79A71D: jmp     loc_79A7BC
0x79A722: imul    eax, ecx
0x79A725: mov     ecx, [esp+50h+var_3C]
0x79A729: test    ecx, ecx
0x79A72B: mov     dword ptr [esp+50h+var_1C], eax
0x79A72F: mov     [esp+50h+arg_8], ecx
0x79A733: jl      loc_79A7BE
0x79A739: mov     edx, [esp+50h+arg_4]
0x79A73D: fld     [esp+50h+var_28]
0x79A741: add     eax, edx
0x79A743: mov     [esp+50h+var_14], eax
0x79A747: fild    [esp+50h+arg_8]
0x79A74B: fnstcw  word ptr [esp+50h+arg_8]
0x79A74F: movzx   eax, word ptr [esp+50h+arg_8]
0x79A754: fmul    st, st(1)
0x79A756: or      eax, 0C00h
0x79A75B: cmp     ecx, [esp+50h+var_3C]
0x79A75F: mov     dword ptr [esp+50h+var_10], eax
0x79A763: fldcw   word ptr [esp+50h+var_10]
0x79A767: fistp   [esp+50h+var_10]
0x79A76B: mov     eax, dword ptr [esp+50h+var_10]
0x79A76F: fldcw   word ptr [esp+50h+arg_8]
0x79A773: jnz     short loc_79A77B
0x79A775: mov     eax, [edi+2Ch]
0x79A778: sub     eax, 1
0x79A77B: mov     edx, [edi+2Ch]
0x79A77E: add     edx, 0FFFFFFFFh
0x79A781: cmp     eax, edx
0x79A783: jbe     short loc_79A787
0x79A785: mov     eax, edx
0x79A787: mov     edx, [esp+50h+var_14]
0x79A78B: add     edx, eax
0x79A78D: mov     [ebx+esi*2], dx
0x79A791: mov     dx, [edi+2Ch]
0x79A795: imul    dx, word ptr [esp+50h+var_24]
0x79A79B: add     dx, word ptr [esp+50h+var_1C]
0x79A7A0: add     esi, 1
0x79A7A3: add     dx, ax
0x79A7A6: add     dx, word ptr [esp+50h+arg_4]
0x79A7AB: add     esi, 1
0x79A7AE: mov     [ebx+esi*2-2], dx
0x79A7B3: sub     ecx, 1
0x79A7B6: mov     [esp+50h+arg_8], ecx
0x79A7BA: jns     short loc_79A747
0x79A7BC: fstp    st
0x79A7BE: mov     eax, [esp+50h+var_40]
0x79A7C2: cmp     eax, [esp+50h+var_38]
0x79A7C6: jge     short loc_79A7D4
0x79A7C8: mov     cx, [ebx+esi*2-2]
0x79A7CD: mov     [ebx+esi*2], cx
0x79A7D1: add     esi, 1
0x79A7D4: mov     eax, [esp+50h+var_20]
0x79A7D8: cmp     eax, [esp+50h+var_34]
0x79A7DC: mov     [esp+50h+var_40], eax
0x79A7E0: jl      loc_79A610
0x79A7E6: mov     ebp, [esp+50h+var_8]
0x79A7EA: mov     edx, [esp+50h+arg_0]
0x79A7EE: mov     esi, [esp+50h+var_4]
0x79A7F2: mov     ecx, [esi]
0x79A7F4: push    ebp
0x79A7F5: push    ebx
0x79A7F6: push    edx
0x79A7F7: call    sub_796100
0x79A7FC: mov     eax, [esi]
0x79A7FE: add     word ptr [eax+26h], 1
0x79A803: pop     edi
0x79A804: pop     esi
0x79A805: pop     ebp
0x79A806: pop     ebx
0x79A807: add     esp, 40h
0x79A80A: retn    0Ch
