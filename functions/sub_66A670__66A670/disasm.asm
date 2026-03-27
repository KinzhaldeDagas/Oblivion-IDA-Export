0x66A670: push    ebx
0x66A671: push    esi
0x66A672: mov     esi, ecx
0x66A674: xor     ebx, ebx
0x66A676: cmp     [esi+574h], ebx
0x66A67C: push    edi
0x66A67D: jz      short loc_66A6F5
0x66A67F: call    TESObjectREFR_GetParentCell
0x66A684: mov     edi, eax
0x66A686: cmp     edi, ebx
0x66A688: jz      short loc_66A6A9
0x66A68A: mov     ecx, edi; this
0x66A68C: call    TESObjectCELL_IsInterior
0x66A691: test    al, al
0x66A693: jz      short loc_66A6A1
0x66A695: lea     ecx, [edi+28h]
0x66A698: call    sub_424180
0x66A69D: mov     edi, eax
0x66A69F: jmp     short loc_66A6AB
0x66A6A1: mov     edi, ds:0B35C24h
0x66A6A7: jmp     short loc_66A6AB
0x66A6A9: xor     edi, edi
0x66A6AB: mov     ecx, [esi+574h]
0x66A6B1: mov     eax, [ecx]
0x66A6B3: mov     edx, [eax+60h]
0x66A6B6: call    edx
0x66A6B8: cmp     edi, ebx
0x66A6BA: jz      short loc_66A6C5
0x66A6BC: mov     eax, [edi]
0x66A6BE: mov     edx, [eax+58h]
0x66A6C1: mov     ecx, edi
0x66A6C3: call    edx
0x66A6C5: mov     eax, [esi+574h]
0x66A6CB: cmp     eax, ebx
0x66A6CD: jz      short loc_66A6DB
0x66A6CF: mov     eax, [eax+8]
0x66A6D2: cmp     eax, ebx
0x66A6D4: jz      short loc_66A6DB
0x66A6D6: mov     eax, [eax+18h]
0x66A6D9: jmp     short loc_66A6DD
0x66A6DB: xor     eax, eax
0x66A6DD: cmp     eax, ebx
0x66A6DF: jz      short loc_66A6E8
0x66A6E1: mov     ecx, eax
0x66A6E3: call    sub_8A6410
0x66A6E8: cmp     edi, ebx
0x66A6EA: jz      short loc_66A6F5
0x66A6EC: mov     eax, [edi]
0x66A6EE: mov     edx, [eax+58h]
0x66A6F1: mov     ecx, edi
0x66A6F3: call    edx
0x66A6F5: mov     edi, [esi+574h]
0x66A6FB: cmp     edi, ebx
0x66A6FD: jz      short loc_66A721
0x66A6FF: lea     eax, [edi+4]
0x66A702: push    eax; lpAddend
0x66A703: call    dword ptr ds:0A2807Ch
0x66A709: test    eax, eax
0x66A70B: jnz     short loc_66A71B
0x66A70D: cmp     edi, ebx
0x66A70F: jz      short loc_66A71B
0x66A711: mov     edx, [edi]
0x66A713: mov     eax, [edx]
0x66A715: push    1
0x66A717: mov     ecx, edi
0x66A719: call    eax
0x66A71B: mov     [esi+574h], ebx
0x66A721: pop     edi
0x66A722: mov     [esi+578h], ebx
0x66A728: mov     [esi+57Ch], ebx
0x66A72E: pop     esi
0x66A72F: pop     ebx
0x66A730: retn
