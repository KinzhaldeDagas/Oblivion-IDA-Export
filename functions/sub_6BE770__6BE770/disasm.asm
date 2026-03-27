0x6BE770: push    0FFFFFFFFh
0x6BE772: push    offset SEH_6E3250
0x6BE777: mov     eax, large fs:0
0x6BE77D: push    eax
0x6BE77E: push    esi
0x6BE77F: push    edi
0x6BE780: mov     eax, ds:0B30AACh
0x6BE785: xor     eax, esp
0x6BE787: push    eax
0x6BE788: lea     eax, [esp+18h+var_C]
0x6BE78C: mov     large fs:0, eax
0x6BE792: mov     edi, [esp+18h+size]
0x6BE796: xor     ecx, ecx
0x6BE798: mov     eax, edi
0x6BE79A: mov     edx, 48h ; 'H'
0x6BE79F: mul     edx
0x6BE7A1: seto    cl
0x6BE7A4: neg     ecx
0x6BE7A6: or      ecx, eax
0x6BE7A8: xor     eax, eax
0x6BE7AA: add     ecx, 4
0x6BE7AD: setb    al
0x6BE7B0: neg     eax
0x6BE7B2: or      eax, ecx
0x6BE7B4: push    eax; Size
0x6BE7B5: call    FormHeapAlloc
0x6BE7BA: add     esp, 4
0x6BE7BD: mov     [esp+18h+size], eax
0x6BE7C1: test    eax, eax
0x6BE7C3: mov     [esp+18h+var_4], 0
0x6BE7CB: jz      short loc_6BE7F9
0x6BE7CD: push    offset ?ClearComponentReferences@TESTexture@@UAEXXZ?; a5
0x6BE7D2: push    offset sub_6BE430; a4
0x6BE7D7: push    edi; size
0x6BE7D8: lea     esi, [eax+4]
0x6BE7DB: push    48h ; 'H'; a2
0x6BE7DD: push    esi; a1
0x6BE7DE: mov     [eax], edi
0x6BE7E0: call    ArrayConstructor
0x6BE7E5: mov     eax, esi
0x6BE7E7: mov     ecx, [esp+18h+var_C]
0x6BE7EB: mov     large fs:0, ecx
0x6BE7F2: pop     ecx
0x6BE7F3: pop     edi
0x6BE7F4: pop     esi
0x6BE7F5: add     esp, 0Ch
0x6BE7F8: retn
0x6BE7F9: xor     eax, eax
0x6BE7FB: mov     ecx, [esp+18h+var_C]
0x6BE7FF: mov     large fs:0, ecx
0x6BE806: pop     ecx
0x6BE807: pop     edi
0x6BE808: pop     esi
0x6BE809: add     esp, 0Ch
0x6BE80C: retn
