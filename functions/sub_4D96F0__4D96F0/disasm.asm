0x4D96F0: sub     esp, 44h
0x4D96F3: mov     eax, ds:0B30AACh
0x4D96F8: xor     eax, esp
0x4D96FA: mov     [esp+44h+var_4], eax
0x4D96FE: push    ebx
0x4D96FF: mov     ebx, [esp+48h+a1]
0x4D9703: push    esi
0x4D9704: mov     esi, ecx
0x4D9706: cmp     dword ptr [esi+1Ch], 0
0x4D970A: push    edi
0x4D970B: mov     edi, [esp+50h+a2]
0x4D970F: jz      short loc_4D9755
0x4D9711: mov     eax, [esi]
0x4D9713: mov     edx, [eax+170h]
0x4D9719: call    edx
0x4D971B: cmp     byte ptr [eax+4], 24h ; '$'
0x4D971F: jnz     short loc_4D9755
0x4D9721: mov     eax, [esi]
0x4D9723: mov     edx, [eax+170h]
0x4D9729: mov     ecx, esi
0x4D972B: call    edx
0x4D972D: test    eax, eax
0x4D972F: jz      short loc_4D9755
0x4D9731: cmp     byte ptr [eax+104h], 4
0x4D9738: jnz     short loc_4D9755
0x4D973A: lea     edx, [esp+50h+var_44]
0x4D973E: mov     eax, edi
0x4D9740: sub     edx, edi
0x4D9742: mov     cl, [eax]
0x4D9744: mov     [edx+eax], cl
0x4D9747: add     eax, 1
0x4D974A: test    cl, cl
0x4D974C: jnz     short loc_4D9742
0x4D974E: lea     eax, [esp+50h+var_44]
0x4D9752: push    eax
0x4D9753: jmp     short loc_4D9781
0x4D9755: push    edi; a2
0x4D9756: push    ebx; a1
0x4D9757: call    NiObjectNET_LookupObjectByName
0x4D975C: add     esp, 8
0x4D975F: test    eax, eax
0x4D9761: jnz     short loc_4D978F
0x4D9763: lea     edx, [esp+50h+var_44]
0x4D9767: mov     eax, edi
0x4D9769: sub     edx, edi
0x4D976B: jmp     short loc_4D9770
0x4D976D: align 10h
0x4D9770: mov     cl, [eax]
0x4D9772: mov     [edx+eax], cl
0x4D9775: add     eax, 1
0x4D9778: test    cl, cl
0x4D977A: jnz     short loc_4D9770
0x4D977C: lea     ecx, [esp+50h+var_44]
0x4D9780: push    ecx; a2
0x4D9781: push    ebx; a1
0x4D9782: mov     [esp+58h+var_40], 32h ; '2'
0x4D9787: call    NiObjectNET_LookupObjectByName
0x4D978C: add     esp, 8
0x4D978F: mov     ecx, [esp+50h+var_4]
0x4D9793: pop     edi
0x4D9794: pop     esi
0x4D9795: pop     ebx
0x4D9796: xor     ecx, esp
0x4D9798: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4D979D: add     esp, 44h
0x4D97A0: retn    8
