0x99768C: push    ebp
0x99768D: mov     ebp, esp
0x99768F: sub     esp, 10h
0x997692: push    ebx
0x997693: push    esi
0x997694: push    [ebp+arg_8]; struct localeinfo_struct *
0x997697: lea     ecx, [ebp+var_10]; this
0x99769A: call    ??0_LocaleUpdate@@QAE@PAUlocaleinfo_struct@@@Z
0x99769F: mov     esi, [ebp+arg_0]
0x9976A2: xor     ebx, ebx
0x9976A4: cmp     esi, ebx
0x9976A6: jnz     short loc_9976D1
0x9976A8: call    __errno
0x9976AD: push    ebx
0x9976AE: push    ebx
0x9976AF: push    ebx
0x9976B0: push    ebx
0x9976B1: push    ebx
0x9976B2: mov     dword ptr [eax], 16h
0x9976B8: call    __invalid_parameter
0x9976BD: add     esp, 14h
0x9976C0: cmp     [ebp+var_4], bl
0x9976C3: jz      short loc_9976CC
0x9976C5: mov     eax, [ebp+var_8]
0x9976C8: and     dword ptr [eax+70h], 0FFFFFFFDh
0x9976CC: or      eax, 0FFFFFFFFh
0x9976CF: jmp     short loc_997721
0x9976D1: mov     eax, [ebp+var_10.mbcinfo]
0x9976D4: cmp     [eax+8], ebx
0x9976D7: jnz     short loc_9976E9
0x9976D9: cmp     [ebp+var_4], bl
0x9976DC: jz      short loc_9976E5
0x9976DE: mov     eax, [ebp+var_8]
0x9976E1: and     dword ptr [eax+70h], 0FFFFFFFDh
0x9976E5: xor     eax, eax
0x9976E7: jmp     short loc_997721
0x9976E9: or      eax, 0FFFFFFFFh
0x9976EC: cmp     [ebp+arg_4], ebx
0x9976EF: jnz     short loc_9976F5
0x9976F1: cmp     [esi], bl
0x9976F3: jz      short loc_9976C0
0x9976F5: movzx   ecx, byte ptr [esi]
0x9976F8: cmp     cl, bl
0x9976FA: jz      short loc_9976A8
0x9976FC: lea     edx, [ebp+var_10]
0x9976FF: push    edx; struct localeinfo_struct *
0x997700: push    eax; int
0x997701: push    ecx; char
0x997702: call    __mbbtype_l
0x997707: mov     ecx, [ebp+arg_4]
0x99770A: add     esp, 0Ch
0x99770D: inc     esi
0x99770E: dec     [ebp+arg_4]
0x997711: test    ecx, ecx
0x997713: jnz     short loc_9976EC
0x997715: cmp     [ebp+var_4], bl
0x997718: jz      short loc_997721
0x99771A: mov     ecx, [ebp+var_8]
0x99771D: and     dword ptr [ecx+70h], 0FFFFFFFDh
0x997721: pop     esi
0x997722: pop     ebx
0x997723: leave
0x997724: retn
