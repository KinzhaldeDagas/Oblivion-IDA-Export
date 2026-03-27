0x909DE0: push    ebp
0x909DE1: mov     ebp, esp
0x909DE3: and     esp, 0FFFFFFF0h
0x909DE6: sub     esp, 0D4h
0x909DEC: push    ebx
0x909DED: mov     ebx, large fs:2Ch
0x909DF4: push    esi
0x909DF5: push    edi
0x909DF6: mov     edi, ecx
0x909DF8: mov     ecx, ds:0BA9DE4h
0x909DFE: mov     eax, [ebx+ecx*4]
0x909E01: mov     edx, [eax+1A4h]
0x909E07: cmp     edx, [eax+1A8h]
0x909E0D: jnb     short loc_909E33
0x909E0F: mov     esi, eax
0x909E11: mov     ecx, [esi+1A4h]
0x909E17: mov     dword ptr [ecx], offset aTtmultisphere; "TtMultiSphere"
0x909E1D: rdtsc
0x909E1F: mov     [esp+0E0h+var_D4], eax
0x909E23: mov     eax, [esp+0E0h+var_D4]
0x909E27: mov     [ecx+4], eax
0x909E2A: add     ecx, 0Ch
0x909E2D: mov     [esi+1A4h], ecx
0x909E33: mov     esi, [ebp+arg_0]
0x909E36: mov     ecx, [esi]
0x909E38: mov     edx, [esi+8]
0x909E3B: mov     [esp+0E0h+var_D4], ecx
0x909E3F: push    edx
0x909E40: lea     ecx, [esp+0E4h+var_B0]
0x909E44: call    sub_903FA0
0x909E49: push    0
0x909E4B: lea     ecx, [esp+0E4h+var_C0]
0x909E4F: call    sub_8ED410
0x909E54: mov     [esp+0E0h+var_C4], esi
0x909E58: mov     esi, [edi+0Ch]
0x909E5B: mov     edi, [edi+10h]
0x909E5E: dec     edi
0x909E5F: lea     eax, [esp+0E0h+var_B0]
0x909E63: mov     [esp+0E0h+var_C8], eax
0x909E67: js      loc_909F06
0x909E6D: mov     ebx, [ebp+arg_C]
0x909E70: mov     eax, [esi]
0x909E72: mov     ecx, [esp+0E0h+var_D4]
0x909E76: movaps  xmm2, [esp+0E0h+var_90]
0x909E7B: movaps  xmm3, [esp+0E0h+var_A0]
0x909E80: inc     eax
0x909E81: shl     eax, 4
0x909E84: movaps  xmm0, xmmword ptr [eax+ecx]
0x909E88: add     eax, ecx
0x909E8A: mov     ecx, [ebp+arg_0]
0x909E8D: mov     edx, [ecx+8]
0x909E90: movaps  xmm1, xmm0
0x909E93: shufps  xmm1, xmm0, 0AAh ; 'ª'
0x909E97: mulps   xmm2, xmm1
0x909E9A: movaps  xmm1, xmm0
0x909E9D: shufps  xmm1, xmm0, 55h ; 'U'
0x909EA1: mulps   xmm3, xmm1
0x909EA4: movaps  xmm1, xmm0
0x909EA7: shufps  xmm1, xmm0, 0
0x909EAB: movaps  xmm0, [esp+0E0h+var_B0]
0x909EB0: mulps   xmm0, xmm1
0x909EB3: movaps  xmm1, xmmword ptr [edx+30h]
0x909EB7: addps   xmm0, xmm3
0x909EBA: addps   xmm0, xmm2
0x909EBD: addps   xmm1, xmm0
0x909EC0: movaps  [esp+0E0h+var_80], xmm1
0x909EC5: mov     eax, [eax+0Ch]
0x909EC8: mov     [esp+0E0h+var_B4], eax
0x909ECC: mov     eax, [ebp+arg_8]
0x909ECF: push    ebx
0x909ED0: push    eax
0x909ED1: mov     eax, [ebp+arg_4]
0x909ED4: lea     ecx, [esp+0E8h+var_C0]
0x909ED8: mov     [esp+0E8h+var_D0], ecx
0x909EDC: mov     [esp+0E8h+var_CC], edi
0x909EE0: mov     ecx, [esi+4]
0x909EE3: mov     edx, [ecx]
0x909EE5: push    eax
0x909EE6: lea     eax, [esp+0ECh+var_D0]
0x909EEA: push    eax
0x909EEB: call    dword ptr [edx+8]
0x909EEE: mov     al, [ebx+4]
0x909EF1: test    al, al
0x909EF3: jnz     short loc_909EFF
0x909EF5: add     esi, 8
0x909EF8: dec     edi
0x909EF9: jns     loc_909E70
0x909EFF: mov     ebx, large fs:2Ch
0x909F06: mov     ecx, ds:0BA9DE4h
0x909F0C: mov     eax, [ebx+ecx*4]
0x909F0F: mov     edx, [eax+1A4h]
0x909F15: cmp     edx, [eax+1A8h]
0x909F1B: jnb     short loc_909F41
0x909F1D: mov     ebx, eax
0x909F1F: mov     ecx, [ebx+1A4h]
0x909F25: mov     dword ptr [ecx], offset aEt; "Et"
0x909F2B: rdtsc
0x909F2D: mov     [esp+0E0h+var_D4], eax
0x909F31: mov     eax, [esp+0E0h+var_D4]
0x909F35: mov     [ecx+4], eax
0x909F38: add     ecx, 0Ch
0x909F3B: mov     [ebx+1A4h], ecx
0x909F41: pop     edi
0x909F42: pop     esi
0x909F43: pop     ebx
0x909F44: mov     esp, ebp
0x909F46: pop     ebp
0x909F47: retn    10h
