0x8C5900: sub     esp, 0Ch
0x8C5903: push    ebx
0x8C5904: push    ebp
0x8C5905: push    esi
0x8C5906: mov     esi, [esp+18h+arg_0]
0x8C590A: push    edi
0x8C590B: push    esi
0x8C590C: mov     ebp, ecx
0x8C590E: call    sub_8CE640
0x8C5913: mov     eax, ds:0BA8124h
0x8C5918: push    eax; ArgList
0x8C5919: call    TESOutput_PrintString
0x8C591E: movzx   edi, word ptr [esi+0Ah]
0x8C5922: movzx   ecx, word ptr [esi+8]
0x8C5926: add     esp, 4
0x8C5929: cmp     edi, ecx
0x8C592B: mov     [esp+1Ch+arg_0], eax
0x8C592F: jb      short loc_8C593F
0x8C5931: movzx   edx, word ptr [esi+0Eh]
0x8C5935: add     edx, edi
0x8C5937: push    edx
0x8C5938: mov     ecx, esi
0x8C593A: call    NiTArray_SetSize
0x8C593F: lea     eax, [esp+1Ch+arg_0]
0x8C5943: push    eax
0x8C5944: push    edi
0x8C5945: mov     ecx, esi
0x8C5947: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8C594C: xor     ebx, ebx
0x8C594E: cmp     ebp, ebx
0x8C5950: jz      short loc_8C595B
0x8C5952: mov     ecx, [ebp+8]
0x8C5955: mov     [esp+1Ch+arg_0], ecx
0x8C5959: jmp     short loc_8C595F
0x8C595B: mov     [esp+1Ch+arg_0], ebx
0x8C595F: mov     edx, [esp+1Ch+arg_0]
0x8C5963: mov     eax, [edx+10h]
0x8C5966: movzx   edi, word ptr [eax+10h]
0x8C596A: push    edi; int
0x8C596B: push    offset aSubparts; "Subparts"
0x8C5970: mov     [esp+24h+var_C], edi
0x8C5974: call    TESOutput_PrintLabeledUnsignedInt
0x8C5979: movzx   ebp, word ptr [esi+0Ah]
0x8C597D: movzx   ecx, word ptr [esi+8]
0x8C5981: add     esp, 8
0x8C5984: cmp     ebp, ecx
0x8C5986: mov     [esp+1Ch+var_8], eax
0x8C598A: jb      short loc_8C599A
0x8C598C: movzx   edx, word ptr [esi+0Eh]
0x8C5990: add     edx, ebp
0x8C5992: push    edx
0x8C5993: mov     ecx, esi
0x8C5995: call    NiTArray_SetSize
0x8C599A: lea     eax, [esp+1Ch+var_8]
0x8C599E: push    eax
0x8C599F: push    ebp
0x8C59A0: mov     ecx, esi
0x8C59A2: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8C59A7: cmp     edi, 5
0x8C59AA: jbe     short loc_8C59B8
0x8C59AC: mov     [esp+1Ch+var_C], 5
0x8C59B4: mov     edi, [esp+1Ch+var_C]
0x8C59B8: cmp     edi, ebx
0x8C59BA: jbe     loc_8C5A64
0x8C59C0: mov     [esp+1Ch+var_8], ebx
0x8C59C4: push    ebx; int
0x8C59C5: push    offset aPart_0; "Part"
0x8C59CA: call    TESOutput_PrintLabeledUnsignedInt
0x8C59CF: movzx   edi, word ptr [esi+0Ah]
0x8C59D3: movzx   ecx, word ptr [esi+8]
0x8C59D7: add     esp, 8
0x8C59DA: cmp     edi, ecx
0x8C59DC: mov     ebp, eax
0x8C59DE: jb      short loc_8C59EE
0x8C59E0: movzx   edx, word ptr [esi+0Eh]
0x8C59E4: add     edx, edi
0x8C59E6: push    edx
0x8C59E7: mov     ecx, esi
0x8C59E9: call    NiTArray_SetSize
0x8C59EE: movzx   eax, word ptr [esi+0Ah]
0x8C59F2: cmp     edi, eax
0x8C59F4: jb      short loc_8C5A08
0x8C59F6: test    ebp, ebp
0x8C59F8: lea     ecx, [edi+1]
0x8C59FB: mov     [esi+0Ah], cx
0x8C59FF: jz      short loc_8C5A2B
0x8C5A01: add     word ptr [esi+0Ch], 1
0x8C5A06: jmp     short loc_8C5A2B
0x8C5A08: test    ebp, ebp
0x8C5A0A: jz      short loc_8C5A1C
0x8C5A0C: mov     edx, [esi+4]
0x8C5A0F: cmp     dword ptr [edx+edi*4], 0
0x8C5A13: jnz     short loc_8C5A2B
0x8C5A15: add     word ptr [esi+0Ch], 1
0x8C5A1A: jmp     short loc_8C5A2B
0x8C5A1C: mov     eax, [esi+4]
0x8C5A1F: cmp     dword ptr [eax+edi*4], 0
0x8C5A23: jz      short loc_8C5A2B
0x8C5A25: add     word ptr [esi+0Ch], 0FFFFh
0x8C5A2B: mov     ecx, [esi+4]
0x8C5A2E: mov     edx, [esp+1Ch+arg_0]
0x8C5A32: mov     [ecx+edi*4], ebp
0x8C5A35: mov     eax, [edx+10h]
0x8C5A38: mov     ecx, [eax+1Ch]
0x8C5A3B: mov     edi, [esp+1Ch+var_8]
0x8C5A3F: mov     edx, [edi+ecx]
0x8C5A42: push    esi
0x8C5A43: lea     ecx, [esp+20h+var_4]
0x8C5A47: mov     [esp+20h+var_4], edx
0x8C5A4B: call    sub_8A9100
0x8C5A50: add     ebx, 1
0x8C5A53: add     edi, 0Ch
0x8C5A56: cmp     ebx, [esp+1Ch+var_C]
0x8C5A5A: mov     [esp+1Ch+var_8], edi
0x8C5A5E: jb      loc_8C59C4
0x8C5A64: pop     edi
0x8C5A65: pop     esi
0x8C5A66: pop     ebp
0x8C5A67: pop     ebx
0x8C5A68: add     esp, 0Ch
0x8C5A6B: retn    4
