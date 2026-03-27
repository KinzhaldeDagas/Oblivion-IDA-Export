0x556900: push    0FFFFFFFFh
0x556902: push    offset SEH_559CE0
0x556907: mov     eax, large fs:0
0x55690D: push    eax
0x55690E: push    ecx
0x55690F: push    ebx
0x556910: push    ebp
0x556911: push    esi
0x556912: push    edi
0x556913: mov     eax, ds:0B30AACh
0x556918: xor     eax, esp
0x55691A: push    eax
0x55691B: lea     eax, [esp+24h+var_C]
0x55691F: mov     large fs:0, eax
0x556925: mov     esi, ecx
0x556927: mov     [esp+24h+var_10], esi
0x55692B: xor     ebx, ebx
0x55692D: mov     [esi], ebx
0x55692F: mov     [esi+4], bx
0x556933: mov     [esi+6], bx
0x556937: mov     [esp+24h+var_4], ebx
0x55693B: mov     [esi+0Ch], ebx
0x55693E: mov     [esi+10h], ebx
0x556941: mov     [esi+1Ch], ebx
0x556944: mov     [esi+20h], ebx
0x556947: mov     ebp, ds:0A2807Ch
0x55694D: mov     [esi+8], ebx
0x556950: mov     edi, [esi+10h]
0x556953: cmp     edi, ebx
0x556955: mov     byte ptr [esp+24h+var_4], 4
0x55695A: jz      short loc_556977
0x55695C: lea     eax, [edi+4]
0x55695F: push    eax; lpAddend
0x556960: call    ebp ; InterlockedDecrement
0x556962: test    eax, eax
0x556964: jnz     short loc_556974
0x556966: cmp     edi, ebx
0x556968: jz      short loc_556974
0x55696A: mov     edx, [edi]
0x55696C: mov     eax, [edx]
0x55696E: push    1
0x556970: mov     ecx, edi
0x556972: call    eax
0x556974: mov     [esi+10h], ebx
0x556977: mov     edi, [esi+0Ch]
0x55697A: cmp     edi, ebx
0x55697C: jz      short loc_556999
0x55697E: lea     ecx, [edi+4]
0x556981: push    ecx; lpAddend
0x556982: call    ebp ; InterlockedDecrement
0x556984: test    eax, eax
0x556986: jnz     short loc_556996
0x556988: cmp     edi, ebx
0x55698A: jz      short loc_556996
0x55698C: mov     edx, [edi]
0x55698E: mov     eax, [edx]
0x556990: push    1
0x556992: mov     ecx, edi
0x556994: call    eax
0x556996: mov     [esi+0Ch], ebx
0x556999: mov     edi, [esi+1Ch]
0x55699C: cmp     edi, ebx
0x55699E: jz      short loc_5569BB
0x5569A0: lea     ecx, [edi+4]
0x5569A3: push    ecx; lpAddend
0x5569A4: call    ebp ; InterlockedDecrement
0x5569A6: test    eax, eax
0x5569A8: jnz     short loc_5569B8
0x5569AA: cmp     edi, ebx
0x5569AC: jz      short loc_5569B8
0x5569AE: mov     edx, [edi]
0x5569B0: mov     eax, [edx]
0x5569B2: push    1
0x5569B4: mov     ecx, edi
0x5569B6: call    eax
0x5569B8: mov     [esi+1Ch], ebx
0x5569BB: mov     edi, [esi+20h]
0x5569BE: cmp     edi, ebx
0x5569C0: jz      short loc_5569DD
0x5569C2: lea     ecx, [edi+4]
0x5569C5: push    ecx; lpAddend
0x5569C6: call    ebp ; InterlockedDecrement
0x5569C8: test    eax, eax
0x5569CA: jnz     short loc_5569DA
0x5569CC: cmp     edi, ebx
0x5569CE: jz      short loc_5569DA
0x5569D0: mov     edx, [edi]
0x5569D2: mov     eax, [edx]
0x5569D4: push    1
0x5569D6: mov     ecx, edi
0x5569D8: call    eax
0x5569DA: mov     [esi+20h], ebx
0x5569DD: mov     [esi+14h], ebx
0x5569E0: mov     [esi+18h], ebx
0x5569E3: mov     eax, esi
0x5569E5: mov     ecx, dword ptr [esp+24h+var_C]
0x5569E9: mov     large fs:0, ecx
0x5569F0: pop     ecx
0x5569F1: pop     edi
0x5569F2: pop     esi
0x5569F3: pop     ebp
0x5569F4: pop     ebx
0x5569F5: add     esp, 10h
0x5569F8: retn
