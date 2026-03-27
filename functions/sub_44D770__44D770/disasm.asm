0x44D770: mov     eax, ds:0B0686Ch
0x44D775: xor     ecx, ecx
0x44D777: mov     edx, 0Ch
0x44D77C: mul     edx
0x44D77E: seto    cl
0x44D781: neg     ecx
0x44D783: or      ecx, eax
0x44D785: push    ecx; Size
0x44D786: call    FormHeapAlloc
0x44D78B: mov     ecx, ds:0B0686Ch
0x44D791: lea     ecx, [ecx+ecx*2]
0x44D794: mov     ds:0B33EACh, eax
0x44D799: add     esp, 4
0x44D79C: mov     dword ptr [eax+ecx*4-0Ch], 0
0x44D7A4: mov     ecx, 1
0x44D7A9: mov     eax, 0Ch
0x44D7AE: push    esi
0x44D7AF: nop
0x44D7B0: mov     edx, ds:0B33EACh
0x44D7B6: lea     esi, [eax+edx+0Ch]
0x44D7BA: mov     [eax+edx], esi
0x44D7BD: mov     edx, ds:0B0686Ch
0x44D7C3: mov     esi, ecx
0x44D7C5: add     edx, 0FFFFFFFEh
0x44D7C8: add     ecx, 1
0x44D7CB: add     eax, 0Ch
0x44D7CE: cmp     esi, edx
0x44D7D0: jb      short loc_44D7B0
0x44D7D2: mov     eax, ds:0B33EA8h
0x44D7D7: test    eax, eax
0x44D7D9: pop     esi
0x44D7DA: jz      short loc_44D7F7
0x44D7DC: mov     ecx, ds:0B33EACh
0x44D7E2: mov     [ecx], eax
0x44D7E4: mov     eax, ds:0B33EACh
0x44D7E9: mov     ds:0B33EA8h, eax
0x44D7EE: add     eax, 0Ch
0x44D7F1: mov     ds:0B33EACh, eax
0x44D7F6: retn
0x44D7F7: mov     eax, ds:0B33EACh
0x44D7FC: mov     ds:0B33EA8h, eax
0x44D801: mov     dword ptr [eax], 0
0x44D807: add     dword ptr ds:0B33EACh, 0Ch
0x44D80E: retn
