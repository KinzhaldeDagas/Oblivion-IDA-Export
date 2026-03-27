0x99E56A: push    ebp
0x99E56B: mov     ebp, esp
0x99E56D: sub     esp, 14h
0x99E570: push    ebx
0x99E571: push    esi
0x99E572: push    [ebp+arg_8]; struct localeinfo_struct *
0x99E575: xor     ebx, ebx
0x99E577: lea     ecx, [ebp+var_14]; this
0x99E57A: mov     [ebp+var_4], ebx
0x99E57D: call    ??0_LocaleUpdate@@QAE@PAUlocaleinfo_struct@@@Z
0x99E582: mov     esi, [ebp+var_10]
0x99E585: cmp     [esi+8], ebx
0x99E588: jnz     short loc_99E5A9
0x99E58A: push    [ebp+arg_4]; Ch
0x99E58D: push    [ebp+Str]; Str
0x99E590: call    _strrchr
0x99E595: cmp     [ebp+var_8], bl
0x99E598: pop     ecx
0x99E599: pop     ecx
0x99E59A: jz      loc_99E626
0x99E5A0: mov     ecx, [ebp+var_C]
0x99E5A3: and     dword ptr [ecx+70h], 0FFFFFFFDh
0x99E5A7: jmp     short loc_99E626
0x99E5A9: mov     ecx, [ebp+Str]
0x99E5AC: cmp     ecx, ebx
0x99E5AE: jnz     short loc_99E5D8
0x99E5B0: call    __errno
0x99E5B5: push    ebx
0x99E5B6: push    ebx
0x99E5B7: push    ebx
0x99E5B8: push    ebx
0x99E5B9: push    ebx
0x99E5BA: mov     dword ptr [eax], 16h
0x99E5C0: call    __invalid_parameter
0x99E5C5: add     esp, 14h
0x99E5C8: cmp     [ebp+var_8], bl
0x99E5CB: jz      short loc_99E5D4
0x99E5CD: mov     eax, [ebp+var_C]
0x99E5D0: and     dword ptr [eax+70h], 0FFFFFFFDh
0x99E5D4: xor     eax, eax
0x99E5D6: jmp     short loc_99E626
0x99E5D8: push    edi
0x99E5D9: mov     dl, [ecx]
0x99E5DB: movzx   eax, dl
0x99E5DE: movzx   edi, al
0x99E5E1: test    byte ptr [edi+esi+1Dh], 4
0x99E5E6: jz      short loc_99E609
0x99E5E8: inc     ecx
0x99E5E9: mov     dl, [ecx]
0x99E5EB: cmp     dl, bl
0x99E5ED: jz      short loc_99E604
0x99E5EF: movzx   edi, dl
0x99E5F2: shl     eax, 8
0x99E5F5: or      eax, edi
0x99E5F7: cmp     [ebp+arg_4], eax
0x99E5FA: jnz     short loc_99E611
0x99E5FC: lea     eax, [ecx-1]
0x99E5FF: mov     [ebp+var_4], eax
0x99E602: jmp     short loc_99E611
0x99E604: cmp     [ebp+var_4], ebx
0x99E607: jmp     short loc_99E60C
0x99E609: cmp     [ebp+arg_4], eax
0x99E60C: jnz     short loc_99E611
0x99E60E: mov     [ebp+var_4], ecx
0x99E611: inc     ecx
0x99E612: cmp     dl, bl
0x99E614: jnz     short loc_99E5D9
0x99E616: cmp     [ebp+var_8], bl
0x99E619: pop     edi
0x99E61A: jz      short loc_99E623
0x99E61C: mov     eax, [ebp+var_C]
0x99E61F: and     dword ptr [eax+70h], 0FFFFFFFDh
0x99E623: mov     eax, [ebp+var_4]
0x99E626: pop     esi
0x99E627: pop     ebx
0x99E628: leave
0x99E629: retn
