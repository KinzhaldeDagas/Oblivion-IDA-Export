0x4DB900: push    esi
0x4DB901: push    edi
0x4DB902: mov     edi, ecx
0x4DB904: lea     esi, [edi+44h]
0x4DB907: push    0
0x4DB909: mov     ecx, esi
0x4DB90B: call    ExtraDataList__SetOrRemoveExtraOwnership
0x4DB910: push    0
0x4DB912: mov     ecx, esi
0x4DB914: call    sub_423720
0x4DB919: push    0FFFFFFFFh
0x4DB91B: mov     ecx, esi
0x4DB91D: call    sub_4237E0
0x4DB922: mov     eax, [edi]
0x4DB924: mov     edx, [eax+40h]
0x4DB927: push    380h
0x4DB92C: mov     ecx, edi
0x4DB92E: call    edx
0x4DB930: mov     ecx, esi; this
0x4DB932: call    ExtraDataList_GetTeleport
0x4DB937: mov     esi, eax
0x4DB939: test    esi, esi
0x4DB93B: jz      short loc_4DB990
0x4DB93D: mov     ecx, esi
0x4DB93F: call    sub_42B410
0x4DB944: test    eax, eax
0x4DB946: jz      short loc_4DB990
0x4DB948: mov     ecx, esi
0x4DB94A: call    sub_42B410
0x4DB94F: push    0
0x4DB951: lea     ecx, [eax+44h]
0x4DB954: call    ExtraDataList__SetOrRemoveExtraOwnership
0x4DB959: mov     ecx, esi
0x4DB95B: call    sub_42B410
0x4DB960: push    0
0x4DB962: lea     ecx, [eax+44h]
0x4DB965: call    sub_423720
0x4DB96A: mov     ecx, esi
0x4DB96C: call    sub_42B410
0x4DB971: push    0FFFFFFFFh
0x4DB973: lea     ecx, [eax+44h]
0x4DB976: call    sub_4237E0
0x4DB97B: mov     ecx, esi
0x4DB97D: call    sub_42B410
0x4DB982: mov     edx, [eax]
0x4DB984: mov     ecx, eax
0x4DB986: mov     eax, [edx+40h]
0x4DB989: push    380h
0x4DB98E: call    eax
0x4DB990: pop     edi
0x4DB991: pop     esi
0x4DB992: retn
