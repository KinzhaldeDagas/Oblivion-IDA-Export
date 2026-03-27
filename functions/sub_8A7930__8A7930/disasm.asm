0x8A7930: push    ebp
0x8A7931: mov     ebp, esp
0x8A7933: and     esp, 0FFFFFFF0h
0x8A7936: sub     esp, 44h
0x8A7939: push    ebx
0x8A793A: mov     ebx, [ebp+arg_8]
0x8A793D: push    esi
0x8A793E: push    edi
0x8A793F: mov     edi, [ebp+arg_C]
0x8A7942: xorps   xmm0, xmm0
0x8A7945: mov     [esp+50h+var_44], ecx
0x8A7949: xor     esi, esi
0x8A794B: movaps  [esp+50h+var_30], xmm0
0x8A7950: movaps  xmm0, [esp+50h+var_30]
0x8A7955: fld     [ebp+arg_4]
0x8A7958: mov     eax, [ebp+arg_0]
0x8A795B: push    edi
0x8A795C: movaps  [esp+54h+var_40], xmm0
0x8A7961: fstp    dword ptr [esp+esi*4+54h+var_40]
0x8A7965: movaps  xmm0, xmmword ptr [eax]
0x8A7968: movaps  xmm1, [esp+54h+var_40]
0x8A796D: push    ebx
0x8A796E: lea     ecx, [esp+58h+var_20]
0x8A7972: push    ecx
0x8A7973: mov     ecx, [esp+5Ch+var_44]
0x8A7977: movaps  xmm2, xmm0
0x8A797A: lea     edx, [esp+5Ch+var_10]
0x8A797E: addps   xmm2, xmm1
0x8A7981: subps   xmm0, xmm1
0x8A7984: push    edx
0x8A7985: movaps  [esp+60h+var_10], xmm2
0x8A798A: movaps  [esp+60h+var_20], xmm0
0x8A798F: call    sub_8A78E0
0x8A7994: inc     esi
0x8A7995: cmp     esi, 3
0x8A7998: jl      short loc_8A7950
0x8A799A: pop     edi
0x8A799B: pop     esi
0x8A799C: pop     ebx
0x8A799D: mov     esp, ebp
0x8A799F: pop     ebp
0x8A79A0: retn    10h
