0x75C590: fldz
0x75C592: sub     esp, 0F8h
0x75C598: push    ebx
0x75C599: mov     ebx, ecx
0x75C59B: fcomp   dword ptr [ebx+1Ch]
0x75C59E: fnstsw  ax
0x75C5A0: test    ah, 44h
0x75C5A3: jnp     loc_75C78A
0x75C5A9: push    esi
0x75C5AA: mov     esi, [ebx+18h]
0x75C5AD: push    edi
0x75C5AE: add     esi, 64h ; 'd'
0x75C5B1: mov     ecx, 0Dh
0x75C5B6: lea     edi, [esp+104h+var_68]
0x75C5BD: rep movsd
0x75C5BF: mov     esi, [ebx+10h]
0x75C5C2: add     esi, 64h ; 'd'
0x75C5C5: mov     ecx, 0Dh
0x75C5CA: lea     edi, [esp+104h+var_9C]
0x75C5CE: lea     eax, [esp+104h+var_34]
0x75C5D5: rep movsd
0x75C5D7: push    eax
0x75C5D8: lea     ecx, [esp+108h+var_9C]
0x75C5DC: call    sub_718A80
0x75C5E1: lea     ecx, [esp+104h+var_68]
0x75C5E8: push    ecx
0x75C5E9: lea     edx, [esp+108h+var_D0]
0x75C5ED: push    edx
0x75C5EE: lea     ecx, [esp+10Ch+var_34]
0x75C5F5: call    sub_53D7A0
0x75C5FA: cmp     byte ptr [ebx+60h], 0
0x75C5FE: fld     [esp+104h+arg_0]
0x75C605: mov     eax, [esp+104h+var_AC]
0x75C609: fstp    dword ptr [ebx+3Ch]
0x75C60C: mov     ecx, [esp+104h+var_A8]
0x75C610: mov     edx, [esp+104h+var_A4]
0x75C614: mov     [ebx+30h], eax
0x75C617: mov     [ebx+34h], ecx
0x75C61A: mov     [ebx+38h], edx
0x75C61D: jz      short loc_75C63F
0x75C61F: lea     eax, [ebx+4Ch]
0x75C622: push    eax
0x75C623: lea     ecx, [esp+108h+var_DC]
0x75C627: push    ecx
0x75C628: lea     ecx, [esp+10Ch+var_D0]
0x75C62C: call    sub_7101F0
0x75C631: mov     edx, [eax]
0x75C633: mov     ecx, [eax+4]
0x75C636: mov     [esp+104h+var_F4], edx
0x75C63A: mov     edx, [eax+8]
0x75C63D: jmp     short loc_75C64C
0x75C63F: mov     eax, [ebx+4Ch]
0x75C642: mov     ecx, [ebx+50h]
0x75C645: mov     edx, [ebx+54h]
0x75C648: mov     [esp+104h+var_F4], eax
0x75C64C: fld     dword ptr [ebx+1Ch]
0x75C64F: mov     esi, [esp+104h+arg_4]
0x75C656: fstp    [esp+104h+var_F8]
0x75C65A: mov     [esp+104h+var_F0], ecx
0x75C65E: fld     [esp+104h+var_F4]
0x75C662: mov     [esp+104h+var_EC], edx
0x75C666: fld     [esp+104h+var_F8]
0x75C66A: xor     edx, edx
0x75C66C: cmp     [esi+48h], dx
0x75C670: fld     st
0x75C672: fmulp   st(2), st
0x75C674: fxch    st(1)
0x75C676: fstp    [esp+104h+var_E8]
0x75C67A: fld     [esp+104h+var_F0]
0x75C67E: fmul    st, st(1)
0x75C680: fstp    [esp+104h+var_E4]
0x75C684: fmul    [esp+104h+var_EC]
0x75C688: fstp    [esp+104h+var_E0]
0x75C68C: jbe     loc_75C788
0x75C692: fld     [esp+104h+var_E0]
0x75C696: fld     [esp+104h+var_E4]
0x75C69A: fld     [esp+104h+var_E8]
0x75C69E: fldz
0x75C6A0: fld     [esp+104h+arg_0]
0x75C6A7: movzx   eax, dx
0x75C6AA: lea     ecx, ds:0[eax*8]
0x75C6B1: sub     ecx, eax
0x75C6B3: mov     eax, [esi+5Ch]
0x75C6B6: lea     ecx, [eax+ecx*4]
0x75C6B9: fsub    dword ptr [ecx+14h]
0x75C6BC: fstp    [esp+104h+var_F8]
0x75C6C0: fld     st
0x75C6C2: fld     [esp+104h+var_F8]
0x75C6C6: fucom   st(1)
0x75C6C8: fnstsw  ax
0x75C6CA: fstp    st(1)
0x75C6CC: test    ah, 44h
0x75C6CF: jnp     loc_75C771
0x75C6D5: fld     dword ptr [ecx]
0x75C6D7: fsub    st, st(3)
0x75C6D9: fstp    [esp+104h+var_E8]
0x75C6DD: fld     dword ptr [ecx+4]
0x75C6E0: fsub    st, st(4)
0x75C6E2: fstp    [esp+104h+var_E4]
0x75C6E6: fld     dword ptr [ecx+8]
0x75C6E9: fsub    st, st(5)
0x75C6EB: fstp    [esp+104h+var_E0]
0x75C6EF: fld     [esp+104h+var_E4]
0x75C6F3: fmul    st, st(4)
0x75C6F5: fld     [esp+104h+var_E8]
0x75C6F9: fmul    st, st(4)
0x75C6FB: faddp   st(1), st
0x75C6FD: fld     [esp+104h+var_E0]
0x75C701: fmul    st, st(6)
0x75C703: faddp   st(1), st
0x75C705: fstp    [esp+104h+var_F8]
0x75C709: fld     [esp+104h+var_F8]
0x75C70D: fcomp   st(2)
0x75C70F: fnstsw  ax
0x75C711: test    ah, 5
0x75C714: jp      short loc_75C771
0x75C716: fld     dword ptr [ebx+58h]
0x75C719: fstp    [esp+104h+var_F8]
0x75C71D: fld     [esp+104h+var_F8]
0x75C721: fld     st
0x75C723: fmul    st, st(4)
0x75C725: fstp    [esp+104h+var_F4]
0x75C729: fld     st
0x75C72B: fmul    st, st(5)
0x75C72D: fstp    [esp+104h+var_F0]
0x75C731: fmul    st, st(5)
0x75C733: fstp    [esp+104h+var_EC]
0x75C737: fld     [esp+104h+var_F4]
0x75C73B: fmul    st, st(1)
0x75C73D: fstp    [esp+104h+var_DC]
0x75C741: fld     [esp+104h+var_F0]
0x75C745: fmul    st, st(1)
0x75C747: fstp    [esp+104h+var_D8]
0x75C74B: fmul    [esp+104h+var_EC]
0x75C74F: fstp    [esp+104h+var_D4]
0x75C753: fld     dword ptr [ecx]
0x75C755: fadd    [esp+104h+var_DC]
0x75C759: fstp    dword ptr [ecx]
0x75C75B: fld     [esp+104h+var_D8]
0x75C75F: fadd    dword ptr [ecx+4]
0x75C762: fstp    dword ptr [ecx+4]
0x75C765: fld     dword ptr [ecx+8]
0x75C768: fadd    [esp+104h+var_D4]
0x75C76C: fstp    dword ptr [ecx+8]
0x75C76F: jmp     short loc_75C773
0x75C771: fstp    st
0x75C773: add     edx, 1
0x75C776: cmp     dx, [esi+48h]
0x75C77A: jb      loc_75C6A0
0x75C780: fstp    st(3)
0x75C782: fstp    st(1)
0x75C784: fstp    st
0x75C786: fstp    st
0x75C788: pop     edi
0x75C789: pop     esi
0x75C78A: pop     ebx
0x75C78B: add     esp, 0F8h
0x75C791: retn    8
