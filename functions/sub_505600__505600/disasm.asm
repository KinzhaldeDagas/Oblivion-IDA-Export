0x505600: push    ecx
0x505601: mov     ecx, [esp+4+l]
0x505605: mov     edx, [esp+4+arg_10]
0x505609: push    esi
0x50560A: mov     esi, [esp+8+a4]
0x50560E: lea     eax, [esp+8+var_4]
0x505612: push    eax; UInt16
0x505613: mov     eax, [esp+0Ch+arg_C]
0x505617: push    ecx; l
0x505618: mov     ecx, [esp+10h+a3]
0x50561C: push    edx; a6
0x50561D: mov     edx, [esp+14h+arg_4]
0x505621: push    eax; a5
0x505622: mov     eax, [esp+18h+a1]
0x505626: push    esi; a4
0x505627: push    ecx; a3
0x505628: push    edx; a2
0x505629: push    eax; a1
0x50562A: mov     dword ptr [esp+28h+var_4], 0
0x505632: call    Script_ExtractArgs
0x505637: add     esp, 20h
0x50563A: test    al, al
0x50563C: jnz     short loc_505641
0x50563E: pop     esi
0x50563F: pop     ecx
0x505640: retn
0x505641: mov     ecx, [esp+8+arg_18]
0x505645: mov     edx, dword ptr [esp+8+var_4]
0x505649: push    ecx
0x50564A: push    0
0x50564C: push    edx
0x50564D: push    esi
0x50564E: call    sub_4F8260
0x505653: add     esp, 10h
0x505656: mov     al, 1
0x505658: pop     esi
0x505659: pop     ecx
0x50565A: retn
