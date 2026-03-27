0x77FC50: push    esi
0x77FC51: push    edi
0x77FC52: mov     edi, [esp+8+arg_0]
0x77FC56: test    byte ptr [edi+18h], 1
0x77FC5A: mov     esi, ecx
0x77FC5C: push    0
0x77FC5E: jz      loc_77FD09
0x77FC64: mov     eax, [esi]
0x77FC66: mov     edx, [eax+64h]
0x77FC69: push    1
0x77FC6B: push    34h ; '4'
0x77FC6D: call    edx
0x77FC6F: movzx   ecx, word ptr [edi+18h]
0x77FC73: mov     eax, [esi]
0x77FC75: mov     eax, [eax+64h]
0x77FC78: shr     ecx, 0Ch
0x77FC7B: mov     edx, [esi+ecx*4+9Ch]
0x77FC82: push    0
0x77FC84: push    edx
0x77FC85: push    38h ; '8'
0x77FC87: mov     ecx, esi
0x77FC89: call    eax
0x77FC8B: mov     eax, [edi+1Ch]
0x77FC8E: mov     edx, [esi]
0x77FC90: mov     edx, [edx+64h]
0x77FC93: push    0
0x77FC95: push    eax
0x77FC96: push    39h ; '9'
0x77FC98: mov     ecx, esi
0x77FC9A: call    edx
0x77FC9C: mov     ecx, [edi+20h]
0x77FC9F: mov     eax, [esi]
0x77FCA1: mov     edx, [eax+64h]
0x77FCA4: push    0
0x77FCA6: push    ecx
0x77FCA7: push    3Ah ; ':'
0x77FCA9: mov     ecx, esi
0x77FCAB: call    edx
0x77FCAD: movzx   ecx, byte ptr [edi+18h]
0x77FCB1: mov     eax, [esi]
0x77FCB3: mov     eax, [eax+64h]
0x77FCB6: shr     ecx, 1
0x77FCB8: and     ecx, 7
0x77FCBB: mov     edx, [esi+ecx*4+0BCh]
0x77FCC2: push    0
0x77FCC4: push    edx
0x77FCC5: push    35h ; '5'
0x77FCC7: mov     ecx, esi
0x77FCC9: call    eax
0x77FCCB: movzx   eax, byte ptr [edi+18h]
0x77FCCF: mov     edx, [esi]
0x77FCD1: mov     edx, [edx+64h]
0x77FCD4: shr     eax, 4
0x77FCD7: and     eax, 7
0x77FCDA: mov     ecx, [esi+eax*4+0BCh]
0x77FCE1: push    0
0x77FCE3: push    ecx
0x77FCE4: push    36h ; '6'
0x77FCE6: mov     ecx, esi
0x77FCE8: call    edx
0x77FCEA: movzx   ecx, word ptr [edi+18h]
0x77FCEE: mov     eax, [esi]
0x77FCF0: mov     eax, [eax+64h]
0x77FCF3: shr     ecx, 7
0x77FCF6: and     ecx, 7
0x77FCF9: mov     edx, [esi+ecx*4+0BCh]
0x77FD00: push    0
0x77FD02: push    edx
0x77FD03: push    37h ; '7'
0x77FD05: mov     ecx, esi
0x77FD07: jmp     short loc_77FD12
0x77FD09: mov     edx, [esi]
0x77FD0B: mov     eax, [edx+64h]
0x77FD0E: push    0
0x77FD10: push    34h ; '4'
0x77FD12: call    eax
0x77FD14: movzx   eax, word ptr [edi+18h]
0x77FD18: mov     ecx, [esi+0F4h]
0x77FD1E: mov     edx, [esi]
0x77FD20: mov     edx, [edx+64h]
0x77FD23: shr     eax, 0Ah
0x77FD26: and     eax, 3
0x77FD29: lea     eax, [ecx+eax*2]
0x77FD2C: mov     ecx, [esi+eax*4+0D4h]
0x77FD33: push    0
0x77FD35: push    ecx
0x77FD36: push    16h
0x77FD38: mov     ecx, esi
0x77FD3A: call    edx
0x77FD3C: pop     edi
0x77FD3D: pop     esi
0x77FD3E: retn    4
