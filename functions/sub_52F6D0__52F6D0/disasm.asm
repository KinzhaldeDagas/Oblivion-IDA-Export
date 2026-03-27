0x52F6D0: mov     eax, [esp+arg_0]
0x52F6D4: test    eax, eax
0x52F6D6: push    ebp
0x52F6D7: mov     ebp, eax
0x52F6D9: jnz     short loc_52F6E4
0x52F6DB: mov     ebp, ds:0B33A98h
0x52F6E1: add     ebp, 7Ch ; '|'
0x52F6E4: xor     ecx, ecx
0x52F6E6: test    ebp, ebp
0x52F6E8: mov     eax, ebp
0x52F6EA: jz      short loc_52F6FF
0x52F6EC: lea     esp, [esp+0]
0x52F6F0: cmp     dword ptr [eax], 0
0x52F6F3: jz      short loc_52F6F8
0x52F6F5: add     ecx, 1
0x52F6F8: mov     eax, [eax+4]
0x52F6FB: test    eax, eax
0x52F6FD: jnz     short loc_52F6F0
0x52F6FF: lea     eax, [ecx-1]
0x52F702: test    eax, eax
0x52F704: jle     short loc_52F769
0x52F706: push    ebx
0x52F707: push    esi
0x52F708: mov     [esp+0Ch+arg_0], eax
0x52F70C: push    edi
0x52F70D: lea     ecx, [ecx+0]
0x52F710: test    ebp, ebp
0x52F712: mov     esi, ebp
0x52F714: jz      short loc_52F75F
0x52F716: mov     ebx, [esi]
0x52F718: test    ebx, ebx
0x52F71A: jz      short loc_52F75F
0x52F71C: mov     eax, [esi+4]
0x52F71F: test    eax, eax
0x52F721: jz      short loc_52F758
0x52F723: mov     edi, [eax]
0x52F725: test    edi, edi
0x52F727: jz      short loc_52F758
0x52F729: mov     eax, [edi+1Ch]
0x52F72C: test    eax, eax
0x52F72E: mov     ecx, eax
0x52F730: jnz     short loc_52F737
0x52F732: mov     ecx, offset EmptyString
0x52F737: mov     eax, [ebx+1Ch]
0x52F73A: test    eax, eax
0x52F73C: jnz     short loc_52F743
0x52F73E: mov     eax, offset EmptyString
0x52F743: push    ecx; unsigned __int8 *
0x52F744: push    eax; unsigned __int8 *
0x52F745: call    __mbsicmp
0x52F74A: add     esp, 8
0x52F74D: test    eax, eax
0x52F74F: jle     short loc_52F758
0x52F751: mov     eax, [esi+4]
0x52F754: mov     [esi], edi
0x52F756: mov     [eax], ebx
0x52F758: mov     esi, [esi+4]
0x52F75B: test    esi, esi
0x52F75D: jnz     short loc_52F716
0x52F75F: sub     [esp+10h+arg_0], 1
0x52F764: jnz     short loc_52F710
0x52F766: pop     edi
0x52F767: pop     esi
0x52F768: pop     ebx
0x52F769: pop     ebp
0x52F76A: retn
