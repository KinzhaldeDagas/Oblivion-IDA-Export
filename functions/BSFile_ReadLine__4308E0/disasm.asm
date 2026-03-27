0x4308E0: sub     esp, 8
0x4308E3: push    ebx
0x4308E4: push    esi
0x4308E5: push    edi
0x4308E6: mov     esi, 1
0x4308EB: xor     ebx, ebx
0x4308ED: xor     edi, edi
0x4308EF: cmp     [esp+14h+arg_4], esi
0x4308F3: mov     [esp+14h+var_8], ecx
0x4308F7: jbe     short loc_43095A
0x4308F9: push    ebp
0x4308FA: mov     ebp, [esp+18h+arg_0]
0x4308FE: jmp     short loc_430904
0x430900: mov     ecx, [esp+18h+var_8]
0x430904: push    1
0x430906: lea     eax, [esp+1Ch+var_4]
0x43090A: push    eax
0x43090B: mov     eax, [ecx+4]
0x43090E: push    1
0x430910: lea     edx, [esp+24h+arg_0]
0x430914: push    edx
0x430915: push    ecx
0x430916: mov     [esp+2Ch+var_4], 1
0x43091E: call    eax
0x430920: add     esp, 14h
0x430923: add     ebx, eax
0x430925: cmp     eax, 1
0x430928: jnz     short loc_43094A
0x43092A: mov     al, byte ptr [esp+18h+arg_0]
0x43092E: movzx   edx, [esp+18h+arg_8]
0x430933: movsx   ecx, al
0x430936: cmp     ecx, edx
0x430938: jz      short loc_43094A
0x43093A: mov     [esi+ebp-1], al
0x43093E: add     esi, 1
0x430941: add     edi, 1
0x430944: cmp     esi, [esp+18h+arg_4]
0x430948: jb      short loc_430900
0x43094A: mov     byte ptr [edi+ebp], 0
0x43094E: pop     ebp
0x43094F: pop     edi
0x430950: pop     esi
0x430951: mov     eax, ebx
0x430953: pop     ebx
0x430954: add     esp, 8
0x430957: retn    0Ch
0x43095A: mov     eax, [esp+14h+arg_0]
0x43095E: mov     [edi+eax], bl
0x430961: pop     edi
0x430962: pop     esi
0x430963: mov     eax, ebx
0x430965: pop     ebx
0x430966: add     esp, 8
0x430969: retn    0Ch
