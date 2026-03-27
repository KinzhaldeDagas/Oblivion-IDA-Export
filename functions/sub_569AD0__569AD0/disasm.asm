0x569AD0: sub     esp, 0Ch
0x569AD3: mov     edx, [ecx+8]
0x569AD6: xor     eax, eax
0x569AD8: mov     [esp+0Ch+Src], eax
0x569ADB: mov     [esp+0Ch+var_8], eax
0x569ADF: mov     [esp+0Ch+var_4], eax
0x569AE3: mov     al, [ecx]
0x569AE5: cmp     al, 5
0x569AE7: mov     byte ptr [esp+0Ch+Src], al
0x569AEA: jz      short loc_569AF3
0x569AEC: test    edx, edx
0x569AEE: jz      short loc_569AF7
0x569AF0: mov     edx, [edx+0Ch]
0x569AF3: mov     [esp+0Ch+var_8], edx
0x569AF7: cmp     al, 0FFh
0x569AF9: jz      short loc_569B04
0x569AFB: cmp     al, 1
0x569AFD: jz      short loc_569B04
0x569AFF: mov     ecx, [ecx+4]
0x569B02: jmp     short loc_569B06
0x569B04: xor     ecx, ecx
0x569B06: push    0Ch; Size
0x569B08: lea     eax, [esp+10h+Src]
0x569B0C: push    eax; Src
0x569B0D: push    54444C50h; int
0x569B12: mov     [esp+18h+var_4], ecx
0x569B16: call    TESForm_PutFormRecordChunkData
0x569B1B: add     esp, 18h
0x569B1E: retn
