0x50CB20: push    ecx
0x50CB21: mov     ecx, [esp+4+l]
0x50CB25: mov     edx, [esp+4+arg_10]
0x50CB29: lea     eax, [esp+4+var_4]
0x50CB2C: push    eax; UInt16
0x50CB2D: mov     eax, [esp+8+arg_C]
0x50CB31: push    ecx; l
0x50CB32: mov     ecx, [esp+0Ch+a4]
0x50CB36: push    edx; a6
0x50CB37: mov     edx, [esp+10h+a3]
0x50CB3B: push    eax; a5
0x50CB3C: mov     eax, [esp+14h+arg_4]
0x50CB40: push    ecx; a4
0x50CB41: mov     ecx, [esp+18h+a1]
0x50CB45: push    edx; a3
0x50CB46: push    eax; a2
0x50CB47: push    ecx; a1
0x50CB48: mov     dword ptr [esp+24h+var_4], 0
0x50CB50: call    Script_ExtractArgs
0x50CB55: add     esp, 20h
0x50CB58: test    al, al
0x50CB5A: jnz     short loc_50CB5E
0x50CB5C: pop     ecx
0x50CB5D: retn
0x50CB5E: mov     ecx, ds:0B333C4h
0x50CB64: mov     edx, [ecx]
0x50CB66: mov     eax, [edx+208h]
0x50CB6C: call    eax
0x50CB6E: mov     ecx, dword ptr [esp+4+var_4]
0x50CB71: sub     ecx, eax
0x50CB73: mov     eax, ds:0B333C4h
0x50CB78: add     [eax+6F8h], ecx
0x50CB7E: mov     dword ptr [eax+6FCh], 0
0x50CB88: cmp     byte ptr ds:0B361ACh, 0
0x50CB8F: jz      short loc_50CBAF
0x50CB91: mov     ecx, ds:0B333C4h
0x50CB97: mov     edx, [ecx]
0x50CB99: mov     eax, [edx+208h]
0x50CB9F: call    eax
0x50CBA1: push    eax
0x50CBA2: push    offset aPlayerInfamy_0; "Player infamy is %d "
0x50CBA7: call    Interface_ConsolePrint
0x50CBAC: add     esp, 8
0x50CBAF: mov     al, 1
0x50CBB1: pop     ecx
0x50CBB2: retn
