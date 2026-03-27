0x53AC60: sub     esp, 108h
0x53AC66: mov     eax, ds:0B30AACh
0x53AC6B: xor     eax, esp
0x53AC6D: mov     [esp+108h+var_4], eax
0x53AC74: mov     eax, ds:0B11A20h
0x53AC79: push    eax; lpFileName
0x53AC7A: push    0; nDefault
0x53AC7C: push    offset aVersion_0; "VERSION"
0x53AC81: push    offset aDefault_0; "DEFAULT"
0x53AC86: call    dword ptr ds:0A280E4h
0x53AC8C: cmp     eax, 0Eh
0x53AC8F: jb      loc_53AD36
0x53AC95: xor     eax, eax
0x53AC97: jmp     short loc_53ACA0
0x53AC99: align 10h
0x53ACA0: mov     cl, byte ptr ds:word_B3F280[eax]
0x53ACA6: mov     [esp+eax+108h+var_108], cl
0x53ACA9: add     eax, 1
0x53ACAC: test    cl, cl
0x53ACAE: jnz     short loc_53ACA0
0x53ACB0: mov     eax, ds:0B11A20h
0x53ACB5: mov     edx, eax
0x53ACB7: mov     cl, [eax]
0x53ACB9: add     eax, 1
0x53ACBC: test    cl, cl
0x53ACBE: jnz     short loc_53ACB7
0x53ACC0: push    esi
0x53ACC1: push    edi
0x53ACC2: lea     edi, [esp+110h+var_108]
0x53ACC6: sub     eax, edx
0x53ACC8: add     edi, 0FFFFFFFFh
0x53ACCB: jmp     short loc_53ACD0
0x53ACCD: align 10h
0x53ACD0: mov     cl, [edi+1]
0x53ACD3: add     edi, 1
0x53ACD6: test    cl, cl
0x53ACD8: jnz     short loc_53ACD0
0x53ACDA: mov     ecx, eax
0x53ACDC: shr     ecx, 2
0x53ACDF: mov     esi, edx
0x53ACE1: rep movsd
0x53ACE3: mov     ecx, eax
0x53ACE5: and     ecx, 3
0x53ACE8: rep movsb
0x53ACEA: pop     edi
0x53ACEB: xor     eax, eax
0x53ACED: pop     esi
0x53ACEE: mov     edi, edi
0x53ACF0: mov     cl, [esp+eax+108h+var_108]
0x53ACF3: mov     ds:byte_B11C44[eax], cl
0x53ACF9: add     eax, 1
0x53ACFC: test    cl, cl
0x53ACFE: jnz     short loc_53ACF0
0x53AD00: mov     edx, ds:0B11C40h
0x53AD06: mov     eax, [edx+14h]
0x53AD09: push    0
0x53AD0B: mov     ecx, offset BlendSettingCollection
0x53AD10: call    eax
0x53AD12: test    al, al
0x53AD14: jz      short loc_53AD36
0x53AD16: mov     edx, ds:0B11C40h
0x53AD1C: mov     eax, [edx+20h]
0x53AD1F: mov     ecx, offset BlendSettingCollection
0x53AD24: call    eax
0x53AD26: mov     edx, ds:0B11C40h
0x53AD2C: mov     eax, [edx+18h]
0x53AD2F: mov     ecx, offset BlendSettingCollection
0x53AD34: call    eax
0x53AD36: call    sub_53A1B0
0x53AD3B: call    sub_53A460
0x53AD40: call    sub_53A720
0x53AD45: mov     ecx, [esp+108h+var_4]
0x53AD4C: xor     ecx, esp
0x53AD4E: call    @__security_check_cookie@4; __security_check_cookie(x)
0x53AD53: add     esp, 108h
0x53AD59: retn
