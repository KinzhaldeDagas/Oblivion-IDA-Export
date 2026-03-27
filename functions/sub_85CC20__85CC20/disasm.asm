0x85CC20: push    0FFFFFFFFh
0x85CC22: push    offset SEH_85E160
0x85CC27: mov     eax, large fs:0
0x85CC2D: push    eax
0x85CC2E: push    ebx
0x85CC2F: push    ebp
0x85CC30: push    esi
0x85CC31: push    edi
0x85CC32: mov     eax, ds:0B30AACh
0x85CC37: xor     eax, esp
0x85CC39: push    eax
0x85CC3A: lea     eax, [esp+20h+var_C]
0x85CC3E: mov     large fs:0, eax
0x85CC44: mov     esi, ecx
0x85CC46: mov     ebx, [esp+20h+arg_8]
0x85CC4A: mov     eax, [ebx+10h]
0x85CC4D: mov     edi, ds:0B477D0h
0x85CC53: push    eax
0x85CC54: call    sub_848C40
0x85CC59: mov     ebx, [ebx+0Ch]
0x85CC5C: push    ebx
0x85CC5D: mov     ecx, esi
0x85CC5F: call    sub_848E50
0x85CC64: mov     ecx, [esp+20h+arg_0]
0x85CC68: mov     eax, [esi]
0x85CC6A: mov     edx, [eax+0BCh]
0x85CC70: push    0
0x85CC72: push    ebx
0x85CC73: push    ecx
0x85CC74: mov     ecx, esi
0x85CC76: call    edx
0x85CC78: mov     eax, [edi+24h]
0x85CC7B: mov     ebp, [esp+20h+arg_C]
0x85CC7F: mov     ebx, [eax]
0x85CC81: mov     edx, [ebp+0]
0x85CC84: mov     eax, [edx+88h]
0x85CC8A: push    0
0x85CC8C: mov     ecx, ebp
0x85CC8E: mov     [esp+24h+arg_8], ebx
0x85CC92: call    eax
0x85CC94: mov     ebx, [ebx+4]
0x85CC97: cmp     ebx, eax
0x85CC99: mov     [esp+20h+arg_0], eax
0x85CC9D: jz      short loc_85CCD8
0x85CC9F: test    ebx, ebx
0x85CCA1: jz      short loc_85CCC3
0x85CCA3: lea     ecx, [ebx+4]
0x85CCA6: push    ecx; lpAddend
0x85CCA7: call    dword ptr ds:0A2807Ch
0x85CCAD: test    eax, eax
0x85CCAF: jnz     short loc_85CCBF
0x85CCB1: test    ebx, ebx
0x85CCB3: jz      short loc_85CCBF
0x85CCB5: mov     edx, [ebx]
0x85CCB7: mov     eax, [edx]
0x85CCB9: push    1
0x85CCBB: mov     ecx, ebx
0x85CCBD: call    eax
0x85CCBF: mov     eax, [esp+20h+arg_0]
0x85CCC3: test    eax, eax
0x85CCC5: mov     ecx, [esp+20h+arg_8]
0x85CCC9: mov     [ecx+4], eax
0x85CCCC: jz      short loc_85CCD8
0x85CCCE: add     eax, 4
0x85CCD1: push    eax; lpAddend
0x85CCD2: call    dword ptr ds:0A28078h
0x85CCD8: mov     edx, [esp+20h+arg_8]
0x85CCDC: push    ebp
0x85CCDD: push    edx
0x85CCDE: mov     ecx, esi
0x85CCE0: call    sub_848FA0
0x85CCE5: mov     eax, [edi+24h]
0x85CCE8: mov     ebx, [eax+4]
0x85CCEB: push    0
0x85CCED: push    ebp
0x85CCEE: mov     ecx, esi
0x85CCF0: mov     [esp+28h+arg_8], ebx
0x85CCF4: call    sub_848FD0
0x85CCF9: mov     ebx, [ebx+4]
0x85CCFC: cmp     ebx, eax
0x85CCFE: mov     [esp+20h+arg_0], eax
0x85CD02: jz      short loc_85CD3D
0x85CD04: test    ebx, ebx
0x85CD06: jz      short loc_85CD28
0x85CD08: lea     ecx, [ebx+4]
0x85CD0B: push    ecx; lpAddend
0x85CD0C: call    dword ptr ds:0A2807Ch
0x85CD12: test    eax, eax
0x85CD14: jnz     short loc_85CD24
0x85CD16: test    ebx, ebx
0x85CD18: jz      short loc_85CD24
0x85CD1A: mov     edx, [ebx]
0x85CD1C: mov     eax, [edx]
0x85CD1E: push    1
0x85CD20: mov     ecx, ebx
0x85CD22: call    eax
0x85CD24: mov     eax, [esp+20h+arg_0]
0x85CD28: test    eax, eax
0x85CD2A: mov     ecx, [esp+20h+arg_8]
0x85CD2E: mov     [ecx+4], eax
0x85CD31: jz      short loc_85CD3D
0x85CD33: add     eax, 4
0x85CD36: push    eax; lpAddend
0x85CD37: call    dword ptr ds:0A28078h
0x85CD3D: mov     edx, [esp+20h+arg_8]
0x85CD41: push    ebp
0x85CD42: push    edx
0x85CD43: mov     ecx, esi
0x85CD45: call    sub_848FA0
0x85CD4A: cmp     byte ptr [esp+20h+arg_10], 0
0x85CD4F: jnz     short loc_85CD8C
0x85CD51: mov     ebx, 1
0x85CD56: add     [edi+60h], ebx
0x85CD59: mov     [esp+20h+arg_10], edi
0x85CD5D: mov     ecx, [esi+38h]
0x85CD60: lea     eax, [esp+20h+arg_10]
0x85CD64: push    eax
0x85CD65: push    ecx
0x85CD66: lea     ecx, [esi+40h]
0x85CD69: mov     [esp+28h+var_4], 0
0x85CD71: call    sub_76CE40
0x85CD76: or      eax, 0FFFFFFFFh
0x85CD79: add     [edi+60h], eax
0x85CD7C: mov     [esp+20h+var_4], eax
0x85CD80: jnz     short loc_85CD89
0x85CD82: mov     ecx, edi
0x85CD84: call    sub_7604D0
0x85CD89: add     [esi+38h], ebx
0x85CD8C: mov     ecx, [esp+20h+var_C]
0x85CD90: mov     large fs:0, ecx
0x85CD97: pop     ecx
0x85CD98: pop     edi
0x85CD99: pop     esi
0x85CD9A: pop     ebp
0x85CD9B: pop     ebx
0x85CD9C: add     esp, 0Ch
0x85CD9F: retn    14h
