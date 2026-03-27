0x4802E0: push    edi
0x4802E1: mov     edi, [esp+4+arg_0]
0x4802E5: test    edi, edi
0x4802E7: jz      short loc_480336
0x4802E9: mov     eax, [edi+0B4h]
0x4802EF: movzx   eax, word ptr [eax+8]
0x4802F3: test    ax, ax
0x4802F6: jz      short loc_480336
0x4802F8: movzx   eax, ax
0x4802FB: xor     ecx, ecx
0x4802FD: mov     edx, 0Ch
0x480302: mul     edx
0x480304: seto    cl
0x480307: push    esi
0x480308: neg     ecx
0x48030A: or      ecx, eax
0x48030C: push    ecx; Size
0x48030D: call    FormHeapAlloc
0x480312: mov     esi, eax
0x480314: mov     eax, [edi+0B4h]
0x48031A: mov     ecx, [eax+1Ch]
0x48031D: movzx   edx, word ptr [eax+8]
0x480321: add     edi, 64h ; 'd'
0x480324: push    edi
0x480325: push    esi
0x480326: push    ecx
0x480327: push    edx
0x480328: call    dword ptr ds:0B27168h
0x48032E: add     esp, 14h
0x480331: mov     eax, esi
0x480333: pop     esi
0x480334: pop     edi
0x480335: retn
0x480336: xor     eax, eax
0x480338: pop     edi
0x480339: retn
