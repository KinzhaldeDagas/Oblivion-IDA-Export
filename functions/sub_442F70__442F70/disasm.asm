0x442F70: push    0FFFFFFFFh
0x442F72: push    offset SEH_442F70
0x442F77: mov     eax, large fs:0
0x442F7D: push    eax
0x442F7E: push    ecx
0x442F7F: push    ebp
0x442F80: push    esi
0x442F81: push    edi
0x442F82: mov     eax, ds:0B30AACh
0x442F87: xor     eax, esp
0x442F89: push    eax
0x442F8A: lea     eax, [esp+20h+var_C]
0x442F8E: mov     large fs:0, eax
0x442F94: mov     esi, [esp+20h+arg_0]
0x442F98: test    esi, esi
0x442F9A: jz      loc_4430A8
0x442FA0: mov     eax, [esi]
0x442FA2: mov     edx, [eax+0Ch]
0x442FA5: mov     ecx, esi
0x442FA7: call    edx
0x442FA9: mov     edi, eax
0x442FAB: test    edi, edi
0x442FAD: jz      loc_443065
0x442FB3: mov     esi, [edi+0B4h]
0x442FB9: test    esi, esi
0x442FBB: mov     [esp+20h+arg_0], esi
0x442FBF: jz      short loc_442FCB
0x442FC1: lea     eax, [esi+4]
0x442FC4: push    eax; lpAddend
0x442FC5: call    dword ptr ds:0A28078h
0x442FCB: test    esi, esi
0x442FCD: mov     ebp, ds:0A2807Ch
0x442FD3: mov     [esp+20h+var_4], 0
0x442FDB: jz      short loc_443032
0x442FDD: lea     ecx, [esp+20h+var_10]
0x442FE1: push    ecx
0x442FE2: mov     ecx, esi
0x442FE4: call    sub_700790
0x442FE9: mov     eax, [eax]
0x442FEB: push    eax; a2
0x442FEC: lea     ecx, [esp+24h+arg_0]; this
0x442FF0: mov     byte ptr [esp+24h+var_4], 1
0x442FF5: call    NiSmartPointer_Set??
0x442FFA: mov     eax, [esp+20h+var_10]
0x442FFE: test    eax, eax
0x443000: mov     byte ptr [esp+20h+var_4], 0
0x443005: jz      short loc_443021
0x443007: mov     esi, eax
0x443009: add     eax, 4
0x44300C: push    eax; lpAddend
0x44300D: call    ebp ; InterlockedDecrement
0x44300F: test    eax, eax
0x443011: jnz     short loc_443021
0x443013: test    esi, esi
0x443015: jz      short loc_443021
0x443017: mov     edx, [esi]
0x443019: mov     eax, [edx]
0x44301B: push    1
0x44301D: mov     ecx, esi
0x44301F: call    eax
0x443021: mov     edx, [edi]
0x443023: mov     esi, [esp+20h+arg_0]
0x443027: mov     eax, [edx+8Ch]
0x44302D: push    esi
0x44302E: mov     ecx, edi
0x443030: call    eax
0x443032: test    esi, esi
0x443034: mov     [esp+20h+var_4], 0FFFFFFFFh
0x44303C: jz      short loc_4430A8
0x44303E: lea     ecx, [esi+4]
0x443041: push    ecx; lpAddend
0x443042: call    ebp ; InterlockedDecrement
0x443044: test    eax, eax
0x443046: jnz     short loc_4430A8
0x443048: mov     edx, [esi]
0x44304A: mov     eax, [edx]
0x44304C: push    1
0x44304E: mov     ecx, esi
0x443050: call    eax
0x443052: mov     ecx, [esp+20h+var_C]
0x443056: mov     large fs:0, ecx
0x44305D: pop     ecx
0x44305E: pop     edi
0x44305F: pop     esi
0x443060: pop     ebp
0x443061: add     esp, 10h
0x443064: retn
0x443065: mov     edx, [esi]
0x443067: mov     eax, [edx+8]
0x44306A: mov     ecx, esi
0x44306C: call    eax
0x44306E: mov     edi, eax
0x443070: test    edi, edi
0x443072: jz      short loc_4430A8
0x443074: movzx   esi, word ptr [edi+0B6h]
0x44307B: test    esi, esi
0x44307D: jz      short loc_4430A8
0x44307F: nop
0x443080: movzx   ecx, word ptr [edi+0B6h]
0x443087: sub     esi, 1
0x44308A: cmp     ecx, esi
0x44308C: ja      short loc_443092
0x44308E: xor     eax, eax
0x443090: jmp     short loc_44309B
0x443092: mov     edx, [edi+0B0h]
0x443098: mov     eax, [edx+esi*4]
0x44309B: push    eax
0x44309C: call    sub_442F70
0x4430A1: add     esp, 4
0x4430A4: test    esi, esi
0x4430A6: jnz     short loc_443080
0x4430A8: mov     ecx, [esp+20h+var_C]
0x4430AC: mov     large fs:0, ecx
0x4430B3: pop     ecx
0x4430B4: pop     edi
0x4430B5: pop     esi
0x4430B6: pop     ebp
0x4430B7: add     esp, 10h
0x4430BA: retn
