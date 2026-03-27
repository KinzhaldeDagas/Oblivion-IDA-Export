0x8FB980: push    ebp
0x8FB981: mov     ebp, esp
0x8FB983: and     esp, 0FFFFFFF0h
0x8FB986: sub     esp, 94h
0x8FB98C: mov     edx, ds:0BA9DE4h
0x8FB992: push    ebx
0x8FB993: mov     [esp+98h+var_88], ecx
0x8FB997: mov     ecx, large fs:2Ch
0x8FB99E: mov     eax, [ecx+edx*4]
0x8FB9A1: push    esi
0x8FB9A2: mov     esi, [eax+1A4h]
0x8FB9A8: push    edi
0x8FB9A9: cmp     esi, [eax+1A8h]
0x8FB9AF: jnb     short loc_8FB9D5
0x8FB9B1: mov     esi, eax
0x8FB9B3: mov     ecx, [esi+1A4h]
0x8FB9B9: mov     dword ptr [ecx], offset aTtspheretri; "TtSphereTri"
0x8FB9BF: rdtsc
0x8FB9C1: mov     [esp+0A0h+var_84], eax
0x8FB9C5: mov     eax, [esp+0A0h+var_84]
0x8FB9C9: mov     [ecx+4], eax
0x8FB9CC: add     ecx, 0Ch
0x8FB9CF: mov     [esi+1A4h], ecx
0x8FB9D5: mov     eax, [ebp+arg_0]
0x8FB9D8: mov     edx, [ebp+arg_4]
0x8FB9DB: mov     esi, [eax+8]
0x8FB9DE: mov     ebx, [eax]
0x8FB9E0: mov     edi, [edx]
0x8FB9E2: mov     [esp+0A0h+var_60], eax
0x8FB9E6: mov     eax, [edx+8]
0x8FB9E9: mov     [esp+0A0h+var_5C], edx
0x8FB9ED: movaps  xmm1, xmmword ptr [eax]
0x8FB9F0: movaps  xmm2, xmmword ptr [eax+10h]
0x8FB9F4: movaps  xmm3, xmmword ptr [eax+20h]
0x8FB9F8: movaps  xmm4, xmmword ptr [eax+30h]
0x8FB9FC: lea     edx, [edi+10h]
0x8FB9FF: lea     eax, [esp+0A0h+var_30]
0x8FBA03: add     esi, 30h ; '0'
0x8FBA06: sub     eax, edx
0x8FBA08: mov     ecx, 3
0x8FBA0D: lea     ecx, [ecx+0]
0x8FBA10: movaps  xmm0, xmmword ptr [edx]
0x8FBA13: movaps  xmm5, xmm0
0x8FBA16: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x8FBA1A: movaps  xmm6, xmm3
0x8FBA1D: mulps   xmm6, xmm5
0x8FBA20: movaps  xmm5, xmm0
0x8FBA23: shufps  xmm5, xmm0, 55h ; 'U'
0x8FBA27: movaps  xmm7, xmm2
0x8FBA2A: mulps   xmm7, xmm5
0x8FBA2D: movaps  xmm5, xmm0
0x8FBA30: shufps  xmm5, xmm0, 0
0x8FBA34: movaps  xmm0, xmm1
0x8FBA37: mulps   xmm0, xmm5
0x8FBA3A: addps   xmm6, xmm4
0x8FBA3D: addps   xmm0, xmm7
0x8FBA40: addps   xmm0, xmm6
0x8FBA43: movaps  xmmword ptr [eax+edx], xmm0
0x8FBA47: add     edx, 10h
0x8FBA4A: dec     ecx
0x8FBA4B: jnz     short loc_8FBA10
0x8FBA4D: mov     edx, [esp+0A0h+var_88]
0x8FBA51: lea     ecx, [esp+0A0h+var_50]
0x8FBA55: push    ecx
0x8FBA56: add     edx, 10h
0x8FBA59: push    edx
0x8FBA5A: lea     eax, [esp+0A8h+var_30]
0x8FBA5E: push    eax
0x8FBA5F: push    esi
0x8FBA60: call    sub_8D20C0
0x8FBA65: fld     dword ptr [ebx+0Ch]
0x8FBA68: fadd    dword ptr [edi+0Ch]
0x8FBA6B: mov     ecx, [ebp+arg_8]
0x8FBA6E: mov     [esp+0B0h+var_88], eax
0x8FBA72: add     esp, 10h
0x8FBA75: fld     st
0x8FBA77: fadd    dword ptr [ecx+8]
0x8FBA7A: fcomp   [esp+0A0h+var_40]
0x8FBA7E: fnstsw  ax
0x8FBA80: test    ah, 41h
0x8FBA83: jnz     short loc_8FBAD0
0x8FBA85: fld     dword ptr [edi+0Ch]
0x8FBA88: movaps  xmm1, [esp+0A0h+var_50]
0x8FBA8D: fsub    [esp+0A0h+var_40]
0x8FBA91: mov     ecx, [ebp+arg_C]
0x8FBA94: mov     edx, [ecx]
0x8FBA96: lea     eax, [esp+0A0h+var_80]
0x8FBA9A: fstp    [esp+0A0h+var_88]
0x8FBA9E: movss   xmm0, [esp+0A0h+var_88]
0x8FBAA4: fld     [esp+0A0h+var_40]
0x8FBAA8: movaps  xmm2, xmm0
0x8FBAAB: shufps  xmm2, xmm0, 0
0x8FBAAF: fsub    st, st(1)
0x8FBAB1: movaps  xmm0, xmmword ptr [esi]
0x8FBAB4: movaps  [esp+0A0h+var_70], xmm1
0x8FBAB9: fstp    dword ptr [esp+0A0h+var_70+0Ch]
0x8FBABD: mulps   xmm2, xmm1
0x8FBAC0: addps   xmm0, xmm2
0x8FBAC3: push    eax
0x8FBAC4: fstp    st
0x8FBAC6: movaps  [esp+0A4h+var_80], xmm0
0x8FBACB: call    dword ptr [edx+4]
0x8FBACE: jmp     short loc_8FBAD2
0x8FBAD0: fstp    st
0x8FBAD2: mov     ecx, large fs:2Ch
0x8FBAD9: mov     edx, ds:0BA9DE4h
0x8FBADF: mov     eax, [ecx+edx*4]
0x8FBAE2: mov     esi, [eax+1A4h]
0x8FBAE8: cmp     esi, [eax+1A8h]
0x8FBAEE: jnb     short loc_8FBB14
0x8FBAF0: mov     esi, eax
0x8FBAF2: mov     ecx, [esi+1A4h]
0x8FBAF8: mov     dword ptr [ecx], offset aEt; "Et"
0x8FBAFE: rdtsc
0x8FBB00: mov     [esp+0A0h+var_88], eax
0x8FBB04: mov     edx, [esp+0A0h+var_88]
0x8FBB08: mov     [ecx+4], edx
0x8FBB0B: add     ecx, 0Ch
0x8FBB0E: mov     [esi+1A4h], ecx
0x8FBB14: pop     edi
0x8FBB15: pop     esi
0x8FBB16: pop     ebx
0x8FBB17: mov     esp, ebp
0x8FBB19: pop     ebp
0x8FBB1A: retn    10h
