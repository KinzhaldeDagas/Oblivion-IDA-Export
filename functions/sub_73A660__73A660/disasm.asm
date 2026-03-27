0x73A660: push    ebx
0x73A661: push    esi
0x73A662: mov     esi, [esp+8+arg_0]
0x73A666: push    edi
0x73A667: push    esi
0x73A668: mov     ebx, ecx
0x73A66A: call    sub_729D00
0x73A66F: mov     eax, ds:0B40150h
0x73A674: push    eax; ArgList
0x73A675: call    TESOutput_PrintString
0x73A67A: movzx   edi, word ptr [esi+0Ah]
0x73A67E: movzx   ecx, word ptr [esi+8]
0x73A682: add     esp, 4
0x73A685: cmp     edi, ecx
0x73A687: mov     [esp+0Ch+arg_0], eax
0x73A68B: jb      short loc_73A69B
0x73A68D: movzx   edx, word ptr [esi+0Eh]
0x73A691: add     edx, edi
0x73A693: push    edx
0x73A694: mov     ecx, esi
0x73A696: call    NiTArray_SetSize
0x73A69B: lea     eax, [esp+0Ch+arg_0]
0x73A69F: push    eax
0x73A6A0: push    edi
0x73A6A1: mov     ecx, esi
0x73A6A3: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x73A6A8: movzx   ecx, byte ptr [ebx+58h]
0x73A6AC: push    ecx; char
0x73A6AD: push    offset aM_bpixelaccura; "m_bPixelAccurate"
0x73A6B2: call    TESOutput_PrintLabeledBool
0x73A6B7: movzx   edi, word ptr [esi+0Ah]
0x73A6BB: movzx   edx, word ptr [esi+8]
0x73A6BF: add     esp, 8
0x73A6C2: cmp     edi, edx
0x73A6C4: mov     [esp+0Ch+arg_0], eax
0x73A6C8: jb      short loc_73A6D8
0x73A6CA: movzx   eax, word ptr [esi+0Eh]
0x73A6CE: add     eax, edi
0x73A6D0: push    eax
0x73A6D1: mov     ecx, esi
0x73A6D3: call    NiTArray_SetSize
0x73A6D8: lea     ecx, [esp+0Ch+arg_0]
0x73A6DC: push    ecx
0x73A6DD: push    edi
0x73A6DE: mov     ecx, esi
0x73A6E0: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x73A6E5: movzx   eax, word ptr [ebx+6Ch]
0x73A6E9: push    eax; int
0x73A6EA: push    offset aNumElements; "Num Elements"
0x73A6EF: call    TESOutput_PrintLabeledUnsignedInt
0x73A6F4: movzx   edi, word ptr [esi+0Ah]
0x73A6F8: movzx   edx, word ptr [esi+8]
0x73A6FC: add     esp, 8
0x73A6FF: cmp     edi, edx
0x73A701: mov     [esp+0Ch+arg_0], eax
0x73A705: jb      short loc_73A715
0x73A707: movzx   eax, word ptr [esi+0Eh]
0x73A70B: add     eax, edi
0x73A70D: push    eax
0x73A70E: mov     ecx, esi
0x73A710: call    NiTArray_SetSize
0x73A715: lea     ecx, [esp+0Ch+arg_0]
0x73A719: push    ecx
0x73A71A: push    edi
0x73A71B: mov     ecx, esi
0x73A71D: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x73A722: pop     edi
0x73A723: pop     esi
0x73A724: pop     ebx
0x73A725: retn    4
