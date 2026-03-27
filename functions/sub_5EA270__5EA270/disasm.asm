0x5EA270: push    ebp
0x5EA271: mov     ebp, esp
0x5EA273: and     esp, 0FFFFFFF0h
0x5EA276: sub     esp, 20h
0x5EA279: mov     eax, ds:0B30AACh
0x5EA27E: xor     eax, esp
0x5EA280: mov     [esp+20h+var_4], eax
0x5EA284: mov     eax, ecx
0x5EA286: movss   xmm1, dword ptr [eax+44h]
0x5EA28B: movaps  xmm2, xmmword ptr [eax]
0x5EA28E: mov     ecx, [ebp+arg_0]
0x5EA291: xorps   xmm0, xmm0
0x5EA294: movss   xmm0, xmm1
0x5EA298: movaps  xmm1, xmmword ptr ds:0A6DFE0h
0x5EA29F: shufps  xmm0, xmm0, 0
0x5EA2A3: subps   xmm1, xmm0
0x5EA2A6: mulps   xmm1, xmm2
0x5EA2A9: movaps  xmm2, xmmword ptr [eax+10h]
0x5EA2AD: lea     eax, [esp+20h+var_20]
0x5EA2B0: push    eax
0x5EA2B1: mulps   xmm2, xmm0
0x5EA2B4: addps   xmm1, xmm2
0x5EA2B7: push    ecx
0x5EA2B8: movaps  [esp+28h+var_20], xmm1
0x5EA2BD: call    sub_43F3E0
0x5EA2C2: mov     ecx, [esp+28h+var_4]
0x5EA2C6: add     esp, 8
0x5EA2C9: xor     ecx, esp
0x5EA2CB: call    @__security_check_cookie@4; __security_check_cookie(x)
0x5EA2D0: mov     esp, ebp
0x5EA2D2: pop     ebp
0x5EA2D3: retn    4
