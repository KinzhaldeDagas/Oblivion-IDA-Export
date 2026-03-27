0x51C7B0: fldz
0x51C7B2: push    ebx
0x51C7B3: push    esi
0x51C7B4: mov     esi, ecx
0x51C7B6: fstp    dword ptr [esi+10Ch]
0x51C7BC: xor     eax, eax
0x51C7BE: fld     dword ptr ds:0A46C30h
0x51C7C4: lea     ecx, [esi+11Ch]
0x51C7CA: fstp    dword ptr [esi+110h]
0x51C7D0: mov     [esi+104h], al
0x51C7D6: fld1
0x51C7D8: mov     [esi+100h], eax
0x51C7DE: mov     [esi+118h], eax
0x51C7E4: fstp    dword ptr [esi+114h]
0x51C7EA: mov     eax, [ecx]
0x51C7EC: mov     edx, [eax]
0x51C7EE: mov     ebx, 32h ; '2'
0x51C7F3: push    edi
0x51C7F4: mov     word ptr [esi+108h], 3
0x51C7FD: mov     [esi+105h], bl
0x51C803: mov     [esi+106h], bl
0x51C809: mov     [esi+107h], bl
0x51C80F: mov     byte ptr [esi+10Ah], 20h ; ' '
0x51C816: call    edx
0x51C818: mov     eax, [esi+134h]
0x51C81E: mov     edx, [eax]
0x51C820: lea     ecx, [esi+134h]
0x51C826: call    edx
0x51C828: mov     ecx, esi; this
0x51C82A: call    j_TESForm_InitializeComponents
0x51C82F: mov     eax, [esi+24h]
0x51C832: mov     edx, [eax+50h]
0x51C835: or      dword ptr [esi+28h], 40h
0x51C839: lea     edi, [esi+24h]
0x51C83C: push    10h
0x51C83E: mov     ecx, edi
0x51C840: call    edx
0x51C842: mov     eax, [edi]
0x51C844: mov     edx, [eax+50h]
0x51C847: or      dword ptr [edi+4], 200h
0x51C84E: push    10h
0x51C850: mov     ecx, edi
0x51C852: call    edx
0x51C854: pop     edi
0x51C855: mov     [esi+84h], ebx
0x51C85B: pop     esi
0x51C85C: pop     ebx
0x51C85D: retn
