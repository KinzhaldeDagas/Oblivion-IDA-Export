0x4FC7A0: push    esi
0x4FC7A1: push    edi
0x4FC7A2: mov     edi, [esp+8+arg_0]
0x4FC7A6: test    edi, edi
0x4FC7A8: mov     esi, ecx
0x4FC7AA: jz      loc_4FC840
0x4FC7B0: mov     eax, [edi+18h]
0x4FC7B3: mov     [esi+18h], eax
0x4FC7B6: mov     ecx, [edi+1Ch]
0x4FC7B9: mov     [esi+1Ch], ecx
0x4FC7BC: mov     edx, [edi+20h]
0x4FC7BF: mov     [esi+20h], edx
0x4FC7C2: mov     eax, [edi+24h]
0x4FC7C5: mov     [esi+24h], eax
0x4FC7C8: mov     ecx, [edi+28h]
0x4FC7CB: mov     [esi+28h], ecx
0x4FC7CE: mov     eax, [esi+20h]
0x4FC7D1: mov     dword ptr [esi+18h], 0
0x4FC7D8: mov     edx, [edi+30h]
0x4FC7DB: push    edx; Src
0x4FC7DC: push    eax; int
0x4FC7DD: mov     ecx, esi
0x4FC7DF: call    sub_4F9DF0
0x4FC7E4: mov     ecx, esi
0x4FC7E6: call    sub_4FC730
0x4FC7EB: push    esi
0x4FC7EC: lea     ecx, [esi+40h]
0x4FC7EF: push    ecx
0x4FC7F0: lea     edx, [edi+40h]
0x4FC7F3: push    edx
0x4FC7F4: call    sub_4FC040
0x4FC7F9: add     esp, 0Ch
0x4FC7FC: mov     ecx, esi
0x4FC7FE: call    sub_4FC6C0
0x4FC803: mov     eax, [edi+2Ch]
0x4FC806: test    eax, eax
0x4FC808: jz      short loc_4FC814
0x4FC80A: push    eax; Src
0x4FC80B: mov     ecx, esi
0x4FC80D: call    Script_SetText
0x4FC812: jmp     short loc_4FC82D
0x4FC814: mov     eax, [esi+2Ch]
0x4FC817: test    eax, eax
0x4FC819: jz      short loc_4FC826
0x4FC81B: push    eax; void *
0x4FC81C: mov     ecx, offset FormHeap
0x4FC821: call    MemoryHeap_Free_checked
0x4FC826: mov     dword ptr [esi+2Ch], 0
0x4FC82D: mov     eax, [edi+8]
0x4FC830: shr     eax, 3
0x4FC833: and     eax, 0FFFFFF01h
0x4FC838: push    eax; a2
0x4FC839: mov     ecx, esi; this
0x4FC83B: call    TESForm_SetIsLinked
0x4FC840: pop     edi
0x4FC841: pop     esi
0x4FC842: retn    4
