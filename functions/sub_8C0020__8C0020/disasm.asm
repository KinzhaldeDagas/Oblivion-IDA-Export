0x8C0020: push    ebp
0x8C0021: mov     ebp, esp
0x8C0023: and     esp, 0FFFFFFF0h
0x8C0026: push    0FFFFFFFFh
0x8C0028: push    offset SEH_8C2D80
0x8C002D: mov     eax, large fs:0
0x8C0033: push    eax
0x8C0034: sub     esp, 8
0x8C0037: push    ebx
0x8C0038: push    esi
0x8C0039: push    edi
0x8C003A: mov     eax, ds:0B30AACh
0x8C003F: xor     eax, esp
0x8C0041: push    eax
0x8C0042: lea     eax, [esp+24h+var_C]
0x8C0046: mov     large fs:0, eax
0x8C004C: mov     ebx, [ebp+arg_4]
0x8C004F: mov     edi, ecx
0x8C0051: mov     ecx, [ebp+arg_0]
0x8C0054: test    ecx, ecx
0x8C0056: mov     esi, [edi+4]
0x8C0059: jnz     short loc_8C0092
0x8C005B: mov     ecx, ds:0BA7D98h
0x8C0061: mov     eax, [ecx]
0x8C0063: mov     edx, [eax+10h]
0x8C0066: push    29h ; ')'
0x8C0068: push    0A0h ; ' '
0x8C006D: call    edx
0x8C006F: mov     word ptr [eax+4], 0A0h ; ' '
0x8C0075: mov     [esp+24h+var_14], eax
0x8C0079: mov     ecx, eax
0x8C007B: mov     [esp+24h+var_4], 0
0x8C0083: call    sub_9107C0
0x8C0088: mov     [esp+24h+var_4], 0FFFFFFFFh
0x8C0090: mov     ecx, eax
0x8C0092: movaps  xmm0, xmmword ptr [esi+10h]
0x8C0096: movaps  xmmword ptr [ecx+10h], xmm0
0x8C009A: movaps  xmm0, xmmword ptr [esi+20h]
0x8C009E: movaps  xmmword ptr [ecx+20h], xmm0
0x8C00A2: movaps  xmm0, xmmword ptr [esi+30h]
0x8C00A6: movaps  xmmword ptr [ecx+30h], xmm0
0x8C00AA: movaps  xmm0, xmmword ptr [esi+40h]
0x8C00AE: movaps  xmmword ptr [ecx+40h], xmm0
0x8C00B2: movaps  xmm0, xmmword ptr [esi+50h]
0x8C00B6: movaps  xmmword ptr [ecx+50h], xmm0
0x8C00BA: movaps  xmm0, xmmword ptr [esi+60h]
0x8C00BE: movaps  xmmword ptr [ecx+60h], xmm0
0x8C00C2: movaps  xmm0, xmmword ptr [esi+70h]
0x8C00C6: movaps  xmmword ptr [ecx+70h], xmm0
0x8C00CA: movaps  xmm0, xmmword ptr [esi+80h]
0x8C00D1: movaps  xmmword ptr [ecx+80h], xmm0
0x8C00D8: fld     dword ptr [esi+90h]
0x8C00DE: fstp    dword ptr [ecx+90h]
0x8C00E4: fld     dword ptr [esi+94h]
0x8C00EA: fstp    dword ptr [ecx+94h]
0x8C00F0: fld     dword ptr [esi+98h]
0x8C00F6: fstp    dword ptr [ecx+98h]
0x8C00FC: fld     dword ptr [esi+9Ch]
0x8C0102: fstp    dword ptr [ecx+9Ch]
0x8C0108: fld     dword ptr [ebx+10h]
0x8C010B: fstp    [esp+24h+var_14]
0x8C010F: fld1
0x8C0111: fcomp   [esp+24h+var_14]
0x8C0115: fnstsw  ax
0x8C0117: test    ah, 44h
0x8C011A: jnp     short loc_8C014D
0x8C011C: movss   xmm1, [esp+24h+var_14]
0x8C0122: movaps  xmm2, xmmword ptr [ecx+10h]
0x8C0126: xorps   xmm0, xmm0
0x8C0129: movss   xmm0, xmm1
0x8C012D: movaps  xmm1, xmm0
0x8C0130: shufps  xmm1, xmm0, 0
0x8C0134: mulps   xmm1, xmm2
0x8C0137: movaps  xmmword ptr [ecx+10h], xmm1
0x8C013B: movaps  xmm1, xmm0
0x8C013E: shufps  xmm1, xmm0, 0
0x8C0142: movaps  xmm0, xmmword ptr [ecx+30h]
0x8C0146: mulps   xmm1, xmm0
0x8C0149: movaps  xmmword ptr [ecx+30h], xmm1
0x8C014D: push    ebx
0x8C014E: push    ecx
0x8C014F: mov     ecx, edi
0x8C0151: call    sub_8A07B0
0x8C0156: mov     ecx, [esp+24h+var_C]
0x8C015A: mov     large fs:0, ecx
0x8C0161: pop     ecx
0x8C0162: pop     edi
0x8C0163: pop     esi
0x8C0164: pop     ebx
0x8C0165: mov     esp, ebp
0x8C0167: pop     ebp
0x8C0168: retn    8
