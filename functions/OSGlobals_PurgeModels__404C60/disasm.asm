0x404C60: cmp     [esp+a2], 0
0x404C65: jz      short loc_404C6C
0x404C67: call    sub_54FE70
0x404C6C: mov     ecx, ds:0B33A1Ch
0x404C72: call    sub_43BEB0
0x404C77: mov     ecx, ds:0B333A0h; this
0x404C7D: mov     dword ptr [esp+a2], 0; a2
0x404C85: jmp     sub_43FC20; TES cleanup/streaming critical-section path; calls SpeedTree cache prune 0x55E390(1) before and after heap/cell cleanup.
