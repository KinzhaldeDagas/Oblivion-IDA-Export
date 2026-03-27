0x4DACF0: sub     esp, 1Ch
0x4DACF3: mov     eax, [esp+1Ch+arg_4]
0x4DACF7: push    ebx
0x4DACF8: push    ebp
0x4DACF9: mov     ebp, [esp+24h+arg_0]
0x4DACFD: push    esi
0x4DACFE: push    edi
0x4DACFF: mov     edi, [eax+0Ch]
0x4DAD02: mov     ecx, ebp
0x4DAD04: mov     [esp+2Ch+arg_4], edi
0x4DAD08: call    sub_452A60
0x4DAD0D: cmp     ebp, [edi+10h]
0x4DAD10: mov     ebx, eax
0x4DAD12: jz      short loc_4DAD37
0x4DAD14: test    ebx, ebx
0x4DAD16: jz      short loc_4DAD37
0x4DAD18: mov     esi, [ebx+8]
0x4DAD1B: test    esi, esi
0x4DAD1D: jz      short loc_4DAD37
0x4DAD1F: mov     edi, offset aArrow; "Arrow"
0x4DAD24: mov     ecx, 6
0x4DAD29: xor     edx, edx
0x4DAD2B: repe cmpsb
0x4DAD2D: jz      loc_4DAE4F
0x4DAD33: mov     edi, [esp+2Ch+arg_4]
0x4DAD37: mov     ecx, [edi+8]
0x4DAD3A: mov     eax, [ecx]
0x4DAD3C: mov     edx, [eax+190h]
0x4DAD42: call    edx
0x4DAD44: test    al, al
0x4DAD46: jz      short loc_4DAD72
0x4DAD48: test    ebx, ebx
0x4DAD4A: jz      short loc_4DAD72
0x4DAD4C: mov     eax, [ebx]
0x4DAD4E: mov     edx, [eax+4]
0x4DAD51: mov     ecx, ebx
0x4DAD53: call    edx
0x4DAD55: test    eax, eax
0x4DAD57: jz      short loc_4DAD72
0x4DAD59: lea     esp, [esp+0]
0x4DAD60: cmp     eax, offset dword_B35288
0x4DAD65: jz      loc_4DAE4F
0x4DAD6B: mov     eax, [eax+4]
0x4DAD6E: test    eax, eax
0x4DAD70: jnz     short loc_4DAD60
0x4DAD72: mov     eax, [ebp+10h]
0x4DAD75: test    eax, eax
0x4DAD77: jz      loc_4DAE4F
0x4DAD7D: push    eax
0x4DAD7E: push    offset dword_BA7D84
0x4DAD83: call    NiRTTI_Cast
0x4DAD88: mov     esi, eax
0x4DAD8A: add     esp, 8
0x4DAD8D: test    esi, esi
0x4DAD8F: jz      loc_4DAE4F
0x4DAD95: cmp     ebp, [edi+10h]
0x4DAD98: jz      short loc_4DADD6
0x4DAD9A: lea     eax, [esp+2Ch+Src]
0x4DAD9E: push    eax
0x4DAD9F: mov     ecx, esi
0x4DADA1: call    sub_4D6900
0x4DADA6: lea     ecx, [esp+2Ch+var_10]
0x4DADAA: push    ecx
0x4DADAB: mov     ecx, esi
0x4DADAD: call    sub_4D6950
0x4DADB2: mov     ecx, ds:0B33B00h
0x4DADB8: push    0Ch; Size
0x4DADBA: lea     edx, [esp+30h+Src]
0x4DADBE: push    edx; Src
0x4DADBF: call    SaveLoad_SaveData
0x4DADC4: mov     ecx, ds:0B33B00h
0x4DADCA: push    10h; Size
0x4DADCC: lea     eax, [esp+30h+var_10]
0x4DADD0: push    eax; Src
0x4DADD1: call    SaveLoad_SaveData
0x4DADD6: mov     ecx, [esi+8]
0x4DADD9: test    ecx, ecx
0x4DADDB: jz      short loc_4DADEF
0x4DADDD: lea     edx, [esp+2Ch+arg_0]
0x4DADE1: push    edx
0x4DADE2: call    sub_8A63F0
0x4DADE7: cmp     byte ptr [eax], 0
0x4DADEA: setnz   al
0x4DADED: jmp     short loc_4DADF1
0x4DADEF: xor     al, al
0x4DADF1: test    byte ptr [edi], 4
0x4DADF4: mov     byte ptr [esp+2Ch+arg_4], al
0x4DADF8: jz      short loc_4DAE0C
0x4DADFA: mov     ecx, ds:0B33B00h
0x4DAE00: push    1; Size
0x4DAE02: lea     eax, [esp+30h+arg_4]
0x4DAE06: push    eax; Src
0x4DAE07: call    SaveLoad_SaveData
0x4DAE0C: cmp     byte ptr [esp+2Ch+arg_4], 0
0x4DAE11: jz      short loc_4DAE4F
0x4DAE13: lea     ecx, [esp+2Ch+Src]
0x4DAE17: push    ecx
0x4DAE18: mov     ecx, esi
0x4DAE1A: call    sub_4D98E0
0x4DAE1F: lea     edx, [esp+2Ch+var_10]
0x4DAE23: push    edx
0x4DAE24: mov     ecx, esi
0x4DAE26: call    sub_4D9920
0x4DAE2B: mov     ecx, ds:0B33B00h
0x4DAE31: push    0Ch; Size
0x4DAE33: lea     eax, [esp+30h+Src]
0x4DAE37: push    eax; Src
0x4DAE38: call    SaveLoad_SaveData
0x4DAE3D: push    0Ch; Size
0x4DAE3F: lea     ecx, [esp+30h+var_10]
0x4DAE43: push    ecx; Src
0x4DAE44: mov     ecx, ds:0B33B00h
0x4DAE4A: call    SaveLoad_SaveData
0x4DAE4F: pop     edi
0x4DAE50: pop     esi
0x4DAE51: pop     ebp
0x4DAE52: pop     ebx
0x4DAE53: add     esp, 1Ch
0x4DAE56: retn
