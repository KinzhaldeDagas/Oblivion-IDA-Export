0x41ED50: push    0FFFFFFFFh; ExtraUses singleton setter always creates/updates and narrows to u8; no removal sentinel. Repeated XUSE retains node position and replaces the byte.
0x41ED52: push    offset SEH_8C62B0
0x41ED57: mov     eax, large fs:0
0x41ED5D: push    eax
0x41ED5E: push    ecx
0x41ED5F: push    esi
0x41ED60: mov     eax, ___security_cookie
0x41ED65: xor     eax, esp
0x41ED67: push    eax
0x41ED68: lea     eax, [esp+18h+var_C]
0x41ED6C: mov     large fs:0, eax
0x41ED72: mov     esi, ecx
0x41ED74: push    2Ch ; ','; a2
0x41ED76: call    BaseExtraList_GetExtraData
0x41ED7B: test    eax, eax
0x41ED7D: jz      short loc_41ED99
0x41ED7F: mov     cl, byte ptr [esp+18h+arg_0]
0x41ED83: mov     [eax+0Ch], cl
0x41ED86: mov     ecx, [esp+18h+var_C]
0x41ED8A: mov     large fs:0, ecx
0x41ED91: pop     ecx
0x41ED92: pop     esi
0x41ED93: add     esp, 10h
0x41ED96: retn    4
0x41ED99: push    10h; Size
0x41ED9B: call    FormHeapAlloc
0x41EDA0: add     esp, 4
0x41EDA3: mov     [esp+18h+var_10], eax
0x41EDA7: test    eax, eax
0x41EDA9: mov     [esp+18h+var_4], 0
0x41EDB1: jz      short loc_41EDC1
0x41EDB3: mov     edx, [esp+18h+arg_0]
0x41EDB7: push    edx
0x41EDB8: mov     ecx, eax
0x41EDBA: call    ExtraUses_constr
0x41EDBF: jmp     short loc_41EDC3
0x41EDC1: xor     eax, eax
0x41EDC3: push    eax; BSExtraData *
0x41EDC4: mov     ecx, esi; ExtraDataList *
0x41EDC6: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x41EDCE: call    BaseExtraList_AddExtra
0x41EDD3: mov     ecx, [esp+18h+var_C]
0x41EDD7: mov     large fs:0, ecx
0x41EDDE: pop     ecx
0x41EDDF: pop     esi
0x41EDE0: add     esp, 10h
0x41EDE3: retn    4
0x9D62E0: mov     eax, [ebp-10h]
0x9D62E3: push    eax
0x9D62E4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D62E9: pop     ecx
0x9D62EA: retn
0x9D62EB: mov     edx, [esp+arg_4]
0x9D62EF: lea     eax, [edx-8]
0x9D62F2: mov     ecx, [edx-0Ch]
0x9D62F5: xor     ecx, eax
0x9D62F7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D62FC: mov     eax, offset stru_AFE21C
0x9D6301: jmp     ___CxxFrameHandler3
