0x905BD0: push    ebp
0x905BD1: mov     ebp, esp
0x905BD3: and     esp, 0FFFFFFF0h
0x905BD6: sub     esp, 18h
0x905BD9: mov     edx, [ebp+arg_8]
0x905BDC: push    esi
0x905BDD: push    edi
0x905BDE: mov     edi, [ebp+arg_C]
0x905BE1: mov     eax, [edi+3034h]
0x905BE7: mov     esi, [edi]
0x905BE9: push    edi
0x905BEA: push    edx
0x905BEB: mov     edx, [ebp+arg_4]
0x905BEE: mov     [esp+28h+var_14], eax
0x905BF2: mov     eax, [ebp+arg_0]
0x905BF5: push    eax
0x905BF6: push    edx
0x905BF7: call    sub_904EB0
0x905BFC: cmp     esi, [edi]
0x905BFE: jnb     short loc_905C41
0x905C00: lea     eax, [esp+20h+var_10]
0x905C04: push    eax
0x905C05: mov     ecx, esi
0x905C07: call    sub_8F7000
0x905C0C: movaps  xmm0, xmmword ptr [eax]
0x905C0F: movaps  xmm1, xmmword ptr [esi+10h]
0x905C13: movaps  xmm2, xmm0
0x905C16: shufps  xmm2, xmm0, 0
0x905C1A: movaps  xmm0, xmmword ptr [esi]
0x905C1D: mulps   xmm2, xmm1
0x905C20: addps   xmm0, xmm2
0x905C23: movaps  xmmword ptr [esi], xmm0
0x905C26: movaps  xmm1, xmmword ptr [esi+10h]
0x905C2A: movaps  xmm0, xmmword ptr ds:0A9B570h
0x905C31: xorps   xmm1, xmm0
0x905C34: movaps  xmmword ptr [esi+10h], xmm1
0x905C38: mov     eax, [edi]
0x905C3A: add     esi, 30h ; '0'
0x905C3D: cmp     esi, eax
0x905C3F: jb      short loc_905C00
0x905C41: fld     dword ptr [edi+3034h]
0x905C47: fld     [esp+20h+var_14]
0x905C4B: fucompp
0x905C4D: fnstsw  ax
0x905C4F: test    ah, 44h
0x905C52: jnp     short loc_905C66
0x905C54: movaps  xmm0, xmmword ptr ds:0A9B570h
0x905C5B: movaps  xmm1, xmmword ptr [edi+20h]
0x905C5F: xorps   xmm1, xmm0
0x905C62: movaps  xmmword ptr [edi+20h], xmm1
0x905C66: pop     edi
0x905C67: pop     esi
0x905C68: mov     esp, ebp
0x905C6A: pop     ebp
0x905C6B: retn    10h
