0x788AE0: mov     edx, [esp+arg_4]
0x788AE4: test    edx, edx
0x788AE6: jbe     short locret_788B0F
0x788AE8: mov     eax, [esp+arg_0]
0x788AEC: push    ebx
0x788AED: mov     ebx, [esp+4+arg_8]
0x788AF1: push    esi
0x788AF2: push    edi
0x788AF3: test    eax, eax
0x788AF5: jz      short loc_788B02
0x788AF7: mov     ecx, 7
0x788AFC: mov     esi, ebx
0x788AFE: mov     edi, eax
0x788B00: rep movsd
0x788B02: sub     edx, 1
0x788B05: add     eax, 1Ch
0x788B08: test    edx, edx
0x788B0A: ja      short loc_788AF3
0x788B0C: pop     edi
0x788B0D: pop     esi
0x788B0E: pop     ebx
0x788B0F: retn
