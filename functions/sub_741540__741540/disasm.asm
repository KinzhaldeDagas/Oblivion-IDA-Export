0x741540: push    ebx
0x741541: push    esi
0x741542: mov     esi, dword ptr [esp+8+arg_0]
0x741546: push    edi
0x741547: push    esi
0x741548: mov     ebx, ecx
0x74154A: call    sub_700B10
0x74154F: mov     eax, ds:0B40200h
0x741554: push    eax; ArgList
0x741555: call    TESOutput_PrintString
0x74155A: movzx   edi, word ptr [esi+0Ah]
0x74155E: movzx   ecx, word ptr [esi+8]
0x741562: add     esp, 4
0x741565: cmp     edi, ecx
0x741567: mov     dword ptr [esp+0Ch+arg_0], eax
0x74156B: jb      short loc_74157B
0x74156D: movzx   edx, word ptr [esi+0Eh]
0x741571: add     edx, edi
0x741573: push    edx
0x741574: mov     ecx, esi
0x741576: call    NiTArray_SetSize
0x74157B: lea     eax, [esp+0Ch+arg_0]
0x74157F: push    eax
0x741580: push    edi
0x741581: mov     ecx, esi
0x741583: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x741588: mov     cl, [ebx+18h]
0x74158B: and     cl, 1
0x74158E: mov     [esp+0Ch+arg_0], cl
0x741592: mov     edx, dword ptr [esp+0Ch+arg_0]
0x741596: push    edx; char
0x741597: push    offset aM_bdither; "m_bDither"
0x74159C: call    TESOutput_PrintLabeledBool
0x7415A1: movzx   edi, word ptr [esi+0Ah]
0x7415A5: mov     dword ptr [esp+14h+arg_0], eax
0x7415A9: movzx   eax, word ptr [esi+8]
0x7415AD: add     esp, 8
0x7415B0: cmp     edi, eax
0x7415B2: jb      short loc_7415C2
0x7415B4: movzx   ecx, word ptr [esi+0Eh]
0x7415B8: add     ecx, edi
0x7415BA: push    ecx
0x7415BB: mov     ecx, esi
0x7415BD: call    NiTArray_SetSize
0x7415C2: lea     edx, [esp+0Ch+arg_0]
0x7415C6: push    edx
0x7415C7: push    edi
0x7415C8: mov     ecx, esi
0x7415CA: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7415CF: pop     edi
0x7415D0: pop     esi
0x7415D1: pop     ebx
0x7415D2: retn    4
