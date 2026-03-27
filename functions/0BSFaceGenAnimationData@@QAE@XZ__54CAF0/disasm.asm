0x54CAF0: push    0FFFFFFFFh
0x54CAF2: push    offset ??0BSFaceGenAnimationData@@QAE@XZ_SEH
0x54CAF7: mov     eax, large fs:0
0x54CAFD: push    eax
0x54CAFE: push    ecx
0x54CAFF: push    ebx
0x54CB00: push    esi
0x54CB01: push    edi
0x54CB02: mov     eax, ds:0B30AACh
0x54CB07: xor     eax, esp
0x54CB09: push    eax
0x54CB0A: lea     eax, [esp+20h+var_C]
0x54CB0E: mov     large fs:0, eax
0x54CB14: mov     esi, ecx
0x54CB16: mov     [esp+20h+var_10], esi
0x54CB1A: call    sub_721350
0x54CB1F: push    0Dh
0x54CB21: xor     ebx, ebx
0x54CB23: push    1
0x54CB25: lea     ecx, [esi+10h]
0x54CB28: mov     [esp+28h+var_4], ebx
0x54CB2C: mov     dword ptr [esi], offset ??_7BSFaceGenAnimationData@@6B@; const BSFaceGenAnimationData::`vftable'
0x54CB32: call    sub_54EA00
0x54CB37: mov     edi, offset ??_7?$NiTPointerList@PAVBSFaceGenKeyframe@@@@6B@; const NiTPointerList<BSFaceGenKeyframe *>::`vftable'
0x54CB3C: mov     [esi+30h], ebx
0x54CB3F: mov     [esi+28h], ebx
0x54CB42: mov     [esi+2Ch], ebx
0x54CB45: mov     [esi+24h], edi
0x54CB48: push    0Dh
0x54CB4A: push    1
0x54CB4C: lea     ecx, [esi+34h]
0x54CB4F: mov     byte ptr [esp+28h+var_4], 2
0x54CB54: call    sub_54EA00
0x54CB59: push    0Dh
0x54CB5B: push    1
0x54CB5D: lea     ecx, [esi+48h]
0x54CB60: mov     byte ptr [esp+28h+var_4], 3
0x54CB65: call    sub_54EA00
0x54CB6A: mov     [esi+68h], ebx
0x54CB6D: mov     [esi+60h], ebx
0x54CB70: mov     [esi+64h], ebx
0x54CB73: mov     [esi+5Ch], edi
0x54CB76: push    11h
0x54CB78: push    2
0x54CB7A: lea     ecx, [esi+6Ch]
0x54CB7D: mov     byte ptr [esp+28h+var_4], 5
0x54CB82: call    sub_54EA00
0x54CB87: mov     [esi+8Ch], ebx
0x54CB8D: mov     [esi+84h], ebx
0x54CB93: mov     [esi+88h], ebx
0x54CB99: mov     [esi+80h], edi
0x54CB9F: push    11h
0x54CBA1: push    2
0x54CBA3: lea     ecx, [esi+90h]
0x54CBA9: mov     byte ptr [esp+28h+var_4], 7
0x54CBAE: call    sub_54EA00
0x54CBB3: push    11h
0x54CBB5: push    2
0x54CBB7: lea     ecx, [esi+0A4h]
0x54CBBD: mov     byte ptr [esp+28h+var_4], 8
0x54CBC2: call    sub_54EA00
0x54CBC7: mov     [esi+0C4h], ebx
0x54CBCD: mov     [esi+0BCh], ebx
0x54CBD3: mov     [esi+0C0h], ebx
0x54CBD9: mov     [esi+0B8h], edi
0x54CBDF: push    10h
0x54CBE1: push    ebx
0x54CBE2: lea     ecx, [esi+0C8h]
0x54CBE8: mov     byte ptr [esp+28h+var_4], 0Ah
0x54CBED: call    sub_54EA00
0x54CBF2: mov     [esi+0E8h], ebx
0x54CBF8: mov     [esi+0E0h], ebx
0x54CBFE: mov     [esi+0E4h], ebx
0x54CC04: mov     [esi+0DCh], edi
0x54CC0A: push    10h
0x54CC0C: push    ebx
0x54CC0D: lea     ecx, [esi+0ECh]
0x54CC13: mov     byte ptr [esp+28h+var_4], 0Ch
0x54CC18: call    sub_54EA00
0x54CC1D: push    10h
0x54CC1F: mov     byte ptr [esp+24h+var_4], 0Dh
0x54CC24: push    ebx
0x54CC25: lea     ecx, [esi+100h]
0x54CC2B: call    sub_54EA00
0x54CC30: mov     [esi+120h], ebx
0x54CC36: mov     [esi+118h], ebx
0x54CC3C: mov     [esi+11Ch], ebx
0x54CC42: mov     [esi+114h], edi
0x54CC48: push    1
0x54CC4A: push    3
0x54CC4C: lea     ecx, [esi+124h]
0x54CC52: mov     byte ptr [esp+28h+var_4], 0Fh
0x54CC57: call    sub_54EA00
0x54CC5C: mov     [esi+144h], ebx
0x54CC62: mov     [esi+13Ch], ebx
0x54CC68: mov     [esi+140h], ebx
0x54CC6E: mov     [esi+138h], edi
0x54CC74: push    1
0x54CC76: push    3
0x54CC78: lea     ecx, [esi+148h]
0x54CC7E: mov     byte ptr [esp+28h+var_4], 11h
0x54CC83: call    sub_54EA00
0x54CC88: push    1
0x54CC8A: push    3
0x54CC8C: lea     ecx, [esi+15Ch]
0x54CC92: mov     byte ptr [esp+28h+var_4], 12h
0x54CC97: call    sub_54EA00
0x54CC9C: fldz
0x54CC9E: mov     [esi+0Ch], ebx
0x54CCA1: mov     eax, ds:0B3F9A8h
0x54CCA6: mov     [esi+170h], eax
0x54CCAC: mov     ecx, ds:0B3F9ACh
0x54CCB2: mov     [esi+174h], ecx
0x54CCB8: mov     edx, ds:0B3F9B0h
0x54CCBE: fst     dword ptr [esi+1DCh]
0x54CCC4: fst     dword ptr [esi+1C4h]
0x54CCCA: mov     [esi+178h], edx
0x54CCD0: fst     dword ptr [esi+1C8h]
0x54CCD6: mov     [esi+1D7h], bl
0x54CCDC: fst     dword ptr [esi+18Ch]
0x54CCE2: mov     [esi+1D4h], bl
0x54CCE8: fst     dword ptr [esi+190h]
0x54CCEE: mov     [esi+1D8h], bl
0x54CCF4: fst     dword ptr [esi+184h]
0x54CCFA: mov     [esi+1DAh], bl
0x54CD00: fst     dword ptr [esi+188h]
0x54CD06: mov     [esi+1DBh], bl
0x54CD0C: fst     dword ptr [esi+17Ch]
0x54CD12: mov     [esi+1C0h], ebx
0x54CD18: fst     dword ptr [esi+180h]
0x54CD1E: mov     [esi+194h], ebx
0x54CD24: fst     dword ptr [esi+19Ch]
0x54CD2A: mov     byte ptr [esi+198h], 1
0x54CD31: fst     dword ptr [esi+1A0h]
0x54CD37: mov     byte ptr [esi+1D5h], 1
0x54CD3E: fst     dword ptr [esi+1A4h]
0x54CD44: mov     [esi+1D9h], bl
0x54CD4A: fst     dword ptr [esi+1A8h]
0x54CD50: fst     dword ptr [esi+1ACh]
0x54CD56: fst     dword ptr [esi+1B0h]
0x54CD5C: fst     dword ptr [esi+1B4h]
0x54CD62: fst     dword ptr [esi+1B8h]
0x54CD68: fstp    dword ptr [esi+1BCh]
0x54CD6E: mov     eax, ds:0B3F9A8h
0x54CD73: mov     [esi+170h], eax
0x54CD79: mov     ecx, ds:0B3F9ACh
0x54CD7F: mov     [esi+174h], ecx
0x54CD85: mov     edx, ds:0B3F9B0h
0x54CD8B: mov     [esi+178h], edx
0x54CD91: mov     eax, esi
0x54CD93: mov     ecx, [esp+20h+var_C]
0x54CD97: mov     large fs:0, ecx
0x54CD9E: pop     ecx
0x54CD9F: pop     edi
0x54CDA0: pop     esi
0x54CDA1: pop     ebx
0x54CDA2: add     esp, 10h
0x54CDA5: retn
