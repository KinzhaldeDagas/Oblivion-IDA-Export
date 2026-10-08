0x98B14B: push    4
0x98B14D: mov     eax, offset unknown_libname_80_____ehhandler$?CallUnexpected@@YAXPBU_s_ESTypeList@@@Z_0
0x98B152: call    __EH_prolog3_catch
0x98B157: call    __getptd
0x98B15C: cmp     dword ptr [eax+94h], 0
0x98B163: jz      short loc_98B16A
0x98B165: call    ?_inconsistency@@YAXXZ
0x98B16A: and     [ebp+var_4], 0
0x98B16E: call    ?unexpected@@YAXXZ
0x98B17C: call    __getptd
0x98B181: mov     ecx, [ebp+arg_0]
0x98B184: push    0
0x98B186: push    0
0x98B188: mov     [eax+94h], ecx
0x98B18E: call    ThrowException??
0x9D7CDA: mov     edx, [esp-4+arg_4]
0x9D7CDE: lea     eax, [edx+0Ch]
0x9D7CE1: mov     ecx, [edx-14h]
0x9D7CE4: xor     ecx, eax
0x9D7CE6: call    @__security_check_cookie@4
0x9D7CEB: mov     eax, offset stru_AFFCF8
0x9D7CF0: jmp     ___CxxFrameHandler3
