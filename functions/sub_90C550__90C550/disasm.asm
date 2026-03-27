0x90C550: push    ebp
0x90C551: mov     ebp, esp
0x90C553: and     esp, 0FFFFFFF0h
0x90C556: sub     esp, 74h
0x90C559: mov     eax, ds:0B30AACh
0x90C55E: mov     [esp+74h+var_4], eax
0x90C562: mov     eax, [ebp+arg_0]
0x90C565: mov     edx, [eax]
0x90C567: mov     eax, [eax+4]
0x90C56A: dec     eax
0x90C56B: push    ebx
0x90C56C: push    esi
0x90C56D: push    edi
0x90C56E: mov     edi, [ebp+arg_4]
0x90C571: mov     [esp+80h+var_5C], edx
0x90C575: mov     [esp+80h+var_60], edi
0x90C579: mov     dword ptr [esp+80h+var_50], 0
0x90C581: mov     dword ptr [esp+80h+var_50+4], 3F800000h
0x90C589: mov     dword ptr [esp+80h+var_50+8], 0
0x90C591: mov     dword ptr [esp+80h+var_50+0Ch], 7F7FFFFFh
0x90C599: js      loc_90C7E5
0x90C59F: movaps  xmm3, [esp+80h+var_50]
0x90C5A4: inc     eax
0x90C5A5: mov     [esp+80h+var_58], eax
0x90C5A9: lea     esp, [esp+0]
0x90C5B0: mov     eax, [esp+80h+var_5C]
0x90C5B4: movaps  xmmword ptr [edi], xmm3
0x90C5B7: movaps  xmm0, xmmword ptr [eax]
0x90C5BA: movaps  xmm1, xmmword ptr [ecx+30h]
0x90C5BE: movaps  xmm4, xmmword ptr [ecx+40h]
0x90C5C2: movaps  xmm2, xmm0
0x90C5C5: mulps   xmm2, xmm1
0x90C5C8: addps   xmm0, xmm4
0x90C5CB: movaps  [esp+80h+var_50], xmm2
0x90C5D0: movaps  xmm2, xmmword ptr ds:0A97DD0h
0x90C5D7: mulps   xmm0, xmm1
0x90C5DA: addps   xmm0, xmm2
0x90C5DD: movaps  [esp+80h+var_30], xmm0
0x90C5E2: mov     edx, dword ptr [esp+80h+var_30+8]
0x90C5E6: mov     eax, dword ptr [esp+80h+var_30]
0x90C5EA: shr     edx, 6
0x90C5ED: shr     eax, 6
0x90C5F0: movzx   esi, dx
0x90C5F3: mov     edx, [ecx+0Ch]
0x90C5F6: movzx   eax, ax
0x90C5F9: lea     ebx, [edx-1]
0x90C5FC: cmp     eax, ebx
0x90C5FE: mov     [esp+80h+var_64], eax
0x90C602: mov     [esp+80h+var_68], esi
0x90C606: jge     loc_90C7C4
0x90C60C: mov     ebx, [ecx+10h]
0x90C60F: dec     ebx
0x90C610: cmp     esi, ebx
0x90C612: jge     loc_90C7C4
0x90C618: fild    [esp+80h+var_64]
0x90C61C: mov     bl, [ecx+6Ch]
0x90C61F: mov     edi, [ecx+60h]
0x90C622: test    bl, bl
0x90C624: fsubr   dword ptr [esp+80h+var_50]
0x90C628: mov     ebx, edx
0x90C62A: fild    [esp+80h+var_68]
0x90C62E: fsubr   dword ptr [esp+80h+var_50+8]
0x90C632: jz      short loc_90C6A2
0x90C634: imul    ebx, esi
0x90C637: add     ebx, eax
0x90C639: inc     esi
0x90C63A: imul    esi, edx
0x90C63D: fld     dword ptr [edi+ebx*4]
0x90C640: add     esi, eax
0x90C642: lea     ebx, [edi+ebx*4]
0x90C645: lea     edx, [edi+esi*4]
0x90C648: mov     edi, [esp+80h+var_60]
0x90C64C: fld     dword ptr [edx+4]
0x90C64F: fld     st(3)
0x90C651: fcomp   st(3)
0x90C653: fnstsw  ax
0x90C655: test    ah, 41h
0x90C658: jnz     short loc_90C696
0x90C65A: fld     dword ptr [ebx+4]
0x90C65D: fld     st
0x90C65F: fsub    st, st(3)
0x90C661: fstp    [esp+80h+var_68]
0x90C665: fxch    st(1)
0x90C667: fsub    st, st(1)
0x90C669: fstp    [esp+80h+var_64]
0x90C66D: fstp    st
0x90C66F: fld     [esp+80h+var_64]
0x90C673: fmul    st, st(2)
0x90C675: fld     [esp+80h+var_68]
0x90C679: fmul    st, st(4)
0x90C67B: faddp   st(1), st
0x90C67D: fadd    st, st(1)
0x90C67F: fstp    st(3)
0x90C681: fstp    st
0x90C683: fstp    st
0x90C685: fld     [esp+80h+var_68]
0x90C689: fchs
0x90C68B: fstp    dword ptr [edi]
0x90C68D: fld     [esp+80h+var_64]
0x90C691: jmp     loc_90C730
0x90C696: fld     dword ptr [edx]
0x90C698: fxch    st(1)
0x90C69A: fsub    st, st(1)
0x90C69C: fstp    [esp+80h+var_64]
0x90C6A0: jmp     short loc_90C70C
0x90C6A2: imul    ebx, esi
0x90C6A5: add     ebx, eax
0x90C6A7: inc     esi
0x90C6A8: imul    esi, edx
0x90C6AB: fld     dword ptr [edi+ebx*4+4]
0x90C6AF: fld     st(1)
0x90C6B1: fadd    st, st(3)
0x90C6B3: fcomp   dword ptr ds:0A2F948h
0x90C6B9: lea     ebx, [edi+ebx*4]
0x90C6BC: add     esi, eax
0x90C6BE: mov     eax, [edi+esi*4]
0x90C6C1: lea     edx, [edi+esi*4]
0x90C6C4: mov     edi, [esp+80h+var_60]
0x90C6C8: mov     [esp+80h+var_54], eax
0x90C6CC: fnstsw  ax
0x90C6CE: test    ah, 41h
0x90C6D1: jnz     short loc_90C6FE
0x90C6D3: fld     dword ptr [edx+4]
0x90C6D6: fld     [esp+80h+var_54]
0x90C6DA: fsubr   st, st(1)
0x90C6DC: fstp    [esp+80h+var_64]
0x90C6E0: fsub    st, st(1)
0x90C6E2: fstp    [esp+80h+var_68]
0x90C6E6: fxch    st(2)
0x90C6E8: fsub    dword ptr ds:0A2F948h
0x90C6EE: fmul    [esp+80h+var_64]
0x90C6F2: fld     [esp+80h+var_68]
0x90C6F6: fmul    st, st(2)
0x90C6F8: faddp   st(1), st
0x90C6FA: faddp   st(2), st
0x90C6FC: jmp     short loc_90C722
0x90C6FE: fld     dword ptr [ebx]
0x90C700: fxch    st(1)
0x90C702: fsub    st, st(1)
0x90C704: fstp    [esp+80h+var_64]
0x90C708: fld     [esp+80h+var_54]
0x90C70C: fsub    st, st(1)
0x90C70E: fst     [esp+80h+var_68]
0x90C712: fmul    st, st(2)
0x90C714: fld     [esp+80h+var_64]
0x90C718: fmul    st, st(4)
0x90C71A: faddp   st(1), st
0x90C71C: fadd    st, st(1)
0x90C71E: fstp    st(3)
0x90C720: fstp    st
0x90C722: fstp    st
0x90C724: fld     [esp+80h+var_64]
0x90C728: fchs
0x90C72A: fstp    dword ptr [edi]
0x90C72C: fld     [esp+80h+var_68]
0x90C730: fchs
0x90C732: mov     edx, [esp+80h+var_5C]
0x90C736: fstp    dword ptr [edi+8]
0x90C739: movaps  xmm0, xmmword ptr [ecx+30h]
0x90C73D: movaps  xmm1, xmmword ptr [edi]
0x90C740: fld     dword ptr [esp+80h+var_50+4]
0x90C744: mulps   xmm1, xmm0
0x90C747: fsub    st, st(1)
0x90C749: movaps  xmm0, xmm1
0x90C74C: mulps   xmm0, xmm1
0x90C74F: movaps  xmm2, xmm0
0x90C752: shufps  xmm2, xmm0, 55h ; 'U'
0x90C756: addss   xmm2, xmm0
0x90C75A: movaps  xmm4, xmm0
0x90C75D: shufps  xmm4, xmm0, 0AAh ; 'ª'
0x90C761: movaps  xmm0, xmm4
0x90C764: addss   xmm0, xmm2
0x90C768: movaps  [esp+80h+var_20], xmm0
0x90C76D: rsqrtss xmm2, xmm0
0x90C771: movss   dword ptr [esp+80h+var_20], xmm2
0x90C777: movaps  xmm2, [esp+80h+var_20]
0x90C77C: mulss   xmm0, xmm2
0x90C780: mulss   xmm0, xmm2
0x90C784: mov     [esp+80h+var_34], 40400000h
0x90C78C: movss   xmm4, [esp+80h+var_34]
0x90C792: subss   xmm4, xmm0
0x90C796: mov     [esp+80h+var_38], 3F000000h
0x90C79E: movss   xmm0, [esp+80h+var_38]
0x90C7A4: mulss   xmm0, xmm2
0x90C7A8: mulss   xmm0, xmm4
0x90C7AC: movaps  xmm2, xmm0
0x90C7AF: shufps  xmm2, xmm0, 0
0x90C7B3: mulps   xmm2, xmm1
0x90C7B6: movaps  xmmword ptr [edi], xmm2
0x90C7B9: fmul    dword ptr [ecx+24h]
0x90C7BC: fsub    dword ptr [edx+0Ch]
0x90C7BF: fstp    dword ptr [edi+0Ch]
0x90C7C2: fstp    st
0x90C7C4: mov     edx, [esp+80h+var_5C]
0x90C7C8: mov     eax, [esp+80h+var_58]
0x90C7CC: add     edi, 10h
0x90C7CF: add     edx, 10h
0x90C7D2: dec     eax
0x90C7D3: mov     [esp+80h+var_60], edi
0x90C7D7: mov     [esp+80h+var_5C], edx
0x90C7DB: mov     [esp+80h+var_58], eax
0x90C7DF: jnz     loc_90C5B0
0x90C7E5: mov     ecx, [esp+80h+var_4]
0x90C7E9: call    @__security_check_cookie@4; __security_check_cookie(x)
0x90C7EE: pop     edi
0x90C7EF: pop     esi
0x90C7F0: pop     ebx
0x90C7F1: mov     esp, ebp
0x90C7F3: pop     ebp
0x90C7F4: retn    8
