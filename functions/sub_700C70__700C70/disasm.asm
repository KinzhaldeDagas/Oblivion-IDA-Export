0x700C70: push    0FFFFFFFFh
0x700C72: push    offset SEH_6C2790
0x700C77: mov     eax, large fs:0
0x700C7D: push    eax
0x700C7E: sub     esp, 14h
0x700C81: push    ebx
0x700C82: push    ebp
0x700C83: push    esi
0x700C84: push    edi
0x700C85: mov     eax, ds:0B30AACh
0x700C8A: xor     eax, esp
0x700C8C: push    eax
0x700C8D: lea     eax, [esp+34h+var_C]
0x700C91: mov     large fs:0, eax
0x700C97: push    70h ; 'p'; Size
0x700C99: call    FormHeapAlloc
0x700C9E: add     esp, 4
0x700CA1: mov     dword ptr [esp+34h+var_1C], eax
0x700CA5: mov     esi, [esp+34h+arg_8]
0x700CA9: xor     edi, edi
0x700CAB: cmp     eax, edi
0x700CAD: mov     [esp+34h+var_4], edi
0x700CB1: jz      short loc_700CCC
0x700CB3: mov     ecx, [esp+34h+arg_C]
0x700CB7: push    ecx
0x700CB8: push    1
0x700CBA: push    esi
0x700CBB: push    20h ; ' '
0x700CBD: push    20h ; ' '
0x700CBF: mov     ecx, eax
0x700CC1: call    NiPixelData__NiPixelData
0x700CC6: mov     [esp+34h+var_20], eax
0x700CCA: jmp     short loc_700CD0
0x700CCC: mov     [esp+34h+var_20], edi
0x700CD0: push    edi
0x700CD1: mov     ecx, esi
0x700CD3: call    sub_700C00
0x700CD8: mov     ebx, [esp+34h+arg_0]
0x700CDC: fnstcw  word ptr [esp+34h+arg_0]
0x700CE0: fld     dword ptr [ebx]
0x700CE2: movzx   ecx, al
0x700CE5: movzx   eax, word ptr [esp+34h+arg_0]
0x700CEA: fmul    qword ptr ds:0A3DDD8h
0x700CF0: or      eax, 0C00h
0x700CF5: mov     dword ptr [esp+34h+var_1C], eax
0x700CF9: push    edi
0x700CFA: fldcw   word ptr [esp+38h+var_1C]
0x700CFE: fistp   [esp+38h+Src]
0x700D02: mov     ebp, dword ptr [esp+38h+Src]
0x700D06: shl     ebp, cl
0x700D08: mov     ecx, esi
0x700D0A: fldcw   word ptr [esp+38h+arg_0]
0x700D0E: call    sub_700B60
0x700D13: mov     edi, eax
0x700D15: push    1
0x700D17: mov     ecx, esi
0x700D19: and     edi, ebp
0x700D1B: call    sub_700C00
0x700D20: fld     dword ptr [ebx+4]
0x700D23: fmul    qword ptr ds:0A3DDD8h
0x700D29: movzx   ecx, al
0x700D2C: fnstcw  word ptr [esp+34h+arg_0]
0x700D30: push    1
0x700D32: movzx   eax, word ptr [esp+38h+arg_0]
0x700D37: or      eax, 0C00h
0x700D3C: mov     dword ptr [esp+38h+var_1C], eax
0x700D40: fldcw   word ptr [esp+38h+var_1C]
0x700D44: fistp   [esp+38h+Src]
0x700D48: mov     ebp, dword ptr [esp+38h+Src]
0x700D4C: shl     ebp, cl
0x700D4E: mov     ecx, esi
0x700D50: fldcw   word ptr [esp+38h+arg_0]
0x700D54: call    sub_700B60
0x700D59: and     eax, ebp
0x700D5B: push    2
0x700D5D: mov     ecx, esi
0x700D5F: or      edi, eax
0x700D61: call    sub_700C00
0x700D66: fld     dword ptr [ebx+8]
0x700D69: fmul    qword ptr ds:0A3DDD8h
0x700D6F: movzx   ecx, al
0x700D72: fnstcw  word ptr [esp+34h+arg_0]
0x700D76: push    2
0x700D78: movzx   eax, word ptr [esp+38h+arg_0]
0x700D7D: or      eax, 0C00h
0x700D82: mov     dword ptr [esp+38h+var_1C], eax
0x700D86: fldcw   word ptr [esp+38h+var_1C]
0x700D8A: fistp   [esp+38h+Src]
0x700D8E: mov     ebp, dword ptr [esp+38h+Src]
0x700D92: shl     ebp, cl
0x700D94: mov     ecx, esi
0x700D96: fldcw   word ptr [esp+38h+arg_0]
0x700D9A: call    sub_700B60
0x700D9F: and     eax, ebp
0x700DA1: push    3
0x700DA3: mov     ecx, esi
0x700DA5: or      edi, eax
0x700DA7: call    sub_700C00
0x700DAC: fld     dword ptr [ebx+0Ch]
0x700DAF: fmul    qword ptr ds:0A3DDD8h
0x700DB5: movzx   ecx, al
0x700DB8: fnstcw  word ptr [esp+34h+arg_0]
0x700DBC: push    3
0x700DBE: movzx   eax, word ptr [esp+38h+arg_0]
0x700DC3: or      eax, 0C00h
0x700DC8: mov     dword ptr [esp+38h+var_1C], eax
0x700DCC: fldcw   word ptr [esp+38h+var_1C]
0x700DD0: fistp   [esp+38h+Src]
0x700DD4: mov     ebx, dword ptr [esp+38h+Src]
0x700DD8: shl     ebx, cl
0x700DDA: mov     ecx, esi
0x700DDC: fldcw   word ptr [esp+38h+arg_0]
0x700DE0: call    sub_700B60
0x700DE5: and     eax, ebx
0x700DE7: or      edi, eax
0x700DE9: push    0
0x700DEB: mov     ecx, esi
0x700DED: mov     dword ptr [esp+38h+Src], edi
0x700DF1: call    sub_700C00
0x700DF6: fnstcw  word ptr [esp+34h+arg_0]
0x700DFA: mov     ebx, [esp+34h+arg_4]
0x700DFE: fld     dword ptr [ebx]
0x700E00: fmul    qword ptr ds:0A3DDD8h
0x700E06: movzx   ecx, al
0x700E09: movzx   eax, word ptr [esp+34h+arg_0]
0x700E0E: or      eax, 0C00h
0x700E13: mov     [esp+34h+arg_4], eax
0x700E17: push    0
0x700E19: fldcw   word ptr [esp+38h+arg_4]
0x700E1D: fistp   [esp+38h+var_1C]
0x700E21: mov     ebp, dword ptr [esp+38h+var_1C]
0x700E25: shl     ebp, cl
0x700E27: mov     ecx, esi
0x700E29: fldcw   word ptr [esp+38h+arg_0]
0x700E2D: call    sub_700B60
0x700E32: mov     edi, eax
0x700E34: push    1
0x700E36: mov     ecx, esi
0x700E38: and     edi, ebp
0x700E3A: call    sub_700C00
0x700E3F: fld     dword ptr [ebx+4]
0x700E42: fmul    qword ptr ds:0A3DDD8h
0x700E48: movzx   ecx, al
0x700E4B: fnstcw  word ptr [esp+34h+arg_0]
0x700E4F: push    1
0x700E51: movzx   eax, word ptr [esp+38h+arg_0]
0x700E56: or      eax, 0C00h
0x700E5B: mov     [esp+38h+arg_4], eax
0x700E5F: fldcw   word ptr [esp+38h+arg_4]
0x700E63: fistp   [esp+38h+var_1C]
0x700E67: mov     ebp, dword ptr [esp+38h+var_1C]
0x700E6B: shl     ebp, cl
0x700E6D: mov     ecx, esi
0x700E6F: fldcw   word ptr [esp+38h+arg_0]
0x700E73: call    sub_700B60
0x700E78: and     eax, ebp
0x700E7A: push    2
0x700E7C: mov     ecx, esi
0x700E7E: or      edi, eax
0x700E80: call    sub_700C00
0x700E85: fld     dword ptr [ebx+8]
0x700E88: fmul    qword ptr ds:0A3DDD8h
0x700E8E: movzx   ecx, al
0x700E91: fnstcw  word ptr [esp+34h+arg_0]
0x700E95: push    2
0x700E97: movzx   eax, word ptr [esp+38h+arg_0]
0x700E9C: or      eax, 0C00h
0x700EA1: mov     [esp+38h+arg_4], eax
0x700EA5: fldcw   word ptr [esp+38h+arg_4]
0x700EA9: fistp   [esp+38h+var_1C]
0x700EAD: mov     ebp, dword ptr [esp+38h+var_1C]
0x700EB1: shl     ebp, cl
0x700EB3: mov     ecx, esi
0x700EB5: fldcw   word ptr [esp+38h+arg_0]
0x700EB9: call    sub_700B60
0x700EBE: and     eax, ebp
0x700EC0: push    3
0x700EC2: mov     ecx, esi
0x700EC4: or      edi, eax
0x700EC6: call    sub_700C00
0x700ECB: fld     dword ptr [ebx+0Ch]
0x700ECE: fmul    qword ptr ds:0A3DDD8h
0x700ED4: movzx   ecx, al
0x700ED7: fnstcw  word ptr [esp+34h+arg_0]
0x700EDB: push    3
0x700EDD: movzx   eax, word ptr [esp+38h+arg_0]
0x700EE2: or      eax, 0C00h
0x700EE7: mov     [esp+38h+arg_4], eax
0x700EEB: fldcw   word ptr [esp+38h+arg_4]
0x700EEF: fistp   [esp+38h+var_1C]
0x700EF3: mov     ebx, dword ptr [esp+38h+var_1C]
0x700EF7: shl     ebx, cl
0x700EF9: mov     ecx, esi
0x700EFB: fldcw   word ptr [esp+38h+arg_0]
0x700EFF: call    sub_700B60
0x700F04: and     eax, ebx
0x700F06: or      edi, eax
0x700F08: cmp     [esp+34h+arg_C], 0
0x700F0D: mov     dword ptr [esp+34h+Src+4], edi
0x700F11: mov     [esp+34h+arg_4], 0
0x700F19: jbe     loc_700FA4
0x700F1F: mov     ecx, [esp+34h+var_20]
0x700F23: mov     eax, [ecx+5Ch]
0x700F26: mov     edx, [ecx+60h]
0x700F29: mov     edi, [eax+edx*4]
0x700F2C: imul    edi, [esp+34h+arg_4]
0x700F31: add     edi, [eax]
0x700F33: mov     al, [esi+1]
0x700F36: add     edi, [ecx+50h]
0x700F39: shr     al, 3
0x700F3C: mov     [esp+34h+arg_0], 0
0x700F44: movzx   ebp, al
0x700F47: mov     eax, [esp+34h+arg_0]
0x700F4B: shr     eax, 4
0x700F4E: mov     dword ptr [esp+34h+var_1C], eax
0x700F52: xor     ebx, ebx
0x700F54: jmp     short loc_700F5A
0x700F56: mov     eax, dword ptr [esp+34h+var_1C]
0x700F5A: mov     ecx, ebx
0x700F5C: xor     edx, edx
0x700F5E: shr     ecx, 4
0x700F61: cmp     eax, ecx
0x700F63: setnz   dl
0x700F66: push    ebp; Size
0x700F67: lea     eax, [esp+edx*4+38h+Src]
0x700F6B: push    eax; Src
0x700F6C: push    edi; Dst
0x700F6D: call    _memcpy
0x700F72: add     ebx, 1
0x700F75: add     esp, 0Ch
0x700F78: add     edi, ebp
0x700F7A: cmp     ebx, 20h ; ' '
0x700F7D: jb      short loc_700F56
0x700F7F: mov     eax, [esp+34h+arg_0]
0x700F83: add     eax, 1
0x700F86: cmp     eax, 20h ; ' '
0x700F89: mov     [esp+34h+arg_0], eax
0x700F8D: jb      short loc_700F47
0x700F8F: mov     eax, [esp+34h+arg_4]
0x700F93: add     eax, 1
0x700F96: cmp     eax, [esp+34h+arg_C]
0x700F9A: mov     [esp+34h+arg_4], eax
0x700F9E: jb      loc_700F1F
0x700FA4: mov     eax, [esp+34h+var_20]
0x700FA8: mov     ecx, [esp+34h+var_C]
0x700FAC: mov     large fs:0, ecx
0x700FB3: pop     ecx
0x700FB4: pop     edi
0x700FB5: pop     esi
0x700FB6: pop     ebp
0x700FB7: pop     ebx
0x700FB8: add     esp, 20h
0x700FBB: retn
