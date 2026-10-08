0x980968: push    4
0x98096A: mov     eax, offset ??0_Locimp@locale@std@@QAE@XZ_____ehhandler$?CallUnexpected@@YAXPBU_s_ESTypeList@@@Z
0x98096F: call    __EH_prolog3
0x980974: mov     esi, ecx
0x980976: mov     [ebp+var_10], esi
0x980979: mov     dword ptr [esi+4], 1
0x980980: xor     eax, eax
0x980982: mov     [ebp+var_4], eax
0x980985: mov     [esi+8], eax
0x980988: mov     [esi+0Ch], eax
0x98098B: mov     [esi+10h], eax
0x98098E: mov     al, [ebp+arg_0]
0x980991: push    offset asc_A3642C
0x980996: lea     ecx, [esi+18h]
0x980999: mov     dword ptr [esi], offset ??_7_Locimp@locale@std@@6B@
0x98099F: mov     [esi+14h], al
0x9809A2: call    sub_414750
0x9809A7: mov     eax, esi
0x9809A9: call    __EH_epilog3
0x9809AE: retn    4
0x6F6E00: mov     dword ptr [ecx], offset ??_7facet@locale@std@@6B@
0x6F6E06: retn
0x9D7C5C: mov     ecx, [ebp+var_10]
0x9D7C5F: jmp     loc_6F6E00
0x9D7C64: mov     edx, [esp-4+arg_4]
0x9D7C68: lea     eax, [edx+0Ch]
0x9D7C6B: mov     ecx, [edx-14h]
0x9D7C6E: xor     ecx, eax
0x9D7C70: call    @__security_check_cookie@4
0x9D7C75: mov     eax, offset stru_AFF7B4
0x9D7C7A: jmp     ___CxxFrameHandler3
