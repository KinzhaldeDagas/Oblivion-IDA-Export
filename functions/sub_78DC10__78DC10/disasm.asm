0x78DC10: push    ebp
0x78DC11: mov     ebp, esp
0x78DC13: push    0FFFFFFFFh
0x78DC15: push    offset SEH_78DC10
0x78DC1A: mov     eax, large fs:0
0x78DC20: push    eax
0x78DC21: sub     esp, 48h
0x78DC24: push    ebx
0x78DC25: push    esi
0x78DC26: push    edi
0x78DC27: mov     eax, ds:0B30AACh
0x78DC2C: xor     eax, ebp
0x78DC2E: push    eax
0x78DC2F: lea     eax, [ebp+var_C]
0x78DC32: mov     large fs:0, eax
0x78DC38: mov     [ebp+var_10], esp
0x78DC3B: mov     esi, ecx
0x78DC3D: xor     edi, edi
0x78DC3F: push    0A0h ; ' '; Size
0x78DC44: mov     [ebp+var_14], edi
0x78DC47: mov     [ebp+var_4], edi
0x78DC4A: call    FormHeapAlloc
0x78DC4F: mov     ecx, eax
0x78DC51: add     esp, 4
0x78DC54: mov     [ebp+var_18], ecx
0x78DC57: cmp     ecx, edi
0x78DC59: mov     byte ptr [ebp+var_4], 1
0x78DC5D: jz      short loc_78DC67
0x78DC5F: push    esi
0x78DC60: call    sub_78D9E0
0x78DC65: jmp     short loc_78DC69
0x78DC67: xor     eax, eax
0x78DC69: mov     [ebp+var_14], eax
0x78DC6C: mov     eax, [ebp+var_14]
0x78DC6F: mov     ecx, [ebp+var_C]
0x78DC72: mov     large fs:0, ecx
0x78DC79: pop     ecx
0x78DC7A: pop     edi
0x78DC7B: pop     esi
0x78DC7C: pop     ebx
0x78DC7D: mov     esp, ebp
0x78DC7F: pop     ebp
0x78DC80: retn
0x78DC81: mov     ecx, [ebp+var_1C]
0x78DC84: mov     eax, [ecx]
0x78DC86: mov     edx, [eax+4]
0x78DC89: call    edx
0x78DC8B: push    eax
0x78DC8C: push    offset aCspeedtreertMa; "CSpeedTreeRT::MakeInstance"
0x78DC91: push    offset aSFailedS; "%s - failed [%s]"
0x78DC96: lea     esi, [ebp+var_38]
0x78DC99: call    sub_7A54A0
0x78DC9E: add     esp, 0Ch
0x78DCA1: cmp     dword ptr [eax+18h], 10h
0x78DCA5: mov     byte ptr [ebp+var_4], 3
0x78DCA9: jb      short loc_78DCB0
0x78DCAB: mov     eax, [eax+4]
0x78DCAE: jmp     short loc_78DCB3
0x78DCB0: add     eax, 4
0x78DCB3: push    eax; Src
0x78DCB4: call    sub_7895E0
0x78DCB9: add     esp, 4
0x78DCBC: lea     ecx, [ebp+var_38]
0x78DCBF: call    sub_79AB00
0x78DCC4: mov     eax, offset loc_78DCCA
0x78DCC9: retn
0x78DCCA: jmp     short loc_78DC6C
0x78DCCC: push    offset aCspeedtreertMa; "CSpeedTreeRT::MakeInstance"
0x78DCD1: push    offset aSThrewAnUnknow; "%s - threw an unknown system exception"
0x78DCD6: lea     esi, [ebp+var_54]
0x78DCD9: call    sub_7A54A0
0x78DCDE: add     esp, 8
0x78DCE1: cmp     dword ptr [eax+18h], 10h
0x78DCE5: mov     byte ptr [ebp+var_4], 4
0x78DCE9: jb      short loc_78DCF0
0x78DCEB: mov     eax, [eax+4]
0x78DCEE: jmp     short loc_78DCF3
0x78DCF0: add     eax, 4
0x78DCF3: push    eax; Src
0x78DCF4: call    sub_7895E0
0x78DCF9: add     esp, 4
0x78DCFC: lea     ecx, [ebp+var_54]
0x78DCFF: call    sub_79AB00
0x78DD04: mov     eax, offset loc_78DC6C
0x78DD09: retn
