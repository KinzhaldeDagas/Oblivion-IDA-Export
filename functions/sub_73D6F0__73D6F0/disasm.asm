0x73D6F0: push    ebx
0x73D6F1: push    esi
0x73D6F2: mov     esi, dword ptr [esp+8+arg_0]
0x73D6F6: push    edi
0x73D6F7: push    esi
0x73D6F8: mov     ebx, ecx
0x73D6FA: call    sub_700B10
0x73D6FF: mov     eax, ds:0B40198h
0x73D704: push    eax; ArgList
0x73D705: call    TESOutput_PrintString
0x73D70A: movzx   edi, word ptr [esi+0Ah]
0x73D70E: movzx   ecx, word ptr [esi+8]
0x73D712: add     esp, 4
0x73D715: cmp     edi, ecx
0x73D717: mov     dword ptr [esp+0Ch+arg_0], eax
0x73D71B: jb      short loc_73D72B
0x73D71D: movzx   edx, word ptr [esi+0Eh]
0x73D721: add     edx, edi
0x73D723: push    edx
0x73D724: mov     ecx, esi
0x73D726: call    NiTArray_SetSize
0x73D72B: lea     eax, [esp+0Ch+arg_0]
0x73D72F: push    eax
0x73D730: push    edi
0x73D731: mov     ecx, esi
0x73D733: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x73D738: mov     cl, [ebx+18h]
0x73D73B: and     cl, 1
0x73D73E: mov     [esp+0Ch+arg_0], cl
0x73D742: mov     edx, dword ptr [esp+0Ch+arg_0]
0x73D746: push    edx; char
0x73D747: push    offset aM_bspec; "m_bSpec"
0x73D74C: call    TESOutput_PrintLabeledBool
0x73D751: movzx   edi, word ptr [esi+0Ah]
0x73D755: mov     dword ptr [esp+14h+arg_0], eax
0x73D759: movzx   eax, word ptr [esi+8]
0x73D75D: add     esp, 8
0x73D760: cmp     edi, eax
0x73D762: jb      short loc_73D772
0x73D764: movzx   ecx, word ptr [esi+0Eh]
0x73D768: add     ecx, edi
0x73D76A: push    ecx
0x73D76B: mov     ecx, esi
0x73D76D: call    NiTArray_SetSize
0x73D772: lea     edx, [esp+0Ch+arg_0]
0x73D776: push    edx
0x73D777: push    edi
0x73D778: mov     ecx, esi
0x73D77A: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x73D77F: pop     edi
0x73D780: pop     esi
0x73D781: pop     ebx
0x73D782: retn    4
