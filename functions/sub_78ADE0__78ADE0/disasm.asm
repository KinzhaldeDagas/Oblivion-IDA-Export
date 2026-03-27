0x78ADE0: push    ebp
0x78ADE1: mov     ebp, esp
0x78ADE3: push    0FFFFFFFFh
0x78ADE5: push    offset SEH_78ADE0
0x78ADEA: mov     eax, large fs:0
0x78ADF0: push    eax
0x78ADF1: sub     esp, 20h
0x78ADF4: push    ebx
0x78ADF5: push    esi
0x78ADF6: push    edi
0x78ADF7: mov     eax, ds:0B30AACh
0x78ADFC: xor     eax, ebp
0x78ADFE: push    eax
0x78ADFF: lea     eax, [ebp+var_C]
0x78AE02: mov     large fs:0, eax
0x78AE08: mov     [ebp+var_10], esp
0x78AE0B: mov     ebx, ecx
0x78AE0D: mov     esi, [ebp+arg_C]
0x78AE10: mov     ecx, 7
0x78AE15: lea     edi, [ebp+var_2C]
0x78AE18: rep movsd
0x78AE1A: mov     ecx, [ebx+4]
0x78AE1D: test    ecx, ecx
0x78AE1F: jnz     short loc_78AE25
0x78AE21: xor     edi, edi
0x78AE23: jmp     short loc_78AE3D
0x78AE25: mov     esi, [ebx+0Ch]
0x78AE28: sub     esi, ecx
0x78AE2A: mov     eax, 92492493h
0x78AE2F: imul    esi
0x78AE31: add     edx, esi
0x78AE33: sar     edx, 4
0x78AE36: mov     edi, edx
0x78AE38: shr     edi, 1Fh
0x78AE3B: add     edi, edx
0x78AE3D: mov     esi, [ebp+arg_8]
0x78AE40: test    esi, esi
0x78AE42: jz      loc_78B0A2
0x78AE48: test    ecx, ecx
0x78AE4A: jnz     short loc_78AE50
0x78AE4C: xor     eax, eax
0x78AE4E: jmp     short loc_78AE69
0x78AE50: mov     ecx, [ebx+8]
0x78AE53: sub     ecx, [ebx+4]
0x78AE56: mov     eax, 92492493h
0x78AE5B: imul    ecx
0x78AE5D: add     edx, ecx
0x78AE5F: sar     edx, 4
0x78AE62: mov     eax, edx
0x78AE64: shr     eax, 1Fh
0x78AE67: add     eax, edx
0x78AE69: mov     ecx, 9249249h
0x78AE6E: sub     ecx, eax
0x78AE70: cmp     ecx, esi
0x78AE72: jnb     short loc_78AE79
0x78AE74: call    sub_790B90
0x78AE79: cmp     dword ptr [ebx+4], 0
0x78AE7D: jnz     short loc_78AE83
0x78AE7F: xor     eax, eax
0x78AE81: jmp     short loc_78AE9C
0x78AE83: mov     ecx, [ebx+8]
0x78AE86: sub     ecx, [ebx+4]
0x78AE89: mov     eax, 92492493h
0x78AE8E: imul    ecx
0x78AE90: add     edx, ecx
0x78AE92: sar     edx, 4
0x78AE95: mov     eax, edx
0x78AE97: shr     eax, 1Fh
0x78AE9A: add     eax, edx
0x78AE9C: add     eax, esi
0x78AE9E: cmp     edi, eax
0x78AEA0: jnb     loc_78AFC8
0x78AEA6: mov     eax, edi
0x78AEA8: shr     eax, 1
0x78AEAA: mov     edx, 9249249h
0x78AEAF: sub     edx, eax
0x78AEB1: cmp     edx, edi
0x78AEB3: jnb     short loc_78AEB9
0x78AEB5: xor     edi, edi
0x78AEB7: jmp     short loc_78AEBB
0x78AEB9: add     edi, eax
0x78AEBB: cmp     dword ptr [ebx+4], 0
0x78AEBF: jnz     short loc_78AEC5
0x78AEC1: xor     eax, eax
0x78AEC3: jmp     short loc_78AEDE
0x78AEC5: mov     ecx, [ebx+8]
0x78AEC8: sub     ecx, [ebx+4]
0x78AECB: mov     eax, 92492493h
0x78AED0: imul    ecx
0x78AED2: add     edx, ecx
0x78AED4: sar     edx, 4
0x78AED7: mov     eax, edx
0x78AED9: shr     eax, 1Fh
0x78AEDC: add     eax, edx
0x78AEDE: add     eax, esi
0x78AEE0: cmp     edi, eax
0x78AEE2: jnb     short loc_78AEEF
0x78AEE4: mov     ecx, ebx
0x78AEE6: call    sub_7876C0
0x78AEEB: mov     edi, eax
0x78AEED: add     edi, esi
0x78AEEF: push    0
0x78AEF1: push    edi; char *
0x78AEF2: call    sub_787740
0x78AEF7: mov     ecx, [ebx+4]
0x78AEFA: mov     byte ptr [ebp+arg_8], 0
0x78AEFE: mov     edx, [ebp+arg_8]
0x78AF01: push    edx
0x78AF02: mov     [ebp+arg_C], eax
0x78AF05: mov     edx, [ebp+arg_C]
0x78AF08: push    edx
0x78AF09: push    ebx
0x78AF0A: push    eax
0x78AF0B: mov     eax, [ebp+arg_4]
0x78AF0E: push    eax
0x78AF0F: push    ecx
0x78AF10: mov     [ebp+var_4], 0
0x78AF17: call    sub_788630
0x78AF1C: add     esp, 20h
0x78AF1F: lea     ecx, [ebp+var_2C]
0x78AF22: push    ecx
0x78AF23: push    esi
0x78AF24: push    eax
0x78AF25: mov     ecx, ebx
0x78AF27: call    sub_788E90
0x78AF2C: mov     ecx, [ebx+8]
0x78AF2F: mov     byte ptr [ebp+arg_8], 0
0x78AF33: mov     edx, [ebp+arg_8]
0x78AF36: push    edx
0x78AF37: mov     edx, [ebp+arg_C]
0x78AF3A: push    edx
0x78AF3B: push    ebx
0x78AF3C: push    eax
0x78AF3D: mov     eax, [ebp+arg_4]
0x78AF40: push    ecx
0x78AF41: push    eax
0x78AF42: call    sub_788630
0x78AF47: mov     eax, [ebx+4]
0x78AF4A: add     esp, 18h
0x78AF4D: test    eax, eax
0x78AF4F: jz      short loc_78AF69
0x78AF51: mov     ecx, [ebx+8]
0x78AF54: sub     ecx, eax
0x78AF56: mov     eax, 92492493h
0x78AF5B: imul    ecx
0x78AF5D: add     edx, ecx
0x78AF5F: sar     edx, 4
0x78AF62: mov     eax, edx
0x78AF64: shr     eax, 1Fh
0x78AF67: add     eax, edx
0x78AF69: add     esi, eax
0x78AF6B: mov     eax, [ebx+4]
0x78AF6E: test    eax, eax
0x78AF70: jz      short loc_78AF7B
0x78AF72: push    eax
0x78AF73: call    FormHeapFree
0x78AF78: add     esp, 4
0x78AF7B: mov     eax, [ebp+arg_C]
0x78AF7E: lea     ecx, ds:0[edi*8]
0x78AF85: sub     ecx, edi
0x78AF87: lea     edx, [eax+ecx*4]
0x78AF8A: lea     ecx, ds:0[esi*8]
0x78AF91: sub     ecx, esi
0x78AF93: mov     [ebx+0Ch], edx
0x78AF96: lea     edx, [eax+ecx*4]
0x78AF99: mov     [ebx+8], edx
0x78AF9C: mov     [ebx+4], eax
0x78AF9F: mov     ecx, [ebp+var_C]
0x78AFA2: mov     large fs:0, ecx
0x78AFA9: pop     ecx
0x78AFAA: pop     edi
0x78AFAB: pop     esi
0x78AFAC: pop     ebx
0x78AFAD: mov     esp, ebp
0x78AFAF: pop     ebp
0x78AFB0: retn    10h
0x78AFB3: mov     eax, [ebp+arg_C]
0x78AFB6: push    eax
0x78AFB7: call    FormHeapFree
0x78AFBC: add     esp, 4
0x78AFBF: push    0
0x78AFC1: push    0
0x78AFC3: call    ThrowException??
0x78AFC8: mov     ecx, [ebx+8]
0x78AFCB: mov     edi, [ebp+arg_4]
0x78AFCE: mov     edx, ecx
0x78AFD0: sub     edx, edi
0x78AFD2: mov     [ebp+arg_C], edx
0x78AFD5: mov     eax, 92492493h
0x78AFDA: imul    edx
0x78AFDC: add     edx, [ebp+arg_C]
0x78AFDF: mov     [ebp+arg_8], ecx
0x78AFE2: sar     edx, 4
0x78AFE5: mov     eax, edx
0x78AFE7: shr     eax, 1Fh
0x78AFEA: add     eax, edx
0x78AFEC: cmp     eax, esi
0x78AFEE: lea     eax, ds:0[esi*8]
0x78AFF5: jnb     short loc_78B06A
0x78AFF7: sub     eax, esi
0x78AFF9: add     eax, eax
0x78AFFB: add     eax, eax
0x78AFFD: mov     [ebp+arg_C], eax
0x78B000: add     eax, edi
0x78B002: push    eax
0x78B003: push    ecx
0x78B004: push    edi
0x78B005: mov     ecx, ebx
0x78B007: call    sub_788ED0
0x78B00C: mov     ecx, [ebx+8]
0x78B00F: sub     ecx, edi
0x78B011: lea     edx, [ebp+var_2C]
0x78B014: push    edx
0x78B015: mov     eax, 92492493h
0x78B01A: imul    ecx
0x78B01C: add     edx, ecx
0x78B01E: sar     edx, 4
0x78B021: mov     eax, edx
0x78B023: shr     eax, 1Fh
0x78B026: add     eax, edx
0x78B028: sub     esi, eax
0x78B02A: mov     eax, [ebx+8]
0x78B02D: push    esi
0x78B02E: push    eax
0x78B02F: mov     ecx, ebx
0x78B031: mov     [ebp+var_4], 2
0x78B038: call    sub_788E90
0x78B03D: mov     eax, [ebp+arg_C]
0x78B040: add     [ebx+8], eax
0x78B043: mov     ebx, [ebx+8]
0x78B046: lea     ecx, [ebp+var_2C]
0x78B049: push    ecx
0x78B04A: sub     ebx, eax
0x78B04C: push    ebx
0x78B04D: push    edi
0x78B04E: call    sub_788AB0
0x78B053: add     esp, 0Ch
0x78B056: mov     ecx, [ebp+var_C]
0x78B059: mov     large fs:0, ecx
0x78B060: pop     ecx
0x78B061: pop     edi
0x78B062: pop     esi
0x78B063: pop     ebx
0x78B064: mov     esp, ebp
0x78B066: pop     ebp
0x78B067: retn    10h
0x78B06A: sub     eax, esi
0x78B06C: add     eax, eax
0x78B06E: push    ecx
0x78B06F: add     eax, eax
0x78B071: mov     esi, ecx
0x78B073: push    ecx
0x78B074: sub     esi, eax
0x78B076: push    esi
0x78B077: mov     ecx, ebx
0x78B079: mov     [ebp+arg_C], eax
0x78B07C: call    sub_788ED0
0x78B081: mov     edx, [ebp+arg_8]
0x78B084: push    edx
0x78B085: push    esi
0x78B086: push    edi
0x78B087: mov     [ebx+8], eax
0x78B08A: call    sub_788B60
0x78B08F: mov     ecx, [ebp+arg_C]
0x78B092: lea     eax, [ebp+var_2C]
0x78B095: push    eax
0x78B096: add     ecx, edi
0x78B098: push    ecx
0x78B099: push    edi
0x78B09A: call    sub_788AB0
0x78B09F: add     esp, 18h
0x78B0A2: mov     ecx, [ebp+var_C]
0x78B0A5: mov     large fs:0, ecx
0x78B0AC: pop     ecx
0x78B0AD: pop     edi
0x78B0AE: pop     esi
0x78B0AF: pop     ebx
0x78B0B0: mov     esp, ebp
0x78B0B2: pop     ebp
0x78B0B3: retn    10h
