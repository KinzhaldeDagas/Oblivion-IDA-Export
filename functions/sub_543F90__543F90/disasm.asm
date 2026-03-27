0x543F90: push    0FFFFFFFFh
0x543F92: push    offset SEH_543F90
0x543F97: mov     eax, large fs:0
0x543F9D: push    eax
0x543F9E: sub     esp, 8
0x543FA1: push    esi
0x543FA2: push    edi
0x543FA3: mov     eax, ds:0B30AACh
0x543FA8: xor     eax, esp
0x543FAA: push    eax
0x543FAB: lea     eax, [esp+20h+var_C]
0x543FAF: mov     large fs:0, eax
0x543FB5: mov     esi, ecx
0x543FB7: xor     edi, edi
0x543FB9: mov     [esp+20h+var_14], edi
0x543FBD: mov     eax, [esi+24h]
0x543FC0: test    eax, eax
0x543FC2: mov     [esp+20h+var_4], edi
0x543FC6: jz      short loc_543FEB
0x543FC8: mov     ecx, ds:0B35300h
0x543FCE: push    edi
0x543FCF: push    eax
0x543FD0: call    sub_4A1ED0
0x543FD5: test    eax, eax
0x543FD7: jz      short loc_544050
0x543FD9: mov     edi, eax
0x543FDB: add     eax, 4
0x543FDE: push    eax; lpAddend
0x543FDF: mov     [esp+24h+var_14], edi
0x543FE3: call    dword ptr ds:0A28078h
0x543FE9: jmp     short loc_544010
0x543FEB: mov     eax, [esi+20h]
0x543FEE: test    eax, eax
0x543FF0: jz      short loc_544050
0x543FF2: mov     ecx, ds:0B35300h
0x543FF8: mov     edx, [ecx]
0x543FFA: push    0
0x543FFC: push    eax
0x543FFD: mov     eax, [edx+4]
0x544000: call    eax
0x544002: push    eax; a2
0x544003: lea     ecx, [esp+24h+var_14]; this
0x544007: call    NiSmartPointer_Set??
0x54400C: mov     edi, [esp+20h+var_14]
0x544010: test    edi, edi
0x544012: jz      short loc_544050
0x544014: push    30h ; '0'; Size
0x544016: call    FormHeapAlloc
0x54401B: add     esp, 4
0x54401E: mov     [esp+20h+var_10], eax
0x544022: test    eax, eax
0x544024: mov     byte ptr [esp+20h+var_4], 1
0x544029: jz      short loc_544034
0x54402B: mov     ecx, eax
0x54402D: call    NiTexturingProperty__NiTexturingProperty
0x544032: jmp     short loc_544036
0x544034: xor     eax, eax
0x544036: add     esi, 2Ch ; ','
0x544039: push    eax; a2
0x54403A: mov     ecx, esi; this
0x54403C: mov     byte ptr [esp+24h+var_4], 0
0x544041: call    NiSmartPointer_Set??
0x544046: mov     ecx, [esi]
0x544048: push    edi
0x544049: call    NiTexturingProperty__SetUnk08
0x54404E: jmp     short loc_5440AA
0x544050: mov     eax, [esi+20h]
0x544053: test    eax, eax
0x544055: jz      short loc_54409C
0x544057: push    30h ; '0'; Size
0x544059: call    FormHeapAlloc
0x54405E: add     esp, 4
0x544061: mov     [esp+20h+var_10], eax
0x544065: test    eax, eax
0x544067: mov     byte ptr [esp+20h+var_4], 2
0x54406C: jz      short loc_54408B
0x54406E: mov     edx, [esi+20h]
0x544071: push    0; int
0x544073: push    edx; Src
0x544074: mov     ecx, eax
0x544076: call    sub_704530
0x54407B: push    eax; a2
0x54407C: lea     ecx, [esi+2Ch]; this
0x54407F: mov     byte ptr [esp+24h+var_4], 0
0x544084: call    NiSmartPointer_Set??
0x544089: jmp     short loc_5440AA
0x54408B: xor     eax, eax
0x54408D: push    eax; a2
0x54408E: lea     ecx, [esi+2Ch]; this
0x544091: mov     byte ptr [esp+24h+var_4], al
0x544095: call    NiSmartPointer_Set??
0x54409A: jmp     short loc_5440AA
0x54409C: push    eax; ArgList
0x54409D: push    offset aWarningUnableT; "Warning:  Unable to locate texture file"...
0x5440A2: call    PrintError
0x5440A7: add     esp, 8
0x5440AA: test    edi, edi
0x5440AC: mov     [esp+20h+var_4], 0FFFFFFFFh
0x5440B4: jz      short loc_5440CE
0x5440B6: lea     ecx, [edi+4]
0x5440B9: push    ecx; lpAddend
0x5440BA: call    dword ptr ds:0A2807Ch
0x5440C0: test    eax, eax
0x5440C2: jnz     short loc_5440CE
0x5440C4: mov     edx, [edi]
0x5440C6: mov     eax, [edx]
0x5440C8: push    1
0x5440CA: mov     ecx, edi
0x5440CC: call    eax
0x5440CE: mov     ecx, dword ptr [esp+20h+var_C]
0x5440D2: mov     large fs:0, ecx
0x5440D9: pop     ecx
0x5440DA: pop     edi
0x5440DB: pop     esi
0x5440DC: add     esp, 14h
0x5440DF: retn
