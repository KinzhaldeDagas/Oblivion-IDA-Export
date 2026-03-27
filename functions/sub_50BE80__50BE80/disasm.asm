0x50BE80: sub     esp, 8
0x50BE83: mov     edx, [esp+8+l]
0x50BE87: lea     eax, [esp+8+var_4]
0x50BE8B: push    eax
0x50BE8C: mov     eax, [esp+0Ch+arg_10]
0x50BE90: lea     ecx, [esp+0Ch+var_8]
0x50BE94: push    ecx; UInt16
0x50BE95: mov     ecx, [esp+10h+arg_C]
0x50BE99: push    edx; l
0x50BE9A: mov     edx, [esp+14h+a4]
0x50BE9E: push    eax; a6
0x50BE9F: mov     eax, [esp+18h+a3]
0x50BEA3: push    ecx; a5
0x50BEA4: mov     ecx, [esp+1Ch+arg_4]
0x50BEA8: push    edx; a4
0x50BEA9: mov     edx, [esp+20h+a1]
0x50BEAD: push    eax; a3
0x50BEAE: push    ecx; a2
0x50BEAF: push    edx; a1
0x50BEB0: mov     dword ptr [esp+2Ch+var_8], 0
0x50BEB8: mov     [esp+2Ch+var_4], 0
0x50BEC0: call    Script_ExtractArgs
0x50BEC5: add     esp, 24h
0x50BEC8: test    al, al
0x50BECA: jnz     short loc_50BED0
0x50BECC: add     esp, 8
0x50BECF: retn
0x50BED0: cmp     [esp+8+var_4], 0
0x50BED5: mov     eax, dword ptr [esp+8+var_8]
0x50BED8: push    4
0x50BEDA: mov     ecx, eax
0x50BEDC: jz      short loc_50BEEF
0x50BEDE: or      byte ptr [eax+34h], 20h
0x50BEE2: mov     eax, [ecx]
0x50BEE4: mov     edx, [eax+40h]
0x50BEE7: call    edx
0x50BEE9: mov     al, 1
0x50BEEB: add     esp, 8
0x50BEEE: retn
0x50BEEF: and     byte ptr [eax+34h], 0DFh
0x50BEF3: mov     eax, [ecx]
0x50BEF5: mov     edx, [eax+40h]
0x50BEF8: call    edx
0x50BEFA: mov     al, 1
0x50BEFC: add     esp, 8
0x50BEFF: retn
