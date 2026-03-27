0x564620: push    0FFFFFFFFh
0x564622: push    offset ??1BSTreeNode@@UAE@XZ_SEH
0x564627: mov     eax, large fs:0
0x56462D: push    eax
0x56462E: push    ecx
0x56462F: push    ebp
0x564630: push    esi
0x564631: push    edi
0x564632: mov     eax, ds:0B30AACh
0x564637: xor     eax, esp
0x564639: push    eax
0x56463A: lea     eax, [esp+20h+var_C]
0x56463E: mov     large fs:0, eax
0x564644: mov     esi, ecx
0x564646: mov     [esp+20h+var_10], esi
0x56464A: mov     dword ptr [esi], offset ??_7BSTreeNode@@6B@; const BSTreeNode::`vftable'
0x564650: mov     eax, [esi+0E0h]
0x564656: test    eax, eax
0x564658: mov     [esp+20h+var_4], 2
0x564660: jz      short loc_564689
0x564662: mov     ecx, [eax-4]
0x564665: lea     edi, [eax-4]
0x564668: push    offset sub_7016A0; void (__thiscall *)(void *)
0x56466D: push    ecx; int
0x56466E: push    4; unsigned int
0x564670: push    eax; void *
0x564671: call    $LN21
0x564676: push    edi
0x564677: call    FormHeapFree
0x56467C: add     esp, 4
0x56467F: mov     dword ptr [esi+0E0h], 0
0x564689: mov     eax, [esi+0E4h]
0x56468F: test    eax, eax
0x564691: jz      short loc_5646BA
0x564693: mov     edx, [eax-4]
0x564696: lea     edi, [eax-4]
0x564699: push    offset sub_7016A0; void (__thiscall *)(void *)
0x56469E: push    edx; int
0x56469F: push    4; unsigned int
0x5646A1: push    eax; void *
0x5646A2: call    $LN21
0x5646A7: push    edi
0x5646A8: call    FormHeapFree
0x5646AD: add     esp, 4
0x5646B0: mov     dword ptr [esi+0E4h], 0
0x5646BA: mov     edi, [esi+0E8h]
0x5646C0: test    edi, edi
0x5646C2: mov     ebp, ds:0A2807Ch
0x5646C8: mov     byte ptr [esp+20h+var_4], 1
0x5646CD: jz      short loc_5646E7
0x5646CF: lea     eax, [edi+4]
0x5646D2: push    eax; lpAddend
0x5646D3: call    ebp ; InterlockedDecrement
0x5646D5: test    eax, eax
0x5646D7: jnz     short loc_5646E7
0x5646D9: test    edi, edi
0x5646DB: jz      short loc_5646E7
0x5646DD: mov     edx, [edi]
0x5646DF: mov     eax, [edx]
0x5646E1: push    1
0x5646E3: mov     ecx, edi
0x5646E5: call    eax
0x5646E7: mov     edi, [esi+0DCh]
0x5646ED: test    edi, edi
0x5646EF: mov     byte ptr [esp+20h+var_4], 0
0x5646F4: jz      short loc_56470E
0x5646F6: lea     ecx, [edi+4]
0x5646F9: push    ecx; lpAddend
0x5646FA: call    ebp ; InterlockedDecrement
0x5646FC: test    eax, eax
0x5646FE: jnz     short loc_56470E
0x564700: test    edi, edi
0x564702: jz      short loc_56470E
0x564704: mov     edx, [edi]
0x564706: mov     eax, [edx]
0x564708: push    1
0x56470A: mov     ecx, edi
0x56470C: call    eax
0x56470E: mov     ecx, esi; this
0x564710: mov     [esp+20h+var_4], 0FFFFFFFFh
0x564718: call    ??1NiBSPNode@@UAE@XZ; NiBSPNode::~NiBSPNode(void)
0x56471D: mov     ecx, [esp+20h+var_C]
0x564721: mov     large fs:0, ecx
0x564728: pop     ecx
0x564729: pop     edi
0x56472A: pop     esi
0x56472B: pop     ebp
0x56472C: add     esp, 10h
0x56472F: retn
