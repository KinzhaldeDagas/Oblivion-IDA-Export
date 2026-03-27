0x56CCE0: push    esi
0x56CCE1: mov     esi, ecx
0x56CCE3: cmp     byte ptr [esi+28h], 0
0x56CCE7: jz      short loc_56CCEF
0x56CCE9: xor     al, al
0x56CCEB: pop     esi
0x56CCEC: retn    4
0x56CCEF: fld     [esp+4+arg_0]
0x56CCF3: push    ecx
0x56CCF4: fstp    [esp+8+var_8]; float
0x56CCF7: call    sub_56BC70
0x56CCFC: fld     dword ptr [esi+10h]
0x56CCFF: mov     ecx, [esi+18h]
0x56CD02: fdiv    dword ptr [esi+8]
0x56CD05: pop     esi
0x56CD06: fstp    [esp+arg_0]
0x56CD0A: fld     [esp+arg_0]
0x56CD0E: fstp    dword ptr [ecx+40h]
0x56CD11: retn    4
