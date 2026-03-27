0x913D30: push    ebp
0x913D31: mov     ebp, esp
0x913D33: and     esp, 0FFFFFFF0h
0x913D36: push    ecx
0x913D37: push    ebx
0x913D38: mov     ebx, [ebp+arg_0]
0x913D3B: push    esi
0x913D3C: push    edi
0x913D3D: mov     edi, [ebp+arg_4]
0x913D40: push    offset stru_BA8380; lpCriticalSection
0x913D45: mov     esi, ecx
0x913D47: call    dword ptr ds:0A2806Ch
0x913D4D: call    dword ptr ds:0A2808Ch
0x913D53: add     dword ptr ds:0BA83FCh, 1
0x913D5A: mov     ds:0BA83F8h, eax
0x913D5F: mov     eax, [esi+10h]
0x913D62: fld     dword ptr [eax+1Ch]
0x913D65: fstp    dword ptr [edi]
0x913D67: mov     ecx, [esi+10h]
0x913D6A: fld1
0x913D6C: movaps  xmm0, xmmword ptr [ecx+10h]
0x913D70: movaps  xmmword ptr [ebx], xmm0
0x913D73: fcomp   dword ptr [esi+14h]
0x913D76: fnstsw  ax
0x913D78: test    ah, 44h
0x913D7B: jnp     short loc_913DA6
0x913D7D: movss   xmm1, dword ptr [esi+14h]
0x913D82: mov     eax, [esi+10h]
0x913D85: xorps   xmm0, xmm0
0x913D88: movss   xmm0, xmm1
0x913D8C: movaps  xmm1, xmm0
0x913D8F: shufps  xmm1, xmm0, 0
0x913D93: movaps  xmm0, xmmword ptr [eax+10h]
0x913D97: mulps   xmm1, xmm0
0x913D9A: movaps  xmmword ptr [eax+10h], xmm1
0x913D9E: fld     dword ptr [edi]
0x913DA0: fdiv    dword ptr [esi+14h]
0x913DA3: fstp    dword ptr [eax+1Ch]
0x913DA6: pop     edi
0x913DA7: pop     esi
0x913DA8: pop     ebx
0x913DA9: mov     esp, ebp
0x913DAB: pop     ebp
0x913DAC: retn    8
