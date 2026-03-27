0x8FB5B0: push    ebp
0x8FB5B1: mov     ebp, esp
0x8FB5B3: and     esp, 0FFFFFFF0h
0x8FB5B6: sub     esp, 18h
0x8FB5B9: mov     edx, [ebp+arg_8]
0x8FB5BC: push    esi
0x8FB5BD: push    edi
0x8FB5BE: mov     edi, [ebp+arg_C]
0x8FB5C1: mov     eax, [edi+3034h]
0x8FB5C7: mov     esi, [edi]
0x8FB5C9: push    edi
0x8FB5CA: push    edx
0x8FB5CB: mov     edx, [ebp+arg_4]
0x8FB5CE: mov     [esp+28h+var_14], eax
0x8FB5D2: mov     eax, [ebp+arg_0]
0x8FB5D5: push    eax
0x8FB5D6: push    edx
0x8FB5D7: call    sub_8FAA30
0x8FB5DC: cmp     esi, [edi]
0x8FB5DE: jnb     short loc_8FB621
0x8FB5E0: lea     eax, [esp+20h+var_10]
0x8FB5E4: push    eax
0x8FB5E5: mov     ecx, esi
0x8FB5E7: call    sub_8F7000
0x8FB5EC: movaps  xmm0, xmmword ptr [eax]
0x8FB5EF: movaps  xmm1, xmmword ptr [esi+10h]
0x8FB5F3: movaps  xmm2, xmm0
0x8FB5F6: shufps  xmm2, xmm0, 0
0x8FB5FA: movaps  xmm0, xmmword ptr [esi]
0x8FB5FD: mulps   xmm2, xmm1
0x8FB600: addps   xmm0, xmm2
0x8FB603: movaps  xmmword ptr [esi], xmm0
0x8FB606: movaps  xmm1, xmmword ptr [esi+10h]
0x8FB60A: movaps  xmm0, xmmword ptr ds:0A9B570h
0x8FB611: xorps   xmm1, xmm0
0x8FB614: movaps  xmmword ptr [esi+10h], xmm1
0x8FB618: mov     eax, [edi]
0x8FB61A: add     esi, 30h ; '0'
0x8FB61D: cmp     esi, eax
0x8FB61F: jb      short loc_8FB5E0
0x8FB621: fld     dword ptr [edi+3034h]
0x8FB627: fld     [esp+20h+var_14]
0x8FB62B: fucompp
0x8FB62D: fnstsw  ax
0x8FB62F: test    ah, 44h
0x8FB632: jnp     short loc_8FB646
0x8FB634: movaps  xmm0, xmmword ptr ds:0A9B570h
0x8FB63B: movaps  xmm1, xmmword ptr [edi+20h]
0x8FB63F: xorps   xmm1, xmm0
0x8FB642: movaps  xmmword ptr [edi+20h], xmm1
0x8FB646: pop     edi
0x8FB647: pop     esi
0x8FB648: mov     esp, ebp
0x8FB64A: pop     ebp
0x8FB64B: retn    10h
