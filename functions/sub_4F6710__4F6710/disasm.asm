0x4F6710: fldz
0x4F6712: push    ebx
0x4F6713: mov     ebx, [esp+4+arg_C]
0x4F6717: fstp    qword ptr [ebx]
0x4F6719: push    esi
0x4F671A: mov     esi, [esp+8+arg_4]
0x4F671E: test    esi, esi
0x4F6720: jz      short loc_4F6798
0x4F6722: movzx   eax, byte ptr [esi+4]
0x4F6726: cmp     eax, 31h ; '1'
0x4F6729: jl      short loc_4F6798
0x4F672B: cmp     eax, 33h ; '3'
0x4F672E: push    edi
0x4F672F: jle     short loc_4F673B
0x4F6731: cmp     eax, 3Bh ; ';'
0x4F6734: jnz     short loc_4F6797
0x4F6736: mov     eax, [esi+58h]
0x4F6739: jmp     short loc_4F677E
0x4F673B: lea     edi, [esi+44h]
0x4F673E: mov     ecx, edi
0x4F6740: call    ExtraDataList_GetReferencePointer
0x4F6745: test    eax, eax
0x4F6747: jz      short loc_4F6777
0x4F6749: mov     ecx, edi
0x4F674B: call    ExtraDataList_GetReferencePointer
0x4F6750: mov     edi, eax
0x4F6752: mov     eax, [esi+0Ch]
0x4F6755: push    eax
0x4F6756: mov     eax, [esi]
0x4F6758: mov     edx, [eax+170h]
0x4F675E: mov     ecx, esi
0x4F6760: call    edx
0x4F6762: push    eax
0x4F6763: mov     ecx, edi
0x4F6765: call    sub_4D8D70
0x4F676A: test    eax, eax
0x4F676C: jz      short loc_4F6797
0x4F676E: mov     ecx, eax
0x4F6770: call    sub_484F50
0x4F6775: jmp     short loc_4F677E
0x4F6777: mov     ecx, esi; this
0x4F6779: call    sub_4D7250
0x4F677E: test    eax, eax
0x4F6780: jz      short loc_4F6797
0x4F6782: cmp     dword ptr [eax], 0
0x4F6785: jz      short loc_4F6797
0x4F6787: mov     ecx, dword ptr [esp+0Ch+ArgList]
0x4F678B: push    0; a3
0x4F678D: push    ecx; ArgList
0x4F678E: mov     ecx, eax; this
0x4F6790: call    sub_4FA110
0x4F6795: fstp    qword ptr [ebx]
0x4F6797: pop     edi
0x4F6798: pop     esi
0x4F6799: mov     al, 1
0x4F679B: pop     ebx
0x4F679C: retn
