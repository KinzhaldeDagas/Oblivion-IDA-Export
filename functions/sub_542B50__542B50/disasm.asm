0x542B50: push    ecx
0x542B51: push    ebx
0x542B52: push    esi
0x542B53: push    edi
0x542B54: push    3
0x542B56: mov     esi, ecx
0x542B58: call    nullsub_returnTrue_0arg
0x542B5D: mov     eax, [esi+30h]
0x542B60: mov     ebx, ds:0A2807Ch
0x542B66: add     esp, 4
0x542B69: test    eax, eax
0x542B6B: jz      short loc_542BE8
0x542B6D: push    6
0x542B6F: lea     ecx, [esp+14h+var_4]
0x542B73: push    ecx
0x542B74: mov     ecx, [eax+10h]
0x542B77: call    sub_708560
0x542B7C: mov     eax, [esp+10h+var_4]
0x542B80: test    eax, eax
0x542B82: jz      short loc_542B9E
0x542B84: mov     edi, eax
0x542B86: add     eax, 4
0x542B89: push    eax; lpAddend
0x542B8A: call    ebx ; InterlockedDecrement
0x542B8C: test    eax, eax
0x542B8E: jnz     short loc_542B9E
0x542B90: test    edi, edi
0x542B92: jz      short loc_542B9E
0x542B94: mov     edx, [edi]
0x542B96: mov     eax, [edx]
0x542B98: push    1
0x542B9A: mov     ecx, edi
0x542B9C: call    eax
0x542B9E: mov     ecx, [esi+30h]
0x542BA1: mov     ecx, [ecx+10h]; this
0x542BA4: call    NiAVObject_InitializePropertyState
0x542BA9: mov     eax, [esi+30h]
0x542BAC: mov     ecx, [eax+14h]
0x542BAF: push    6
0x542BB1: lea     edx, [esp+18h+var_8]
0x542BB5: push    edx
0x542BB6: call    sub_708560
0x542BBB: mov     eax, [esp+14h+var_8]
0x542BBF: test    eax, eax
0x542BC1: jz      short loc_542BDD
0x542BC3: mov     edi, eax
0x542BC5: add     eax, 4
0x542BC8: push    eax; lpAddend
0x542BC9: call    ebx ; InterlockedDecrement
0x542BCB: test    eax, eax
0x542BCD: jnz     short loc_542BDD
0x542BCF: test    edi, edi
0x542BD1: jz      short loc_542BDD
0x542BD3: mov     edx, [edi]
0x542BD5: mov     eax, [edx]
0x542BD7: push    1
0x542BD9: mov     ecx, edi
0x542BDB: call    eax
0x542BDD: mov     ecx, [esi+30h]
0x542BE0: mov     ecx, [ecx+14h]; this
0x542BE3: call    NiAVObject_InitializePropertyState
0x542BE8: mov     eax, [esi+34h]
0x542BEB: test    eax, eax
0x542BED: jz      short loc_542C6A
0x542BEF: mov     ecx, [eax+10h]
0x542BF2: push    6
0x542BF4: lea     edx, [esp+1Ch+var_C]
0x542BF8: push    edx
0x542BF9: call    sub_708560
0x542BFE: mov     eax, [esp+18h+var_C]
0x542C02: test    eax, eax
0x542C04: jz      short loc_542C20
0x542C06: mov     edi, eax
0x542C08: add     eax, 4
0x542C0B: push    eax; lpAddend
0x542C0C: call    ebx ; InterlockedDecrement
0x542C0E: test    eax, eax
0x542C10: jnz     short loc_542C20
0x542C12: test    edi, edi
0x542C14: jz      short loc_542C20
0x542C16: mov     eax, [edi]
0x542C18: mov     edx, [eax]
0x542C1A: push    1
0x542C1C: mov     ecx, edi
0x542C1E: call    edx
0x542C20: mov     eax, [esi+34h]
0x542C23: mov     ecx, [eax+10h]; this
0x542C26: call    NiAVObject_InitializePropertyState
0x542C2B: mov     edx, [esi+34h]
0x542C2E: push    6
0x542C30: lea     ecx, [esp+20h+var_10]
0x542C34: push    ecx
0x542C35: mov     ecx, [edx+14h]
0x542C38: call    sub_708560
0x542C3D: mov     eax, [esp+1Ch+var_10]
0x542C41: test    eax, eax
0x542C43: jz      short loc_542C5F
0x542C45: mov     edi, eax
0x542C47: add     eax, 4
0x542C4A: push    eax; lpAddend
0x542C4B: call    ebx ; InterlockedDecrement
0x542C4D: test    eax, eax
0x542C4F: jnz     short loc_542C5F
0x542C51: test    edi, edi
0x542C53: jz      short loc_542C5F
0x542C55: mov     eax, [edi]
0x542C57: mov     edx, [eax]
0x542C59: push    1
0x542C5B: mov     ecx, edi
0x542C5D: call    edx
0x542C5F: mov     eax, [esi+34h]
0x542C62: mov     ecx, [eax+14h]; this
0x542C65: call    NiAVObject_InitializePropertyState
0x542C6A: mov     eax, [esi+28h]
0x542C6D: test    eax, eax
0x542C6F: jz      loc_542D0A
0x542C75: push    6
0x542C77: lea     ecx, [esp+24h+var_14]
0x542C7B: push    ecx
0x542C7C: mov     ecx, [eax+8]
0x542C7F: call    sub_708560
0x542C84: mov     eax, [esp+20h+var_14]
0x542C88: test    eax, eax
0x542C8A: jz      short loc_542CA6
0x542C8C: mov     edi, eax
0x542C8E: add     eax, 4
0x542C91: push    eax; lpAddend
0x542C92: call    ebx ; InterlockedDecrement
0x542C94: test    eax, eax
0x542C96: jnz     short loc_542CA6
0x542C98: test    edi, edi
0x542C9A: jz      short loc_542CA6
0x542C9C: mov     edx, [edi]
0x542C9E: mov     eax, [edx]
0x542CA0: push    1
0x542CA2: mov     ecx, edi
0x542CA4: call    eax
0x542CA6: mov     ecx, [esi+28h]
0x542CA9: mov     ecx, [ecx+8]; this
0x542CAC: call    NiAVObject_InitializePropertyState
0x542CB1: mov     edx, [esi+28h]
0x542CB4: mov     ecx, [edx+8]
0x542CB7: push    4
0x542CB9: call    NiNode_GetNiPropertyByID
0x542CBE: mov     ecx, [esi+28h]
0x542CC1: mov     ecx, [ecx+0Ch]
0x542CC4: push    6
0x542CC6: lea     eax, [esp+28h+var_18]
0x542CCA: push    eax
0x542CCB: call    sub_708560
0x542CD0: mov     eax, [esp+24h+var_18]
0x542CD4: test    eax, eax
0x542CD6: jz      short loc_542CF2
0x542CD8: mov     edi, eax
0x542CDA: add     eax, 4
0x542CDD: push    eax; lpAddend
0x542CDE: call    ebx ; InterlockedDecrement
0x542CE0: test    eax, eax
0x542CE2: jnz     short loc_542CF2
0x542CE4: test    edi, edi
0x542CE6: jz      short loc_542CF2
0x542CE8: mov     edx, [edi]
0x542CEA: mov     eax, [edx]
0x542CEC: push    1
0x542CEE: mov     ecx, edi
0x542CF0: call    eax
0x542CF2: mov     ecx, [esi+28h]
0x542CF5: mov     ecx, [ecx+0Ch]; this
0x542CF8: call    NiAVObject_InitializePropertyState
0x542CFD: mov     edx, [esi+28h]
0x542D00: mov     ecx, [edx+0Ch]
0x542D03: push    4
0x542D05: call    NiNode_GetNiPropertyByID
0x542D0A: mov     ecx, [esi+24h]
0x542D0D: test    ecx, ecx
0x542D0F: pop     edi
0x542D10: pop     esi
0x542D11: pop     ebx
0x542D12: jz      short loc_542D19
0x542D14: call    sub_540F50
0x542D19: push    2
0x542D1B: call    nullsub_returnTrue_0arg
0x542D20: add     esp, 8
0x542D23: retn
