0x992CE0: push    ebp
0x992CE1: mov     ebp, esp
0x992CE3: sub     esp, 10h
0x992CE6: mov     eax, [ebp+arg_0]
0x992CE9: push    ebx
0x992CEA: push    esi
0x992CEB: xor     ebx, ebx
0x992CED: mov     esi, eax
0x992CEF: and     esi, 1Fh
0x992CF2: inc     ebx
0x992CF3: test    al, 8
0x992CF5: mov     [ebp+var_4], esi
0x992CF8: jz      short loc_992D0E
0x992CFA: test    byte ptr [ebp+arg_8], bl
0x992CFD: jz      short loc_992D0E
0x992CFF: push    ebx
0x992D00: call    __set_statfp
0x992D05: pop     ecx
0x992D06: and     esi, 0FFFFFFF7h
0x992D09: jmp     loc_992E9F
0x992D0E: test    al, 4
0x992D10: jz      short loc_992D28
0x992D12: test    byte ptr [ebp+arg_8], 4
0x992D16: jz      short loc_992D28
0x992D18: push    4
0x992D1A: call    __set_statfp
0x992D1F: pop     ecx
0x992D20: and     esi, 0FFFFFFFBh
0x992D23: jmp     loc_992E9F
0x992D28: test    bl, al
0x992D2A: jz      loc_992DCA
0x992D30: test    byte ptr [ebp+arg_8], 8
0x992D34: jz      loc_992DCA
0x992D3A: push    8
0x992D3C: call    __set_statfp
0x992D41: mov     eax, [ebp+arg_8]
0x992D44: pop     ecx
0x992D45: mov     ecx, 0C00h
0x992D4A: and     eax, ecx
0x992D4C: jz      short loc_992DA2
0x992D4E: cmp     eax, 400h
0x992D53: jz      short loc_992D8C
0x992D55: cmp     eax, 800h
0x992D5A: jz      short loc_992D76
0x992D5C: cmp     eax, ecx
0x992D5E: jnz     short loc_992DC2
0x992D60: fldz
0x992D62: mov     ecx, [ebp+arg_4]
0x992D65: fcomp   qword ptr [ecx]
0x992D67: fnstsw  ax
0x992D69: fld     dbl_B31B50
0x992D6F: test    ah, 5
0x992D72: jnp     short loc_992DC0
0x992D74: jmp     short loc_992DBE
0x992D76: fldz
0x992D78: mov     ecx, [ebp+arg_4]
0x992D7B: fcomp   qword ptr [ecx]
0x992D7D: fnstsw  ax
0x992D7F: test    ah, 5
0x992D82: jnp     short loc_992DB0
0x992D84: fld     dbl_B31B50
0x992D8A: jmp     short loc_992DBE
0x992D8C: fldz
0x992D8E: mov     ecx, [ebp+arg_4]
0x992D91: fcomp   qword ptr [ecx]
0x992D93: fnstsw  ax
0x992D95: test    ah, 5
0x992D98: jp      short loc_992DB8
0x992D9A: fld     dbl_B31B50
0x992DA0: jmp     short loc_992DC0
0x992DA2: fldz
0x992DA4: mov     ecx, [ebp+arg_4]
0x992DA7: fcomp   qword ptr [ecx]
0x992DA9: fnstsw  ax
0x992DAB: test    ah, 5
0x992DAE: jp      short loc_992DB8
0x992DB0: fld     dbl_B31B40
0x992DB6: jmp     short loc_992DC0
0x992DB8: fld     dbl_B31B40
0x992DBE: fchs
0x992DC0: fstp    qword ptr [ecx]
0x992DC2: and     esi, 0FFFFFFFEh
0x992DC5: jmp     loc_992E9F
0x992DCA: test    al, 2
0x992DCC: jz      loc_992E9F
0x992DD2: test    byte ptr [ebp+arg_8], 10h
0x992DD6: jz      loc_992E9F
0x992DDC: xor     esi, esi
0x992DDE: test    al, 10h
0x992DE0: jz      short loc_992DE4
0x992DE2: mov     esi, ebx
0x992DE4: fldz
0x992DE6: push    edi
0x992DE7: mov     edi, [ebp+arg_4]
0x992DEA: fcomp   qword ptr [edi]
0x992DEC: fnstsw  ax
0x992DEE: test    ah, 44h
0x992DF1: jnp     loc_992E89
0x992DF7: fld     qword ptr [edi]
0x992DF9: lea     eax, [ebp+var_8]
0x992DFC: push    eax; int
0x992DFD: push    ecx
0x992DFE: push    ecx
0x992DFF: fstp    [esp+28h+var_28]; double
0x992E02: call    __decomp
0x992E07: mov     ecx, [ebp+var_8]
0x992E0A: fstp    [ebp+var_10]
0x992E0D: add     ecx, 0FFFFFA00h
0x992E13: add     esp, 0Ch
0x992E16: cmp     ecx, 0FFFFFBCEh
0x992E1C: jge     short loc_992E2B
0x992E1E: fld     [ebp+var_10]
0x992E21: mov     esi, ebx
0x992E23: fmul    ds:dbl_A2FC68
0x992E29: jmp     short loc_992E7F
0x992E2B: fldz
0x992E2D: fcomp   [ebp+var_10]
0x992E30: fnstsw  ax
0x992E32: test    ah, 41h
0x992E35: jnz     short loc_992E3B
0x992E37: mov     edx, ebx
0x992E39: jmp     short loc_992E3D
0x992E3B: xor     edx, edx
0x992E3D: movzx   eax, byte ptr [ebp+var_10+6]
0x992E41: and     eax, 0Fh
0x992E44: or      eax, 10h
0x992E47: mov     word ptr [ebp+var_10+6], ax
0x992E4B: mov     eax, 0FFFFFC03h
0x992E50: cmp     ecx, eax
0x992E52: jge     short loc_992E76
0x992E54: sub     eax, ecx
0x992E56: test    byte ptr [ebp+var_10], bl
0x992E59: jz      short loc_992E61
0x992E5B: test    esi, esi
0x992E5D: jnz     short loc_992E61
0x992E5F: mov     esi, ebx
0x992E61: shr     dword ptr [ebp+var_10], 1
0x992E64: test    byte ptr [ebp+var_10+4], bl
0x992E67: jz      short loc_992E70
0x992E69: or      dword ptr [ebp+var_10], 80000000h
0x992E70: shr     dword ptr [ebp+var_10+4], 1
0x992E73: dec     eax
0x992E74: jnz     short loc_992E56
0x992E76: test    edx, edx
0x992E78: jz      short loc_992E82
0x992E7A: fld     [ebp+var_10]
0x992E7D: fchs
0x992E7F: fstp    [ebp+var_10]
0x992E82: fld     [ebp+var_10]
0x992E85: fstp    qword ptr [edi]
0x992E87: jmp     short loc_992E8B
0x992E89: mov     esi, ebx
0x992E8B: test    esi, esi
0x992E8D: pop     edi
0x992E8E: jz      short loc_992E98
0x992E90: push    10h
0x992E92: call    __set_statfp
0x992E97: pop     ecx
0x992E98: and     [ebp+var_4], 0FFFFFFFDh
0x992E9C: mov     esi, [ebp+var_4]
0x992E9F: test    byte ptr [ebp+arg_0], 10h
0x992EA3: jz      short loc_992EB6
0x992EA5: test    byte ptr [ebp+arg_8], 20h
0x992EA9: jz      short loc_992EB6
0x992EAB: push    20h ; ' '
0x992EAD: call    __set_statfp
0x992EB2: pop     ecx
0x992EB3: and     esi, 0FFFFFFEFh
0x992EB6: xor     eax, eax
0x992EB8: test    esi, esi
0x992EBA: pop     esi
0x992EBB: setz    al
0x992EBE: pop     ebx
0x992EBF: leave
0x992EC0: retn
