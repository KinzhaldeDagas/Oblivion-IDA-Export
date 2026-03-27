0x79B160: push    ebp
0x79B161: mov     ebp, [esp+4+arg_0]
0x79B165: push    esi
0x79B166: mov     esi, ecx
0x79B168: cmp     esi, ebp
0x79B16A: jz      loc_79B2DB
0x79B170: mov     eax, [ebp+4]
0x79B173: test    eax, eax
0x79B175: jz      short loc_79B191
0x79B177: mov     ecx, [ebp+8]
0x79B17A: sub     ecx, eax
0x79B17C: mov     eax, 92492493h
0x79B181: imul    ecx
0x79B183: add     edx, ecx
0x79B185: sar     edx, 5
0x79B188: mov     ecx, edx
0x79B18A: shr     ecx, 1Fh
0x79B18D: add     ecx, edx
0x79B18F: jnz     short loc_79B19F
0x79B191: mov     ecx, esi
0x79B193: call    sub_79ABD0
0x79B198: mov     eax, esi
0x79B19A: pop     esi
0x79B19B: pop     ebp
0x79B19C: retn    4
0x79B19F: push    ebx
0x79B1A0: push    edi
0x79B1A1: mov     edi, [esi+4]
0x79B1A4: test    edi, edi
0x79B1A6: jnz     short loc_79B1AC
0x79B1A8: xor     eax, eax
0x79B1AA: jmp     short loc_79B1C4
0x79B1AC: mov     ebx, [esi+8]
0x79B1AF: sub     ebx, edi
0x79B1B1: mov     eax, 92492493h
0x79B1B6: imul    ebx
0x79B1B8: add     edx, ebx
0x79B1BA: sar     edx, 5
0x79B1BD: mov     eax, edx
0x79B1BF: shr     eax, 1Fh
0x79B1C2: add     eax, edx
0x79B1C4: cmp     ecx, eax
0x79B1C6: ja      short loc_79B242
0x79B1C8: mov     byte ptr [esp+10h+arg_0], 0
0x79B1CD: mov     eax, [esp+10h+arg_0]
0x79B1D1: mov     ecx, [esp+10h+arg_0]
0x79B1D5: mov     edx, [esp+10h+arg_0]
0x79B1D9: push    eax
0x79B1DA: mov     eax, [ebp+8]
0x79B1DD: push    ecx
0x79B1DE: push    edx
0x79B1DF: push    edi
0x79B1E0: push    eax
0x79B1E1: mov     eax, [ebp+4]
0x79B1E4: push    eax
0x79B1E5: call    sub_79A950
0x79B1EA: mov     eax, [ebp+4]
0x79B1ED: add     esp, 18h
0x79B1F0: test    eax, eax
0x79B1F2: jnz     short loc_79B20F
0x79B1F4: mov     edx, [esi+4]
0x79B1F7: lea     ecx, ds:0[eax*8]
0x79B1FE: sub     ecx, eax
0x79B200: pop     edi
0x79B201: lea     eax, [edx+ecx*8]
0x79B204: mov     [esi+8], eax
0x79B207: pop     ebx
0x79B208: mov     eax, esi
0x79B20A: pop     esi
0x79B20B: pop     ebp
0x79B20C: retn    4
0x79B20F: mov     ecx, [ebp+8]
0x79B212: sub     ecx, eax
0x79B214: mov     eax, 92492493h
0x79B219: imul    ecx
0x79B21B: add     edx, ecx
0x79B21D: sar     edx, 5
0x79B220: mov     eax, edx
0x79B222: shr     eax, 1Fh
0x79B225: add     eax, edx
0x79B227: mov     edx, [esi+4]
0x79B22A: lea     ecx, ds:0[eax*8]
0x79B231: sub     ecx, eax
0x79B233: pop     edi
0x79B234: lea     eax, [edx+ecx*8]
0x79B237: mov     [esi+8], eax
0x79B23A: pop     ebx
0x79B23B: mov     eax, esi
0x79B23D: pop     esi
0x79B23E: pop     ebp
0x79B23F: retn    4
0x79B242: test    edi, edi
0x79B244: jnz     short loc_79B24A
0x79B246: xor     eax, eax
0x79B248: jmp     short loc_79B262
0x79B24A: mov     ebx, [esi+0Ch]
0x79B24D: sub     ebx, edi
0x79B24F: mov     eax, 92492493h
0x79B254: imul    ebx
0x79B256: add     edx, ebx
0x79B258: sar     edx, 5
0x79B25B: mov     eax, edx
0x79B25D: shr     eax, 1Fh
0x79B260: add     eax, edx
0x79B262: cmp     ecx, eax
0x79B264: ja      short loc_79B2A3
0x79B266: mov     ecx, esi
0x79B268: call    sub_799EE0
0x79B26D: lea     ecx, ds:0[eax*8]
0x79B274: sub     ecx, eax
0x79B276: mov     eax, [ebp+4]
0x79B279: lea     ebx, [eax+ecx*8]
0x79B27C: push    edi
0x79B27D: push    ebx
0x79B27E: push    eax
0x79B27F: call    sub_79AA40
0x79B284: mov     edx, [esi+8]
0x79B287: mov     eax, [ebp+8]
0x79B28A: add     esp, 0Ch
0x79B28D: push    edx
0x79B28E: push    eax
0x79B28F: push    ebx
0x79B290: mov     ecx, esi
0x79B292: call    sub_79AAD0
0x79B297: pop     edi
0x79B298: mov     [esi+8], eax
0x79B29B: pop     ebx
0x79B29C: mov     eax, esi
0x79B29E: pop     esi
0x79B29F: pop     ebp
0x79B2A0: retn    4
0x79B2A3: test    edi, edi
0x79B2A5: jz      short loc_79B2B0
0x79B2A7: push    edi
0x79B2A8: call    FormHeapFree
0x79B2AD: add     esp, 4
0x79B2B0: mov     ecx, ebp
0x79B2B2: call    sub_799EE0
0x79B2B7: push    eax; char *
0x79B2B8: mov     ecx, esi
0x79B2BA: call    sub_79ACC0
0x79B2BF: test    al, al
0x79B2C1: jz      short loc_79B2D9
0x79B2C3: mov     ecx, [esi+4]
0x79B2C6: mov     edx, [ebp+8]
0x79B2C9: mov     eax, [ebp+4]
0x79B2CC: push    ecx
0x79B2CD: push    edx
0x79B2CE: push    eax
0x79B2CF: mov     ecx, esi
0x79B2D1: call    sub_79AAD0
0x79B2D6: mov     [esi+8], eax
0x79B2D9: pop     edi
0x79B2DA: pop     ebx
0x79B2DB: mov     eax, esi
0x79B2DD: pop     esi
0x79B2DE: pop     ebp
0x79B2DF: retn    4
