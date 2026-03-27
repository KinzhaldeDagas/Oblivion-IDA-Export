0x8C0B70: push    ebp
0x8C0B71: mov     ebp, esp
0x8C0B73: and     esp, 0FFFFFFF0h
0x8C0B76: push    0FFFFFFFFh
0x8C0B78: push    offset SEH_8C2D80
0x8C0B7D: mov     eax, large fs:0
0x8C0B83: push    eax
0x8C0B84: sub     esp, 8
0x8C0B87: push    ebx
0x8C0B88: push    esi
0x8C0B89: push    edi
0x8C0B8A: mov     eax, ds:0B30AACh
0x8C0B8F: xor     eax, esp
0x8C0B91: push    eax
0x8C0B92: lea     eax, [esp+24h+var_C]
0x8C0B96: mov     large fs:0, eax
0x8C0B9C: mov     ebx, [ebp+arg_4]
0x8C0B9F: mov     edi, ecx
0x8C0BA1: mov     ecx, [ebp+arg_0]
0x8C0BA4: test    ecx, ecx
0x8C0BA6: mov     esi, [edi+4]
0x8C0BA9: jnz     short loc_8C0BE2
0x8C0BAB: mov     ecx, ds:0BA7D98h
0x8C0BB1: mov     eax, [ecx]
0x8C0BB3: mov     edx, [eax+10h]
0x8C0BB6: push    29h ; ')'
0x8C0BB8: push    90h
0x8C0BBD: call    edx
0x8C0BBF: mov     word ptr [eax+4], 90h
0x8C0BC5: mov     [esp+24h+var_14], eax
0x8C0BC9: mov     ecx, eax
0x8C0BCB: mov     [esp+24h+var_4], 0
0x8C0BD3: call    sub_911000
0x8C0BD8: mov     [esp+24h+var_4], 0FFFFFFFFh
0x8C0BE0: mov     ecx, eax
0x8C0BE2: movaps  xmm0, xmmword ptr [esi+10h]
0x8C0BE6: movaps  xmmword ptr [ecx+10h], xmm0
0x8C0BEA: movaps  xmm0, xmmword ptr [esi+20h]
0x8C0BEE: movaps  xmmword ptr [ecx+20h], xmm0
0x8C0BF2: movaps  xmm0, xmmword ptr [esi+30h]
0x8C0BF6: movaps  xmmword ptr [ecx+30h], xmm0
0x8C0BFA: movaps  xmm0, xmmword ptr [esi+40h]
0x8C0BFE: movaps  xmmword ptr [ecx+40h], xmm0
0x8C0C02: movaps  xmm0, xmmword ptr [esi+50h]
0x8C0C06: movaps  xmmword ptr [ecx+50h], xmm0
0x8C0C0A: movaps  xmm0, xmmword ptr [esi+60h]
0x8C0C0E: movaps  xmmword ptr [ecx+60h], xmm0
0x8C0C12: fld     dword ptr [esi+70h]
0x8C0C15: fstp    dword ptr [ecx+70h]
0x8C0C18: fld     dword ptr [esi+74h]
0x8C0C1B: fstp    dword ptr [ecx+74h]
0x8C0C1E: fld     dword ptr [esi+78h]
0x8C0C21: fstp    dword ptr [ecx+78h]
0x8C0C24: fld     dword ptr [esi+7Ch]
0x8C0C27: fstp    dword ptr [ecx+7Ch]
0x8C0C2A: fld     dword ptr [esi+80h]
0x8C0C30: fstp    dword ptr [ecx+80h]
0x8C0C36: fld     dword ptr [esi+84h]
0x8C0C3C: fstp    dword ptr [ecx+84h]
0x8C0C42: fld     dword ptr [ebx+10h]
0x8C0C45: fstp    [esp+24h+var_14]
0x8C0C49: fld1
0x8C0C4B: fcomp   [esp+24h+var_14]
0x8C0C4F: fnstsw  ax
0x8C0C51: test    ah, 44h
0x8C0C54: jnp     short loc_8C0C87
0x8C0C56: movss   xmm1, [esp+24h+var_14]
0x8C0C5C: movaps  xmm2, xmmword ptr [ecx+10h]
0x8C0C60: xorps   xmm0, xmm0
0x8C0C63: movss   xmm0, xmm1
0x8C0C67: movaps  xmm1, xmm0
0x8C0C6A: shufps  xmm1, xmm0, 0
0x8C0C6E: mulps   xmm1, xmm2
0x8C0C71: movaps  xmmword ptr [ecx+10h], xmm1
0x8C0C75: movaps  xmm1, xmm0
0x8C0C78: shufps  xmm1, xmm0, 0
0x8C0C7C: movaps  xmm0, xmmword ptr [ecx+40h]
0x8C0C80: mulps   xmm1, xmm0
0x8C0C83: movaps  xmmword ptr [ecx+40h], xmm1
0x8C0C87: push    ebx
0x8C0C88: push    ecx
0x8C0C89: mov     ecx, edi
0x8C0C8B: call    sub_8A07B0
0x8C0C90: mov     ecx, [esp+24h+var_C]
0x8C0C94: mov     large fs:0, ecx
0x8C0C9B: pop     ecx
0x8C0C9C: pop     edi
0x8C0C9D: pop     esi
0x8C0C9E: pop     ebx
0x8C0C9F: mov     esp, ebp
0x8C0CA1: pop     ebp
0x8C0CA2: retn    8
