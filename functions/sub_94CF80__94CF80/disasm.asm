0x94CF80: push    ebp
0x94CF81: mov     ebp, esp
0x94CF83: and     esp, 0FFFFFFF0h
0x94CF86: sub     esp, 74h
0x94CF89: push    ebx
0x94CF8A: push    esi
0x94CF8B: push    edi
0x94CF8C: push    3F800000h; float
0x94CF91: push    0; float
0x94CF93: push    3F800000h; float
0x94CF98: push    3F800000h; float
0x94CF9D: mov     esi, ecx
0x94CF9F: call    sub_8AEBB0
0x94CFA4: push    3F800000h; float
0x94CFA9: push    0; float
0x94CFAB: push    3F000000h; float
0x94CFB0: push    3F800000h; float
0x94CFB5: mov     [esp+0A0h+var_6C], eax
0x94CFB9: call    sub_8AEBB0
0x94CFBE: push    3F800000h; float
0x94CFC3: push    3F800000h; float
0x94CFC8: push    0; float
0x94CFCA: push    3F800000h; float
0x94CFCF: mov     [esp+0B0h+var_68], eax
0x94CFD3: call    sub_8AEBB0
0x94CFD8: movaps  xmm0, xmmword ptr [esi+60h]
0x94CFDC: mov     ebx, [ebp+arg_0]
0x94CFDF: mov     ecx, [esi+0Ch]
0x94CFE2: add     esp, 30h
0x94CFE5: push    ebx
0x94CFE6: movaps  [esp+84h+var_50], xmm0
0x94CFEB: movaps  xmm0, xmmword ptr [esi+70h]
0x94CFEF: push    ecx
0x94CFF0: movaps  [esp+88h+var_60], xmm0
0x94CFF5: movaps  xmm0, xmmword ptr [esi+80h]
0x94CFFC: push    0FFFF0000h
0x94D001: movaps  [esp+8Ch+var_40], xmm0
0x94D006: movaps  xmm0, xmmword ptr [esi+90h]
0x94D00D: lea     edx, [esp+8Ch+var_60]
0x94D011: push    edx
0x94D012: movaps  [esp+90h+var_20], xmm0
0x94D017: movaps  xmm0, xmmword ptr [esi+0A0h]
0x94D01E: lea     ecx, [esp+90h+var_50]
0x94D022: mov     [esp+90h+var_64], eax
0x94D026: push    ecx
0x94D027: lea     eax, [esi+20h]
0x94D02A: movaps  [esp+94h+var_30], xmm0
0x94D02F: movaps  xmm0, xmmword ptr [esi+0B0h]
0x94D036: lea     edi, [esi+0C0h]
0x94D03C: push    eax
0x94D03D: mov     ecx, edi
0x94D03F: movaps  [esp+98h+var_10], xmm0
0x94D047: call    sub_958750
0x94D04C: mov     edx, [esi+0Ch]
0x94D04F: push    ebx
0x94D050: push    edx
0x94D051: push    0FF008000h
0x94D056: lea     eax, [esp+8Ch+var_40]
0x94D05A: push    eax
0x94D05B: lea     ecx, [esp+90h+var_60]
0x94D05F: push    ecx
0x94D060: lea     eax, [esi+20h]
0x94D063: push    eax
0x94D064: mov     ecx, edi
0x94D066: call    sub_958750
0x94D06B: mov     edx, [esi+0Ch]
0x94D06E: push    ebx
0x94D06F: push    edx
0x94D070: push    0FF0000FFh
0x94D075: lea     eax, [esp+8Ch+var_50]
0x94D079: push    eax
0x94D07A: lea     ecx, [esp+90h+var_40]
0x94D07E: push    ecx
0x94D07F: lea     eax, [esi+20h]
0x94D082: push    eax
0x94D083: mov     ecx, edi
0x94D085: call    sub_958750
0x94D08A: mov     edx, [esi+0Ch]
0x94D08D: mov     ecx, [esp+80h+var_6C]
0x94D091: push    ebx
0x94D092: push    edx
0x94D093: lea     eax, [esi+30h]
0x94D096: mov     [esp+88h+var_70], eax
0x94D09A: push    ecx
0x94D09B: lea     edx, [esp+8Ch+var_30]
0x94D09F: push    edx
0x94D0A0: lea     ecx, [esp+90h+var_20]
0x94D0A4: push    ecx
0x94D0A5: push    eax
0x94D0A6: mov     ecx, edi
0x94D0A8: call    sub_958750
0x94D0AD: mov     edx, [esi+0Ch]
0x94D0B0: mov     eax, [esp+80h+var_68]
0x94D0B4: push    ebx
0x94D0B5: push    edx
0x94D0B6: push    eax
0x94D0B7: mov     eax, [esp+8Ch+var_70]
0x94D0BB: lea     ecx, [esp+8Ch+var_10]
0x94D0BF: push    ecx
0x94D0C0: lea     edx, [esp+90h+var_30]
0x94D0C4: push    edx
0x94D0C5: push    eax
0x94D0C6: mov     ecx, edi
0x94D0C8: call    sub_958750
0x94D0CD: mov     ecx, [esi+0Ch]
0x94D0D0: mov     edx, [esp+80h+var_64]
0x94D0D4: push    ebx
0x94D0D5: push    ecx
0x94D0D6: push    edx
0x94D0D7: mov     edx, [esp+8Ch+var_70]
0x94D0DB: lea     eax, [esp+8Ch+var_20]
0x94D0DF: push    eax
0x94D0E0: lea     ecx, [esp+90h+var_10]
0x94D0E7: push    ecx
0x94D0E8: push    edx
0x94D0E9: mov     ecx, edi
0x94D0EB: call    sub_958750
0x94D0F0: pop     edi
0x94D0F1: pop     esi
0x94D0F2: pop     ebx
0x94D0F3: mov     esp, ebp
0x94D0F5: pop     ebp
0x94D0F6: retn    4
