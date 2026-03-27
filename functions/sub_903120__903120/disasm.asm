0x903120: push    ebp
0x903121: mov     ebp, esp
0x903123: and     esp, 0FFFFFFF0h
0x903126: sub     esp, 18h
0x903129: mov     edx, [ebp+arg_8]
0x90312C: push    esi
0x90312D: push    edi
0x90312E: mov     edi, [ebp+arg_C]
0x903131: mov     eax, [edi+3034h]
0x903137: mov     esi, [edi]
0x903139: push    edi
0x90313A: push    edx
0x90313B: mov     edx, [ebp+arg_4]
0x90313E: mov     [esp+28h+var_14], eax
0x903142: mov     eax, [ebp+arg_0]
0x903145: push    eax
0x903146: push    edx
0x903147: call    sub_902A30
0x90314C: cmp     esi, [edi]
0x90314E: jnb     short loc_903191
0x903150: lea     eax, [esp+20h+var_10]
0x903154: push    eax
0x903155: mov     ecx, esi
0x903157: call    sub_8F7000
0x90315C: movaps  xmm0, xmmword ptr [eax]
0x90315F: movaps  xmm1, xmmword ptr [esi+10h]
0x903163: movaps  xmm2, xmm0
0x903166: shufps  xmm2, xmm0, 0
0x90316A: movaps  xmm0, xmmword ptr [esi]
0x90316D: mulps   xmm2, xmm1
0x903170: addps   xmm0, xmm2
0x903173: movaps  xmmword ptr [esi], xmm0
0x903176: movaps  xmm1, xmmword ptr [esi+10h]
0x90317A: movaps  xmm0, xmmword ptr ds:0A9B570h
0x903181: xorps   xmm1, xmm0
0x903184: movaps  xmmword ptr [esi+10h], xmm1
0x903188: mov     eax, [edi]
0x90318A: add     esi, 30h ; '0'
0x90318D: cmp     esi, eax
0x90318F: jb      short loc_903150
0x903191: fld     dword ptr [edi+3034h]
0x903197: fld     [esp+20h+var_14]
0x90319B: fucompp
0x90319D: fnstsw  ax
0x90319F: test    ah, 44h
0x9031A2: jnp     short loc_9031B6
0x9031A4: movaps  xmm0, xmmword ptr ds:0A9B570h
0x9031AB: movaps  xmm1, xmmword ptr [edi+20h]
0x9031AF: xorps   xmm1, xmm0
0x9031B2: movaps  xmmword ptr [edi+20h], xmm1
0x9031B6: pop     edi
0x9031B7: pop     esi
0x9031B8: mov     esp, ebp
0x9031BA: pop     ebp
0x9031BB: retn    10h
