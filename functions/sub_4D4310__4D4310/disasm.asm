0x4D4310: sub     esp, 8
0x4D4313: push    esi
0x4D4314: mov     esi, ecx
0x4D4316: test    byte ptr [esi+24h], 10h
0x4D431A: jz      short loc_4D4323
0x4D431C: mov     al, 1
0x4D431E: pop     esi
0x4D431F: add     esp, 8
0x4D4322: retn
0x4D4323: push    ebx
0x4D4324: lea     eax, [esi+10h]
0x4D4327: xor     ebx, ebx
0x4D4329: test    eax, eax
0x4D432B: push    ebp
0x4D432C: mov     byte ptr [esp+14h+var_8+3], 1
0x4D4331: jz      short loc_4D4342
0x4D4333: cmp     dword ptr [eax], 0
0x4D4336: jz      short loc_4D433B
0x4D4338: add     ebx, 1
0x4D433B: mov     eax, [eax+4]
0x4D433E: test    eax, eax
0x4D4340: jnz     short loc_4D4333
0x4D4342: xor     ebp, ebp
0x4D4344: test    ebx, ebx
0x4D4346: jbe     short loc_4D43A8
0x4D4348: push    edi
0x4D4349: lea     esp, [esp+0]
0x4D4350: push    ebp; a2
0x4D4351: mov     ecx, esi; this
0x4D4353: call    TESForm_GetOverrideFile
0x4D4358: mov     ecx, eax
0x4D435A: call    sub_4520F0
0x4D435F: mov     edi, eax
0x4D4361: test    edi, edi
0x4D4363: jz      short loc_4D43A0
0x4D4365: mov     ecx, edi
0x4D4367: call    TESFile_GetIsMaster
0x4D436C: test    al, al
0x4D436E: jz      short loc_4D43A0
0x4D4370: mov     ecx, esi
0x4D4372: call    sub_4C9D10
0x4D4377: test    eax, eax
0x4D4379: mov     ecx, edi
0x4D437B: jz      short loc_4D4385
0x4D437D: push    eax; Buffer
0x4D437E: call    TESFIle_JumpToRecord
0x4D4383: jmp     short loc_4D438B
0x4D4385: push    esi
0x4D4386: call    TESFile__FindForm
0x4D438B: test    al, al
0x4D438D: jz      short loc_4D439B
0x4D438F: push    edi
0x4D4390: mov     ecx, esi
0x4D4392: call    sub_4D1340
0x4D4397: test    al, al
0x4D4399: jnz     short loc_4D43A0
0x4D439B: mov     byte ptr [esp+18h+var_8+3], 0
0x4D43A0: add     ebp, 1
0x4D43A3: cmp     ebp, ebx
0x4D43A5: jb      short loc_4D4350
0x4D43A7: pop     edi
0x4D43A8: or      byte ptr [esi+24h], 10h
0x4D43AC: mov     ecx, ds:0B33B00h
0x4D43B2: call    sub_45A500
0x4D43B7: mov     ecx, ds:0B33B00h
0x4D43BD: test    al, al
0x4D43BF: mov     byte ptr [esp+14h+var_4], al
0x4D43C3: setz    al
0x4D43C6: push    eax
0x4D43C7: call    sub_45A530
0x4D43CC: mov     edx, [esi]
0x4D43CE: mov     eax, [edx+6Ch]
0x4D43D1: mov     ecx, esi
0x4D43D3: call    eax
0x4D43D5: mov     ecx, [esp+14h+var_4]
0x4D43D9: push    ecx
0x4D43DA: mov     ecx, ds:0B33B00h
0x4D43E0: call    sub_45A530
0x4D43E5: mov     al, byte ptr [esp+14h+var_8+3]
0x4D43E9: pop     ebp
0x4D43EA: pop     ebx
0x4D43EB: pop     esi
0x4D43EC: add     esp, 8
0x4D43EF: retn
