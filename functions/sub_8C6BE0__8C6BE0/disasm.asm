0x8C6BE0: push    0FFFFFFFFh
0x8C6BE2: push    offset SEH_551450
0x8C6BE7: mov     eax, large fs:0
0x8C6BED: push    eax
0x8C6BEE: sub     esp, 8
0x8C6BF1: push    ebx
0x8C6BF2: push    ebp
0x8C6BF3: push    esi
0x8C6BF4: push    edi
0x8C6BF5: mov     eax, ds:0B30AACh
0x8C6BFA: xor     eax, esp
0x8C6BFC: push    eax
0x8C6BFD: lea     eax, [esp+28h+var_C]
0x8C6C01: mov     large fs:0, eax
0x8C6C07: mov     ebp, ecx
0x8C6C09: xor     eax, eax
0x8C6C0B: xor     ebx, ebx
0x8C6C0D: cmp     [ebp+0Ch], eax
0x8C6C10: jbe     short loc_8C6C68
0x8C6C12: mov     [esp+28h+var_14], eax
0x8C6C16: mov     [esp+28h+var_10], eax
0x8C6C1A: lea     ebx, [ebx+0]
0x8C6C20: mov     ecx, [ebp+4]
0x8C6C23: mov     esi, [ecx+ebx*8]
0x8C6C26: cmp     esi, eax
0x8C6C28: lea     edi, [ecx+ebx*8]
0x8C6C2B: mov     [esp+28h+var_4], eax
0x8C6C2F: jz      short loc_8C6C55
0x8C6C31: lea     edx, [esi+4]
0x8C6C34: push    edx; lpAddend
0x8C6C35: call    dword ptr ds:0A2807Ch
0x8C6C3B: test    eax, eax
0x8C6C3D: jnz     short loc_8C6C4D
0x8C6C3F: test    esi, esi
0x8C6C41: jz      short loc_8C6C4D
0x8C6C43: mov     eax, [esi]
0x8C6C45: mov     edx, [eax]
0x8C6C47: push    1
0x8C6C49: mov     ecx, esi
0x8C6C4B: call    edx
0x8C6C4D: mov     dword ptr [edi], 0
0x8C6C53: xor     eax, eax
0x8C6C55: add     ebx, 1
0x8C6C58: mov     [edi+4], eax
0x8C6C5B: cmp     ebx, [ebp+0Ch]
0x8C6C5E: mov     [esp+28h+var_4], 0FFFFFFFFh
0x8C6C66: jb      short loc_8C6C20
0x8C6C68: mov     [ebp+10h], eax
0x8C6C6B: mov     [ebp+0Ch], eax
0x8C6C6E: mov     ecx, dword ptr [esp+28h+var_C]
0x8C6C72: mov     large fs:0, ecx
0x8C6C79: pop     ecx
0x8C6C7A: pop     edi
0x8C6C7B: pop     esi
0x8C6C7C: pop     ebp
0x8C6C7D: pop     ebx
0x8C6C7E: add     esp, 14h
0x8C6C81: retn
