0x5D8FD0: mov     al, ds:0B3B734h
0x5D8FD5: mov     cl, al
0x5D8FD7: shr     cl, 7
0x5D8FDA: not     cl
0x5D8FDC: and     cl, 1
0x5D8FDF: neg     cl
0x5D8FE1: push    edi
0x5D8FE2: sbb     ecx, ecx
0x5D8FE4: and     ecx, 2
0x5D8FE7: add     ecx, 0FFFFFFFFh
0x5D8FEA: and     eax, 7Fh
0x5D8FED: sub     eax, 0
0x5D8FF0: mov     edi, ecx
0x5D8FF2: jz      loc_5D90A7
0x5D8FF8: sub     eax, 1
0x5D8FFB: push    esi
0x5D8FFC: jz      short loc_5D9056
0x5D8FFE: sub     eax, 1
0x5D9001: jz      short loc_5D9008
0x5D9003: pop     esi
0x5D9004: xor     eax, eax
0x5D9006: pop     edi
0x5D9007: retn
0x5D9008: mov     ecx, [esp+8+arg_0]
0x5D900C: mov     edx, [ecx+24h]
0x5D900F: mov     eax, ds:0B333C4h
0x5D9014: mov     edx, [edx]
0x5D9016: add     ecx, 24h ; '$'
0x5D9019: push    eax
0x5D901A: call    edx
0x5D901C: fmul    dword ptr ds:0B37FE0h
0x5D9022: call    Double_To_SInt32
0x5D9027: mov     ecx, [esp+8+arg_4]
0x5D902B: mov     edx, ds:0B333C4h
0x5D9031: mov     esi, eax
0x5D9033: mov     eax, [ecx+24h]
0x5D9036: mov     eax, [eax]
0x5D9038: add     ecx, 24h ; '$'
0x5D903B: push    edx
0x5D903C: call    eax
0x5D903E: fmul    dword ptr ds:0B37FE0h
0x5D9044: call    Double_To_SInt32
0x5D9049: cmp     esi, eax
0x5D904B: jge     short loc_5D9098
0x5D904D: or      eax, 0FFFFFFFFh
0x5D9050: pop     esi
0x5D9051: imul    eax, edi
0x5D9054: pop     edi
0x5D9055: retn
0x5D9056: mov     ecx, [esp+8+arg_0]
0x5D905A: mov     edx, [ecx+24h]
0x5D905D: mov     eax, ds:0B333C4h
0x5D9062: mov     edx, [edx]
0x5D9064: add     ecx, 24h ; '$'
0x5D9067: push    eax
0x5D9068: call    edx
0x5D906A: call    Double_To_SInt32
0x5D906F: mov     ecx, [esp+8+arg_4]
0x5D9073: mov     edx, ds:0B333C4h
0x5D9079: mov     esi, eax
0x5D907B: mov     eax, [ecx+24h]
0x5D907E: mov     eax, [eax]
0x5D9080: add     ecx, 24h ; '$'
0x5D9083: push    edx
0x5D9084: call    eax
0x5D9086: call    Double_To_SInt32
0x5D908B: cmp     esi, eax
0x5D908D: jge     short loc_5D9098
0x5D908F: or      eax, 0FFFFFFFFh
0x5D9092: pop     esi
0x5D9093: imul    eax, edi
0x5D9096: pop     edi
0x5D9097: retn
0x5D9098: xor     ecx, ecx
0x5D909A: cmp     esi, eax
0x5D909C: setnle  cl
0x5D909F: pop     esi
0x5D90A0: mov     eax, ecx
0x5D90A2: imul    eax, edi
0x5D90A5: pop     edi
0x5D90A6: retn
0x5D90A7: mov     edx, [esp+4+arg_4]
0x5D90AB: mov     eax, [edx+1Ch]
0x5D90AE: test    eax, eax
0x5D90B0: jnz     short loc_5D90B7
0x5D90B2: mov     eax, offset EmptyString
0x5D90B7: mov     ecx, [esp+4+arg_0]
0x5D90BB: mov     ecx, [ecx+1Ch]
0x5D90BE: test    ecx, ecx
0x5D90C0: jnz     short loc_5D90C7
0x5D90C2: mov     ecx, offset EmptyString
0x5D90C7: push    eax; unsigned __int8 *
0x5D90C8: push    ecx; unsigned __int8 *
0x5D90C9: call    __mbscmp
0x5D90CE: imul    eax, edi
0x5D90D1: add     esp, 8
0x5D90D4: pop     edi
0x5D90D5: retn
