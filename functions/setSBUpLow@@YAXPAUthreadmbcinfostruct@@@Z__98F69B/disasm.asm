0x98F69B: push    ebp
0x98F69C: lea     ebp, [esp-49Ch]
0x98F6A3: sub     esp, 51Ch
0x98F6A9: mov     eax, ___security_cookie
0x98F6AE: xor     eax, ebp
0x98F6B0: mov     [ebp+49Ch+var_4], eax
0x98F6B6: push    ebx
0x98F6B7: push    edi
0x98F6B8: lea     eax, [ebp+49Ch+CPInfo]
0x98F6BB: push    eax; lpCPInfo
0x98F6BC: push    dword ptr [esi+4]; CodePage
0x98F6BF: call    ds:GetCPInfo
0x98F6C5: test    eax, eax
0x98F6C7: mov     edi, 100h
0x98F6CC: jz      loc_98F7C1
0x98F6D2: xor     eax, eax
0x98F6D4: mov     [ebp+eax+49Ch+MultiByteStr], al
0x98F6DB: inc     eax
0x98F6DC: cmp     eax, edi
0x98F6DE: jb      short loc_98F6D4
0x98F6E0: mov     al, [ebp+49Ch+CPInfo.LeadByte]
0x98F6E3: test    al, al
0x98F6E5: mov     [ebp+49Ch+MultiByteStr], 20h ; ' '
0x98F6EC: jz      short loc_98F719
0x98F6EE: lea     ebx, [ebp+49Ch+CPInfo.LeadByte+1]
0x98F6F1: movzx   ecx, al
0x98F6F4: movzx   eax, byte ptr [ebx]
0x98F6F7: cmp     ecx, eax
0x98F6F9: ja      short loc_98F711
0x98F6FB: sub     eax, ecx
0x98F6FD: inc     eax
0x98F6FE: push    eax
0x98F6FF: lea     edx, [ebp+ecx+49Ch+MultiByteStr]
0x98F706: push    20h ; ' '
0x98F708: push    edx
0x98F709: call    __memset
0x98F70E: add     esp, 0Ch
0x98F711: inc     ebx
0x98F712: mov     al, [ebx]
0x98F714: inc     ebx
0x98F715: test    al, al
0x98F717: jnz     short loc_98F6F1
0x98F719: push    0; int
0x98F71B: push    dword ptr [esi+0Ch]; Locale
0x98F71E: lea     eax, [ebp+49Ch+CharType]
0x98F721: push    dword ptr [esi+4]; CodePage
0x98F724: push    eax; lpCharType
0x98F725: push    edi; cbMultiByte
0x98F726: lea     eax, [ebp+49Ch+MultiByteStr]
0x98F72C: push    eax; lpMultiByteStr
0x98F72D: push    1; dwInfoType
0x98F72F: push    0; struct localeinfo_struct *
0x98F731: call    ___crtGetStringTypeA
0x98F736: xor     ebx, ebx
0x98F738: push    ebx; int
0x98F739: push    dword ptr [esi+4]; int
0x98F73C: lea     eax, [ebp+49Ch+var_204]
0x98F742: push    edi; int
0x98F743: push    eax; int
0x98F744: push    edi; cchSrc
0x98F745: lea     eax, [ebp+49Ch+MultiByteStr]
0x98F74B: push    eax; int
0x98F74C: push    edi; dwMapFlags
0x98F74D: push    dword ptr [esi+0Ch]; Locale
0x98F750: push    ebx; struct localeinfo_struct *
0x98F751: call    ___crtLCMapStringA
0x98F756: add     esp, 44h
0x98F759: push    ebx; int
0x98F75A: push    dword ptr [esi+4]; int
0x98F75D: lea     eax, [ebp+49Ch+var_304]
0x98F763: push    edi; int
0x98F764: push    eax; int
0x98F765: push    edi; cchSrc
0x98F766: lea     eax, [ebp+49Ch+MultiByteStr]
0x98F76C: push    eax; int
0x98F76D: push    200h; dwMapFlags
0x98F772: push    dword ptr [esi+0Ch]; Locale
0x98F775: push    ebx; struct localeinfo_struct *
0x98F776: call    ___crtLCMapStringA
0x98F77B: add     esp, 24h
0x98F77E: xor     eax, eax
0x98F780: movzx   ecx, [ebp+eax*2+49Ch+CharType]
0x98F785: test    cl, 1
0x98F788: jz      short loc_98F798
0x98F78A: or      byte ptr [esi+eax+1Dh], 10h
0x98F78F: mov     cl, byte ptr [ebp+eax+49Ch+var_204]
0x98F796: jmp     short loc_98F7A9
0x98F798: test    cl, 2
0x98F79B: jz      short loc_98F7B2
0x98F79D: or      byte ptr [esi+eax+1Dh], 20h
0x98F7A2: mov     cl, byte ptr [ebp+eax+49Ch+var_304]
0x98F7A9: mov     [esi+eax+11Dh], cl
0x98F7B0: jmp     short loc_98F7BA
0x98F7B2: mov     byte ptr [esi+eax+11Dh], 0
0x98F7BA: inc     eax
0x98F7BB: cmp     eax, edi
0x98F7BD: jb      short loc_98F780
0x98F7BF: jmp     short loc_98F80E
0x98F7C1: lea     eax, [esi+11Dh]
0x98F7C7: mov     [ebp+49Ch+var_51C], 0FFFFFF9Fh
0x98F7CE: xor     ecx, ecx
0x98F7D0: sub     [ebp+49Ch+var_51C], eax
0x98F7D3: mov     edx, [ebp+49Ch+var_51C]
0x98F7D6: lea     eax, [esi+ecx+11Dh]
0x98F7DD: add     edx, eax
0x98F7DF: lea     ebx, [edx+20h]
0x98F7E2: cmp     ebx, 19h
0x98F7E5: ja      short loc_98F7F3
0x98F7E7: or      byte ptr [esi+ecx+1Dh], 10h
0x98F7EC: mov     dl, cl
0x98F7EE: add     dl, 20h ; ' '
0x98F7F1: jmp     short loc_98F802
0x98F7F3: cmp     edx, 19h
0x98F7F6: ja      short loc_98F806
0x98F7F8: or      byte ptr [esi+ecx+1Dh], 20h
0x98F7FD: mov     dl, cl
0x98F7FF: sub     dl, 20h ; ' '
0x98F802: mov     [eax], dl
0x98F804: jmp     short loc_98F809
0x98F806: mov     byte ptr [eax], 0
0x98F809: inc     ecx
0x98F80A: cmp     ecx, edi
0x98F80C: jb      short loc_98F7D3
0x98F80E: mov     ecx, [ebp+49Ch+var_4]
0x98F814: pop     edi
0x98F815: xor     ecx, ebp
0x98F817: pop     ebx
0x98F818: call    @__security_check_cookie@4
0x98F81D: add     ebp, 49Ch
0x98F823: leave
0x98F824: retn
