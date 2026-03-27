0x6BD790: push    0FFFFFFFFh
0x6BD792: push    offset SEH_6E3250
0x6BD797: mov     eax, large fs:0
0x6BD79D: push    eax
0x6BD79E: push    esi
0x6BD79F: push    edi
0x6BD7A0: mov     eax, ds:0B30AACh
0x6BD7A5: xor     eax, esp
0x6BD7A7: push    eax
0x6BD7A8: lea     eax, [esp+18h+var_C]
0x6BD7AC: mov     large fs:0, eax
0x6BD7B2: mov     edi, [esp+18h+size]
0x6BD7B6: xor     ecx, ecx
0x6BD7B8: mov     eax, edi
0x6BD7BA: mov     edx, 24h ; '$'
0x6BD7BF: mul     edx
0x6BD7C1: seto    cl
0x6BD7C4: neg     ecx
0x6BD7C6: or      ecx, eax
0x6BD7C8: xor     eax, eax
0x6BD7CA: add     ecx, 4
0x6BD7CD: setb    al
0x6BD7D0: neg     eax
0x6BD7D2: or      eax, ecx
0x6BD7D4: push    eax; Size
0x6BD7D5: call    FormHeapAlloc
0x6BD7DA: add     esp, 4
0x6BD7DD: mov     [esp+18h+size], eax
0x6BD7E1: test    eax, eax
0x6BD7E3: mov     [esp+18h+var_4], 0
0x6BD7EB: jz      short loc_6BD819
0x6BD7ED: push    offset ?ClearComponentReferences@TESTexture@@UAEXXZ?; a5
0x6BD7F2: push    offset sub_6C0AD0; a4
0x6BD7F7: push    edi; size
0x6BD7F8: lea     esi, [eax+4]
0x6BD7FB: push    24h ; '$'; a2
0x6BD7FD: push    esi; a1
0x6BD7FE: mov     [eax], edi
0x6BD800: call    ArrayConstructor
0x6BD805: mov     eax, esi
0x6BD807: mov     ecx, [esp+18h+var_C]
0x6BD80B: mov     large fs:0, ecx
0x6BD812: pop     ecx
0x6BD813: pop     edi
0x6BD814: pop     esi
0x6BD815: add     esp, 0Ch
0x6BD818: retn
0x6BD819: xor     eax, eax
0x6BD81B: mov     ecx, [esp+18h+var_C]
0x6BD81F: mov     large fs:0, ecx
0x6BD826: pop     ecx
0x6BD827: pop     edi
0x6BD828: pop     esi
0x6BD829: add     esp, 0Ch
0x6BD82C: retn
