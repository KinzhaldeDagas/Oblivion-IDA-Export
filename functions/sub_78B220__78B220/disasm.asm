0x78B220: push    ebp
0x78B221: mov     ebp, esp
0x78B223: push    0FFFFFFFFh
0x78B225: push    offset SEH_78B220
0x78B22A: mov     eax, large fs:0
0x78B230: push    eax
0x78B231: sub     esp, 44h
0x78B234: push    ebx
0x78B235: push    esi
0x78B236: push    edi
0x78B237: mov     eax, ds:0B30AACh
0x78B23C: xor     eax, ebp
0x78B23E: push    eax
0x78B23F: lea     eax, [ebp+var_C]
0x78B242: mov     large fs:0, eax
0x78B248: mov     [ebp+var_10], esp
0x78B24B: mov     eax, [ecx]
0x78B24D: xor     edx, edx
0x78B24F: cmp     [eax+21h], dl
0x78B252: mov     [ebp+var_14], edx
0x78B255: mov     [ebp+var_4], edx
0x78B258: jz      short loc_78B275
0x78B25A: mov     eax, [eax+48h]
0x78B25D: mov     [ebp+var_14], eax
0x78B260: mov     eax, [ebp+var_14]
0x78B263: mov     ecx, [ebp+var_C]
0x78B266: mov     large fs:0, ecx
0x78B26D: pop     ecx
0x78B26E: pop     edi
0x78B26F: pop     esi
0x78B270: pop     ebx
0x78B271: mov     esp, ebp
0x78B273: pop     ebp
0x78B274: retn
0x78B275: push    47h ; 'G'; MaxCount
0x78B277: push    offset aSettreesizeHas; "SetTreeSize() has no effect after Delet"...
0x78B27C: mov     ecx, offset dword_B2B614
0x78B281: call    sub_414500
0x78B286: jmp     short loc_78B260
0x78B288: mov     ecx, [ebp+var_18]
0x78B28B: mov     edx, [ecx]
0x78B28D: mov     eax, [edx+4]
0x78B290: call    eax
0x78B292: push    eax
0x78B293: push    offset aCspeedtreertSe; "CSpeedTreeRT::SetTreeSize"
0x78B298: push    offset aSFailedS; "%s - failed [%s]"
0x78B29D: lea     esi, [ebp+var_34]
0x78B2A0: call    sub_7A54A0
0x78B2A5: add     esp, 0Ch
0x78B2A8: cmp     dword ptr [eax+18h], 10h
0x78B2AC: mov     byte ptr [ebp+var_4], 2
0x78B2B0: jb      short loc_78B2B7
0x78B2B2: mov     eax, [eax+4]
0x78B2B5: jmp     short loc_78B2BA
0x78B2B7: add     eax, 4
0x78B2BA: push    eax; Src
0x78B2BB: call    sub_7895E0
0x78B2C0: add     esp, 4
0x78B2C3: lea     ecx, [ebp+var_34]
0x78B2C6: call    sub_79AB00
0x78B2CB: mov     eax, offset loc_78B2D1
0x78B2D0: retn
0x78B2D1: jmp     short loc_78B260
0x78B2D3: push    offset aCspeedtreertSe; "CSpeedTreeRT::SetTreeSize"
0x78B2D8: push    offset aSThrewAnUnknow; "%s - threw an unknown system exception"
0x78B2DD: lea     esi, [ebp+var_50]
0x78B2E0: call    sub_7A54A0
0x78B2E5: add     esp, 8
0x78B2E8: cmp     dword ptr [eax+18h], 10h
0x78B2EC: mov     byte ptr [ebp+var_4], 3
0x78B2F0: jb      short loc_78B2F7
0x78B2F2: mov     eax, [eax+4]
0x78B2F5: jmp     short loc_78B2FA
0x78B2F7: add     eax, 4
0x78B2FA: push    eax; Src
0x78B2FB: call    sub_7895E0
0x78B300: add     esp, 4
0x78B303: lea     ecx, [ebp+var_50]
0x78B306: call    sub_79AB00
0x78B30B: mov     eax, offset loc_78B260
0x78B310: retn
