0x77D980: mov     edx, [ecx+10h]
0x77D983: sub     esp, 0Ch
0x77D986: push    esi
0x77D987: lea     esi, [ecx+0Ch]
0x77D98A: xor     eax, eax
0x77D98C: test    edx, edx
0x77D98E: push    edi
0x77D98F: jbe     short loc_77D9A5
0x77D991: mov     edi, [esi+8]
0x77D994: mov     ecx, edi
0x77D996: cmp     dword ptr [ecx], 0
0x77D999: jnz     short loc_77D9F7
0x77D99B: add     eax, 1
0x77D99E: add     ecx, 4
0x77D9A1: cmp     eax, edx
0x77D9A3: jb      short loc_77D996
0x77D9A5: xor     eax, eax
0x77D9A7: test    eax, eax
0x77D9A9: mov     [esp+14h+var_C], eax
0x77D9AD: jz      short loc_77D9F1
0x77D9AF: nop
0x77D9B0: lea     eax, [esp+14h+var_4]
0x77D9B4: push    eax
0x77D9B5: lea     ecx, [esp+18h+var_8]
0x77D9B9: push    ecx
0x77D9BA: lea     edx, [esp+1Ch+var_C]
0x77D9BE: push    edx
0x77D9BF: mov     ecx, esi
0x77D9C1: call    sub_452600
0x77D9C6: mov     eax, [esp+14h+var_8]
0x77D9CA: push    eax
0x77D9CB: mov     ecx, esi
0x77D9CD: call    NiTMap_RemoveAt
0x77D9D2: mov     edi, [esp+14h+var_4]
0x77D9D6: test    edi, edi
0x77D9D8: jz      short loc_77D9EA
0x77D9DA: mov     ecx, edi
0x77D9DC: call    sub_77D490
0x77D9E1: push    edi
0x77D9E2: call    FormHeapFree
0x77D9E7: add     esp, 4
0x77D9EA: cmp     [esp+14h+var_C], 0
0x77D9EF: jnz     short loc_77D9B0
0x77D9F1: pop     edi
0x77D9F2: pop     esi
0x77D9F3: add     esp, 0Ch
0x77D9F6: retn
0x77D9F7: mov     eax, [edi+eax*4]
0x77D9FA: jmp     short loc_77D9A7
