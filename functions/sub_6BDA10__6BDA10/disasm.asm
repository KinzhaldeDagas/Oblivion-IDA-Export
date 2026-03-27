0x6BDA10: push    0FFFFFFFFh
0x6BDA12: push    offset SEH_6CF490
0x6BDA17: mov     eax, large fs:0
0x6BDA1D: push    eax
0x6BDA1E: push    ebx
0x6BDA1F: push    ebp
0x6BDA20: push    esi
0x6BDA21: push    edi
0x6BDA22: mov     eax, ds:0B30AACh
0x6BDA27: xor     eax, esp
0x6BDA29: push    eax
0x6BDA2A: lea     eax, [esp+20h+var_C]
0x6BDA2E: mov     large fs:0, eax
0x6BDA34: mov     edi, [esp+20h+size]
0x6BDA38: xor     ecx, ecx
0x6BDA3A: mov     eax, edi
0x6BDA3C: mov     edx, 24h ; '$'
0x6BDA41: mul     edx
0x6BDA43: seto    cl
0x6BDA46: neg     ecx
0x6BDA48: or      ecx, eax
0x6BDA4A: xor     eax, eax
0x6BDA4C: add     ecx, 4
0x6BDA4F: setb    al
0x6BDA52: neg     eax
0x6BDA54: or      eax, ecx
0x6BDA56: push    eax; Size
0x6BDA57: call    FormHeapAlloc
0x6BDA5C: add     esp, 4
0x6BDA5F: mov     [esp+20h+size], eax
0x6BDA63: test    eax, eax
0x6BDA65: mov     [esp+20h+var_4], 0
0x6BDA6D: jz      short loc_6BDA8B
0x6BDA6F: push    offset ?ClearComponentReferences@TESTexture@@UAEXXZ?; a5
0x6BDA74: push    offset sub_6C0AD0; a4
0x6BDA79: push    edi; size
0x6BDA7A: lea     esi, [eax+4]
0x6BDA7D: push    24h ; '$'; a2
0x6BDA7F: push    esi; a1
0x6BDA80: mov     [eax], edi
0x6BDA82: call    ArrayConstructor
0x6BDA87: mov     ebp, esi
0x6BDA89: jmp     short loc_6BDA8D
0x6BDA8B: xor     ebp, ebp
0x6BDA8D: test    edi, edi
0x6BDA8F: mov     [esp+20h+var_4], 0FFFFFFFFh
0x6BDA97: jbe     short loc_6BDAB0
0x6BDA99: mov     ebx, [esp+20h+arg_0]
0x6BDA9D: mov     esi, ebp
0x6BDA9F: nop
0x6BDAA0: push    ebx
0x6BDAA1: mov     ecx, esi
0x6BDAA3: call    sub_6BD510
0x6BDAA8: add     esi, 24h ; '$'
0x6BDAAB: sub     edi, 1
0x6BDAAE: jnz     short loc_6BDAA0
0x6BDAB0: mov     eax, ebp
0x6BDAB2: mov     ecx, [esp+20h+var_C]
0x6BDAB6: mov     large fs:0, ecx
0x6BDABD: pop     ecx
0x6BDABE: pop     edi
0x6BDABF: pop     esi
0x6BDAC0: pop     ebp
0x6BDAC1: pop     ebx
0x6BDAC2: add     esp, 0Ch
0x6BDAC5: retn
