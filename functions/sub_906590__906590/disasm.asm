0x906590: push    ebp
0x906591: mov     ebp, esp
0x906593: and     esp, 0FFFFFFF0h
0x906596: sub     esp, 244h
0x90659C: mov     eax, ds:0B30AACh
0x9065A1: push    ebx
0x9065A2: mov     [esp+248h+var_4], eax
0x9065A9: mov     eax, [ebp+arg_4]
0x9065AC: push    esi
0x9065AD: mov     esi, ecx
0x9065AF: mov     ecx, [eax]
0x9065B1: mov     eax, [esi+10h]
0x9065B4: mov     ecx, [ecx+0Ch]
0x9065B7: push    edi
0x9065B8: xor     edi, edi
0x9065BA: cmp     eax, edi
0x9065BC: mov     [esp+250h+var_228], ecx
0x9065C0: mov     [esp+250h+var_224], edi
0x9065C4: jle     loc_906717
0x9065CA: mov     ebx, [ebp+arg_8]
0x9065CD: mov     [esp+250h+var_234], edi
0x9065D1: jmp     short loc_9065D7
0x9065D3: mov     ecx, [esp+250h+var_228]
0x9065D7: mov     edx, [ecx]
0x9065D9: lea     eax, [esp+250h+var_210]
0x9065DD: push    eax
0x9065DE: mov     eax, [esi+0Ch]
0x9065E1: mov     eax, [edi+eax]
0x9065E4: push    eax
0x9065E5: call    dword ptr [edx+28h]
0x9065E8: mov     ecx, [ebp+arg_4]
0x9065EB: mov     edx, [esi+0Ch]
0x9065EE: mov     [esp+250h+var_214], ecx
0x9065F2: mov     ecx, [ecx+8]
0x9065F5: add     edx, edi
0x9065F7: mov     [esp+250h+var_218], ecx
0x9065FB: mov     ecx, [edx]
0x9065FD: mov     [esp+250h+var_21C], ecx
0x906601: mov     ecx, [ebx+4]
0x906604: mov     [esp+250h+var_220], eax
0x906608: mov     edx, [edx]
0x90660A: mov     eax, [ecx]
0x90660C: push    edx
0x90660D: mov     edx, [esp+254h+var_228]
0x906611: push    edx
0x906612: mov     edx, [ebp+arg_4]
0x906615: push    edx
0x906616: mov     edx, [ebp+arg_0]
0x906619: push    edx
0x90661A: push    ebx
0x90661B: lea     edx, [esp+264h+var_229]
0x90661F: push    edx
0x906620: call    dword ptr [eax]
0x906622: cmp     byte ptr [eax], 0
0x906625: jz      loc_9066CA
0x90662B: mov     eax, [esi+0Ch]
0x90662E: mov     ecx, [edi+eax+8]
0x906632: mov     [esp+250h+var_238], ecx
0x906636: call    sub_8E0970
0x90663B: mov     ecx, [esp+250h+var_238]
0x90663F: cmp     ecx, eax
0x906641: jnz     short loc_9066B9
0x906643: mov     edx, [esi+8]
0x906646: mov     ecx, [ebp+arg_0]
0x906649: mov     ecx, [ecx]
0x90664B: mov     eax, [ebx]
0x90664D: mov     [esp+250h+var_230], edx
0x906651: mov     edx, [ecx]
0x906653: mov     [esp+250h+var_238], eax
0x906657: call    dword ptr [edx+8]
0x90665A: mov     ecx, [esp+250h+var_220]
0x90665E: mov     edi, eax
0x906660: mov     eax, [ecx]
0x906662: call    dword ptr [eax+8]
0x906665: mov     cl, [ebx+0Ch]
0x906668: test    cl, cl
0x90666A: mov     ecx, [esp+250h+var_238]
0x90666E: jz      short loc_906678
0x906670: add     ecx, 590h
0x906676: jmp     short loc_90667E
0x906678: add     ecx, 190h
0x90667E: mov     edx, [esp+250h+var_238]
0x906682: shl     edi, 5
0x906685: add     edi, ecx
0x906687: movzx   eax, byte ptr [edi+eax]
0x90668B: mov     edi, [esi+0Ch]
0x90668E: lea     ecx, [eax+eax*4]
0x906691: mov     eax, [edx+ecx*4+990h]
0x906698: add     edi, [esp+250h+var_234]
0x90669C: mov     ecx, [esp+250h+var_230]
0x9066A0: push    ecx
0x9066A1: mov     ecx, [ebp+arg_0]
0x9066A4: push    ebx
0x9066A5: lea     edx, [esp+258h+var_220]
0x9066A9: push    edx
0x9066AA: push    ecx
0x9066AB: call    eax
0x9066AD: mov     [edi+8], eax
0x9066B0: mov     edi, [esp+260h+var_234]
0x9066B4: add     esp, 10h
0x9066B7: jmp     short loc_9066FC
0x9066B9: mov     edx, [ecx]
0x9066BB: push    ebx
0x9066BC: lea     eax, [esp+254h+var_220]
0x9066C0: push    eax
0x9066C1: mov     eax, [ebp+arg_0]
0x9066C4: push    eax
0x9066C5: call    dword ptr [edx+1Ch]
0x9066C8: jmp     short loc_9066FC
0x9066CA: mov     ecx, [esi+0Ch]
0x9066CD: mov     edx, [edi+ecx+8]
0x9066D1: mov     [esp+250h+var_238], edx
0x9066D5: call    sub_8E0970
0x9066DA: mov     ecx, [esp+250h+var_238]
0x9066DE: cmp     ecx, eax
0x9066E0: jz      short loc_9066FC
0x9066E2: mov     eax, [ecx]
0x9066E4: call    dword ptr [eax+18h]
0x9066E7: mov     eax, [esi+0Ch]
0x9066EA: add     eax, edi
0x9066EC: mov     [esp+250h+var_230], eax
0x9066F0: call    sub_8E0970
0x9066F5: mov     ecx, [esp+250h+var_230]
0x9066F9: mov     [ecx+8], eax
0x9066FC: mov     eax, [esp+250h+var_224]
0x906700: mov     ecx, [esi+10h]
0x906703: inc     eax
0x906704: add     edi, 0Ch
0x906707: cmp     eax, ecx
0x906709: mov     [esp+250h+var_224], eax
0x90670D: mov     [esp+250h+var_234], edi
0x906711: jl      loc_9065D3
0x906717: mov     ecx, [esp+250h+var_4]
0x90671E: call    @__security_check_cookie@4; __security_check_cookie(x)
0x906723: pop     edi
0x906724: pop     esi
0x906725: pop     ebx
0x906726: mov     esp, ebp
0x906728: pop     ebp
0x906729: retn    0Ch
