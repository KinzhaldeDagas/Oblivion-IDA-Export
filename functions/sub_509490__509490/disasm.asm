0x509490: push    ecx
0x509491: mov     eax, ds:0B33398h
0x509496: push    esi
0x509497: mov     dword ptr [esp+8+var_4], 0
0x50949F: mov     esi, [eax+24h]
0x5094A2: test    esi, esi
0x5094A4: jz      short loc_50950F
0x5094A6: mov     edx, [esp+8+l]
0x5094AA: mov     eax, [esp+8+arg_10]
0x5094AE: lea     ecx, [esp+8+var_4]
0x5094B2: push    ecx; UInt16
0x5094B3: mov     ecx, [esp+0Ch+arg_C]
0x5094B7: push    edx; l
0x5094B8: mov     edx, [esp+10h+a4]
0x5094BC: push    eax; a6
0x5094BD: mov     eax, [esp+14h+a3]
0x5094C1: push    ecx; a5
0x5094C2: mov     ecx, [esp+18h+arg_4]
0x5094C6: push    edx; a4
0x5094C7: mov     edx, [esp+1Ch+a1]
0x5094CB: push    eax; a3
0x5094CC: push    ecx; a2
0x5094CD: push    edx; a1
0x5094CE: call    Script_ExtractArgs
0x5094D3: add     esp, 20h
0x5094D6: test    al, al
0x5094D8: jz      short loc_50950F
0x5094DA: mov     eax, dword ptr [esp+8+var_4]
0x5094DE: mov     eax, [eax+0Ch]
0x5094E1: push    0
0x5094E3: push    101h
0x5094E8: push    eax
0x5094E9: mov     ecx, esi
0x5094EB: call    OSGLobals_PlaySound
0x5094F0: mov     esi, eax
0x5094F2: test    esi, esi
0x5094F4: jz      short loc_50950F
0x5094F6: push    0
0x5094F8: mov     ecx, esi
0x5094FA: call    sub_6B7190
0x5094FF: mov     ecx, esi; this
0x509501: call    sub_6B73E0
0x509506: push    esi
0x509507: call    FormHeapFree
0x50950C: add     esp, 4
0x50950F: mov     al, 1
0x509511: pop     esi
0x509512: pop     ecx
0x509513: retn
