0x79AE40: push    ebp
0x79AE41: mov     ebp, esp
0x79AE43: push    0FFFFFFFFh
0x79AE45: push    offset SEH_79AE40
0x79AE4A: mov     eax, large fs:0
0x79AE50: push    eax
0x79AE51: sub     esp, 3Ch
0x79AE54: push    ebx
0x79AE55: push    esi
0x79AE56: push    edi
0x79AE57: mov     eax, ds:0B30AACh
0x79AE5C: xor     eax, ebp
0x79AE5E: push    eax
0x79AE5F: lea     eax, [ebp+var_C]
0x79AE62: mov     large fs:0, eax
0x79AE68: mov     [ebp+var_10], esp
0x79AE6B: mov     ebx, ecx
0x79AE6D: mov     esi, [ebp+arg_C]
0x79AE70: mov     ecx, 0Eh
0x79AE75: lea     edi, [ebp+var_48]
0x79AE78: rep movsd
0x79AE7A: mov     ecx, [ebx+4]
0x79AE7D: test    ecx, ecx
0x79AE7F: jnz     short loc_79AE85
0x79AE81: xor     edi, edi
0x79AE83: jmp     short loc_79AE9D
0x79AE85: mov     esi, [ebx+0Ch]
0x79AE88: sub     esi, ecx
0x79AE8A: mov     eax, 92492493h
0x79AE8F: imul    esi
0x79AE91: add     edx, esi
0x79AE93: sar     edx, 5
0x79AE96: mov     edi, edx
0x79AE98: shr     edi, 1Fh
0x79AE9B: add     edi, edx
0x79AE9D: mov     esi, [ebp+arg_8]
0x79AEA0: test    esi, esi
0x79AEA2: jz      loc_79B106
0x79AEA8: test    ecx, ecx
0x79AEAA: jnz     short loc_79AEB0
0x79AEAC: xor     eax, eax
0x79AEAE: jmp     short loc_79AEC9
0x79AEB0: mov     ecx, [ebx+8]
0x79AEB3: sub     ecx, [ebx+4]
0x79AEB6: mov     eax, 92492493h
0x79AEBB: imul    ecx
0x79AEBD: add     edx, ecx
0x79AEBF: sar     edx, 5
0x79AEC2: mov     eax, edx
0x79AEC4: shr     eax, 1Fh
0x79AEC7: add     eax, edx
0x79AEC9: mov     ecx, 4924924h
0x79AECE: sub     ecx, eax
0x79AED0: cmp     ecx, esi
0x79AED2: jnb     short loc_79AED9
0x79AED4: call    sub_790B90
0x79AED9: cmp     dword ptr [ebx+4], 0
0x79AEDD: jnz     short loc_79AEE3
0x79AEDF: xor     eax, eax
0x79AEE1: jmp     short loc_79AEFC
0x79AEE3: mov     ecx, [ebx+8]
0x79AEE6: sub     ecx, [ebx+4]
0x79AEE9: mov     eax, 92492493h
0x79AEEE: imul    ecx
0x79AEF0: add     edx, ecx
0x79AEF2: sar     edx, 5
0x79AEF5: mov     eax, edx
0x79AEF7: shr     eax, 1Fh
0x79AEFA: add     eax, edx
0x79AEFC: add     eax, esi
0x79AEFE: cmp     edi, eax
0x79AF00: jnb     loc_79B028
0x79AF06: mov     eax, edi
0x79AF08: shr     eax, 1
0x79AF0A: mov     edx, 4924924h
0x79AF0F: sub     edx, eax
0x79AF11: cmp     edx, edi
0x79AF13: jnb     short loc_79AF19
0x79AF15: xor     edi, edi
0x79AF17: jmp     short loc_79AF1B
0x79AF19: add     edi, eax
0x79AF1B: cmp     dword ptr [ebx+4], 0
0x79AF1F: jnz     short loc_79AF25
0x79AF21: xor     eax, eax
0x79AF23: jmp     short loc_79AF3E
0x79AF25: mov     ecx, [ebx+8]
0x79AF28: sub     ecx, [ebx+4]
0x79AF2B: mov     eax, 92492493h
0x79AF30: imul    ecx
0x79AF32: add     edx, ecx
0x79AF34: sar     edx, 5
0x79AF37: mov     eax, edx
0x79AF39: shr     eax, 1Fh
0x79AF3C: add     eax, edx
0x79AF3E: add     eax, esi
0x79AF40: cmp     edi, eax
0x79AF42: jnb     short loc_79AF4F
0x79AF44: mov     ecx, ebx
0x79AF46: call    sub_799EE0
0x79AF4B: mov     edi, eax
0x79AF4D: add     edi, esi
0x79AF4F: push    0
0x79AF51: push    edi; char *
0x79AF52: call    sub_799F30
0x79AF57: mov     ecx, [ebx+4]
0x79AF5A: mov     byte ptr [ebp+arg_8], 0
0x79AF5E: mov     edx, [ebp+arg_8]
0x79AF61: push    edx
0x79AF62: mov     [ebp+arg_C], eax
0x79AF65: mov     edx, [ebp+arg_C]
0x79AF68: push    edx
0x79AF69: push    ebx
0x79AF6A: push    eax
0x79AF6B: mov     eax, [ebp+arg_4]
0x79AF6E: push    eax
0x79AF6F: push    ecx
0x79AF70: mov     [ebp+var_4], 0
0x79AF77: call    sub_79A9B0
0x79AF7C: add     esp, 20h
0x79AF7F: lea     ecx, [ebp+var_48]
0x79AF82: push    ecx
0x79AF83: push    esi
0x79AF84: push    eax
0x79AF85: mov     ecx, ebx
0x79AF87: call    sub_79AB30
0x79AF8C: mov     ecx, [ebx+8]
0x79AF8F: mov     byte ptr [ebp+arg_8], 0
0x79AF93: mov     edx, [ebp+arg_8]
0x79AF96: push    edx
0x79AF97: mov     edx, [ebp+arg_C]
0x79AF9A: push    edx
0x79AF9B: push    ebx
0x79AF9C: push    eax
0x79AF9D: mov     eax, [ebp+arg_4]
0x79AFA0: push    ecx
0x79AFA1: push    eax
0x79AFA2: call    sub_79A9B0
0x79AFA7: mov     eax, [ebx+4]
0x79AFAA: add     esp, 18h
0x79AFAD: test    eax, eax
0x79AFAF: jz      short loc_79AFC9
0x79AFB1: mov     ecx, [ebx+8]
0x79AFB4: sub     ecx, eax
0x79AFB6: mov     eax, 92492493h
0x79AFBB: imul    ecx
0x79AFBD: add     edx, ecx
0x79AFBF: sar     edx, 5
0x79AFC2: mov     eax, edx
0x79AFC4: shr     eax, 1Fh
0x79AFC7: add     eax, edx
0x79AFC9: add     esi, eax
0x79AFCB: mov     eax, [ebx+4]
0x79AFCE: test    eax, eax
0x79AFD0: jz      short loc_79AFDB
0x79AFD2: push    eax
0x79AFD3: call    FormHeapFree
0x79AFD8: add     esp, 4
0x79AFDB: mov     eax, [ebp+arg_C]
0x79AFDE: lea     ecx, ds:0[edi*8]
0x79AFE5: sub     ecx, edi
0x79AFE7: lea     edx, [eax+ecx*8]
0x79AFEA: lea     ecx, ds:0[esi*8]
0x79AFF1: sub     ecx, esi
0x79AFF3: mov     [ebx+0Ch], edx
0x79AFF6: lea     edx, [eax+ecx*8]
0x79AFF9: mov     [ebx+8], edx
0x79AFFC: mov     [ebx+4], eax
0x79AFFF: mov     ecx, [ebp+var_C]
0x79B002: mov     large fs:0, ecx
0x79B009: pop     ecx
0x79B00A: pop     edi
0x79B00B: pop     esi
0x79B00C: pop     ebx
0x79B00D: mov     esp, ebp
0x79B00F: pop     ebp
0x79B010: retn    10h
0x79B013: mov     eax, [ebp+arg_C]
0x79B016: push    eax
0x79B017: call    FormHeapFree
0x79B01C: add     esp, 4
0x79B01F: push    0
0x79B021: push    0
0x79B023: call    ThrowException??
0x79B028: mov     ecx, [ebx+8]
0x79B02B: mov     edi, [ebp+arg_4]
0x79B02E: mov     edx, ecx
0x79B030: sub     edx, edi
0x79B032: mov     [ebp+arg_C], edx
0x79B035: mov     eax, 92492493h
0x79B03A: imul    edx
0x79B03C: add     edx, [ebp+arg_C]
0x79B03F: mov     [ebp+arg_8], ecx
0x79B042: sar     edx, 5
0x79B045: mov     eax, edx
0x79B047: shr     eax, 1Fh
0x79B04A: add     eax, edx
0x79B04C: cmp     eax, esi
0x79B04E: lea     eax, ds:0[esi*8]
0x79B055: jnb     short loc_79B0CC
0x79B057: sub     eax, esi
0x79B059: add     eax, eax
0x79B05B: add     eax, eax
0x79B05D: add     eax, eax
0x79B05F: mov     [ebp+arg_C], eax
0x79B062: add     eax, edi
0x79B064: push    eax
0x79B065: push    ecx
0x79B066: push    edi
0x79B067: mov     ecx, ebx
0x79B069: call    sub_79AAD0
0x79B06E: mov     ecx, [ebx+8]
0x79B071: sub     ecx, edi
0x79B073: lea     edx, [ebp+var_48]
0x79B076: push    edx
0x79B077: mov     eax, 92492493h
0x79B07C: imul    ecx
0x79B07E: add     edx, ecx
0x79B080: sar     edx, 5
0x79B083: mov     eax, edx
0x79B085: shr     eax, 1Fh
0x79B088: add     eax, edx
0x79B08A: sub     esi, eax
0x79B08C: mov     eax, [ebx+8]
0x79B08F: push    esi
0x79B090: push    eax
0x79B091: mov     ecx, ebx
0x79B093: mov     [ebp+var_4], 2
0x79B09A: call    sub_79AB30
0x79B09F: mov     eax, [ebp+arg_C]
0x79B0A2: add     [ebx+8], eax
0x79B0A5: mov     ebx, [ebx+8]
0x79B0A8: lea     ecx, [ebp+var_48]
0x79B0AB: push    ecx
0x79B0AC: sub     ebx, eax
0x79B0AE: push    ebx
0x79B0AF: push    edi
0x79B0B0: call    sub_79A9E0
0x79B0B5: add     esp, 0Ch
0x79B0B8: mov     ecx, [ebp+var_C]
0x79B0BB: mov     large fs:0, ecx
0x79B0C2: pop     ecx
0x79B0C3: pop     edi
0x79B0C4: pop     esi
0x79B0C5: pop     ebx
0x79B0C6: mov     esp, ebp
0x79B0C8: pop     ebp
0x79B0C9: retn    10h
0x79B0CC: sub     eax, esi
0x79B0CE: add     eax, eax
0x79B0D0: add     eax, eax
0x79B0D2: push    ecx
0x79B0D3: add     eax, eax
0x79B0D5: mov     esi, ecx
0x79B0D7: push    ecx
0x79B0D8: sub     esi, eax
0x79B0DA: push    esi
0x79B0DB: mov     ecx, ebx
0x79B0DD: mov     [ebp+arg_C], eax
0x79B0E0: call    sub_79AAD0
0x79B0E5: mov     edx, [ebp+arg_8]
0x79B0E8: push    edx
0x79B0E9: push    esi
0x79B0EA: push    edi
0x79B0EB: mov     [ebx+8], eax
0x79B0EE: call    sub_79AA70
0x79B0F3: mov     ecx, [ebp+arg_C]
0x79B0F6: lea     eax, [ebp+var_48]
0x79B0F9: push    eax
0x79B0FA: add     ecx, edi
0x79B0FC: push    ecx
0x79B0FD: push    edi
0x79B0FE: call    sub_79A9E0
0x79B103: add     esp, 18h
0x79B106: mov     ecx, [ebp+var_C]
0x79B109: mov     large fs:0, ecx
0x79B110: pop     ecx
0x79B111: pop     edi
0x79B112: pop     esi
0x79B113: pop     ebx
0x79B114: mov     esp, ebp
0x79B116: pop     ebp
0x79B117: retn    10h
