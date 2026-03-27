0x98B14B: push    4
0x98B14D: mov     eax, offset unknown_libname_80_____ehhandler$?CallUnexpected@@YAXPBU_s_ESTypeList@@@Z_0
0x98B152: call    __EH_prolog3_catch
0x98B157: call    __getptd
0x98B15C: cmp     dword ptr [eax+94h], 0
0x98B163: jz      short loc_98B16A
0x98B165: call    ?_inconsistency@@YAXXZ
0x98B16A: and     [ebp+var_4], 0
0x98B16E: call    ?unexpected@@YAXXZ
