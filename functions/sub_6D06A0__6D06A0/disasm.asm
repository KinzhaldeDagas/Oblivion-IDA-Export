0x6D06A0: sub     esp, 8
0x6D06A3: push    esi
0x6D06A4: mov     esi, ecx
0x6D06A6: mov     al, [esi+8]
0x6D06A9: shr     al, 5
0x6D06AC: test    al, 1
0x6D06AE: jnz     loc_6D0750
0x6D06B4: mov     eax, [esi+50h]
0x6D06B7: test    eax, eax
0x6D06B9: push    ebx
0x6D06BA: jz      short loc_6D06C1
0x6D06BC: mov     ebx, [eax+8]
0x6D06BF: jmp     short loc_6D06C3
0x6D06C1: xor     ebx, ebx
0x6D06C3: fld     dword ptr ds:0A7DEB4h
0x6D06C9: push    edi
0x6D06CA: fstp    dword ptr [esi+14h]
0x6D06CD: xor     edi, edi
0x6D06CF: test    ebx, ebx
0x6D06D1: fld     dword ptr ds:0A7DEB4h
0x6D06D7: fchs
0x6D06D9: fstp    dword ptr [esi+18h]
0x6D06DC: jbe     short loc_6D074E
0x6D06DE: mov     edi, edi
0x6D06E0: mov     edx, [esi]
0x6D06E2: mov     eax, [edx+80h]
0x6D06E8: push    edi
0x6D06E9: mov     ecx, esi
0x6D06EB: call    eax
0x6D06ED: test    eax, eax
0x6D06EF: jz      short loc_6D0747
0x6D06F1: fld     dword ptr ds:0A7DEB4h
0x6D06F7: mov     edx, [eax]
0x6D06F9: mov     edx, [edx+80h]
0x6D06FF: fld     st
0x6D0701: lea     ecx, [esp+14h+var_4]
0x6D0705: fchs
0x6D0707: push    ecx
0x6D0708: fstp    [esp+18h+var_4]
0x6D070C: lea     ecx, [esp+18h+var_8]
0x6D0710: push    ecx
0x6D0711: fstp    [esp+1Ch+var_8]
0x6D0715: mov     ecx, eax
0x6D0717: call    edx
0x6D0719: fld     [esp+14h+var_8]
0x6D071D: fld     dword ptr [esi+14h]
0x6D0720: fcomp   st(1)
0x6D0722: fnstsw  ax
0x6D0724: test    ah, 41h
0x6D0727: jnz     short loc_6D072E
0x6D0729: fstp    dword ptr [esi+14h]
0x6D072C: jmp     short loc_6D0730
0x6D072E: fstp    st
0x6D0730: fld     [esp+14h+var_4]
0x6D0734: fld     dword ptr [esi+18h]
0x6D0737: fcomp   st(1)
0x6D0739: fnstsw  ax
0x6D073B: test    ah, 5
0x6D073E: jp      short loc_6D0745
0x6D0740: fstp    dword ptr [esi+18h]
0x6D0743: jmp     short loc_6D0747
0x6D0745: fstp    st
0x6D0747: add     edi, 1
0x6D074A: cmp     edi, ebx
0x6D074C: jb      short loc_6D06E0
0x6D074E: pop     edi
0x6D074F: pop     ebx
0x6D0750: pop     esi
0x6D0751: add     esp, 8
0x6D0754: retn
