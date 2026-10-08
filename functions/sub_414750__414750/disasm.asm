0x414750: mov     edx, [esp+Src]
0x414754: push    esi
0x414755: mov     esi, ecx
0x414757: mov     eax, edx
0x414759: push    edi
0x41475A: mov     dword ptr [esi+18h], 0Fh
0x414761: mov     dword ptr [esi+14h], 0
0x414768: mov     byte ptr [esi+4], 0
0x41476C: lea     edi, [eax+1]
0x41476F: nop
0x414770: mov     cl, [eax]
0x414772: add     eax, 1
0x414775: test    cl, cl
0x414777: jnz     short loc_414770
0x414779: sub     eax, edi
0x41477B: push    eax; count
0x41477C: push    edx; source
0x41477D: mov     ecx, esi; this
0x41477F: call    OB_stString28_AssignBytes_010201A0; Oblivion binary evidence: 28-byte SSO string assign(source,count). Detects source aliasing inside the current buffer and delegates to substring assignment; otherwise grows if needed, copies exactly count bytes, updates size, and terminates.
0x414784: pop     edi
0x414785: mov     eax, esi
0x414787: pop     esi
0x414788: retn    4
