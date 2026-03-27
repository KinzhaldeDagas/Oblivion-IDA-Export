0x83EBC0: push    0FFFFFFFFh
0x83EBC2: push    offset SEH_882120
0x83EBC7: mov     eax, large fs:0
0x83EBCD: push    eax
0x83EBCE: push    ebx
0x83EBCF: push    ebp
0x83EBD0: push    esi
0x83EBD1: push    edi
0x83EBD2: mov     eax, ds:0B30AACh
0x83EBD7: xor     eax, esp
0x83EBD9: push    eax
0x83EBDA: lea     eax, [esp+20h+var_C]
0x83EBDE: mov     large fs:0, eax
0x83EBE4: mov     esi, ecx
0x83EBE6: mov     ebx, [esp+20h+arg_8]
0x83EBEA: mov     eax, [ebx+10h]
0x83EBED: mov     edi, ds:0B45868h
0x83EBF3: push    eax
0x83EBF4: call    sub_848C40
0x83EBF9: mov     ebp, [ebx+0Ch]
0x83EBFC: push    ebp
0x83EBFD: mov     ecx, esi
0x83EBFF: call    sub_848E50
0x83EC04: mov     ebx, [ebx+10h]
0x83EC07: mov     ecx, [esp+20h+arg_0]
0x83EC0B: mov     eax, [esi]
0x83EC0D: mov     edx, [eax+0BCh]
0x83EC13: push    ebx
0x83EC14: push    ebp
0x83EC15: push    ecx
0x83EC16: mov     ecx, esi
0x83EC18: call    edx
0x83EC1A: mov     eax, [edi+24h]
0x83EC1D: mov     ebx, [esp+20h+arg_C]
0x83EC21: mov     ebp, [eax]
0x83EC23: mov     edx, [ebx]
0x83EC25: mov     eax, [edx+88h]
0x83EC2B: push    0
0x83EC2D: mov     ecx, ebx
0x83EC2F: mov     [esp+24h+arg_8], ebp
0x83EC33: call    eax
0x83EC35: mov     ebp, [ebp+4]
0x83EC38: cmp     ebp, eax
0x83EC3A: mov     [esp+20h+arg_0], eax
0x83EC3E: jz      short loc_83EC7A
0x83EC40: test    ebp, ebp
0x83EC42: jz      short loc_83EC65
0x83EC44: lea     ecx, [ebp+4]
0x83EC47: push    ecx; lpAddend
0x83EC48: call    dword ptr ds:0A2807Ch
0x83EC4E: test    eax, eax
0x83EC50: jnz     short loc_83EC61
0x83EC52: test    ebp, ebp
0x83EC54: jz      short loc_83EC61
0x83EC56: mov     edx, [ebp+0]
0x83EC59: mov     eax, [edx]
0x83EC5B: push    1
0x83EC5D: mov     ecx, ebp
0x83EC5F: call    eax
0x83EC61: mov     eax, [esp+20h+arg_0]
0x83EC65: test    eax, eax
0x83EC67: mov     ecx, [esp+20h+arg_8]
0x83EC6B: mov     [ecx+4], eax
0x83EC6E: jz      short loc_83EC7A
0x83EC70: add     eax, 4
0x83EC73: push    eax; lpAddend
0x83EC74: call    dword ptr ds:0A28078h
0x83EC7A: mov     edx, [esp+20h+arg_8]
0x83EC7E: push    ebx
0x83EC7F: push    edx
0x83EC80: mov     ecx, esi
0x83EC82: call    sub_848FA0
0x83EC87: mov     eax, [edi+24h]
0x83EC8A: mov     ebp, [eax+4]
0x83EC8D: push    0
0x83EC8F: push    ebx
0x83EC90: mov     ecx, esi
0x83EC92: mov     [esp+28h+arg_8], ebp
0x83EC96: call    sub_848FD0
0x83EC9B: mov     ebp, [ebp+4]
0x83EC9E: cmp     ebp, eax
0x83ECA0: mov     [esp+20h+arg_0], eax
0x83ECA4: jz      short loc_83ECE0
0x83ECA6: test    ebp, ebp
0x83ECA8: jz      short loc_83ECCB
0x83ECAA: lea     ecx, [ebp+4]
0x83ECAD: push    ecx; lpAddend
0x83ECAE: call    dword ptr ds:0A2807Ch
0x83ECB4: test    eax, eax
0x83ECB6: jnz     short loc_83ECC7
0x83ECB8: test    ebp, ebp
0x83ECBA: jz      short loc_83ECC7
0x83ECBC: mov     edx, [ebp+0]
0x83ECBF: mov     eax, [edx]
0x83ECC1: push    1
0x83ECC3: mov     ecx, ebp
0x83ECC5: call    eax
0x83ECC7: mov     eax, [esp+20h+arg_0]
0x83ECCB: test    eax, eax
0x83ECCD: mov     ecx, [esp+20h+arg_8]
0x83ECD1: mov     [ecx+4], eax
0x83ECD4: jz      short loc_83ECE0
0x83ECD6: add     eax, 4
0x83ECD9: push    eax; lpAddend
0x83ECDA: call    dword ptr ds:0A28078h
0x83ECE0: mov     edx, [esp+20h+arg_8]
0x83ECE4: push    ebx
0x83ECE5: push    edx
0x83ECE6: mov     ecx, esi
0x83ECE8: call    sub_848FA0
0x83ECED: mov     ebx, 1
0x83ECF2: add     [edi+60h], ebx
0x83ECF5: mov     [esp+20h+arg_8], edi
0x83ECF9: mov     ecx, [esi+38h]
0x83ECFC: lea     eax, [esp+20h+arg_8]
0x83ED00: push    eax
0x83ED01: push    ecx
0x83ED02: lea     ecx, [esi+40h]
0x83ED05: mov     [esp+28h+var_4], 0
0x83ED0D: call    sub_76CE40
0x83ED12: or      eax, 0FFFFFFFFh
0x83ED15: add     [edi+60h], eax
0x83ED18: mov     [esp+20h+var_4], eax
0x83ED1C: jnz     short loc_83ED25
0x83ED1E: mov     ecx, edi
0x83ED20: call    sub_7604D0
0x83ED25: add     [esi+38h], ebx
0x83ED28: mov     ecx, [esp+20h+var_C]
0x83ED2C: mov     large fs:0, ecx
0x83ED33: pop     ecx
0x83ED34: pop     edi
0x83ED35: pop     esi
0x83ED36: pop     ebp
0x83ED37: pop     ebx
0x83ED38: add     esp, 0Ch
0x83ED3B: retn    10h
