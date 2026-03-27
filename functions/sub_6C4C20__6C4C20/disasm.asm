0x6C4C20: push    0FFFFFFFFh
0x6C4C22: push    offset SEH_6C4C20
0x6C4C27: mov     eax, large fs:0
0x6C4C2D: push    eax
0x6C4C2E: sub     esp, 0Ch
0x6C4C31: push    ebx
0x6C4C32: push    ebp
0x6C4C33: push    esi
0x6C4C34: push    edi
0x6C4C35: mov     eax, ds:0B30AACh
0x6C4C3A: xor     eax, esp
0x6C4C3C: push    eax
0x6C4C3D: lea     eax, [esp+2Ch+var_C]
0x6C4C41: mov     large fs:0, eax
0x6C4C47: mov     ebx, ecx
0x6C4C49: mov     edi, [esp+2Ch+arg_0]
0x6C4C4D: push    edi
0x6C4C4E: call    sub_715E40
0x6C4C53: xor     ebp, ebp
0x6C4C55: cmp     [ebx+46h], bp
0x6C4C59: jbe     short loc_6C4C8A
0x6C4C5B: jmp     short loc_6C4C60
0x6C4C5D: align 10h
0x6C4C60: mov     eax, [ebx+40h]
0x6C4C63: mov     esi, [eax+ebp*4]
0x6C4C66: test    esi, esi
0x6C4C68: jz      short loc_6C4C7F
0x6C4C6A: mov     edx, [esi]
0x6C4C6C: mov     eax, [edx+38h]
0x6C4C6F: push    edi
0x6C4C70: mov     ecx, esi
0x6C4C72: call    eax
0x6C4C74: mov     ecx, [ebx+30h]
0x6C4C77: push    ecx
0x6C4C78: mov     ecx, esi
0x6C4C7A: call    sub_6C9590
0x6C4C7F: movzx   edx, word ptr [ebx+46h]
0x6C4C83: add     ebp, 1
0x6C4C86: cmp     ebp, edx
0x6C4C88: jb      short loc_6C4C60
0x6C4C8A: mov     ecx, [edi]
0x6C4C8C: lea     eax, [esp+2Ch+var_14]
0x6C4C90: push    eax
0x6C4C91: push    ebx
0x6C4C92: call    NiTMap_GetAt
0x6C4C97: cmp     dword ptr [ebx+78h], 0
0x6C4C9B: mov     [esp+2Ch+var_18], 0
0x6C4CA3: jbe     short loc_6C4D19
0x6C4CA5: mov     ecx, [esp+2Ch+var_14]
0x6C4CA9: add     ecx, 70h ; 'p'
0x6C4CAC: mov     [esp+2Ch+var_14], ecx
0x6C4CB0: mov     ecx, [esp+2Ch+var_18]
0x6C4CB4: mov     eax, [ebx+70h]
0x6C4CB7: mov     esi, [edi]
0x6C4CB9: mov     edx, [esi]
0x6C4CBB: add     ecx, ecx
0x6C4CBD: add     ecx, ecx
0x6C4CBF: mov     ebp, [eax+ecx]
0x6C4CC2: add     eax, ecx
0x6C4CC4: mov     eax, [edx+4]
0x6C4CC7: push    ebp
0x6C4CC8: mov     ecx, esi
0x6C4CCA: call    eax
0x6C4CCC: mov     ecx, [esi+8]
0x6C4CCF: mov     edi, [ecx+eax*4]
0x6C4CD2: test    edi, edi
0x6C4CD4: jz      short loc_6C4CEE
0x6C4CD6: mov     eax, [edi+4]
0x6C4CD9: mov     edx, [esi]
0x6C4CDB: mov     edx, [edx+8]
0x6C4CDE: push    eax
0x6C4CDF: push    ebp
0x6C4CE0: mov     ecx, esi
0x6C4CE2: call    edx
0x6C4CE4: test    al, al
0x6C4CE6: jnz     short loc_6C4D40
0x6C4CE8: mov     edi, [edi]
0x6C4CEA: test    edi, edi
0x6C4CEC: jnz     short loc_6C4CD6
0x6C4CEE: mov     eax, [esp+2Ch+var_18]
0x6C4CF2: mov     ecx, [ebx+70h]
0x6C4CF5: add     eax, eax
0x6C4CF7: add     eax, eax
0x6C4CF9: add     ecx, eax
0x6C4CFB: push    ecx
0x6C4CFC: mov     ecx, [esp+30h+var_14]
0x6C4D00: call    sub_6C4790
0x6C4D05: mov     eax, [esp+2Ch+var_18]
0x6C4D09: mov     edi, [esp+2Ch+arg_0]
0x6C4D0D: add     eax, 1
0x6C4D10: cmp     eax, [ebx+78h]
0x6C4D13: mov     [esp+2Ch+var_18], eax
0x6C4D17: jb      short loc_6C4CB0
0x6C4D19: mov     ebx, [ebx+7Ch]
0x6C4D1C: test    ebx, ebx
0x6C4D1E: jz      short loc_6C4D2A
0x6C4D20: mov     edx, [ebx]
0x6C4D22: mov     eax, [edx+38h]
0x6C4D25: push    edi
0x6C4D26: mov     ecx, ebx
0x6C4D28: call    eax
0x6C4D2A: mov     ecx, [esp+2Ch+var_C]
0x6C4D2E: mov     large fs:0, ecx
0x6C4D35: pop     ecx
0x6C4D36: pop     edi
0x6C4D37: pop     esi
0x6C4D38: pop     ebp
0x6C4D39: pop     ebx
0x6C4D3A: add     esp, 18h
0x6C4D3D: retn    4
0x6C4D40: mov     edi, [edi+8]
0x6C4D43: test    edi, edi
0x6C4D45: mov     [esp+2Ch+var_10], edi
0x6C4D49: jz      short loc_6C4D55
0x6C4D4B: lea     eax, [edi+4]
0x6C4D4E: push    eax; lpAddend
0x6C4D4F: call    dword ptr ds:0A28078h
0x6C4D55: lea     ecx, [esp+2Ch+var_10]
0x6C4D59: push    ecx
0x6C4D5A: mov     ecx, [esp+30h+var_14]
0x6C4D5E: mov     [esp+30h+var_4], 0
0x6C4D66: call    sub_6C4790
0x6C4D6B: test    edi, edi
0x6C4D6D: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x6C4D75: jz      short loc_6C4D05
0x6C4D77: lea     edx, [edi+4]
0x6C4D7A: push    edx; lpAddend
0x6C4D7B: call    dword ptr ds:0A2807Ch
0x6C4D81: test    eax, eax
0x6C4D83: jnz     short loc_6C4D05
0x6C4D85: mov     eax, [edi]
0x6C4D87: mov     edx, [eax]
0x6C4D89: push    1
0x6C4D8B: mov     ecx, edi
0x6C4D8D: call    edx
0x6C4D8F: jmp     loc_6C4D05
