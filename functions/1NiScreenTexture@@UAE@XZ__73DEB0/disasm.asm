0x73DEB0: push    0FFFFFFFFh
0x73DEB2: push    offset ??1NiScreenTexture@@UAE@XZ_SEH
0x73DEB7: mov     eax, large fs:0
0x73DEBD: push    eax
0x73DEBE: push    ecx
0x73DEBF: push    esi
0x73DEC0: push    edi
0x73DEC1: mov     eax, ds:0B30AACh
0x73DEC6: xor     eax, esp
0x73DEC8: push    eax
0x73DEC9: lea     eax, [esp+1Ch+var_C]
0x73DECD: mov     large fs:0, eax
0x73DED3: mov     esi, ecx
0x73DED5: mov     [esp+1Ch+var_10], esi
0x73DED9: mov     dword ptr [esi], offset ??_7NiScreenTexture@@6B@; const NiScreenTexture::`vftable'
0x73DEDF: push    esi
0x73DEE0: mov     [esp+20h+var_4], 2
0x73DEE8: call    sub_7014E0
0x73DEED: mov     edi, [esi+14h]
0x73DEF0: add     esp, 4
0x73DEF3: test    edi, edi
0x73DEF5: mov     byte ptr [esp+1Ch+var_4], 1
0x73DEFA: jz      short loc_73DF18
0x73DEFC: lea     eax, [edi+4]
0x73DEFF: push    eax; lpAddend
0x73DF00: call    dword ptr ds:0A2807Ch
0x73DF06: test    eax, eax
0x73DF08: jnz     short loc_73DF18
0x73DF0A: test    edi, edi
0x73DF0C: jz      short loc_73DF18
0x73DF0E: mov     edx, [edi]
0x73DF10: mov     eax, [edx]
0x73DF12: push    1
0x73DF14: mov     ecx, edi
0x73DF16: call    eax
0x73DF18: mov     eax, [esi+8]
0x73DF1B: push    eax
0x73DF1C: call    FormHeapFree
0x73DF21: add     esp, 4
0x73DF24: mov     ecx, esi
0x73DF26: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x73DF2E: call    NiRefObject_destr
0x73DF33: mov     ecx, dword ptr [esp+1Ch+var_C]
0x73DF37: mov     large fs:0, ecx
0x73DF3E: pop     ecx
0x73DF3F: pop     edi
0x73DF40: pop     esi
0x73DF41: add     esp, 10h
0x73DF44: retn
