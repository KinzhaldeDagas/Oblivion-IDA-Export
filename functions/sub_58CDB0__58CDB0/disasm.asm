0x58CDB0: push    esi
0x58CDB1: mov     esi, ecx
0x58CDB3: push    edi
0x58CDB4: mov     edi, [esi]
0x58CDB6: test    edi, edi
0x58CDB8: jz      short loc_58CDCA
0x58CDBA: mov     ecx, edi
0x58CDBC: call    sub_5852C0
0x58CDC1: push    edi
0x58CDC2: call    FormHeapFree
0x58CDC7: add     esp, 4
0x58CDCA: cmp     byte ptr [esi+10h], 0
0x58CDCE: mov     dword ptr [esi+0Ch], 0
0x58CDD5: jz      short loc_58CDFE
0x58CDD7: lea     edi, [esi+4]
0x58CDDA: test    edi, edi
0x58CDDC: jz      short loc_58CDFE
0x58CDDE: push    ebp
0x58CDDF: nop
0x58CDE0: mov     ebp, [edi]
0x58CDE2: test    ebp, ebp
0x58CDE4: jz      short loc_58CDF6
0x58CDE6: mov     ecx, ebp
0x58CDE8: call    sub_5852C0
0x58CDED: push    ebp
0x58CDEE: call    FormHeapFree
0x58CDF3: add     esp, 4
0x58CDF6: mov     edi, [edi+4]
0x58CDF9: test    edi, edi
0x58CDFB: jnz     short loc_58CDE0
0x58CDFD: pop     ebp
0x58CDFE: cmp     dword ptr [esi+8], 0
0x58CE02: jz      short loc_58CE1A
0x58CE04: mov     eax, [esi+8]
0x58CE07: mov     edi, [eax+4]
0x58CE0A: push    eax
0x58CE0B: call    FormHeapFree
0x58CE10: add     esp, 4
0x58CE13: test    edi, edi
0x58CE15: mov     [esi+8], edi
0x58CE18: jnz     short loc_58CE04
0x58CE1A: pop     edi
0x58CE1B: mov     dword ptr [esi+4], 0
0x58CE22: pop     esi
0x58CE23: retn
