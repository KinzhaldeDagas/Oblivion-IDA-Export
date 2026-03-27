0x534C20: sub     esp, 8
0x534C23: mov     ecx, ds:0B34D90h
0x534C29: push    ebp
0x534C2A: push    esi
0x534C2B: push    edi; ArgList
0x534C2C: lea     eax, [esp+14h+var_8]
0x534C30: push    eax
0x534C31: mov     [esp+18h+var_4], 1
0x534C39: mov     [esp+18h+var_8], 0
0x534C41: call    sub_494410
0x534C46: mov     ebp, [esp+14h+arg_0]
0x534C4A: mov     ecx, ebp
0x534C4C: mov     esi, ebp
0x534C4E: mov     edi, edi
0x534C50: mov     dl, [ecx]
0x534C52: add     ecx, 1
0x534C55: test    dl, dl
0x534C57: jnz     short loc_534C50
0x534C59: sub     ecx, esi
0x534C5B: mov     edx, ecx
0x534C5D: mov     ecx, [eax+8]
0x534C60: lea     edi, [eax+ecx+10h]
0x534C64: add     edi, 0FFFFFFFFh
0x534C67: mov     cl, [edi+1]
0x534C6A: add     edi, 1
0x534C6D: test    cl, cl
0x534C6F: jnz     short loc_534C67
0x534C71: mov     ecx, edx
0x534C73: shr     ecx, 2
0x534C76: rep movsd
0x534C78: mov     ecx, edx
0x534C7A: and     ecx, 3
0x534C7D: rep movsb
0x534C7F: mov     ecx, ebp
0x534C81: lea     esi, [ecx+1]
0x534C84: mov     dl, [ecx]
0x534C86: add     ecx, 1
0x534C89: test    dl, dl
0x534C8B: jnz     short loc_534C84
0x534C8D: sub     ecx, esi
0x534C8F: add     [eax+8], ecx
0x534C92: lea     edx, [esp+14h+var_4]
0x534C96: push    edx
0x534C97: mov     ecx, eax
0x534C99: call    sub_494410
0x534C9E: mov     esi, eax
0x534CA0: lea     edi, [esi+10h]
0x534CA3: push    edi; Format
0x534CA4: push    4; int
0x534CA6: call    sub_533D30
0x534CAB: add     esp, 8
0x534CAE: mov     byte ptr [edi], 0
0x534CB1: pop     edi
0x534CB2: mov     [esi+0Ch], eax
0x534CB5: mov     dword ptr [esi+8], 0
0x534CBC: pop     esi
0x534CBD: pop     ebp
0x534CBE: add     esp, 8
0x534CC1: retn    4
