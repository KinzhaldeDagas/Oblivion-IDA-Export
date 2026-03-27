0x9062C0: push    ebp
0x9062C1: mov     ebp, esp
0x9062C3: and     esp, 0FFFFFFF0h
0x9062C6: sub     esp, 18h
0x9062C9: mov     edx, [ebp+arg_8]
0x9062CC: push    esi
0x9062CD: push    edi
0x9062CE: mov     edi, [ebp+arg_C]
0x9062D1: mov     eax, [edi+3034h]
0x9062D7: mov     esi, [edi]
0x9062D9: push    edi
0x9062DA: push    edx
0x9062DB: mov     edx, [ebp+arg_4]
0x9062DE: mov     [esp+28h+var_14], eax
0x9062E2: mov     eax, [ebp+arg_0]
0x9062E5: push    eax
0x9062E6: push    edx
0x9062E7: call    sub_907B30
0x9062EC: cmp     esi, [edi]
0x9062EE: jnb     short loc_906331
0x9062F0: lea     eax, [esp+20h+var_10]
0x9062F4: push    eax
0x9062F5: mov     ecx, esi
0x9062F7: call    sub_8F7000
0x9062FC: movaps  xmm0, xmmword ptr [eax]
0x9062FF: movaps  xmm1, xmmword ptr [esi+10h]
0x906303: movaps  xmm2, xmm0
0x906306: shufps  xmm2, xmm0, 0
0x90630A: movaps  xmm0, xmmword ptr [esi]
0x90630D: mulps   xmm2, xmm1
0x906310: addps   xmm0, xmm2
0x906313: movaps  xmmword ptr [esi], xmm0
0x906316: movaps  xmm1, xmmword ptr [esi+10h]
0x90631A: movaps  xmm0, xmmword ptr ds:0A9B570h
0x906321: xorps   xmm1, xmm0
0x906324: movaps  xmmword ptr [esi+10h], xmm1
0x906328: mov     eax, [edi]
0x90632A: add     esi, 30h ; '0'
0x90632D: cmp     esi, eax
0x90632F: jb      short loc_9062F0
0x906331: fld     dword ptr [edi+3034h]
0x906337: fld     [esp+20h+var_14]
0x90633B: fucompp
0x90633D: fnstsw  ax
0x90633F: test    ah, 44h
0x906342: jnp     short loc_906356
0x906344: movaps  xmm0, xmmword ptr ds:0A9B570h
0x90634B: movaps  xmm1, xmmword ptr [edi+20h]
0x90634F: xorps   xmm1, xmm0
0x906352: movaps  xmmword ptr [edi+20h], xmm1
0x906356: pop     edi
0x906357: pop     esi
0x906358: mov     esp, ebp
0x90635A: pop     ebp
0x90635B: retn    10h
