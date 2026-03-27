0x720300: push    ebx
0x720301: push    esi
0x720302: mov     esi, [esp+8+arg_0]
0x720306: push    edi
0x720307: push    esi
0x720308: mov     ebx, ecx
0x72030A: call    sub_732EF0
0x72030F: mov     eax, ds:0B3FD2Ch
0x720314: push    eax; ArgList
0x720315: call    TESOutput_PrintString
0x72031A: movzx   edi, word ptr [esi+0Ah]
0x72031E: movzx   ecx, word ptr [esi+8]
0x720322: add     esp, 4
0x720325: cmp     edi, ecx
0x720327: mov     [esp+0Ch+arg_0], eax
0x72032B: jb      short loc_72033B
0x72032D: movzx   edx, word ptr [esi+0Eh]
0x720331: add     edx, edi
0x720333: push    edx
0x720334: mov     ecx, esi
0x720336: call    NiTArray_SetSize
0x72033B: lea     eax, [esp+0Ch+arg_0]
0x72033F: push    eax
0x720340: push    edi
0x720341: mov     ecx, esi
0x720343: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x720348: mov     ecx, [ebx+44h]
0x72034B: push    ecx; int
0x72034C: push    offset aM_uitrilistlen; "m_uiTriListLength"
0x720351: call    TESOutput_PrintLabeledUnsignedInt
0x720356: movzx   edi, word ptr [esi+0Ah]
0x72035A: movzx   edx, word ptr [esi+8]
0x72035E: add     esp, 8
0x720361: cmp     edi, edx
0x720363: mov     [esp+0Ch+arg_0], eax
0x720367: jb      short loc_720377
0x720369: movzx   eax, word ptr [esi+0Eh]
0x72036D: add     eax, edi
0x72036F: push    eax
0x720370: mov     ecx, esi
0x720372: call    NiTArray_SetSize
0x720377: lea     ecx, [esp+0Ch+arg_0]
0x72037B: push    ecx
0x72037C: push    edi
0x72037D: mov     ecx, esi
0x72037F: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x720384: mov     edx, [ebx+48h]
0x720387: push    edx; int
0x720388: push    offset aM_pustrilist; "m_pusTriList"
0x72038D: call    TESOutput_PrintLabeledPointer
0x720392: movzx   edi, word ptr [esi+0Ah]
0x720396: mov     [esp+14h+arg_0], eax
0x72039A: movzx   eax, word ptr [esi+8]
0x72039E: add     esp, 8
0x7203A1: cmp     edi, eax
0x7203A3: jb      short loc_7203B3
0x7203A5: movzx   ecx, word ptr [esi+0Eh]
0x7203A9: add     ecx, edi
0x7203AB: push    ecx
0x7203AC: mov     ecx, esi
0x7203AE: call    NiTArray_SetSize
0x7203B3: lea     edx, [esp+0Ch+arg_0]
0x7203B7: push    edx
0x7203B8: push    edi
0x7203B9: mov     ecx, esi
0x7203BB: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7203C0: pop     edi
0x7203C1: pop     esi
0x7203C2: pop     ebx
0x7203C3: retn    4
