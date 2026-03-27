0x928AA0: push    ebp
0x928AA1: mov     ebp, esp
0x928AA3: and     esp, 0FFFFFFF0h
0x928AA6: sub     esp, 0Ch
0x928AA9: fld     [ebp+arg_0]
0x928AAC: push    esi
0x928AAD: fcomp   dword ptr ds:0A2FAA8h
0x928AB3: mov     esi, ecx
0x928AB5: fnstsw  ax
0x928AB7: test    ah, 5
0x928ABA: jp      short loc_928AC0
0x928ABC: xor     eax, eax
0x928ABE: jmp     short loc_928ACC
0x928AC0: mov     eax, [ebp+arg_0]
0x928AC3: push    eax
0x928AC4: call    sub_8ECB30
0x928AC9: add     esp, 4
0x928ACC: mov     edx, [esi+24h]
0x928ACF: lea     ecx, [eax+1]
0x928AD2: cmp     ecx, edx
0x928AD4: mov     [esp+10h+var_4], eax
0x928AD8: jge     short loc_928B23
0x928ADA: fild    [esp+10h+var_4]
0x928ADE: mov     edx, [esi+20h]
0x928AE1: movaps  xmm3, xmmword ptr ds:0A6DFE0h
0x928AE8: shl     ecx, 4
0x928AEB: fsubr   [ebp+arg_0]
0x928AEE: movaps  xmm1, xmmword ptr [ecx+edx]
0x928AF2: mov     ecx, [ebp+arg_4]
0x928AF5: shl     eax, 4
0x928AF8: fstp    [esp+10h+var_4]
0x928AFC: movss   xmm0, [esp+10h+var_4]
0x928B02: shufps  xmm0, xmm0, 0
0x928B06: movaps  xmm2, xmm0
0x928B09: mulps   xmm2, xmm1
0x928B0C: movaps  xmm1, xmmword ptr [eax+edx]
0x928B10: subps   xmm3, xmm0
0x928B13: mulps   xmm3, xmm1
0x928B16: addps   xmm3, xmm2
0x928B19: movaps  xmmword ptr [ecx], xmm3
0x928B1C: pop     esi
0x928B1D: mov     esp, ebp
0x928B1F: pop     ebp
0x928B20: retn    8
0x928B23: mov     ecx, [esi+20h]
0x928B26: mov     edx, [ebp+arg_4]
0x928B29: shl     eax, 4
0x928B2C: movaps  xmm0, xmmword ptr [eax+ecx]
0x928B30: add     eax, ecx
0x928B32: movaps  xmmword ptr [edx], xmm0
0x928B35: pop     esi
0x928B36: mov     esp, ebp
0x928B38: pop     ebp
0x928B39: retn    8
