0x646600: sub     esp, 8
0x646603: push    ebp
0x646604: push    edi
0x646605: mov     edi, [esp+10h+arg_0]
0x646609: test    edi, edi
0x64660B: jz      loc_646A75
0x646611: mov     ebp, [esp+10h+arg_4]
0x646615: cmp     edi, ebp
0x646617: jz      loc_646A75
0x64661D: mov     eax, [edi+8]
0x646620: mov     ecx, eax
0x646622: shr     ecx, 5
0x646625: test    cl, 1
0x646628: jnz     loc_646A75
0x64662E: mov     edx, eax
0x646630: shr     edx, 0Eh
0x646633: test    dl, 1
0x646636: jnz     loc_646A75
0x64663C: shr     eax, 0Bh
0x64663F: test    al, 1
0x646641: jnz     loc_646A75
0x646647: test    ebp, ebp
0x646649: jnz     short loc_646653
0x64664B: pop     edi
0x64664C: mov     al, 1
0x64664E: pop     ebp
0x64664F: add     esp, 8
0x646652: retn
0x646653: mov     ecx, [ebp+58h]
0x646656: test    ecx, ecx
0x646658: push    ebx
0x646659: mov     byte ptr [esp+14h+arg_0], 0
0x64665E: jz      short loc_646677
0x646660: mov     eax, [ecx]
0x646662: mov     edx, [eax+8]
0x646665: call    edx
0x646667: cmp     eax, 3
0x64666A: ja      short loc_646677
0x64666C: mov     ebx, [ebp+58h]
0x64666F: test    ebx, ebx
0x646671: mov     [esp+14h+var_8], ebx
0x646675: jnz     short loc_646680
0x646677: pop     ebx
0x646678: pop     edi
0x646679: mov     al, 1
0x64667B: pop     ebp
0x64667C: add     esp, 8
0x64667F: retn
0x646680: mov     eax, [ebx+6Ch]
0x646683: test    eax, eax
0x646685: push    esi
0x646686: jz      short loc_6466B4
0x646688: push    eax
0x646689: mov     eax, [edi]
0x64668B: mov     edx, [eax+170h]
0x646691: mov     ecx, edi
0x646693: call    edx
0x646695: push    eax
0x646696: call    sub_568370
0x64669B: add     esp, 8
0x64669E: test    al, al
0x6466A0: jz      short loc_6466B4
0x6466A2: mov     eax, [edi]
0x6466A4: mov     edx, [eax+198h]
0x6466AA: push    0
0x6466AC: mov     ecx, edi
0x6466AE: call    edx
0x6466B0: test    al, al
0x6466B2: jmp     short loc_6466D3
0x6466B4: mov     esi, [ebx+64h]
0x6466B7: test    esi, esi
0x6466B9: jz      short loc_6466CB
0x6466BB: mov     eax, [edi]
0x6466BD: mov     edx, [eax+170h]
0x6466C3: mov     ecx, edi
0x6466C5: call    edx
0x6466C7: cmp     esi, eax
0x6466C9: jz      short loc_6466A2
0x6466CB: cmp     dword ptr [ebx+6Ch], 0
0x6466CF: jnz     short loc_6466DA
0x6466D1: test    esi, esi
0x6466D3: jnz     short loc_6466DA
0x6466D5: mov     byte ptr [esp+1Ch], 1
0x6466DA: mov     eax, [edi]
0x6466DC: mov     edx, [eax+170h]
0x6466E2: mov     ecx, edi
0x6466E4: call    edx
0x6466E6: movzx   eax, byte ptr [eax+4]
0x6466EA: cmp     eax, 15h
0x6466ED: jz      short loc_64670B
0x6466EF: cmp     eax, 1Ah
0x6466F2: jnz     short loc_646725
0x6466F4: mov     eax, [edi]
0x6466F6: mov     edx, [eax+170h]
0x6466FC: mov     ecx, edi
0x6466FE: call    edx
0x646700: mov     eax, [eax+7Ch]
0x646703: shr     eax, 1
0x646705: test    al, 1
0x646707: jnz     short loc_646725
0x646709: jmp     short loc_646720
0x64670B: mov     edx, [edi]
0x64670D: mov     eax, [edx+170h]
0x646713: mov     ecx, edi
0x646715: call    eax
0x646717: test    byte ptr [eax+88h], 2
0x64671E: jz      short loc_646725
0x646720: mov     byte ptr [esp+1Ch], 0
0x646725: mov     edx, [edi]
0x646727: mov     eax, [edx+170h]
0x64672D: mov     ecx, edi
0x64672F: xor     bl, bl
0x646731: call    eax
0x646733: cmp     byte ptr [eax+4], 21h ; '!'
0x646737: jnz     short loc_646784
0x646739: mov     edx, [edi]
0x64673B: mov     eax, [edx+170h]
0x646741: mov     ecx, edi
0x646743: call    eax
0x646745: test    eax, eax
0x646747: jz      short loc_646751
0x646749: lea     esi, [eax+80h]
0x64674F: jmp     short loc_646753
0x646751: xor     esi, esi
0x646753: mov     edx, [ebp+0]
0x646756: mov     eax, [edx+334h]
0x64675C: push    1
0x64675E: mov     ecx, ebp
0x646760: call    eax
0x646762: test    al, al
0x646764: jz      short loc_646768
0x646766: mov     bl, 1
0x646768: test    esi, esi
0x64676A: jz      short loc_646784
0x64676C: mov     ecx, edi; this
0x64676E: call    TESObjectREFR_GetHealth
0x646773: fcomp   dword ptr ds:0A2FAA8h
0x646779: fnstsw  ax
0x64677B: test    ah, 41h
0x64677E: jp      short loc_646784
0x646780: test    bl, bl
0x646782: jnz     short loc_6467DE
0x646784: cmp     byte ptr [esp+20h+var_4], 0
0x646789: jz      short loc_6467DE
0x64678B: push    20h ; ' '; Size
0x64678D: call    FormHeapAlloc
0x646792: add     esp, 4
0x646795: test    eax, eax
0x646797: jz      short loc_6467A4
0x646799: mov     ecx, eax
0x64679B: call    sub_628EB0
0x6467A0: mov     esi, eax
0x6467A2: jmp     short loc_6467A6
0x6467A4: xor     esi, esi
0x6467A6: mov     edx, [edi]
0x6467A8: mov     eax, [edx+170h]
0x6467AE: mov     ecx, edi
0x6467B0: call    eax
0x6467B2: lea     ebp, [edi+44h]
0x6467B5: mov     ecx, ebp
0x6467B7: mov     [esi+4], eax
0x6467BA: mov     [esi], edi
0x6467BC: call    ExtraDataList_GetExtraCount
0x6467C1: movsx   ecx, ax
0x6467C4: mov     [esi+10h], ecx
0x6467C7: mov     ecx, [esp+20h+var_10]
0x6467CB: push    esi
0x6467CC: add     ecx, 54h ; 'T'
0x6467CF: mov     dword ptr [esi+1Ch], 0
0x6467D6: mov     [esi+18h], ebp
0x6467D9: call    BSSimpleList_PushBack
0x6467DE: mov     edx, [edi]
0x6467E0: mov     eax, [edx+190h]
0x6467E6: mov     ecx, edi
0x6467E8: call    eax
0x6467EA: test    al, al
0x6467EC: jz      short loc_6467F6
0x6467EE: cmp     edi, ds:0B333C4h
0x6467F4: jnz     short loc_64680C
0x6467F6: mov     edx, [edi]
0x6467F8: mov     eax, [edx+170h]
0x6467FE: mov     ecx, edi
0x646800: call    eax
0x646802: cmp     byte ptr [eax+4], 17h
0x646806: jnz     loc_646A6B
0x64680C: lea     ecx, [edi+44h]; this
0x64680F: call    ExtraDataList_GetContainerChanges
0x646814: mov     esi, eax
0x646816: test    esi, esi
0x646818: mov     [esp+20h+var_C], esi
0x64681C: jz      loc_646942
0x646822: mov     ecx, [esi+4]; this
0x646825: test    ecx, ecx
0x646827: jz      loc_646942
0x64682D: call    TESObjectREFR_GetContainer
0x646832: test    eax, eax
0x646834: jz      loc_646942
0x64683A: mov     ecx, [esi+4]; this
0x64683D: test    ecx, ecx
0x64683F: jz      short loc_646848
0x646841: call    TESObjectREFR_GetContainer
0x646846: jmp     short loc_64684A
0x646848: xor     eax, eax
0x64684A: add     eax, 8
0x64684D: mov     [esp+20h+var_4], eax
0x646851: jz      loc_646942
0x646857: mov     ecx, [esp+20h+var_4]
0x64685B: mov     ebp, [ecx]
0x64685D: test    ebp, ebp
0x64685F: jz      loc_646942
0x646865: mov     edx, [ebp+4]
0x646868: push    0
0x64686A: push    1
0x64686C: push    edx
0x64686D: mov     ecx, esi
0x64686F: call    ContainerExtraData_GetEntryForForm
0x646874: test    eax, eax
0x646876: jnz     loc_64692F
0x64687C: mov     ebx, [esp+28h+var_18]
0x646880: mov     eax, [ebx+6Ch]
0x646883: test    eax, eax
0x646885: jz      short loc_646898
0x646887: push    eax
0x646888: mov     eax, [ebp+4]
0x64688B: push    eax
0x64688C: call    sub_568370
0x646891: add     esp, 8
0x646894: test    al, al
0x646896: jnz     short loc_6468B2
0x646898: mov     eax, [ebx+64h]
0x64689B: test    eax, eax
0x64689D: jz      short loc_6468A4
0x64689F: cmp     eax, [ebp+4]
0x6468A2: jz      short loc_6468B2
0x6468A4: cmp     dword ptr [ebx+6Ch], 0
0x6468A8: jnz     loc_64692F
0x6468AE: test    eax, eax
0x6468B0: jnz     short loc_64692F
0x6468B2: mov     ecx, edi
0x6468B4: call    sub_4D8AF0
0x6468B9: mov     ecx, [esp+28h+var_8]
0x6468BD: mov     esi, eax
0x6468BF: call    sub_4D8AF0
0x6468C4: cmp     esi, eax
0x6468C6: jnz     short loc_64692B
0x6468C8: push    20h ; ' '; Size
0x6468CA: call    FormHeapAlloc
0x6468CF: add     esp, 4
0x6468D2: test    eax, eax
0x6468D4: jz      short loc_6468E1
0x6468D6: mov     ecx, eax
0x6468D8: call    sub_628EB0
0x6468DD: mov     esi, eax
0x6468DF: jmp     short loc_6468E3
0x6468E1: xor     esi, esi
0x6468E3: mov     ecx, [ebp+4]
0x6468E6: mov     [esi+4], ecx
0x6468E9: mov     ecx, edi; this
0x6468EB: mov     [esi], edi
0x6468ED: mov     dword ptr [esi+1Ch], 1
0x6468F4: call    TESObjectREFR_GetContainer
0x6468F9: test    eax, eax
0x6468FB: jz      short loc_64691B
0x6468FD: push    eax
0x6468FE: push    edi; a1
0x6468FF: call    ContainerExtraData_GetContainerExtraDataForRef
0x646904: add     esp, 8
0x646907: test    eax, eax
0x646909: jz      short loc_646922
0x64690B: mov     edx, [ebp+4]
0x64690E: push    edx; a2
0x64690F: mov     ecx, eax; this
0x646911: call    ContainerExtraData_GetItemCount
0x646916: mov     [esi+10h], eax
0x646919: jmp     short loc_646922
0x64691B: mov     dword ptr [esi+10h], 1
0x646922: push    esi
0x646923: lea     ecx, [ebx+54h]
0x646926: call    BSSimpleList_PushBack
0x64692B: mov     esi, [esp+28h+var_14]
0x64692F: mov     eax, [esp+28h+var_C]
0x646933: mov     eax, [eax+4]
0x646936: test    eax, eax
0x646938: mov     [esp+28h+var_C], eax
0x64693C: jnz     loc_646857
0x646942: push    0
0x646944: mov     ecx, edi
0x646946: call    TESObjectREF_GetTotalEntryCountForITem
0x64694B: mov     ebx, eax
0x64694D: xor     esi, esi
0x64694F: test    ebx, ebx
0x646951: mov     [esp+28h+var_14], ebx
0x646955: mov     [esp+28h+var_C], esi
0x646959: jle     loc_646A6B
0x64695F: nop
0x646960: push    0; a3
0x646962: push    esi; a2
0x646963: mov     ecx, edi; this
0x646965: call    GetInventoryEntryOfItem
0x64696A: mov     ebp, eax
0x64696C: test    ebp, ebp
0x64696E: jz      loc_646A5C
0x646974: push    0
0x646976: mov     ecx, ebp
0x646978: call    ContainerEntryExtraData_HasWorn
0x64697D: test    al, al
0x64697F: jnz     loc_646A44
0x646985: mov     ebx, [esp+28h+var_18]
0x646989: mov     eax, [ebx+6Ch]
0x64698C: test    eax, eax
0x64698E: jz      short loc_6469A1
0x646990: mov     ecx, [ebp+8]
0x646993: push    eax
0x646994: push    ecx
0x646995: call    sub_568370
0x64699A: add     esp, 8
0x64699D: test    al, al
0x64699F: jnz     short loc_6469BF
0x6469A1: mov     eax, [ebx+64h]
0x6469A4: test    eax, eax
0x6469A6: jz      short loc_6469AD
0x6469A8: cmp     eax, [ebp+8]
0x6469AB: jz      short loc_6469BF
0x6469AD: cmp     dword ptr [ebx+6Ch], 0
0x6469B1: jnz     loc_646A44
0x6469B7: test    eax, eax
0x6469B9: jnz     loc_646A44
0x6469BF: mov     ecx, edi
0x6469C1: call    sub_4D8AF0
0x6469C6: mov     ecx, [esp+28h+var_8]
0x6469CA: mov     esi, eax
0x6469CC: call    sub_4D8AF0
0x6469D1: cmp     esi, eax
0x6469D3: jnz     short loc_646A44
0x6469D5: push    20h ; ' '; Size
0x6469D7: call    FormHeapAlloc
0x6469DC: add     esp, 4
0x6469DF: test    eax, eax
0x6469E1: jz      short loc_6469EE
0x6469E3: mov     ecx, eax
0x6469E5: call    sub_628EB0
0x6469EA: mov     esi, eax
0x6469EC: jmp     short loc_6469F0
0x6469EE: xor     esi, esi
0x6469F0: mov     ecx, [ebp+8]
0x6469F3: mov     [esi+4], ecx
0x6469F6: mov     ecx, edi; this
0x6469F8: mov     [esi], edi
0x6469FA: mov     dword ptr [esi+1Ch], 1
0x646A01: call    TESObjectREFR_GetContainer
0x646A06: test    eax, eax
0x646A08: jz      short loc_646A28
0x646A0A: push    eax
0x646A0B: push    edi; a1
0x646A0C: call    ContainerExtraData_GetContainerExtraDataForRef
0x646A11: add     esp, 8
0x646A14: test    eax, eax
0x646A16: jz      short loc_646A2F
0x646A18: mov     edx, [esi+4]
0x646A1B: push    edx; a2
0x646A1C: mov     ecx, eax; this
0x646A1E: call    ContainerExtraData_GetItemCount
0x646A23: mov     [esi+10h], eax
0x646A26: jmp     short loc_646A2F
0x646A28: mov     dword ptr [esi+10h], 1
0x646A2F: push    esi
0x646A30: lea     ecx, [ebx+54h]
0x646A33: call    BSSimpleList_PushBack
0x646A38: mov     eax, [ebp+0]
0x646A3B: test    eax, eax
0x646A3D: jz      short loc_646A44
0x646A3F: mov     eax, [eax]
0x646A41: mov     [esi+18h], eax
0x646A44: mov     ecx, ebp
0x646A46: call    ContainerEntryExtraData_DestroyDataTable
0x646A4B: push    ebp
0x646A4C: call    FormHeapFree
0x646A51: mov     ebx, [esp+2Ch+var_14]
0x646A55: mov     esi, [esp+2Ch+var_C]
0x646A59: add     esp, 4
0x646A5C: add     esi, 1
0x646A5F: cmp     esi, ebx
0x646A61: mov     [esp+28h+var_C], esi
0x646A65: jl      loc_646960
0x646A6B: pop     esi
0x646A6C: pop     ebx
0x646A6D: pop     edi
0x646A6E: xor     al, al
0x646A70: pop     ebp
0x646A71: add     esp, 8
0x646A74: retn
0x646A75: pop     edi
0x646A76: xor     al, al
0x646A78: pop     ebp
0x646A79: add     esp, 8
0x646A7C: retn
