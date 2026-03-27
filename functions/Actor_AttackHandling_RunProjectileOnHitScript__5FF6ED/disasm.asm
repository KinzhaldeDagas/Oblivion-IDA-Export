0x5FF6ED: mov     edx, [ebp+0]
0x5FF6F0: push    100h
0x5FF6F5: lea     eax, [esi+44h]
0x5FF6F8: push    eax
0x5FF6F9: mov     eax, [edx+170h]
0x5FF6FF: mov     ecx, ebp
0x5FF701: call    eax
0x5FF703: push    eax
0x5FF704: call    Script_AddEventToExtraScript
0x5FF709: jmp     Actor_AttackHandling___RunOnHitByScript_
