0x46CFF0: sub     esp, 0Ch
0x46CFF3: push    esi
0x46CFF4: mov     esi, ecx
0x46CFF6: push    1; Size
0x46CFF8: lea     eax, [esi+0Ch]
0x46CFFB: push    eax; Src
0x46CFFC: push    444C564Ch; int
0x46D001: call    TESForm_PutFormRecordChunkData
0x46D006: push    1; Size
0x46D008: lea     ecx, [esi+0Dh]
0x46D00B: push    ecx; Src
0x46D00C: push    464C564Ch; int
0x46D011: call    TESForm_PutFormRecordChunkData
0x46D016: add     esp, 18h
0x46D019: add     esi, 4
0x46D01C: jz      short loc_46D05C
0x46D01E: mov     edi, edi
0x46D020: mov     eax, [esi]
0x46D022: test    eax, eax
0x46D024: jz      short loc_46D05C
0x46D026: mov     edx, [eax+4]
0x46D029: mov     ecx, [edx+0Ch]
0x46D02C: mov     dx, [eax]
0x46D02F: mov     ax, [eax+8]
0x46D033: mov     [esp+10h+var_8], ecx
0x46D037: push    0Ch; Size
0x46D039: lea     ecx, [esp+14h+Src]
0x46D03D: push    ecx; Src
0x46D03E: push    4F4C564Ch; int
0x46D043: mov     [esp+1Ch+Src], dx
0x46D048: mov     [esp+1Ch+var_4], ax
0x46D04D: call    TESForm_PutFormRecordChunkData
0x46D052: mov     esi, [esi+4]
0x46D055: add     esp, 0Ch
0x46D058: test    esi, esi
0x46D05A: jnz     short loc_46D020
0x46D05C: pop     esi
0x46D05D: add     esp, 0Ch
0x46D060: retn
