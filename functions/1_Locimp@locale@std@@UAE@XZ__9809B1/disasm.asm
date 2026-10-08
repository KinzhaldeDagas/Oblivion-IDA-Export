0x9809B1: push    4
0x9809B3: mov     eax, offset ??1_Locimp@locale@std@@UAE@XZ_____ehhandler$??1_Locimp@locale@std@@MAE@XZ
0x9809B8: call    __EH_prolog3
0x9809BD: mov     esi, ecx
0x9809BF: mov     [ebp+var_10], esi
0x9809C2: mov     dword ptr [esi], offset ??_7_Locimp@locale@std@@6B@
0x9809C8: push    esi; struct std::locale::_Locimp *
0x9809C9: mov     [ebp+var_4], 1
0x9809D0: call    ?_Locimp_dtor@_Locimp@locale@std@@CAXPAV123@@Z
0x9809D5: pop     ecx
0x9809D6: push    0; MaxCount
0x9809D8: push    1; char
0x9809DA: lea     ecx, [esi+18h]
0x9809DD: call    sub_413570
0x9809E2: mov     dword ptr [esi], offset ??_7facet@locale@std@@6B@
0x9809E8: call    __EH_epilog3
0x9809ED: retn
0x6F6E00: mov     dword ptr [ecx], offset ??_7facet@locale@std@@6B@
0x6F6E06: retn
0x9D7C7F: mov     ecx, [ebp+var_10]
0x9D7C82: jmp     loc_6F6E00
0x9D7C87: mov     ecx, [ebp+var_10]
0x9D7C8A: add     ecx, 18h; this
0x9D7C8D: jmp     OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x9D7C92: mov     edx, [esp-4+arg_4]
0x9D7C96: lea     eax, [edx+0Ch]
0x9D7C99: mov     ecx, [edx-14h]
0x9D7C9C: xor     ecx, eax
0x9D7C9E: call    @__security_check_cookie@4
0x9D7CA3: mov     eax, offset stru_AFF7E8
0x9D7CA8: jmp     ___CxxFrameHandler3
