0x875BD0: push    0FFFFFFFFh
0x875BD2: push    offset SEH_880560
0x875BD7: mov     eax, large fs:0
0x875BDD: push    eax
0x875BDE: push    ebx
0x875BDF: push    ebp
0x875BE0: push    esi
0x875BE1: push    edi
0x875BE2: mov     eax, ds:0B30AACh
0x875BE7: xor     eax, esp
0x875BE9: push    eax
0x875BEA: lea     eax, [esp+20h+var_C]
0x875BEE: mov     large fs:0, eax
0x875BF4: mov     esi, ecx
0x875BF6: mov     ebx, [esp+20h+arg_8]
0x875BFA: mov     eax, [ebx+10h]
0x875BFD: mov     edi, ds:0B47668h
0x875C03: push    eax
0x875C04: call    sub_848C40
0x875C09: mov     ebx, [ebx+0Ch]
0x875C0C: push    ebx
0x875C0D: mov     ecx, esi
0x875C0F: call    sub_848E50
0x875C14: mov     ecx, [esp+20h+arg_0]
0x875C18: mov     eax, [esi]
0x875C1A: mov     edx, [eax+0BCh]
0x875C20: push    0
0x875C22: push    ebx
0x875C23: push    ecx
0x875C24: mov     ecx, esi
0x875C26: call    edx
0x875C28: mov     eax, [edi+24h]
0x875C2B: mov     ecx, [esp+20h+arg_C]
0x875C2F: mov     ebx, [eax]
0x875C31: mov     edx, [ecx]
0x875C33: mov     eax, [edx+88h]
0x875C39: push    0
0x875C3B: mov     [esp+24h+arg_8], ebx
0x875C3F: call    eax
0x875C41: mov     ebx, [ebx+4]
0x875C44: mov     ebp, eax
0x875C46: cmp     ebx, ebp
0x875C48: jz      short loc_875C7F
0x875C4A: test    ebx, ebx
0x875C4C: jz      short loc_875C6A
0x875C4E: lea     ecx, [ebx+4]
0x875C51: push    ecx; lpAddend
0x875C52: call    dword ptr ds:0A2807Ch
0x875C58: test    eax, eax
0x875C5A: jnz     short loc_875C6A
0x875C5C: test    ebx, ebx
0x875C5E: jz      short loc_875C6A
0x875C60: mov     edx, [ebx]
0x875C62: mov     eax, [edx]
0x875C64: push    1
0x875C66: mov     ecx, ebx
0x875C68: call    eax
0x875C6A: test    ebp, ebp
0x875C6C: mov     ecx, [esp+20h+arg_8]
0x875C70: mov     [ecx+4], ebp
0x875C73: jz      short loc_875C7F
0x875C75: add     ebp, 4
0x875C78: push    ebp; lpAddend
0x875C79: call    dword ptr ds:0A28078h
0x875C7F: mov     edx, [edi+24h]
0x875C82: mov     eax, [esp+20h+arg_C]
0x875C86: mov     ebx, [edx+4]
0x875C89: push    0
0x875C8B: push    eax
0x875C8C: mov     ecx, esi
0x875C8E: mov     [esp+28h+arg_8], ebx
0x875C92: call    sub_848FD0
0x875C97: mov     ebx, [ebx+4]
0x875C9A: mov     ebp, eax
0x875C9C: cmp     ebx, ebp
0x875C9E: jz      short loc_875CD5
0x875CA0: test    ebx, ebx
0x875CA2: jz      short loc_875CC0
0x875CA4: lea     ecx, [ebx+4]
0x875CA7: push    ecx; lpAddend
0x875CA8: call    dword ptr ds:0A2807Ch
0x875CAE: test    eax, eax
0x875CB0: jnz     short loc_875CC0
0x875CB2: test    ebx, ebx
0x875CB4: jz      short loc_875CC0
0x875CB6: mov     edx, [ebx]
0x875CB8: mov     eax, [edx]
0x875CBA: push    1
0x875CBC: mov     ecx, ebx
0x875CBE: call    eax
0x875CC0: test    ebp, ebp
0x875CC2: mov     ecx, [esp+20h+arg_8]
0x875CC6: mov     [ecx+4], ebp
0x875CC9: jz      short loc_875CD5
0x875CCB: add     ebp, 4
0x875CCE: push    ebp; lpAddend
0x875CCF: call    dword ptr ds:0A28078h
0x875CD5: mov     ebx, 1
0x875CDA: add     [edi+60h], ebx
0x875CDD: mov     [esp+20h+arg_C], edi
0x875CE1: mov     eax, [esi+38h]
0x875CE4: lea     edx, [esp+20h+arg_C]
0x875CE8: push    edx
0x875CE9: push    eax
0x875CEA: lea     ecx, [esi+40h]
0x875CED: mov     [esp+28h+var_4], 0
0x875CF5: call    sub_76CE40
0x875CFA: or      eax, 0FFFFFFFFh
0x875CFD: add     [edi+60h], eax
0x875D00: mov     [esp+20h+var_4], eax
0x875D04: jnz     short loc_875D0D
0x875D06: mov     ecx, edi
0x875D08: call    sub_7604D0
0x875D0D: add     [esi+38h], ebx
0x875D10: mov     ecx, [esp+20h+var_C]
0x875D14: mov     large fs:0, ecx
0x875D1B: pop     ecx
0x875D1C: pop     edi
0x875D1D: pop     esi
0x875D1E: pop     ebp
0x875D1F: pop     ebx
0x875D20: add     esp, 0Ch
0x875D23: retn    10h
