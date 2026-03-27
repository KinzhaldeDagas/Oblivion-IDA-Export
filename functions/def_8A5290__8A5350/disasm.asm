0x8A5350: push    esi; jumptable 008A5290 default case
0x8A5351: push    edi
0x8A5352: push    offset aInvalid; "INVALID"
0x8A5357: push    offset aMotion; "MOTION"
0x8A535C: call    TESOutput_PrintLabeledString
0x8A5361: mov     esi, [esp+10h+arg_0]
0x8A5365: movzx   edi, word ptr [esi+0Ah]
0x8A5369: movzx   edx, word ptr [esi+8]
0x8A536D: add     esp, 8
0x8A5370: cmp     edi, edx
0x8A5372: mov     [esp+8+arg_4], eax
0x8A5376: jb      short loc_8A5386
0x8A5378: movzx   eax, word ptr [esi+0Eh]
0x8A537C: add     eax, edi
0x8A537E: push    eax
0x8A537F: mov     ecx, esi
0x8A5381: call    NiTArray_SetSize
0x8A5386: lea     ecx, [esp+8+arg_4]
0x8A538A: push    ecx
0x8A538B: push    edi
0x8A538C: mov     ecx, esi
0x8A538E: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8A5393: pop     edi
0x8A5394: pop     esi
0x8A5395: retn
