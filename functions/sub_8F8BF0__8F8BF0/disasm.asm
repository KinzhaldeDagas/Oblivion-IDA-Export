0x8F8BF0: push    ebp
0x8F8BF1: mov     ebp, esp
0x8F8BF3: and     esp, 0FFFFFFF0h
0x8F8BF6: sub     esp, 18h
0x8F8BF9: mov     edx, [ebp+arg_8]
0x8F8BFC: push    esi
0x8F8BFD: push    edi
0x8F8BFE: mov     edi, [ebp+arg_C]
0x8F8C01: mov     eax, [edi+3034h]
0x8F8C07: mov     esi, [edi]
0x8F8C09: push    edi
0x8F8C0A: push    edx
0x8F8C0B: mov     edx, [ebp+arg_4]
0x8F8C0E: mov     [esp+28h+var_14], eax
0x8F8C12: mov     eax, [ebp+arg_0]
0x8F8C15: push    eax
0x8F8C16: push    edx
0x8F8C17: call    sub_8F80F0
0x8F8C1C: cmp     esi, [edi]
0x8F8C1E: jnb     short loc_8F8C61
0x8F8C20: lea     eax, [esp+20h+var_10]
0x8F8C24: push    eax
0x8F8C25: mov     ecx, esi
0x8F8C27: call    sub_8F7000
0x8F8C2C: movaps  xmm0, xmmword ptr [eax]
0x8F8C2F: movaps  xmm1, xmmword ptr [esi+10h]
0x8F8C33: movaps  xmm2, xmm0
0x8F8C36: shufps  xmm2, xmm0, 0
0x8F8C3A: movaps  xmm0, xmmword ptr [esi]
0x8F8C3D: mulps   xmm2, xmm1
0x8F8C40: addps   xmm0, xmm2
0x8F8C43: movaps  xmmword ptr [esi], xmm0
0x8F8C46: movaps  xmm1, xmmword ptr [esi+10h]
0x8F8C4A: movaps  xmm0, xmmword ptr ds:0A9B570h
0x8F8C51: xorps   xmm1, xmm0
0x8F8C54: movaps  xmmword ptr [esi+10h], xmm1
0x8F8C58: mov     eax, [edi]
0x8F8C5A: add     esi, 30h ; '0'
0x8F8C5D: cmp     esi, eax
0x8F8C5F: jb      short loc_8F8C20
0x8F8C61: fld     dword ptr [edi+3034h]
0x8F8C67: fld     [esp+20h+var_14]
0x8F8C6B: fucompp
0x8F8C6D: fnstsw  ax
0x8F8C6F: test    ah, 44h
0x8F8C72: jnp     short loc_8F8C86
0x8F8C74: movaps  xmm0, xmmword ptr ds:0A9B570h
0x8F8C7B: movaps  xmm1, xmmword ptr [edi+20h]
0x8F8C7F: xorps   xmm1, xmm0
0x8F8C82: movaps  xmmword ptr [edi+20h], xmm1
0x8F8C86: pop     edi
0x8F8C87: pop     esi
0x8F8C88: mov     esp, ebp
0x8F8C8A: pop     ebp
0x8F8C8B: retn    10h
