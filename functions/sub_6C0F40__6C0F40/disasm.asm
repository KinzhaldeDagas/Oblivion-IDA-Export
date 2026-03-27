0x6C0F40: push    0FFFFFFFFh
0x6C0F42: push    offset SEH_6E3250
0x6C0F47: mov     eax, large fs:0
0x6C0F4D: push    eax
0x6C0F4E: push    esi
0x6C0F4F: push    edi
0x6C0F50: mov     eax, ds:0B30AACh
0x6C0F55: xor     eax, esp
0x6C0F57: push    eax
0x6C0F58: lea     eax, [esp+18h+var_C]
0x6C0F5C: mov     large fs:0, eax
0x6C0F62: mov     edi, [esp+18h+size]
0x6C0F66: xor     ecx, ecx
0x6C0F68: mov     eax, edi
0x6C0F6A: mov     edx, 40h ; '@'
0x6C0F6F: mul     edx
0x6C0F71: seto    cl
0x6C0F74: neg     ecx
0x6C0F76: or      ecx, eax
0x6C0F78: xor     eax, eax
0x6C0F7A: add     ecx, 4
0x6C0F7D: setb    al
0x6C0F80: neg     eax
0x6C0F82: or      eax, ecx
0x6C0F84: push    eax; Size
0x6C0F85: call    FormHeapAlloc
0x6C0F8A: add     esp, 4
0x6C0F8D: mov     [esp+18h+size], eax
0x6C0F91: test    eax, eax
0x6C0F93: mov     [esp+18h+var_4], 0
0x6C0F9B: jz      short loc_6C0FC9
0x6C0F9D: push    offset ?ClearComponentReferences@TESTexture@@UAEXXZ?; a5
0x6C0FA2: push    offset sub_6C0AD0; a4
0x6C0FA7: push    edi; size
0x6C0FA8: lea     esi, [eax+4]
0x6C0FAB: push    40h ; '@'; a2
0x6C0FAD: push    esi; a1
0x6C0FAE: mov     [eax], edi
0x6C0FB0: call    ArrayConstructor
0x6C0FB5: mov     eax, esi
0x6C0FB7: mov     ecx, [esp+18h+var_C]
0x6C0FBB: mov     large fs:0, ecx
0x6C0FC2: pop     ecx
0x6C0FC3: pop     edi
0x6C0FC4: pop     esi
0x6C0FC5: add     esp, 0Ch
0x6C0FC8: retn
0x6C0FC9: xor     eax, eax
0x6C0FCB: mov     ecx, [esp+18h+var_C]
0x6C0FCF: mov     large fs:0, ecx
0x6C0FD6: pop     ecx
0x6C0FD7: pop     edi
0x6C0FD8: pop     esi
0x6C0FD9: add     esp, 0Ch
0x6C0FDC: retn
