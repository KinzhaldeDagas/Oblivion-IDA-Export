0x8F9CC0: push    ebp
0x8F9CC1: mov     ebp, esp
0x8F9CC3: and     esp, 0FFFFFFF0h
0x8F9CC6: sub     esp, 0D4h
0x8F9CCC: mov     ecx, large fs:2Ch
0x8F9CD3: mov     edx, ds:0BA9DE4h
0x8F9CD9: mov     eax, [ecx+edx*4]
0x8F9CDC: push    ebx
0x8F9CDD: push    esi
0x8F9CDE: mov     esi, [eax+1A4h]
0x8F9CE4: push    edi
0x8F9CE5: cmp     esi, [eax+1A8h]
0x8F9CEB: jnb     short loc_8F9D11
0x8F9CED: mov     esi, eax
0x8F9CEF: mov     ecx, [esi+1A4h]
0x8F9CF5: mov     dword ptr [ecx], offset aTtcapstriangle; "TtCapsTriangle"
0x8F9CFB: rdtsc
0x8F9CFD: mov     [esp+0E0h+var_C8], eax
0x8F9D01: mov     eax, [esp+0E0h+var_C8]
0x8F9D05: mov     [ecx+4], eax
0x8F9D08: add     ecx, 0Ch
0x8F9D0B: mov     [esi+1A4h], ecx
0x8F9D11: mov     esi, [ebp+arg_4]
0x8F9D14: mov     edx, [esi]
0x8F9D16: lea     ecx, [esp+0E0h+var_C4]
0x8F9D1A: push    ecx
0x8F9D1B: add     edx, 10h
0x8F9D1E: push    edx
0x8F9D1F: call    sub_8D1EF0
0x8F9D24: mov     edi, [ebp+arg_0]
0x8F9D27: mov     eax, [edi+8]
0x8F9D2A: mov     ebx, [edi]
0x8F9D2C: movaps  xmm1, xmmword ptr [eax]
0x8F9D2F: movaps  xmm2, xmmword ptr [eax+10h]
0x8F9D33: movaps  xmm3, xmmword ptr [eax+20h]
0x8F9D37: movaps  xmm4, xmmword ptr [eax+30h]
0x8F9D3B: lea     ecx, [ebx+10h]
0x8F9D3E: lea     eax, [esp+0E8h+var_50]
0x8F9D45: add     esp, 8
0x8F9D48: sub     eax, ecx
0x8F9D4A: mov     edx, 2
0x8F9D4F: nop
0x8F9D50: movaps  xmm0, xmmword ptr [ecx]
0x8F9D53: movaps  xmm5, xmm0
0x8F9D56: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x8F9D5A: movaps  xmm6, xmm3
0x8F9D5D: mulps   xmm6, xmm5
0x8F9D60: movaps  xmm5, xmm0
0x8F9D63: shufps  xmm5, xmm0, 55h ; 'U'
0x8F9D67: movaps  xmm7, xmm2
0x8F9D6A: mulps   xmm7, xmm5
0x8F9D6D: movaps  xmm5, xmm0
0x8F9D70: shufps  xmm5, xmm0, 0
0x8F9D74: movaps  xmm0, xmm1
0x8F9D77: mulps   xmm0, xmm5
0x8F9D7A: addps   xmm6, xmm4
0x8F9D7D: addps   xmm0, xmm7
0x8F9D80: addps   xmm0, xmm6
0x8F9D83: movaps  xmmword ptr [eax+ecx], xmm0
0x8F9D87: add     ecx, 10h
0x8F9D8A: dec     edx
0x8F9D8B: jnz     short loc_8F9D50
0x8F9D8D: mov     ecx, [esi+8]
0x8F9D90: mov     eax, [esi]
0x8F9D92: movaps  xmm1, xmmword ptr [ecx]
0x8F9D95: movaps  xmm2, xmmword ptr [ecx+10h]
0x8F9D99: movaps  xmm3, xmmword ptr [ecx+20h]
0x8F9D9D: movaps  xmm4, xmmword ptr [ecx+30h]
0x8F9DA1: add     eax, 10h
0x8F9DA4: lea     ecx, [esp+0E0h+var_30]
0x8F9DAB: sub     ecx, eax
0x8F9DAD: mov     edx, 3
0x8F9DB2: movaps  xmm0, xmmword ptr [eax]
0x8F9DB5: movaps  xmm5, xmm0
0x8F9DB8: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x8F9DBC: movaps  xmm6, xmm3
0x8F9DBF: mulps   xmm6, xmm5
0x8F9DC2: movaps  xmm5, xmm0
0x8F9DC5: shufps  xmm5, xmm0, 55h ; 'U'
0x8F9DC9: movaps  xmm7, xmm2
0x8F9DCC: mulps   xmm7, xmm5
0x8F9DCF: movaps  xmm5, xmm0
0x8F9DD2: shufps  xmm5, xmm0, 0
0x8F9DD6: movaps  xmm0, xmm1
0x8F9DD9: mulps   xmm0, xmm5
0x8F9DDC: addps   xmm6, xmm4
0x8F9DDF: addps   xmm0, xmm7
0x8F9DE2: addps   xmm0, xmm6
0x8F9DE5: movaps  xmmword ptr [ecx+eax], xmm0
0x8F9DE9: add     eax, 10h
0x8F9DEC: dec     edx
0x8F9DED: jnz     short loc_8F9DB2
0x8F9DEF: mov     ecx, [ebp+arg_8]
0x8F9DF2: mov     edx, [ecx+8]
0x8F9DF5: lea     eax, [esp+0E0h+var_B0]
0x8F9DF9: push    eax; int
0x8F9DFA: push    0; int
0x8F9DFC: push    edx; float
0x8F9DFD: lea     eax, [esp+0ECh+var_C4]
0x8F9E01: push    eax; int
0x8F9E02: mov     eax, [esi]
0x8F9E04: mov     ecx, [eax+0Ch]
0x8F9E07: mov     eax, [ebx+0Ch]
0x8F9E0A: push    ecx; float
0x8F9E0B: lea     edx, [esp+0F4h+var_30]
0x8F9E12: push    edx; int
0x8F9E13: push    eax; float
0x8F9E14: lea     ecx, [esp+0FCh+var_50]
0x8F9E1B: push    ecx; int
0x8F9E1C: call    sub_8D0CA0
0x8F9E21: fld     [esp+100h+var_94]
0x8F9E25: fcomp   dword ptr ds:0A2FAA8h
0x8F9E2B: add     esp, 20h
0x8F9E2E: fnstsw  ax
0x8F9E30: test    ah, 5
0x8F9E33: jnp     short loc_8F9E46
0x8F9E35: fld     [esp+0E0h+var_74]
0x8F9E39: fcomp   dword ptr ds:0A2FAA8h
0x8F9E3F: fnstsw  ax
0x8F9E41: test    ah, 5
0x8F9E44: jp      short loc_8F9E50
0x8F9E46: mov     ecx, [ebp+arg_C]
0x8F9E49: mov     edx, [ecx]
0x8F9E4B: push    esi
0x8F9E4C: push    edi
0x8F9E4D: call    dword ptr [edx+4]
0x8F9E50: mov     ecx, large fs:2Ch
0x8F9E57: mov     edx, ds:0BA9DE4h
0x8F9E5D: mov     eax, [ecx+edx*4]
0x8F9E60: mov     esi, [eax+1A4h]
0x8F9E66: cmp     esi, [eax+1A8h]
0x8F9E6C: jnb     short loc_8F9E92
0x8F9E6E: mov     esi, eax
0x8F9E70: mov     ecx, [esi+1A4h]
0x8F9E76: mov     dword ptr [ecx], offset aEt; "Et"
0x8F9E7C: rdtsc
0x8F9E7E: mov     [esp+0E0h+var_C8], eax
0x8F9E82: mov     eax, [esp+0E0h+var_C8]
0x8F9E86: mov     [ecx+4], eax
0x8F9E89: add     ecx, 0Ch
0x8F9E8C: mov     [esi+1A4h], ecx
0x8F9E92: pop     edi
0x8F9E93: pop     esi
0x8F9E94: pop     ebx
0x8F9E95: mov     esp, ebp
0x8F9E97: pop     ebp
0x8F9E98: retn
