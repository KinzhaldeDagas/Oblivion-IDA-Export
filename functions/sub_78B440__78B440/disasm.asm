0x78B440: push    ebp
0x78B441: mov     ebp, esp
0x78B443: push    0FFFFFFFFh
0x78B445: push    offset SEH_78B440
0x78B44A: mov     eax, large fs:0
0x78B450: push    eax
0x78B451: sub     esp, 40h
0x78B454: push    ebx
0x78B455: push    esi
0x78B456: push    edi
0x78B457: mov     eax, ds:0B30AACh
0x78B45C: xor     eax, ebp
0x78B45E: push    eax
0x78B45F: lea     eax, [ebp+var_C]
0x78B462: mov     large fs:0, eax
0x78B468: mov     [ebp+var_10], esp
0x78B46B: cmp     byte ptr [ecx+45h], 0
0x78B46F: mov     [ebp+var_4], 0
0x78B476: jnz     short loc_78B4A0
0x78B478: mov     eax, [ebp+arg_0]
0x78B47B: mov     edx, [ecx+0Ch]
0x78B47E: mov     [edx+38h], eax
0x78B481: mov     ecx, [ecx+8]
0x78B484: cmp     eax, 1
0x78B487: setz    al
0x78B48A: mov     [ecx], al
0x78B48C: mov     ecx, [ebp+var_C]
0x78B48F: mov     large fs:0, ecx
0x78B496: pop     ecx
0x78B497: pop     edi
0x78B498: pop     esi
0x78B499: pop     ebx
0x78B49A: mov     esp, ebp
0x78B49C: pop     ebp
0x78B49D: retn    4
0x78B4A0: push    45h ; 'E'; MaxCount
0x78B4A2: push    offset aSetleaflightin; "SetLeafLightingMethod() has no effect a"...
0x78B4A7: mov     ecx, offset dword_B2B614
0x78B4AC: call    sub_414500
0x78B4B1: mov     ecx, [ebp+var_C]
0x78B4B4: mov     large fs:0, ecx
0x78B4BB: pop     ecx
0x78B4BC: pop     edi
0x78B4BD: pop     esi
0x78B4BE: pop     ebx
0x78B4BF: mov     esp, ebp
0x78B4C1: pop     ebp
0x78B4C2: retn    4
0x78B4C5: mov     ecx, [ebp+var_14]
0x78B4C8: mov     edx, [ecx]
0x78B4CA: mov     eax, [edx+4]
0x78B4CD: call    eax
0x78B4CF: push    eax
0x78B4D0: push    offset aCspeedtreert_2; "CSpeedTreeRT::SetLeafLightingMethod"
0x78B4D5: push    offset aSFailedS; "%s - failed [%s]"
0x78B4DA: lea     esi, [ebp+var_30]
0x78B4DD: call    sub_7A54A0
0x78B4E2: add     esp, 0Ch
0x78B4E5: cmp     dword ptr [eax+18h], 10h
0x78B4E9: mov     byte ptr [ebp+var_4], 2
0x78B4ED: jb      short loc_78B4F4
0x78B4EF: mov     eax, [eax+4]
0x78B4F2: jmp     short loc_78B4F7
0x78B4F4: add     eax, 4
0x78B4F7: push    eax; Src
0x78B4F8: call    sub_7895E0
0x78B4FD: add     esp, 4
0x78B500: lea     ecx, [ebp+var_30]
0x78B503: call    sub_79AB00
0x78B508: mov     eax, offset loc_78B50E
0x78B50D: retn
0x78B50E: mov     ecx, [ebp+var_C]
0x78B511: mov     large fs:0, ecx
0x78B518: pop     ecx
0x78B519: pop     edi
0x78B51A: pop     esi
0x78B51B: pop     ebx
0x78B51C: mov     esp, ebp
0x78B51E: pop     ebp
0x78B51F: retn    4
0x78B522: push    offset aCspeedtreert_2; "CSpeedTreeRT::SetLeafLightingMethod"
0x78B527: push    offset aSThrewAnUnknow; "%s - threw an unknown system exception"
0x78B52C: lea     esi, [ebp+var_4C]
0x78B52F: call    sub_7A54A0
0x78B534: add     esp, 8
0x78B537: cmp     dword ptr [eax+18h], 10h
0x78B53B: mov     byte ptr [ebp+var_4], 3
0x78B53F: jb      short loc_78B546
0x78B541: mov     eax, [eax+4]
0x78B544: jmp     short loc_78B549
0x78B546: add     eax, 4
0x78B549: push    eax; Src
0x78B54A: call    sub_7895E0
0x78B54F: add     esp, 4
0x78B552: lea     ecx, [ebp+var_4C]
0x78B555: call    sub_79AB00
0x78B55A: mov     eax, offset loc_78B48C
0x78B55F: retn
