0x8FCDF0: push    ebp
0x8FCDF1: mov     ebp, esp
0x8FCDF3: and     esp, 0FFFFFFF0h
0x8FCDF6: sub     esp, 18h
0x8FCDF9: mov     edx, [ebp+arg_8]
0x8FCDFC: push    esi
0x8FCDFD: push    edi
0x8FCDFE: mov     edi, [ebp+arg_C]
0x8FCE01: mov     eax, [edi+3034h]
0x8FCE07: mov     esi, [edi]
0x8FCE09: push    edi
0x8FCE0A: push    edx
0x8FCE0B: mov     edx, [ebp+arg_4]
0x8FCE0E: mov     [esp+28h+var_14], eax
0x8FCE12: mov     eax, [ebp+arg_0]
0x8FCE15: push    eax
0x8FCE16: push    edx
0x8FCE17: call    sub_8FC220
0x8FCE1C: cmp     esi, [edi]
0x8FCE1E: jnb     short loc_8FCE61
0x8FCE20: lea     eax, [esp+20h+var_10]
0x8FCE24: push    eax
0x8FCE25: mov     ecx, esi
0x8FCE27: call    sub_8F7000
0x8FCE2C: movaps  xmm0, xmmword ptr [eax]
0x8FCE2F: movaps  xmm1, xmmword ptr [esi+10h]
0x8FCE33: movaps  xmm2, xmm0
0x8FCE36: shufps  xmm2, xmm0, 0
0x8FCE3A: movaps  xmm0, xmmword ptr [esi]
0x8FCE3D: mulps   xmm2, xmm1
0x8FCE40: addps   xmm0, xmm2
0x8FCE43: movaps  xmmword ptr [esi], xmm0
0x8FCE46: movaps  xmm1, xmmword ptr [esi+10h]
0x8FCE4A: movaps  xmm0, xmmword ptr ds:0A9B570h
0x8FCE51: xorps   xmm1, xmm0
0x8FCE54: movaps  xmmword ptr [esi+10h], xmm1
0x8FCE58: mov     eax, [edi]
0x8FCE5A: add     esi, 30h ; '0'
0x8FCE5D: cmp     esi, eax
0x8FCE5F: jb      short loc_8FCE20
0x8FCE61: fld     dword ptr [edi+3034h]
0x8FCE67: fld     [esp+20h+var_14]
0x8FCE6B: fucompp
0x8FCE6D: fnstsw  ax
0x8FCE6F: test    ah, 44h
0x8FCE72: jnp     short loc_8FCE86
0x8FCE74: movaps  xmm0, xmmword ptr ds:0A9B570h
0x8FCE7B: movaps  xmm1, xmmword ptr [edi+20h]
0x8FCE7F: xorps   xmm1, xmm0
0x8FCE82: movaps  xmmword ptr [edi+20h], xmm1
0x8FCE86: pop     edi
0x8FCE87: pop     esi
0x8FCE88: mov     esp, ebp
0x8FCE8A: pop     ebp
0x8FCE8B: retn    10h
