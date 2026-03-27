0x506920: push    ecx
0x506921: mov     ecx, [esp+4+l]
0x506925: mov     edx, [esp+4+arg_10]
0x506929: lea     eax, [esp+4+var_4]
0x50692C: push    eax; UInt16
0x50692D: mov     eax, [esp+8+arg_C]
0x506931: push    ecx; l
0x506932: mov     ecx, [esp+0Ch+a4]
0x506936: push    edx; a6
0x506937: mov     edx, [esp+10h+a3]
0x50693B: push    eax; a5
0x50693C: mov     eax, [esp+14h+arg_4]
0x506940: push    ecx; a4
0x506941: mov     ecx, [esp+18h+a1]
0x506945: push    edx; a3
0x506946: push    eax; a2
0x506947: push    ecx; a1
0x506948: mov     dword ptr [esp+24h+var_4], 0
0x506950: call    Script_ExtractArgs
0x506955: add     esp, 20h
0x506958: test    al, al
0x50695A: jnz     short loc_50695E
0x50695C: pop     ecx
0x50695D: retn
0x50695E: mov     edx, dword ptr [esp+4+var_4]
0x506961: push    edx
0x506962: mov     ecx, offset ActorProcessManager_ptr
0x506967: call    nullsub_returnvVoid_1arg
0x50696C: cmp     byte ptr ds:0B361ACh, 0
0x506973: jz      short loc_506982
0x506975: push    offset aDeletedAllNonP; "Deleted all non persistent actors in hi"...
0x50697A: call    Interface_ConsolePrint
0x50697F: add     esp, 4
0x506982: mov     al, 1
0x506984: pop     ecx
0x506985: retn
