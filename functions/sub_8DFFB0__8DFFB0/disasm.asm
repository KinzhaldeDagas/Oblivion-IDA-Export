0x8DFFB0: sub     esp, 68h
0x8DFFB3: push    ebx
0x8DFFB4: push    ebp
0x8DFFB5: mov     ebp, large fs:2Ch
0x8DFFBC: push    esi
0x8DFFBD: push    edi
0x8DFFBE: mov     edi, ds:0BA9DE4h
0x8DFFC4: mov     eax, [ebp+edi*4+0]
0x8DFFC8: mov     edx, [eax+1A8h]
0x8DFFCE: mov     ebx, ecx
0x8DFFD0: mov     ecx, [eax+1A4h]
0x8DFFD6: cmp     ecx, edx
0x8DFFD8: jnb     short loc_8DFFFE
0x8DFFDA: mov     esi, eax
0x8DFFDC: mov     ecx, [esi+1A4h]
0x8DFFE2: mov     dword ptr [ecx], offset aTtsimulate; "TtSimulate"
0x8DFFE8: rdtsc
0x8DFFEA: mov     [esp+78h+var_68], eax
0x8DFFEE: mov     edx, [esp+78h+var_68]
0x8DFFF2: mov     [ecx+4], edx
0x8DFFF5: add     ecx, 0Ch
0x8DFFF8: mov     [esi+1A4h], ecx
0x8DFFFE: lea     esi, [ebx+0C0h]
0x8E0004: mov     ecx, esi; lpCriticalSection
0x8E0006: call    sub_8A7720
0x8E000B: mov     edx, [ebx+90h]
0x8E0011: inc     edx
0x8E0012: mov     eax, edx
0x8E0014: cmp     eax, 1
0x8E0017: mov     [ebx+90h], edx
0x8E001D: jnz     short loc_8E003D
0x8E001F: mov     eax, [esp+78h+arg_8]
0x8E0026: mov     ecx, [esp+78h+arg_4]
0x8E002D: mov     edx, [esp+78h+arg_0]
0x8E0031: push    eax; float
0x8E0032: push    ecx; int
0x8E0033: push    edx; int
0x8E0034: mov     ecx, ebx
0x8E0036: call    sub_8DFB70
0x8E003B: jmp     short loc_8E00AA
0x8E003D: push    esi; lpCriticalSection
0x8E003E: call    dword ptr ds:0A28074h
0x8E0044: mov     eax, [esp+78h+arg_0]
0x8E0048: mov     esi, [eax+74h]
0x8E004B: mov     edx, [eax+268h]
0x8E0051: mov     [esp+78h+var_64], eax
0x8E0055: mov     [esp+78h+var_60], ebx
0x8E0059: mov     [esp+78h+var_5C], 1
0x8E0061: mov     ecx, 0Bh
0x8E0066: lea     edi, [esp+78h+var_58]
0x8E006A: rep movsd
0x8E006C: mov     ecx, [eax+264h]
0x8E0072: mov     [esp+78h+var_2C], ecx
0x8E0076: mov     ecx, [eax+270h]
0x8E007C: mov     [esp+78h+var_1C], ecx
0x8E0080: mov     [esp+78h+var_28], edx
0x8E0084: mov     edx, [eax+168h]
0x8E008A: mov     eax, [eax+16Ch]
0x8E0090: lea     ecx, [esp+78h+var_64]
0x8E0094: push    ecx
0x8E0095: mov     ecx, ebx
0x8E0097: mov     [esp+7Ch+var_24], edx
0x8E009B: mov     [esp+7Ch+var_20], eax
0x8E009F: call    sub_8DF6B0
0x8E00A4: mov     edi, ds:0BA9DE4h
0x8E00AA: mov     eax, [ebp+edi*4+0]
0x8E00AE: mov     edx, [eax+1A4h]
0x8E00B4: cmp     edx, [eax+1A8h]
0x8E00BA: jnb     short loc_8E00E0
0x8E00BC: mov     esi, eax
0x8E00BE: mov     ecx, [esi+1A4h]
0x8E00C4: mov     dword ptr [ecx], offset aEt; "Et"
0x8E00CA: rdtsc
0x8E00CC: mov     [esp+78h+arg_0], eax
0x8E00D0: mov     eax, [esp+78h+arg_0]
0x8E00D4: mov     [ecx+4], eax
0x8E00D7: add     ecx, 0Ch
0x8E00DA: mov     [esi+1A4h], ecx
0x8E00E0: pop     edi
0x8E00E1: pop     esi
0x8E00E2: pop     ebp
0x8E00E3: xor     eax, eax
0x8E00E5: pop     ebx
0x8E00E6: add     esp, 68h
0x8E00E9: retn    0Ch
