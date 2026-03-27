0x428970: push    ebp
0x428971: push    esi
0x428972: push    edi
0x428973: mov     ebp, ecx
0x428975: push    offset aExtradatalis_7; lpCriticalSection
0x42897A: mov     ecx, offset BSExtraDataCS
0x42897F: call    NiEnterCriticalSection
0x428984: mov     edi, [esp+0Ch+arg_0]
0x428988: mov     esi, [edi+4]
0x42898B: test    esi, esi
0x42898D: jz      short loc_4289F3
0x42898F: push    ebx
0x428990: movzx   eax, byte ptr [esi+4]
0x428994: add     eax, 0FFFFFFEEh; switch 68 cases
0x428997: cmp     eax, 43h
0x42899A: mov     bl, 1
0x42899C: ja      short ExtraDataList_CopyListForContainer___def_4289A5; jumptable 004289A5 default case, cases 19-26,29-33,35-38,42,48-53,56-71,73-79,81-84
0x42899E: movzx   eax, ds:byte_428A10[eax]
0x4289A5: jmp     ds:jpt_4289A5[eax*4]; switch jump
0x4289AC: push    esi; jumptable 004289A5 cases 27,28,34,39-41,43-47,54,55,72,80,85
0x4289AD: mov     ecx, ebp
0x4289AF: call    ExtraDataList_CopyBSExtraData
0x4289B4: cmp     byte ptr [esi+4], 37h ; '7'
0x4289B8: jz      short ExtraDataList_CopyListForContainer___def_4289A5; jumptable 004289A5 default case, cases 19-26,29-33,35-38,42,48-53,56-71,73-79,81-84
0x4289BA: cmp     [esp+10h+arg_4], 0
0x4289BF: jnz     short ExtraDataList_CopyListForContainer___def_4289A5; jumptable 004289A5 default case, cases 19-26,29-33,35-38,42,48-53,56-71,73-79,81-84
0x4289C1: push    1
0x4289C3: jmp     short loc_4289D6
0x4289C5: push    esi; jumptable 004289A5 case 18
0x4289C6: mov     ecx, ebp
0x4289C8: call    ExtraDataList_CopyBSExtraData
0x4289CD: cmp     [esp+10h+arg_4], 0
0x4289D2: jnz     short ExtraDataList_CopyListForContainer___def_4289A5; jumptable 004289A5 default case, cases 19-26,29-33,35-38,42,48-53,56-71,73-79,81-84
0x4289D4: push    0
0x4289D6: push    esi
0x4289D7: mov     ecx, edi
0x4289D9: call    BaseExtraList_RemoveExtraByPtr
0x4289DE: mov     esi, [edi+4]
0x4289E1: xor     bl, bl
0x4289E3: test    esi, esi; jumptable 004289A5 default case, cases 19-26,29-33,35-38,42,48-53,56-71,73-79,81-84
0x4289E5: jz      short loc_4289F2
0x4289E7: test    bl, bl
0x4289E9: jz      short loc_4289EE
0x4289EB: mov     esi, [esi+8]
0x4289EE: test    esi, esi
0x4289F0: jnz     short loc_428990
0x4289F2: pop     ebx
0x4289F3: mov     ecx, offset BSExtraDataCS; lpCriticalSection
0x4289F8: call    NiLeaveCriticalSection_0
0x4289FD: pop     edi
0x4289FE: pop     esi
0x4289FF: pop     ebp
0x428A00: retn    8
