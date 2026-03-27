0x8D0050: push    ebp
0x8D0051: mov     ebp, esp
0x8D0053: and     esp, 0FFFFFFF0h
0x8D0056: sub     esp, 0C8h
0x8D005C: mov     eax, ds:0B30AACh
0x8D0061: xor     eax, esp
0x8D0063: mov     [esp+0C8h+var_4], eax
0x8D006A: push    esi
0x8D006B: mov     esi, [ebp+arg_0]
0x8D006E: mov     eax, [esi+1F4h]
0x8D0074: mov     edx, eax
0x8D0076: shr     edx, 8
0x8D0079: test    dl, 1
0x8D007C: push    edi
0x8D007D: jnz     short loc_8D00D0
0x8D007F: cmp     byte ptr [ecx+8], 0
0x8D0083: jz      short loc_8D008D
0x8D0085: fldz
0x8D0087: fstp    dword ptr [esi+2E8h]
0x8D008D: mov     ecx, esi
0x8D008F: mov     dword ptr [esi+2A0h], 2
0x8D0099: call    sub_890720
0x8D009E: mov     eax, [esi+1ECh]
0x8D00A4: mov     ecx, [esi+1E8h]
0x8D00AA: push    eax
0x8D00AB: call    sub_8BA170
0x8D00B0: mov     edx, [eax]
0x8D00B2: mov     ecx, eax
0x8D00B4: mov     eax, [edx+18h]
0x8D00B7: push    esi
0x8D00B8: call    eax
0x8D00BA: pop     edi
0x8D00BB: pop     esi
0x8D00BC: mov     ecx, [esp+0C8h+var_4]
0x8D00C3: xor     ecx, esp
0x8D00C5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8D00CA: mov     esp, ebp
0x8D00CC: pop     ebp
0x8D00CD: retn    4
0x8D00D0: movaps  xmm0, xmmword ptr [esi+2C0h]
0x8D00D7: fld1
0x8D00D9: movaps  [esp+0D0h+var_80], xmm0
0x8D00DE: fstp    dword ptr [esp+0D0h+var_90]
0x8D00E2: movaps  xmm0, xmmword ptr [esi+2B0h]
0x8D00E9: movaps  [esp+0D0h+var_70], xmm0
0x8D00EE: movaps  xmm0, xmmword ptr [esi+230h]
0x8D00F5: movaps  [esp+0D0h+var_60], xmm0
0x8D00FA: movaps  xmm0, xmmword ptr [esi+2E0h]
0x8D0101: lea     edi, [esi+2E0h]
0x8D0107: shr     eax, 0Bh
0x8D010A: test    al, 1
0x8D010C: movaps  [esp+0D0h+var_50], xmm0
0x8D0114: movaps  xmm0, xmmword ptr [esi+290h]
0x8D011B: jz      short loc_8D016A
0x8D011D: shufps  xmm0, xmm0, 0AAh ; 'ª'
0x8D0121: movss   dword ptr [esp+0D0h+var_A0], xmm0
0x8D0127: movaps  xmm0, xmmword ptr [esi+290h]
0x8D012E: movss   [esp+0D0h+var_C0], xmm0
0x8D0134: movaps  xmm0, xmmword ptr [esi+290h]
0x8D013B: shufps  xmm0, xmm0, 55h ; 'U'
0x8D013F: movss   [esp+0D0h+var_B0], xmm0
0x8D0145: fld     [esp+0D0h+var_B0]
0x8D0149: fstp    [esp+0D0h+var_40]
0x8D0150: fld     [esp+0D0h+var_C0]
0x8D0154: fstp    [esp+0D0h+var_3C]
0x8D015B: fld     dword ptr [esp+0D0h+var_A0]
0x8D015F: fstp    [esp+0D0h+var_38]
0x8D0166: fldz
0x8D0168: jmp     short loc_8D01A0
0x8D016A: movss   [esp+0D0h+var_C0], xmm0
0x8D0170: movaps  xmm0, xmmword ptr [esi+290h]
0x8D0177: shufps  xmm0, xmm0, 55h ; 'U'
0x8D017B: movss   dword ptr [esp+0D0h+var_A0], xmm0
0x8D0181: fld     dword ptr [esp+0D0h+var_A0]
0x8D0185: fstp    [esp+0D0h+var_40]
0x8D018C: fld     [esp+0D0h+var_C0]
0x8D0190: fstp    [esp+0D0h+var_3C]
0x8D0197: fldz
0x8D0199: fst     [esp+0D0h+var_38]
0x8D01A0: movaps  xmm0, xmmword ptr [esi+280h]
0x8D01A7: fstp    [esp+0D0h+var_34]
0x8D01AE: fld     dword ptr ds:0A34A80h
0x8D01B4: lea     ecx, [esp+0D0h+var_90]
0x8D01B8: push    edi
0x8D01B9: fstp    [esp+0D4h+var_30]
0x8D01C0: push    ecx
0x8D01C1: movaps  [esp+0D8h+var_20], xmm0
0x8D01C9: call    sub_91F430
0x8D01CE: mov     edx, [esi+1F4h]
0x8D01D4: shr     edx, 0Bh
0x8D01D7: add     esp, 8
0x8D01DA: test    dl, 1
0x8D01DD: jnz     short loc_8D024A
0x8D01DF: fld     dword ptr [esp+0D0h+var_50+8]
0x8D01E6: mov     ecx, esi
0x8D01E8: fstp    dword ptr [esi+2E8h]
0x8D01EE: mov     eax, [esi]
0x8D01F0: mov     edx, [eax+58h]
0x8D01F3: call    edx
0x8D01F5: mov     eax, [esi]
0x8D01F7: mov     edx, [eax+58h]
0x8D01FA: mov     ecx, esi
0x8D01FC: call    edx
0x8D01FE: movaps  xmm0, xmmword ptr [eax+20h]
0x8D0202: mov     eax, [esi]
0x8D0204: mov     edx, [eax+58h]
0x8D0207: mov     ecx, esi
0x8D0209: movaps  [esp+0D0h+var_A0], xmm0
0x8D020E: call    edx
0x8D0210: movss   xmm0, dword ptr [esi+328h]
0x8D0218: movss   xmm2, dword ptr [esi+2D8h]
0x8D0220: xorps   xmm1, xmm1
0x8D0223: movss   xmm1, xmm0
0x8D0227: xorps   xmm0, xmm0
0x8D022A: movss   xmm0, xmm2
0x8D022E: movaps  xmm2, xmm1
0x8D0231: shufps  xmm2, xmm1, 0
0x8D0235: mulps   xmm2, [esp+0D0h+var_A0]
0x8D023A: shufps  xmm0, xmm0, 0
0x8D023E: mulps   xmm2, xmm0
0x8D0241: movaps  xmm0, xmmword ptr [edi]
0x8D0244: addps   xmm2, xmm0
0x8D0247: movaps  xmmword ptr [edi], xmm2
0x8D024A: mov     ecx, esi
0x8D024C: call    sub_890970
0x8D0251: mov     eax, [esi+2A0h]
0x8D0257: cmp     eax, 0Bh
0x8D025A: jz      short loc_8D0275
0x8D025C: cmp     eax, 1
0x8D025F: jnz     short loc_8D026E
0x8D0261: mov     eax, [esi+1F4h]
0x8D0267: shr     eax, 0Ah
0x8D026A: test    al, 1
0x8D026C: jz      short loc_8D0275
0x8D026E: mov     ecx, esi
0x8D0270: call    sub_890720
0x8D0275: mov     ecx, [esp+0D0h+var_4]
0x8D027C: pop     edi
0x8D027D: pop     esi
0x8D027E: xor     ecx, esp
0x8D0280: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8D0285: mov     esp, ebp
0x8D0287: pop     ebp
0x8D0288: retn    4
