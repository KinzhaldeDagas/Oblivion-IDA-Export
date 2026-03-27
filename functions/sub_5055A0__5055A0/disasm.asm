0x5055A0: push    ecx
0x5055A1: mov     ecx, [esp+4+l]
0x5055A5: mov     edx, [esp+4+arg_10]
0x5055A9: push    esi
0x5055AA: mov     esi, [esp+8+a4]
0x5055AE: lea     eax, [esp+8+var_4]
0x5055B2: push    eax; UInt16
0x5055B3: mov     eax, [esp+0Ch+arg_C]
0x5055B7: push    ecx; l
0x5055B8: mov     ecx, [esp+10h+a3]
0x5055BC: push    edx; a6
0x5055BD: mov     edx, [esp+14h+arg_4]
0x5055C1: push    eax; a5
0x5055C2: mov     eax, [esp+18h+a1]
0x5055C6: push    esi; a4
0x5055C7: push    ecx; a3
0x5055C8: push    edx; a2
0x5055C9: push    eax; a1
0x5055CA: mov     dword ptr [esp+28h+var_4], 0
0x5055D2: call    Script_ExtractArgs
0x5055D7: add     esp, 20h
0x5055DA: test    al, al
0x5055DC: jnz     short loc_5055E1
0x5055DE: pop     esi
0x5055DF: pop     ecx
0x5055E0: retn
0x5055E1: mov     ecx, [esp+8+arg_18]
0x5055E5: mov     edx, dword ptr [esp+8+var_4]
0x5055E9: push    ecx
0x5055EA: push    0
0x5055EC: push    edx
0x5055ED: push    esi
0x5055EE: call    sub_4F8200
0x5055F3: add     esp, 10h
0x5055F6: mov     al, 1
0x5055F8: pop     esi
0x5055F9: pop     ecx
0x5055FA: retn
