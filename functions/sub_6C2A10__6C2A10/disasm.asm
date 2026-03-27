0x6C2A10: push    0FFFFFFFFh
0x6C2A12: push    offset SEH_6E3250
0x6C2A17: mov     eax, large fs:0
0x6C2A1D: push    eax
0x6C2A1E: push    esi
0x6C2A1F: push    edi
0x6C2A20: mov     eax, ds:0B30AACh
0x6C2A25: xor     eax, esp
0x6C2A27: push    eax
0x6C2A28: lea     eax, [esp+18h+var_C]
0x6C2A2C: mov     large fs:0, eax
0x6C2A32: mov     edi, [esp+18h+size]
0x6C2A36: xor     ecx, ecx
0x6C2A38: mov     eax, edi
0x6C2A3A: mov     edx, 14h
0x6C2A3F: mul     edx
0x6C2A41: seto    cl
0x6C2A44: neg     ecx
0x6C2A46: or      ecx, eax
0x6C2A48: xor     eax, eax
0x6C2A4A: add     ecx, 4
0x6C2A4D: setb    al
0x6C2A50: neg     eax
0x6C2A52: or      eax, ecx
0x6C2A54: push    eax; Size
0x6C2A55: call    FormHeapAlloc
0x6C2A5A: add     esp, 4
0x6C2A5D: mov     [esp+18h+size], eax
0x6C2A61: test    eax, eax
0x6C2A63: mov     [esp+18h+var_4], 0
0x6C2A6B: jz      short loc_6C2A99
0x6C2A6D: push    offset ?ClearComponentReferences@TESTexture@@UAEXXZ?; a5
0x6C2A72: push    offset sub_6C0AD0; a4
0x6C2A77: push    edi; size
0x6C2A78: lea     esi, [eax+4]
0x6C2A7B: push    14h; a2
0x6C2A7D: push    esi; a1
0x6C2A7E: mov     [eax], edi
0x6C2A80: call    ArrayConstructor
0x6C2A85: mov     eax, esi
0x6C2A87: mov     ecx, [esp+18h+var_C]
0x6C2A8B: mov     large fs:0, ecx
0x6C2A92: pop     ecx
0x6C2A93: pop     edi
0x6C2A94: pop     esi
0x6C2A95: add     esp, 0Ch
0x6C2A98: retn
0x6C2A99: xor     eax, eax
0x6C2A9B: mov     ecx, [esp+18h+var_C]
0x6C2A9F: mov     large fs:0, ecx
0x6C2AA6: pop     ecx
0x6C2AA7: pop     edi
0x6C2AA8: pop     esi
0x6C2AA9: add     esp, 0Ch
0x6C2AAC: retn
