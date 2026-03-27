0x93F5E0: push    ebp
0x93F5E1: mov     ebp, esp
0x93F5E3: and     esp, 0FFFFFFF0h
0x93F5E6: sub     esp, 1E4h
0x93F5EC: push    ebx
0x93F5ED: mov     ebx, ds:0BA9DE4h
0x93F5F3: push    esi
0x93F5F4: push    edi
0x93F5F5: mov     edi, large fs:2Ch
0x93F5FC: mov     eax, [edi+ebx*4]
0x93F5FF: mov     edx, [eax+1A8h]
0x93F605: mov     [esp+1F0h+var_1D4], ecx
0x93F609: mov     ecx, [eax+1A4h]
0x93F60F: cmp     ecx, edx
0x93F611: jnb     short loc_93F63E
0x93F613: mov     esi, eax
0x93F615: mov     ecx, [esi+1A4h]
0x93F61B: mov     dword ptr [ecx], offset aLtgsk; "LtGsk"
0x93F621: mov     dword ptr [ecx+0Ch], offset off_AA1E60
0x93F628: rdtsc
0x93F62A: mov     [esp+1F0h+var_1D8], eax
0x93F62E: mov     edx, [esp+1F0h+var_1D8]
0x93F632: mov     [ecx+4], edx
0x93F635: add     ecx, 10h
0x93F638: mov     [esi+1A4h], ecx
0x93F63E: mov     eax, [edi+ebx*4]
0x93F641: mov     ecx, [eax+1A4h]
0x93F647: cmp     ecx, [eax+1A8h]
0x93F64D: jnb     short loc_93F673
0x93F64F: mov     edi, eax
0x93F651: mov     ecx, [edi+1A4h]
0x93F657: mov     dword ptr [ecx], offset aStsepnormal_0; "StSepNormal"
0x93F65D: rdtsc
0x93F65F: mov     [esp+1F0h+var_1D8], eax
0x93F663: mov     edx, [esp+1F0h+var_1D8]
0x93F667: mov     [ecx+4], edx
0x93F66A: add     ecx, 0Ch
0x93F66D: mov     [edi+1A4h], ecx
0x93F673: mov     ecx, [ebp+arg_4]
0x93F676: mov     ebx, [ecx]
0x93F678: mov     eax, [ebp+arg_0]
0x93F67B: mov     ecx, [ecx+8]
0x93F67E: mov     edx, [eax+8]
0x93F681: mov     edi, [eax]
0x93F683: push    ecx
0x93F684: push    edx
0x93F685: lea     ecx, [esp+1F8h+var_40]
0x93F68C: call    sub_8B1FF0
0x93F691: mov     esi, [esp+1F0h+var_1D4]
0x93F695: movsx   ecx, byte ptr [esi+15h]
0x93F699: movsx   eax, byte ptr [esi+14h]
0x93F69D: movsx   edx, byte ptr [esi+16h]
0x93F6A1: add     esi, 0Ch
0x93F6A4: mov     [esp+1F0h+var_1BC], ecx
0x93F6A8: movsx   ecx, byte ptr [esi+0Bh]
0x93F6AC: mov     [esp+1F0h+var_1B4], ecx
0x93F6B0: lea     ecx, [esp+1F0h+var_1A0]
0x93F6B4: push    ecx
0x93F6B5: push    eax
0x93F6B6: mov     [esp+1F8h+var_1B0], 1
0x93F6BB: mov     [esp+1F8h+var_1C0], eax
0x93F6BF: mov     [esp+1F8h+var_1B8], edx
0x93F6C3: mov     [esp+1F8h+var_1AC], 0
0x93F6CB: mov     edx, [edi]
0x93F6CD: push    esi
0x93F6CE: mov     ecx, edi
0x93F6D0: call    dword ptr [edx+28h]
0x93F6D3: mov     ecx, [esp+1F0h+var_1BC]
0x93F6D7: mov     edx, [ebx]
0x93F6D9: lea     eax, [esp+1F0h+var_E0]
0x93F6E0: push    eax
0x93F6E1: mov     eax, [esp+1F4h+var_1C0]
0x93F6E5: push    ecx
0x93F6E6: lea     ecx, [esi+eax*2]
0x93F6E9: push    ecx
0x93F6EA: mov     ecx, ebx
0x93F6EC: call    dword ptr [edx+28h]
0x93F6EF: lea     edx, [esp+1F0h+var_1D0]
0x93F6F3: push    edx
0x93F6F4: lea     eax, [esp+1F4h+var_40]
0x93F6FB: push    eax
0x93F6FC: push    ebx
0x93F6FD: push    edi
0x93F6FE: lea     ecx, [esp+200h+var_1C0]
0x93F702: call    sub_93C690
0x93F707: mov     [esp+1F0h+var_1D8], eax
0x93F70B: mov     eax, [esp+1F0h+var_1AC]
0x93F70F: test    eax, eax
0x93F711: jz      short loc_93F71D
0x93F713: push    esi
0x93F714: lea     ecx, [esp+1F4h+var_1C0]
0x93F718: call    sub_93B660
0x93F71D: mov     eax, [esp+1F0h+var_1D8]
0x93F721: test    eax, eax
0x93F723: jnz     short loc_93F790
0x93F725: movaps  xmm0, [esp+1F0h+var_1D0]
0x93F72A: fld     dword ptr [esp+1F0h+var_1D0+0Ch]
0x93F72E: mov     edx, [ebp+arg_0]
0x93F731: fsub    dword ptr [edi+0Ch]
0x93F734: mov     eax, [edx+8]
0x93F737: movaps  xmm2, xmmword ptr [eax+20h]
0x93F73B: movaps  xmm3, xmmword ptr [eax+10h]
0x93F73F: fsub    dword ptr [ebx+0Ch]
0x93F742: movaps  xmm1, xmm0
0x93F745: shufps  xmm1, xmm0, 0AAh ; 'ª'
0x93F749: mulps   xmm2, xmm1
0x93F74C: movaps  xmm1, xmm0
0x93F74F: shufps  xmm1, xmm0, 55h ; 'U'
0x93F753: mulps   xmm3, xmm1
0x93F756: movaps  xmm1, xmm0
0x93F759: shufps  xmm1, xmm0, 0
0x93F75D: movaps  xmm0, xmmword ptr [eax]
0x93F760: mov     eax, [esp+1F0h+var_1D4]
0x93F764: mulps   xmm0, xmm1
0x93F767: addps   xmm0, xmm3
0x93F76A: addps   xmm0, xmm2
0x93F76D: movaps  xmmword ptr [eax+20h], xmm0
0x93F771: fst     dword ptr [eax+2Ch]
0x93F774: fcomp   dword ptr ds:0A2FAA8h
0x93F77A: fnstsw  ax
0x93F77C: test    ah, 5
0x93F77F: jp      short loc_93F7AB
0x93F781: mov     esi, [ebp+arg_4]
0x93F784: mov     ecx, [ebp+arg_C]
0x93F787: mov     eax, [ecx]
0x93F789: push    esi
0x93F78A: push    edx
0x93F78B: call    dword ptr [eax+4]
0x93F78E: jmp     short loc_93F7AB
0x93F790: mov     ecx, [esp+1F0h+var_1D4]
0x93F794: mov     eax, [ebp+arg_4]
0x93F797: xorps   xmm0, xmm0
0x93F79A: movaps  xmmword ptr [ecx+20h], xmm0
0x93F79E: mov     ecx, [ebp+arg_C]
0x93F7A1: mov     edx, [ecx]
0x93F7A3: push    eax
0x93F7A4: mov     eax, [ebp+arg_0]
0x93F7A7: push    eax
0x93F7A8: call    dword ptr [edx+4]
0x93F7AB: mov     ecx, large fs:2Ch
0x93F7B2: mov     edx, ds:0BA9DE4h
0x93F7B8: mov     eax, [ecx+edx*4]
0x93F7BB: mov     esi, [eax+1A4h]
0x93F7C1: cmp     esi, [eax+1A8h]
0x93F7C7: jnb     short loc_93F7ED
0x93F7C9: mov     esi, eax
0x93F7CB: mov     ecx, [esi+1A4h]
0x93F7D1: mov     dword ptr [ecx], offset aLt_0; "lt"
0x93F7D7: rdtsc
0x93F7D9: mov     [esp+1F0h+var_1D8], eax
0x93F7DD: mov     edx, [esp+1F0h+var_1D8]
0x93F7E1: mov     [ecx+4], edx
0x93F7E4: add     ecx, 0Ch
0x93F7E7: mov     [esi+1A4h], ecx
0x93F7ED: pop     edi
0x93F7EE: pop     esi
0x93F7EF: pop     ebx
0x93F7F0: mov     esp, ebp
0x93F7F2: pop     ebp
0x93F7F3: retn    10h
