0x72BDB0: push    ebx
0x72BDB1: push    ebp
0x72BDB2: mov     ebp, [esp+8+arg_0]
0x72BDB6: push    esi
0x72BDB7: push    edi
0x72BDB8: push    ebp
0x72BDB9: mov     esi, ecx
0x72BDBB: call    nullsub_returnvVoid_1arg
0x72BDC0: mov     ecx, ebp
0x72BDC2: call    sub_7124A0
0x72BDC7: mov     edi, [esi+8]
0x72BDCA: mov     ebx, eax
0x72BDCC: cmp     edi, ebx
0x72BDCE: jz      short loc_72BE01
0x72BDD0: test    edi, edi
0x72BDD2: jz      short loc_72BDF0
0x72BDD4: lea     eax, [edi+4]
0x72BDD7: push    eax; lpAddend
0x72BDD8: call    dword ptr ds:0A2807Ch
0x72BDDE: test    eax, eax
0x72BDE0: jnz     short loc_72BDF0
0x72BDE2: test    edi, edi
0x72BDE4: jz      short loc_72BDF0
0x72BDE6: mov     edx, [edi]
0x72BDE8: mov     eax, [edx]
0x72BDEA: push    1
0x72BDEC: mov     ecx, edi
0x72BDEE: call    eax
0x72BDF0: test    ebx, ebx
0x72BDF2: mov     [esi+8], ebx
0x72BDF5: jz      short loc_72BE01
0x72BDF7: add     ebx, 4
0x72BDFA: push    ebx; lpAddend
0x72BDFB: call    dword ptr ds:0A28078h
0x72BE01: cmp     dword ptr [ebp+0D8h], 0A010065h
0x72BE0B: jb      short loc_72BE1D
0x72BE0D: mov     ecx, ebp
0x72BE0F: call    sub_7124A0
0x72BE14: push    eax; a2
0x72BE15: lea     ecx, [esi+0Ch]; this
0x72BE18: call    NiSmartPointer_Set??
0x72BE1D: mov     ecx, ebp
0x72BE1F: call    sub_7124A0
0x72BE24: mov     ecx, ebp
0x72BE26: mov     [esi+10h], eax
0x72BE29: call    sub_7124D0
0x72BE2E: xor     ecx, ecx
0x72BE30: mov     ebx, eax
0x72BE32: mov     edx, 4
0x72BE37: mul     edx
0x72BE39: seto    cl
0x72BE3C: neg     ecx
0x72BE3E: or      ecx, eax
0x72BE40: push    ecx; Size
0x72BE41: call    FormHeapAlloc
0x72BE46: add     esp, 4
0x72BE49: xor     edi, edi
0x72BE4B: test    ebx, ebx
0x72BE4D: mov     [esi+14h], eax
0x72BE50: jbe     short loc_72BE66
0x72BE52: mov     ecx, ebp
0x72BE54: call    sub_7124A0
0x72BE59: mov     ecx, [esi+14h]
0x72BE5C: mov     [ecx+edi*4], eax
0x72BE5F: add     edi, 1
0x72BE62: cmp     edi, ebx
0x72BE64: jb      short loc_72BE52
0x72BE66: pop     edi
0x72BE67: pop     esi
0x72BE68: pop     ebp
0x72BE69: pop     ebx
0x72BE6A: retn    4
