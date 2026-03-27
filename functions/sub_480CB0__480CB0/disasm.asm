0x480CB0: push    ebx
0x480CB1: mov     ebx, [esp+4+arg_4]
0x480CB5: test    byte ptr [ebx+18h], 1
0x480CB9: push    ebp
0x480CBA: mov     ebp, [esp+8+arg_0]
0x480CBE: jz      short loc_480CE4
0x480CC0: test    ebp, ebp
0x480CC2: jz      short loc_480CE4
0x480CC4: mov     eax, [ebp+0]
0x480CC7: mov     edx, [eax+4]
0x480CCA: mov     ecx, ebp
0x480CCC: call    edx
0x480CCE: test    eax, eax
0x480CD0: jz      short loc_480CE4
0x480CD2: cmp     eax, offset unk_B365AC
0x480CD7: jz      loc_480D5B
0x480CDD: mov     eax, [eax+4]
0x480CE0: test    eax, eax
0x480CE2: jnz     short loc_480CD2
0x480CE4: test    byte ptr [ebx+18h], 2
0x480CE8: jz      short loc_480D4C
0x480CEA: mov     ecx, ebp
0x480CEC: call    sub_452A60
0x480CF1: test    eax, eax
0x480CF3: jz      short loc_480D10
0x480CF5: mov     edx, [eax]
0x480CF7: mov     ecx, eax
0x480CF9: mov     eax, [edx+4]
0x480CFC: call    eax
0x480CFE: test    eax, eax
0x480D00: jz      short loc_480D10
0x480D02: cmp     eax, offset dword_B35288
0x480D07: jz      short loc_480D5B
0x480D09: mov     eax, [eax+4]
0x480D0C: test    eax, eax
0x480D0E: jnz     short loc_480D02
0x480D10: test    byte ptr [ebx+18h], 2
0x480D14: jz      short loc_480D4C
0x480D16: mov     ecx, ebp
0x480D18: call    sub_452A60
0x480D1D: test    eax, eax
0x480D1F: jz      short loc_480D4C
0x480D21: mov     ecx, ebp
0x480D23: call    sub_452A60
0x480D28: cmp     dword ptr [eax+8], 0
0x480D2C: jz      short loc_480D4C
0x480D2E: push    esi
0x480D2F: push    edi
0x480D30: mov     ecx, ebp
0x480D32: call    sub_452A60
0x480D37: mov     esi, [eax+8]
0x480D3A: mov     edi, offset aArrow; "Arrow"
0x480D3F: mov     ecx, 6
0x480D44: xor     edx, edx
0x480D46: repe cmpsb
0x480D48: pop     edi
0x480D49: pop     esi
0x480D4A: jz      short loc_480D5B
0x480D4C: cmp     ebp, [ebx+10h]
0x480D4F: jnz     short loc_480D57
0x480D51: mov     eax, [ebx+0Ch]
0x480D54: mov     [ebx+14h], eax
0x480D57: add     dword ptr [ebx+0Ch], 1
0x480D5B: pop     ebp
0x480D5C: pop     ebx
0x480D5D: retn
