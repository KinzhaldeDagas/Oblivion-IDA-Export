0x52BF20: push    ebp
0x52BF21: mov     ebp, esp
0x52BF23: sub     esp, 14h
0x52BF26: mov     eax, ds:0B30AACh
0x52BF2B: xor     eax, ebp
0x52BF2D: mov     [ebp+var_4], eax
0x52BF30: push    ebx
0x52BF31: push    esi
0x52BF32: push    edi
0x52BF33: mov     esi, ecx
0x52BF35: call    TESForm_InitializeFormRecord
0x52BF3A: lea     ecx, [esi+18h]
0x52BF3D: call    TESFullName_Save
0x52BF42: lea     ecx, [esi+24h]
0x52BF45: call    TESDescription_Save
0x52BF4A: lea     ecx, [esi+2Ch]
0x52BF4D: call    TESSpellList_SaveComponent
0x52BF52: lea     ecx, [esi+40h]
0x52BF55: call    sub_46E650
0x52BF5A: push    24h ; '$'; Size
0x52BF5C: lea     eax, [esi+50h]
0x52BF5F: push    eax; Src
0x52BF60: mov     ecx, esi; this
0x52BF62: call    TESForm_SaveGenericComponents
0x52BF67: mov     eax, [esi+300h]
0x52BF6D: xor     edi, edi
0x52BF6F: cmp     eax, edi
0x52BF71: jnz     short loc_52BF7F
0x52BF73: cmp     [esi+304h], edi
0x52BF79: jz      short loc_52BFB2
0x52BF7B: cmp     eax, edi
0x52BF7D: jz      short loc_52BF87
0x52BF7F: mov     ecx, [eax+0Ch]
0x52BF82: mov     [ebp+Src], ecx
0x52BF85: jmp     short loc_52BF8A
0x52BF87: mov     [ebp+Src], edi
0x52BF8A: mov     eax, [esi+304h]
0x52BF90: cmp     eax, edi
0x52BF92: jz      short loc_52BF9C
0x52BF94: mov     edx, [eax+0Ch]
0x52BF97: mov     [ebp+var_C], edx
0x52BF9A: jmp     short loc_52BF9F
0x52BF9C: mov     [ebp+var_C], edi
0x52BF9F: push    8; Size
0x52BFA1: lea     eax, [ebp+Src]
0x52BFA4: push    eax; Src
0x52BFA5: push    4D414E56h; int
0x52BFAA: call    TESForm_PutFormRecordChunkData
0x52BFAF: add     esp, 0Ch
0x52BFB2: mov     eax, [esi+94h]
0x52BFB8: cmp     eax, edi
0x52BFBA: jnz     short loc_52BFC8
0x52BFBC: cmp     [esi+98h], edi
0x52BFC2: jz      short loc_52BFFB
0x52BFC4: cmp     eax, edi
0x52BFC6: jz      short loc_52BFD0
0x52BFC8: mov     ecx, [eax+0Ch]
0x52BFCB: mov     [ebp+Src], ecx
0x52BFCE: jmp     short loc_52BFD3
0x52BFD0: mov     [ebp+Src], edi
0x52BFD3: mov     eax, [esi+98h]
0x52BFD9: cmp     eax, edi
0x52BFDB: jz      short loc_52BFE5
0x52BFDD: mov     edx, [eax+0Ch]
0x52BFE0: mov     [ebp+var_C], edx
0x52BFE3: jmp     short loc_52BFE8
0x52BFE5: mov     [ebp+var_C], edi
0x52BFE8: push    8; Size
0x52BFEA: lea     eax, [ebp+Src]
0x52BFED: push    eax; Src
0x52BFEE: push    4D414E44h; int
0x52BFF3: call    TESForm_PutFormRecordChunkData
0x52BFF8: add     esp, 0Ch
0x52BFFB: push    1
0x52BFFD: lea     ecx, [esi+9Ch]
0x52C003: push    ecx
0x52C004: push    4D414E43h
0x52C009: call    j_TESForm_PutCurrentChunkData
0x52C00E: fld     dword ptr [esi+0A0h]
0x52C014: add     esp, 8
0x52C017: fstp    [esp+24h+var_24]
0x52C01A: push    4D414E50h
0x52C01F: call    TESForm_PutCurrentChunkData4
0x52C024: fld     dword ptr [esi+0A4h]
0x52C02A: add     esp, 4
0x52C02D: fstp    [esp+24h+var_24]
0x52C030: push    4D414E55h
0x52C035: call    TESForm_PutCurrentChunkData4
0x52C03A: add     esp, 8
0x52C03D: mov     eax, 10h
0x52C042: call    __alloca_probe_8
0x52C047: mov     ebx, esp
0x52C049: push    ebx
0x52C04A: lea     ecx, [esi+74h]
0x52C04D: call    sub_468C80
0x52C052: lea     edx, [ebx+8]
0x52C055: push    edx
0x52C056: lea     ecx, [esi+80h]
0x52C05C: call    sub_468C80
0x52C061: push    10h
0x52C063: push    ebx
0x52C064: push    52545441h
0x52C069: call    j_TESForm_PutCurrentChunkData
0x52C06E: push    304D414Eh
0x52C073: call    sub_46BA10
0x52C078: lea     eax, [esi+1B8h]
0x52C07E: add     esp, 10h
0x52C081: mov     [ebp+var_8], eax
0x52C084: lea     ebx, [esi+0E0h]
0x52C08A: lea     ebx, [ebx+0]
0x52C090: push    edi
0x52C091: push    58444E49h
0x52C096: call    TESForm_PutCurrentChunkData4
0x52C09B: add     esp, 8
0x52C09E: push    54444F4Dh
0x52C0A3: push    42444F4Dh
0x52C0A8: push    4C444F4Dh
0x52C0AD: mov     ecx, ebx
0x52C0AF: call    TESModel_Save
0x52C0B4: mov     ecx, [ebp+var_8]
0x52C0B7: push    4E4F4349h
0x52C0BC: call    TESTexture_Save
0x52C0C1: add     [ebp+var_8], 0Ch
0x52C0C5: add     edi, 1
0x52C0C8: add     ebx, 18h
0x52C0CB: cmp     edi, 9
0x52C0CE: jb      short loc_52C090
0x52C0D0: push    314D414Eh
0x52C0D5: call    sub_46BA10
0x52C0DA: add     esp, 4
0x52C0DD: xor     ebx, ebx
0x52C0DF: mov     [ebp+var_8], ebx
0x52C0E2: jmp     short loc_52C0E7
0x52C0E4: mov     ebx, [ebp+var_8]
0x52C0E7: test    ebx, ebx
0x52C0E9: jnz     short loc_52C0F2
0x52C0EB: push    4D414E4Dh
0x52C0F0: jmp     short loc_52C0FC
0x52C0F2: cmp     ebx, 1
0x52C0F5: jnz     short loc_52C104
0x52C0F7: push    4D414E46h
0x52C0FC: call    sub_46BA10
0x52C101: add     esp, 4
0x52C104: push    54444F4Dh
0x52C109: push    42444F4Dh
0x52C10E: lea     ecx, [ebx+ebx*2]
0x52C111: push    4C444F4Dh
0x52C116: lea     ecx, [esi+ecx*8+0B0h]
0x52C11D: call    TESModel_Save
0x52C122: mov     edx, ebx
0x52C124: shl     edx, 4
0x52C127: xor     edi, edi
0x52C129: sub     edx, ebx
0x52C12B: lea     ebx, [esi+edx*4+224h]
0x52C132: push    edi
0x52C133: push    58444E49h
0x52C138: call    TESForm_PutCurrentChunkData4
0x52C13D: add     esp, 8
0x52C140: push    4E4F4349h
0x52C145: mov     ecx, ebx
0x52C147: call    TESTexture_Save
0x52C14C: add     edi, 1
0x52C14F: add     ebx, 0Ch
0x52C152: cmp     edi, 5
0x52C155: jb      short loc_52C132
0x52C157: mov     eax, [ebp+var_8]
0x52C15A: add     eax, 1
0x52C15D: cmp     eax, 2
0x52C160: mov     [ebp+var_8], eax
0x52C163: jb      loc_52C0E4
0x52C169: lea     edi, [esi+8Ch]
0x52C16F: xor     ecx, ecx
0x52C171: test    edi, edi
0x52C173: mov     [ebp+var_8], ecx
0x52C176: mov     eax, edi
0x52C178: jz      short loc_52C192
0x52C17A: lea     ebx, [ebx+0]
0x52C180: cmp     dword ptr [eax], 0
0x52C183: jz      short loc_52C188
0x52C185: add     ecx, 1
0x52C188: mov     eax, [eax+4]
0x52C18B: test    eax, eax
0x52C18D: jnz     short loc_52C180
0x52C18F: mov     [ebp+var_8], ecx
0x52C192: mov     eax, ecx
0x52C194: xor     ebx, ebx
0x52C196: mov     ecx, 4
0x52C19B: mul     ecx
0x52C19D: seto    bl
0x52C1A0: neg     ebx
0x52C1A2: or      ebx, eax
0x52C1A4: push    ebx; Size
0x52C1A5: call    FormHeapAlloc
0x52C1AA: add     esp, 4
0x52C1AD: test    edi, edi
0x52C1AF: mov     ebx, eax
0x52C1B1: jz      short loc_52C1CA
0x52C1B3: mov     ecx, ebx
0x52C1B5: mov     eax, [edi]
0x52C1B7: test    eax, eax
0x52C1B9: jz      short loc_52C1CA
0x52C1BB: mov     edx, [eax+0Ch]
0x52C1BE: mov     [ecx], edx
0x52C1C0: mov     edi, [edi+4]
0x52C1C3: add     ecx, 4
0x52C1C6: test    edi, edi
0x52C1C8: jnz     short loc_52C1B5
0x52C1CA: mov     eax, [ebp+var_8]
0x52C1CD: lea     ecx, ds:0[eax*4]
0x52C1D4: push    ecx; Size
0x52C1D5: push    ebx; Src
0x52C1D6: push    4D414E48h; int
0x52C1DB: call    TESForm_PutFormRecordChunkData
0x52C1E0: push    ebx
0x52C1E1: call    FormHeapFree
0x52C1E6: lea     edi, [esi+0A8h]
0x52C1EC: xor     ecx, ecx
0x52C1EE: add     esp, 10h
0x52C1F1: test    edi, edi
0x52C1F3: mov     [ebp+var_8], ecx
0x52C1F6: mov     eax, edi
0x52C1F8: jz      short loc_52C212
0x52C1FA: lea     ebx, [ebx+0]
0x52C200: cmp     dword ptr [eax], 0
0x52C203: jz      short loc_52C208
0x52C205: add     ecx, 1
0x52C208: mov     eax, [eax+4]
0x52C20B: test    eax, eax
0x52C20D: jnz     short loc_52C200
0x52C20F: mov     [ebp+var_8], ecx
0x52C212: xor     ebx, ebx
0x52C214: mov     eax, ecx
0x52C216: mov     edx, 4
0x52C21B: mul     edx
0x52C21D: seto    bl
0x52C220: neg     ebx
0x52C222: or      ebx, eax
0x52C224: push    ebx; Size
0x52C225: call    FormHeapAlloc
0x52C22A: add     esp, 4
0x52C22D: test    edi, edi
0x52C22F: mov     ebx, eax
0x52C231: jz      short loc_52C24A
0x52C233: mov     ecx, ebx
0x52C235: mov     eax, [edi]
0x52C237: test    eax, eax
0x52C239: jz      short loc_52C24A
0x52C23B: mov     eax, [eax+0Ch]
0x52C23E: mov     [ecx], eax
0x52C240: mov     edi, [edi+4]
0x52C243: add     ecx, 4
0x52C246: test    edi, edi
0x52C248: jnz     short loc_52C235
0x52C24A: mov     ecx, [ebp+var_8]
0x52C24D: lea     edx, ds:0[ecx*4]
0x52C254: push    edx; Size
0x52C255: push    ebx; Src
0x52C256: push    4D414E45h; int
0x52C25B: call    TESForm_PutFormRecordChunkData
0x52C260: push    ebx
0x52C261: call    FormHeapFree
0x52C266: mov     ebx, [esi+29Ch]
0x52C26C: add     esp, 10h
0x52C26F: test    ebx, ebx
0x52C271: jz      loc_52C2FF
0x52C277: lea     edi, ds:0[ebx*4]
0x52C27E: push    1
0x52C280: push    edi
0x52C281: mov     ecx, offset FormHeap
0x52C286: mov     [ebp+Size], edi
0x52C289: call    j_MemoryHeap_Alloc
0x52C28E: push    edi
0x52C28F: push    0
0x52C291: push    eax
0x52C292: mov     [ebp+var_8], eax
0x52C295: call    __memset
0x52C29A: add     esp, 0Ch
0x52C29D: xor     edi, edi
0x52C29F: test    ebx, ebx
0x52C2A1: jbe     short loc_52C2DF
0x52C2A3: mov     eax, [esi+2A8h]
0x52C2A9: test    eax, eax
0x52C2AB: jz      short loc_52C2BA
0x52C2AD: mov     ecx, [esi+2ACh]
0x52C2B3: sub     ecx, eax
0x52C2B5: sar     ecx, 2
0x52C2B8: jnz     short loc_52C2BF
0x52C2BA: call    __invalid_parameter_noinfo
0x52C2BF: mov     edx, [esi+2A0h]
0x52C2C5: mov     eax, [esi+2A8h]
0x52C2CB: imul    edx, edi
0x52C2CE: mov     ecx, [ebp+var_8]
0x52C2D1: fld     dword ptr [eax+edx*4]
0x52C2D4: add     edi, 1
0x52C2D7: cmp     edi, ebx
0x52C2D9: fstp    dword ptr [ecx+edi*4-4]
0x52C2DD: jb      short loc_52C2A3
0x52C2DF: mov     edx, [ebp+Size]
0x52C2E2: mov     edi, [ebp+var_8]
0x52C2E5: push    edx; Size
0x52C2E6: push    edi; Src
0x52C2E7: push    53474746h; int
0x52C2EC: call    TESForm_PutFormRecordChunkData
0x52C2F1: add     esp, 0Ch
0x52C2F4: push    edi; void *
0x52C2F5: mov     ecx, offset FormHeap
0x52C2FA: call    MemoryHeap_Free_checked
0x52C2FF: mov     eax, [esi+2B4h]
0x52C305: test    eax, eax
0x52C307: mov     [ebp+var_8], eax
0x52C30A: jz      loc_52C393
0x52C310: lea     edi, ds:0[eax*4]
0x52C317: push    1
0x52C319: push    edi
0x52C31A: mov     ecx, offset FormHeap
0x52C31F: mov     [ebp+Size], edi
0x52C322: call    j_MemoryHeap_Alloc
0x52C327: push    edi
0x52C328: mov     ebx, eax
0x52C32A: push    0
0x52C32C: push    ebx
0x52C32D: call    __memset
0x52C332: xor     edi, edi
0x52C334: add     esp, 0Ch
0x52C337: cmp     [ebp+var_8], edi
0x52C33A: jbe     short loc_52C376
0x52C33C: mov     eax, [esi+2C0h]
0x52C342: test    eax, eax
0x52C344: jz      short loc_52C353
0x52C346: mov     ecx, [esi+2C4h]
0x52C34C: sub     ecx, eax
0x52C34E: sar     ecx, 2
0x52C351: jnz     short loc_52C358
0x52C353: call    __invalid_parameter_noinfo
0x52C358: mov     edx, [esi+2B8h]
0x52C35E: mov     eax, [esi+2C0h]
0x52C364: imul    edx, edi
0x52C367: add     edi, 1
0x52C36A: cmp     edi, [ebp+var_8]
0x52C36D: fld     dword ptr [eax+edx*4]
0x52C370: fstp    dword ptr [ebx+edi*4-4]
0x52C374: jb      short loc_52C33C
0x52C376: mov     ecx, [ebp+Size]
0x52C379: push    ecx; Size
0x52C37A: push    ebx; Src
0x52C37B: push    41474746h; int
0x52C380: call    TESForm_PutFormRecordChunkData
0x52C385: add     esp, 0Ch
0x52C388: push    ebx; void *
0x52C389: mov     ecx, offset FormHeap
0x52C38E: call    MemoryHeap_Free_checked
0x52C393: mov     eax, [esi+2CCh]
0x52C399: test    eax, eax
0x52C39B: mov     [ebp+var_8], eax
0x52C39E: jz      loc_52C427
0x52C3A4: lea     edi, ds:0[eax*4]
0x52C3AB: push    1
0x52C3AD: push    edi
0x52C3AE: mov     ecx, offset FormHeap
0x52C3B3: mov     [ebp+Size], edi
0x52C3B6: call    j_MemoryHeap_Alloc
0x52C3BB: push    edi
0x52C3BC: mov     ebx, eax
0x52C3BE: push    0
0x52C3C0: push    ebx
0x52C3C1: call    __memset
0x52C3C6: xor     edi, edi
0x52C3C8: add     esp, 0Ch
0x52C3CB: cmp     [ebp+var_8], edi
0x52C3CE: jbe     short loc_52C40A
0x52C3D0: mov     eax, [esi+2D8h]
0x52C3D6: test    eax, eax
0x52C3D8: jz      short loc_52C3E7
0x52C3DA: mov     edx, [esi+2DCh]
0x52C3E0: sub     edx, eax
0x52C3E2: sar     edx, 2
0x52C3E5: jnz     short loc_52C3EC
0x52C3E7: call    __invalid_parameter_noinfo
0x52C3EC: mov     eax, [esi+2D0h]
0x52C3F2: mov     ecx, [esi+2D8h]
0x52C3F8: imul    eax, edi
0x52C3FB: add     edi, 1
0x52C3FE: cmp     edi, [ebp+var_8]
0x52C401: fld     dword ptr [ecx+eax*4]
0x52C404: fstp    dword ptr [ebx+edi*4-4]
0x52C408: jb      short loc_52C3D0
0x52C40A: mov     edx, [ebp+Size]
0x52C40D: push    edx; Size
0x52C40E: push    ebx; Src
0x52C40F: push    53544746h; int
0x52C414: call    TESForm_PutFormRecordChunkData
0x52C419: add     esp, 0Ch
0x52C41C: push    ebx; void *
0x52C41D: mov     ecx, offset FormHeap
0x52C422: call    MemoryHeap_Free_checked
0x52C427: push    2; Size
0x52C429: lea     eax, [esi+2FCh]
0x52C42F: push    eax; Src
0x52C430: push    4D414E53h; int
0x52C435: call    TESForm_PutFormRecordChunkData
0x52C43A: add     esp, 0Ch
0x52C43D: mov     ecx, esi; this
0x52C43F: call    TESForm_FinalizeFormRecord
0x52C444: lea     esp, [ebp-20h]
0x52C447: pop     edi
0x52C448: pop     esi
0x52C449: pop     ebx
0x52C44A: mov     ecx, [ebp+var_4]
0x52C44D: xor     ecx, ebp
0x52C44F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x52C454: mov     esp, ebp
0x52C456: pop     ebp
0x52C457: retn
