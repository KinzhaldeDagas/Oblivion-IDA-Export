0x8F9FA0: push    ebp
0x8F9FA1: mov     ebp, esp
0x8F9FA3: and     esp, 0FFFFFFF0h
0x8F9FA6: sub     esp, 18h
0x8F9FA9: mov     edx, [ebp+arg_8]
0x8F9FAC: push    esi
0x8F9FAD: push    edi
0x8F9FAE: mov     edi, [ebp+arg_C]
0x8F9FB1: mov     eax, [edi+3034h]
0x8F9FB7: mov     esi, [edi]
0x8F9FB9: push    edi
0x8F9FBA: push    edx
0x8F9FBB: mov     edx, [ebp+arg_4]
0x8F9FBE: mov     [esp+28h+var_14], eax
0x8F9FC2: mov     eax, [ebp+arg_0]
0x8F9FC5: push    eax
0x8F9FC6: push    edx
0x8F9FC7: call    sub_8F9470
0x8F9FCC: cmp     esi, [edi]
0x8F9FCE: jnb     short loc_8FA011
0x8F9FD0: lea     eax, [esp+20h+var_10]
0x8F9FD4: push    eax
0x8F9FD5: mov     ecx, esi
0x8F9FD7: call    sub_8F7000
0x8F9FDC: movaps  xmm0, xmmword ptr [eax]
0x8F9FDF: movaps  xmm1, xmmword ptr [esi+10h]
0x8F9FE3: movaps  xmm2, xmm0
0x8F9FE6: shufps  xmm2, xmm0, 0
0x8F9FEA: movaps  xmm0, xmmword ptr [esi]
0x8F9FED: mulps   xmm2, xmm1
0x8F9FF0: addps   xmm0, xmm2
0x8F9FF3: movaps  xmmword ptr [esi], xmm0
0x8F9FF6: movaps  xmm1, xmmword ptr [esi+10h]
0x8F9FFA: movaps  xmm0, xmmword ptr ds:0A9B570h
0x8FA001: xorps   xmm1, xmm0
0x8FA004: movaps  xmmword ptr [esi+10h], xmm1
0x8FA008: mov     eax, [edi]
0x8FA00A: add     esi, 30h ; '0'
0x8FA00D: cmp     esi, eax
0x8FA00F: jb      short loc_8F9FD0
0x8FA011: fld     dword ptr [edi+3034h]
0x8FA017: fld     [esp+20h+var_14]
0x8FA01B: fucompp
0x8FA01D: fnstsw  ax
0x8FA01F: test    ah, 44h
0x8FA022: jnp     short loc_8FA036
0x8FA024: movaps  xmm0, xmmword ptr ds:0A9B570h
0x8FA02B: movaps  xmm1, xmmword ptr [edi+20h]
0x8FA02F: xorps   xmm1, xmm0
0x8FA032: movaps  xmmword ptr [edi+20h], xmm1
0x8FA036: pop     edi
0x8FA037: pop     esi
0x8FA038: mov     esp, ebp
0x8FA03A: pop     ebp
0x8FA03B: retn    10h
