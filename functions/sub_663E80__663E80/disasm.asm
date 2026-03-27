0x663E80: cmp     byte ptr [ecx+7F9h], 0
0x663E87: jnz     short locret_663EAC
0x663E89: fld     dword ptr ds:0A30634h
0x663E8F: push    ecx
0x663E90: fstp    [esp+4+duration]; duration
0x663E93: push    1; unk2
0x663E95: mov     byte ptr [ecx+7F9h], 1
0x663E9C: mov     eax, ds:0B389D8h
0x663EA1: push    0; unk1
0x663EA3: push    eax; string
0x663EA4: call    GameUI_QueueMessage
0x663EA9: add     esp, 10h
0x663EAC: retn
