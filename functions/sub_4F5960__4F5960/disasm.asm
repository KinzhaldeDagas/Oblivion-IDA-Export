0x4F5960: fldz
0x4F5962: push    esi
0x4F5963: mov     esi, [esp+4+arg_C]
0x4F5967: fstp    qword ptr [esi]
0x4F5969: mov     ecx, ds:0B333C4h
0x4F596F: mov     eax, [ecx]
0x4F5971: mov     edx, [eax+204h]
0x4F5977: call    edx
0x4F5979: mov     [esp+4+arg_C], eax
0x4F597D: fild    [esp+4+arg_C]
0x4F5981: fst     qword ptr [esi]
0x4F5983: cmp     byte ptr ds:0B361ACh, 0
0x4F598A: pop     esi
0x4F598B: jz      short loc_4F59A3
0x4F598D: sub     esp, 8
0x4F5990: fstp    [esp+8+var_8]
0x4F5993: push    offset aPlayerFameIs0_; "Player Fame is %0.2f"
0x4F5998: call    Interface_ConsolePrint
0x4F599D: add     esp, 0Ch
0x4F59A0: mov     al, 1
0x4F59A2: retn
0x4F59A3: fstp    st
0x4F59A5: mov     al, 1
0x4F59A7: retn
