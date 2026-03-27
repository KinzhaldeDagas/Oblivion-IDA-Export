0x47F670: sub     esp, 10Ch
0x47F676: mov     eax, ds:0B30AACh
0x47F67B: xor     eax, esp
0x47F67D: mov     [esp+10Ch+var_4], eax
0x47F684: push    esi
0x47F685: mov     esi, dword ptr [esp+110h+ArgList]
0x47F68C: lea     eax, [esp+110h+pcbBuffer]
0x47F690: push    eax; pcbBuffer
0x47F691: push    offset byte_B34190; lpBuffer
0x47F696: mov     [esp+118h+pcbBuffer], 104h
0x47F69E: call    dword ptr ds:0A28014h
0x47F6A4: test    eax, eax
0x47F6A6: jz      short loc_47F6D4
0x47F6A8: push    esi; ArgList
0x47F6A9: push    offset aS; "%s"
0x47F6AE: call    PrintToLog???
0x47F6B3: push    offset byte_B34190
0x47F6B8: lea     ecx, [esp+11Ch+Format]
0x47F6BC: push    offset aComputerNameS; "Computer Name: %s"
0x47F6C1: push    ecx; ArgList
0x47F6C2: call    __sprintf
0x47F6C7: lea     edx, [esp+124h+Format]
0x47F6CB: push    edx; Format
0x47F6CC: call    PrintToLog???
0x47F6D1: add     esp, 18h
0x47F6D4: mov     ecx, [esp+110h+var_4]
0x47F6DB: pop     esi
0x47F6DC: xor     ecx, esp
0x47F6DE: call    @__security_check_cookie@4; __security_check_cookie(x)
0x47F6E3: add     esp, 10Ch
0x47F6E9: retn
