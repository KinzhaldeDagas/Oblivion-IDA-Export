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
