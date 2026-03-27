0x6C1E10: push    0FFFFFFFFh
0x6C1E12: push    offset SEH_6CF490
0x6C1E17: mov     eax, large fs:0
0x6C1E1D: push    eax
0x6C1E1E: push    ebx
0x6C1E1F: push    ebp
0x6C1E20: push    esi
0x6C1E21: push    edi
0x6C1E22: mov     eax, ds:0B30AACh
0x6C1E27: xor     eax, esp
0x6C1E29: push    eax
0x6C1E2A: lea     eax, [esp+20h+var_C]
0x6C1E2E: mov     large fs:0, eax
0x6C1E34: mov     edi, [esp+20h+size]
0x6C1E38: xor     ecx, ecx
0x6C1E3A: mov     eax, edi
0x6C1E3C: mov     edx, 8
0x6C1E41: mul     edx
0x6C1E43: seto    cl
0x6C1E46: neg     ecx
0x6C1E48: or      ecx, eax
0x6C1E4A: xor     eax, eax
0x6C1E4C: add     ecx, 4
0x6C1E4F: setb    al
0x6C1E52: neg     eax
0x6C1E54: or      eax, ecx
0x6C1E56: push    eax; Size
0x6C1E57: call    FormHeapAlloc
0x6C1E5C: add     esp, 4
0x6C1E5F: mov     [esp+20h+size], eax
0x6C1E63: test    eax, eax
0x6C1E65: mov     [esp+20h+var_4], 0
0x6C1E6D: jz      short loc_6C1E8B
0x6C1E6F: push    offset ?ClearComponentReferences@TESTexture@@UAEXXZ?; a5
0x6C1E74: push    offset sub_7616D0; a4
0x6C1E79: push    edi; size
0x6C1E7A: lea     esi, [eax+4]
0x6C1E7D: push    8; a2
0x6C1E7F: push    esi; a1
0x6C1E80: mov     [eax], edi
0x6C1E82: call    ArrayConstructor
0x6C1E87: mov     ebp, esi
0x6C1E89: jmp     short loc_6C1E8D
0x6C1E8B: xor     ebp, ebp
0x6C1E8D: test    edi, edi
0x6C1E8F: mov     [esp+20h+var_4], 0FFFFFFFFh
0x6C1E97: jbe     short loc_6C1EB0
0x6C1E99: mov     ebx, [esp+20h+arg_0]
0x6C1E9D: mov     esi, ebp
0x6C1E9F: nop
0x6C1EA0: push    ebx
0x6C1EA1: mov     ecx, esi
0x6C1EA3: call    sub_6BDF60
0x6C1EA8: add     esi, 8
0x6C1EAB: sub     edi, 1
0x6C1EAE: jnz     short loc_6C1EA0
0x6C1EB0: mov     eax, ebp
0x6C1EB2: mov     ecx, [esp+20h+var_C]
0x6C1EB6: mov     large fs:0, ecx
0x6C1EBD: pop     ecx
0x6C1EBE: pop     edi
0x6C1EBF: pop     esi
0x6C1EC0: pop     ebp
0x6C1EC1: pop     ebx
0x6C1EC2: add     esp, 0Ch
0x6C1EC5: retn
