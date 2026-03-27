0x980C11: push    ebp
0x980C12: mov     ebp, esp
0x980C14: sub     esp, 10h
0x980C17: push    esi
0x980C18: mov     esi, [ebp+arg_4]
0x980C1B: test    esi, esi
0x980C1D: jnz     short loc_980C31
0x980C1F: call    ____lc_handle_func
0x980C24: mov     eax, [eax+8]
0x980C27: mov     [ebp+Locale], eax
0x980C2A: call    ____lc_codepage_func
0x980C2F: jmp     short loc_980C39
0x980C31: mov     eax, [esi]
0x980C33: mov     [ebp+Locale], eax
0x980C36: mov     eax, [esi+4]
0x980C39: cmp     [ebp+Locale], 0
0x980C3D: mov     [ebp+var_10], eax
0x980C40: jnz     short loc_980C59
0x980C42: mov     eax, [ebp+C]
0x980C45: lea     ecx, [eax-61h]
0x980C48: cmp     ecx, 19h
0x980C4B: ja      loc_980D22
0x980C51: sub     eax, 20h ; ' '
0x980C54: jmp     loc_980D22
0x980C59: push    ebx
0x980C5A: mov     ebx, [ebp+C]
0x980C5D: cmp     ebx, 100h
0x980C63: jnb     short loc_980C86
0x980C65: test    esi, esi
0x980C67: jnz     short loc_980C79
0x980C69: push    ebx; C
0x980C6A: call    _islower
0x980C6F: test    eax, eax
0x980C71: pop     ecx
0x980C72: jnz     short loc_980C8A
0x980C74: jmp     loc_980D07
0x980C79: mov     eax, [esi+8]
0x980C7C: test    byte ptr [eax+ebx*2], 2
0x980C80: jz      loc_980D07
0x980C86: test    esi, esi
0x980C88: jnz     short loc_980CA5
0x980C8A: mov     [ebp+var_8], ebx
0x980C8D: sar     [ebp+var_8], 8
0x980C91: call    ___pctype_func
0x980C96: movzx   ecx, byte ptr [ebp+var_8]
0x980C9A: movzx   eax, word ptr [eax+ecx*2]
0x980C9E: and     eax, 8000h
0x980CA3: jmp     short loc_980CC1
0x980CA5: mov     ecx, [esi+8]
0x980CA8: mov     [ebp+var_8], ebx
0x980CAB: sar     [ebp+var_8], 8
0x980CAF: mov     eax, [ebp+var_8]
0x980CB2: and     eax, 0FFh
0x980CB7: movzx   eax, word ptr [ecx+eax*2]
0x980CBB: shr     eax, 0Fh
0x980CBE: and     eax, 1
0x980CC1: test    eax, eax
0x980CC3: jz      short loc_980CD7
0x980CC5: mov     al, byte ptr [ebp+var_8]
0x980CC8: push    2
0x980CCA: mov     byte ptr [ebp+arg_4], al
0x980CCD: mov     byte ptr [ebp+arg_4+1], bl
0x980CD0: mov     byte ptr [ebp+arg_4+2], 0
0x980CD4: pop     eax
0x980CD5: jmp     short loc_980CE1
0x980CD7: xor     eax, eax
0x980CD9: mov     byte ptr [ebp+arg_4], bl
0x980CDC: mov     byte ptr [ebp+arg_4+1], 0
0x980CE0: inc     eax
0x980CE1: push    1; int
0x980CE3: push    [ebp+var_10]; int
0x980CE6: lea     ecx, [ebp+var_4]
0x980CE9: push    3; int
0x980CEB: push    ecx; int
0x980CEC: push    eax; cchSrc
0x980CED: lea     eax, [ebp+arg_4]
0x980CF0: push    eax; int
0x980CF1: push    200h; dwMapFlags
0x980CF6: push    [ebp+Locale]; Locale
0x980CF9: push    0; struct localeinfo_struct *
0x980CFB: call    ___crtLCMapStringA
0x980D00: add     esp, 24h
0x980D03: test    eax, eax
0x980D05: jnz     short loc_980D0B
0x980D07: mov     eax, ebx
0x980D09: jmp     short loc_980D21
0x980D0B: cmp     eax, 1
0x980D0E: jnz     short loc_980D16
0x980D10: movzx   eax, byte ptr [ebp+var_4]
0x980D14: jmp     short loc_980D21
0x980D16: movzx   ecx, byte ptr [ebp+var_4+1]
0x980D1A: xor     eax, eax
0x980D1C: mov     ah, byte ptr [ebp+var_4]
0x980D1F: or      eax, ecx
0x980D21: pop     ebx
0x980D22: pop     esi
0x980D23: leave
0x980D24: retn
