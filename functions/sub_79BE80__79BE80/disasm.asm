0x79BE80: sub     esp, 8; Thin checked/STL wrapper around forward SFrondGuide range copy-assignment; returns destination end.
0x79BE83: mov     edx, [esp+8+destinationFirst]
0x79BE87: push    ebx
0x79BE88: mov     ebx, [esp+0Ch+first]
0x79BE8C: push    esi
0x79BE8D: mov     esi, [esp+10h+last]
0x79BE91: push    edi
0x79BE92: mov     edi, [esp+14h+destinationFirst]
0x79BE96: xor     al, al
0x79BE98: mov     byte ptr [esp+14h+var_4], al
0x79BE9C: mov     ecx, [esp+14h+var_4]
0x79BEA0: mov     byte ptr [esp+14h+var_8], al
0x79BEA4: mov     eax, [esp+14h+var_8]
0x79BEA8: push    eax
0x79BEA9: push    ecx
0x79BEAA: push    edx
0x79BEAB: push    edi; destinationFirst
0x79BEAC: push    esi; last
0x79BEAD: push    ebx; first
0x79BEAE: call    OB_SFrondGuide_CopyAssignRangeForward_010201A0; Forward copy-assignment of initialized compact 0x30-byte SFrondGuide records. Deep-assigns each embedded SFrondVertex vector, then copies the eight scalar fields.
0x79BEB3: sub     esi, ebx
0x79BEB5: mov     eax, 2AAAAAABh
0x79BEBA: imul    esi
0x79BEBC: sar     edx, 3
0x79BEBF: mov     eax, edx
0x79BEC1: shr     eax, 1Fh
0x79BEC4: add     eax, edx
0x79BEC6: lea     eax, [eax+eax*2]
0x79BEC9: add     esp, 18h
0x79BECC: shl     eax, 4
0x79BECF: add     eax, edi
0x79BED1: pop     edi
0x79BED2: pop     esi
0x79BED3: pop     ebx
0x79BED4: add     esp, 8
0x79BED7: retn
