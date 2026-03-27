0x88D900: push    ebp
0x88D901: mov     ebp, esp
0x88D903: and     esp, 0FFFFFFF0h
0x88D906: sub     esp, 0D4h
0x88D90C: mov     eax, ds:0B30AACh
0x88D911: xor     eax, esp
0x88D913: mov     [esp+0D4h+var_4], eax
0x88D91A: cmp     byte ptr ds:0BA7A04h, 0
0x88D921: push    ebx
0x88D922: push    esi
0x88D923: push    edi
0x88D924: mov     edi, [ebp+arg_0]
0x88D927: mov     esi, ecx
0x88D929: mov     [esp+0E0h+var_C4], edi
0x88D92D: jnz     loc_88DB13
0x88D933: mov     cl, [ebp+arg_4]
0x88D936: xor     eax, eax
0x88D938: test    cl, 1
0x88D93B: jz      short loc_88D944
0x88D93D: mov     eax, 3
0x88D942: jmp     short loc_88D94E
0x88D944: test    cl, 2
0x88D947: jz      short loc_88D94E
0x88D949: mov     eax, 6
0x88D94E: test    cl, 8
0x88D951: jz      short loc_88D958
0x88D953: add     eax, 2
0x88D956: jmp     short loc_88D960
0x88D958: test    cl, 4
0x88D95B: jz      short loc_88D960
0x88D95D: add     eax, 1
0x88D960: fld     dword ptr ds:0B2E4DCh[eax*4]
0x88D967: push    ecx
0x88D968: fadd    dword ptr [edi+0Ch]
0x88D96B: lea     eax, [esp+0E4h+var_C0]
0x88D96F: lea     ecx, [esp+0E4h+var_B0]
0x88D973: fstp    [esp+0E4h+var_C8]
0x88D977: fldz
0x88D979: fst     [esp+0E4h+var_C0]
0x88D97D: fst     [esp+0E4h+var_BC]
0x88D981: fld1
0x88D983: fstp    [esp+0E4h+var_B8]
0x88D987: fstp    [esp+0E4h+var_B4]
0x88D98B: fld     [esp+0E4h+var_C8]
0x88D98F: fchs
0x88D991: fstp    [esp+0E4h+var_E4]; float
0x88D994: push    eax; int
0x88D995: call    sub_8B1B00
0x88D99A: movaps  xmm0, xmmword ptr [edi]
0x88D99D: lea     ecx, [esp+0E0h+var_B0]
0x88D9A1: push    ecx
0x88D9A2: lea     ecx, [esp+0E4h+var_50]
0x88D9A9: movaps  [esp+0E4h+var_20], xmm0
0x88D9B1: call    sub_8B1DD0
0x88D9B6: lea     edx, [esi+40h]
0x88D9B9: push    edx
0x88D9BA: lea     eax, [esp+0E4h+var_50]
0x88D9C1: push    eax
0x88D9C2: lea     ecx, [esp+0E8h+var_60]
0x88D9C9: call    sub_88FCC0
0x88D9CE: movaps  xmm0, [esp+0E0h+var_60]
0x88D9D6: movaps  xmm1, xmmword ptr [esi+20h]
0x88D9DA: addps   xmm1, xmm0
0x88D9DD: movaps  [esp+0E0h+var_80], xmm1
0x88D9E2: movaps  xmm1, xmmword ptr [esi+30h]
0x88D9E6: lea     ecx, [esp+0E0h+var_A0]
0x88D9EA: push    ecx
0x88D9EB: addps   xmm1, xmm0
0x88D9EE: mov     ecx, esi
0x88D9F0: movaps  [esp+0E4h+var_70], xmm1
0x88D9F5: call    sub_88D820
0x88D9FA: movaps  xmm0, [esp+0E0h+var_80]
0x88D9FF: movaps  xmm1, [esp+0E0h+var_A0]
0x88DA04: subps   xmm1, xmm0
0x88DA07: movaps  xmm0, xmmword ptr ds:0A372D0h
0x88DA0E: andps   xmm1, xmm0
0x88DA11: movss   xmm0, dword ptr ds:0A37080h
0x88DA19: shufps  xmm0, xmm0, 0
0x88DA1D: cmpltps xmm0, xmm1
0x88DA21: movmskps edx, xmm0
0x88DA24: test    dl, 7
0x88DA27: jz      loc_88DB13
0x88DA2D: mov     edi, [esi+8]
0x88DA30: test    edi, edi
0x88DA32: jz      short loc_88DA4E
0x88DA34: mov     ecx, esi
0x88DA36: call    sub_89F570
0x88DA3B: lea     eax, [esp+0E0h+var_80]
0x88DA3F: push    eax
0x88DA40: mov     ecx, edi
0x88DA42: call    sub_8CD9D0
0x88DA47: mov     ecx, esi
0x88DA49: call    sub_89F570
0x88DA4E: mov     edi, [esi+8]
0x88DA51: test    edi, edi
0x88DA53: jz      loc_88DB13
0x88DA59: fld     [esp+0E0h+var_C8]
0x88DA5D: mov     ebx, [edi+0ACh]
0x88DA63: push    ecx
0x88DA64: mov     ecx, edi
0x88DA66: fstp    [esp+0E4h+var_E4]; float
0x88DA69: call    sub_88D6C0
0x88DA6E: cmp     ebx, [edi+0ACh]
0x88DA74: jnz     short loc_88DAE4
0x88DA76: cmp     byte ptr [esi+69h], 0
0x88DA7A: fld     dword ptr [esi+60h]
0x88DA7D: fstp    [esp+0E0h+var_C8]
0x88DA81: jz      short loc_88DA91
0x88DA83: fld     [esp+0E0h+var_C8]
0x88DA87: fmul    qword ptr ds:0A2FAA0h
0x88DA8D: fstp    [esp+0E0h+var_C8]
0x88DA91: fldz
0x88DA93: fld     [esp+0E0h+var_C8]
0x88DA97: fcom    st(1)
0x88DA99: fnstsw  ax
0x88DA9B: fstp    st(1)
0x88DA9D: test    ah, 41h
0x88DAA0: jnz     short loc_88DAE2
0x88DAA2: mov     ecx, [esp+0E0h+var_C4]
0x88DAA6: movaps  xmm1, xmmword ptr [esi+50h]
0x88DAAA: movaps  xmm0, xmmword ptr [ecx]
0x88DAAD: subps   xmm0, xmm1
0x88DAB0: mulps   xmm0, xmm0
0x88DAB3: movaps  xmm1, xmm0
0x88DAB6: shufps  xmm1, xmm0, 55h ; 'U'
0x88DABA: movaps  xmm2, xmm0
0x88DABD: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x88DAC1: addss   xmm1, xmm0
0x88DAC5: addss   xmm2, xmm1
0x88DAC9: sqrtss  xmm2, xmm2
0x88DACD: movss   dword ptr [esp+0E0h+var_A0], xmm2
0x88DAD3: fld     dword ptr [esp+0E0h+var_A0]
0x88DAD7: fcompp
0x88DAD9: fnstsw  ax
0x88DADB: test    ah, 41h
0x88DADE: jnz     short loc_88DB13
0x88DAE0: jmp     short loc_88DAE4
0x88DAE2: fstp    st
0x88DAE4: cmp     byte ptr [esi+68h], 0
0x88DAE8: mov     edx, [esp+0E0h+var_C4]
0x88DAEC: movaps  xmm0, xmmword ptr [edx]
0x88DAEF: movaps  xmmword ptr [esi+50h], xmm0
0x88DAF3: jnz     short loc_88DB13
0x88DAF5: mov     eax, [esi+8]
0x88DAF8: cmp     byte ptr [eax+0FDh], 0
0x88DAFF: jnz     short loc_88DB13
0x88DB01: mov     edx, [edi]
0x88DB03: mov     eax, [edx+30h]
0x88DB06: mov     ecx, edi
0x88DB08: call    eax
0x88DB0A: mov     edx, [edi]
0x88DB0C: mov     eax, [edx+38h]
0x88DB0F: mov     ecx, edi
0x88DB11: call    eax
0x88DB13: mov     ecx, [esp+0E0h+var_4]
0x88DB1A: pop     edi
0x88DB1B: pop     esi
0x88DB1C: pop     ebx
0x88DB1D: xor     ecx, esp
0x88DB1F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x88DB24: mov     esp, ebp
0x88DB26: pop     ebp
0x88DB27: retn    8
