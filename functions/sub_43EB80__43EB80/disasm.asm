0x43EB80: push    0FFFFFFFFh
0x43EB82: push    offset SEH_43EB80
0x43EB87: mov     eax, large fs:0
0x43EB8D: push    eax
0x43EB8E: sub     esp, 0B8h
0x43EB94: push    ebx
0x43EB95: push    ebp
0x43EB96: push    esi
0x43EB97: push    edi
0x43EB98: mov     eax, ds:0B30AACh
0x43EB9D: xor     eax, esp
0x43EB9F: push    eax
0x43EBA0: lea     eax, [esp+0D8h+var_C]
0x43EBA7: mov     large fs:0, eax
0x43EBAD: mov     ebp, ecx
0x43EBAF: xor     edi, edi
0x43EBB1: cmp     dword ptr [ebp+0Ch], 4
0x43EBB5: mov     [esp+0D8h+var_C4], edi
0x43EBB9: jl      loc_43EE80
0x43EBBF: cmp     [ebp+1Ch], edi
0x43EBC2: jz      short loc_43EBDD
0x43EBC4: mov     eax, [ebp+1Ch]
0x43EBC7: movzx   ecx, word ptr [eax+0Ch]
0x43EBCB: mov     edx, [eax+10h]
0x43EBCE: xor     eax, eax
0x43EBD0: cmp     ecx, edx
0x43EBD2: setz    al
0x43EBD5: test    al, al
0x43EBD7: jz      loc_43EE80
0x43EBDD: cmp     dword ptr [ebp+0Ch], 6
0x43EBE1: jz      loc_43EE80
0x43EBE7: mov     eax, [ebp+30h]
0x43EBEA: cmp     eax, ds:0B333C4h
0x43EBF0: jz      loc_43EE73
0x43EBF6: mov     eax, [ebp+24h]
0x43EBF9: cmp     eax, edi
0x43EBFB: jz      loc_43EE73
0x43EC01: cmp     [eax+28h], edi
0x43EC04: jz      loc_43EE73
0x43EC0A: mov     ecx, [eax+28h]
0x43EC0D: cmp     [ecx+8], edi
0x43EC10: jz      loc_43EE73
0x43EC16: mov     eax, ecx
0x43EC18: mov     eax, [eax+8]
0x43EC1B: mov     ecx, [ebp+28h]
0x43EC1E: lea     ebx, [ebp+28h]
0x43EC21: push    eax
0x43EC22: push    ecx
0x43EC23: mov     ecx, [ebp+20h]
0x43EC26: lea     esi, [ebp+2Ch]
0x43EC29: call    sub_4792F0
0x43EC2E: push    eax; a2
0x43EC2F: mov     ecx, esi; this
0x43EC31: call    NiSmartPointer_Set??
0x43EC36: mov     ecx, [esi]
0x43EC38: cmp     ecx, edi
0x43EC3A: jz      loc_43EE73
0x43EC40: cmp     [ecx+0B6h], di
0x43EC47: jbe     short loc_43EC87
0x43EC49: lea     esp, [esp+0]
0x43EC50: push    edi
0x43EC51: call    sub_405790
0x43EC56: mov     esi, eax
0x43EC58: test    esi, esi
0x43EC5A: jz      short loc_43EC76
0x43EC5C: mov     edx, [esi]
0x43EC5E: mov     eax, [edx+0Ch]
0x43EC61: mov     ecx, esi
0x43EC63: call    eax
0x43EC65: test    eax, eax
0x43EC67: jz      short loc_43EC76
0x43EC69: cmp     dword ptr [esi+0B8h], 0
0x43EC70: jnz     loc_43EE73
0x43EC76: mov     ecx, [ebp+2Ch]
0x43EC79: movzx   edx, word ptr [ecx+0B6h]
0x43EC80: add     edi, 1
0x43EC83: cmp     edi, edx
0x43EC85: jb      short loc_43EC50
0x43EC87: cmp     dword ptr [ebx], 0
0x43EC8A: jz      short loc_43EC94
0x43EC8C: mov     cl, byte ptr [esp+0D8h+var_C4]
0x43EC90: mov     eax, ebx
0x43EC92: jmp     short loc_43ECAB
0x43EC94: mov     ecx, [ebp+20h]
0x43EC97: call    sub_478A40
0x43EC9C: push    eax
0x43EC9D: lea     ecx, [esp+0DCh+var_B8]
0x43ECA1: call    sub_405070
0x43ECA6: mov     ecx, 1
0x43ECAB: test    cl, 1
0x43ECAE: mov     esi, [eax]
0x43ECB0: mov     [esp+0D8h+var_C4], esi
0x43ECB4: jz      short loc_43ECBF
0x43ECB6: lea     ecx, [esp+0D8h+var_B8]; this
0x43ECBA: call    sub_7016A0
0x43ECBF: test    esi, esi
0x43ECC1: jz      loc_43EE73
0x43ECC7: mov     ecx, [ebp+2Ch]
0x43ECCA: xor     ebx, ebx
0x43ECCC: cmp     [ecx+0B6h], bx
0x43ECD3: jbe     loc_43EE73
0x43ECD9: lea     esp, [esp+0]
0x43ECE0: push    ebx
0x43ECE1: call    sub_405790
0x43ECE6: mov     esi, eax
0x43ECE8: test    esi, esi
0x43ECEA: jz      loc_43EE5E
0x43ECF0: cmp     dword ptr [esi+0B4h], 0
0x43ECF7: jz      loc_43EE5E
0x43ECFD: mov     eax, [ebp+20h]
0x43ED00: mov     ecx, [eax+150h]
0x43ED06: test    ecx, ecx
0x43ED08: jz      loc_43EE5E
0x43ED0E: mov     edx, [ecx]
0x43ED10: mov     eax, [edx+170h]
0x43ED16: call    eax
0x43ED18: test    eax, eax
0x43ED1A: jz      loc_43EE5E
0x43ED20: mov     ecx, [ebp+20h]
0x43ED23: mov     ecx, [ecx+150h]
0x43ED29: mov     edx, [ecx]
0x43ED2B: mov     eax, [edx+170h]
0x43ED31: call    eax
0x43ED33: cmp     byte ptr [eax+4], 23h ; '#'
0x43ED37: jnz     loc_43EE5E
0x43ED3D: mov     ecx, [ebp+20h]
0x43ED40: mov     ecx, [ecx+150h]
0x43ED46: mov     edx, [ecx]
0x43ED48: mov     eax, [edx+170h]
0x43ED4E: call    eax
0x43ED50: push    offset sub_43ACE0; a5
0x43ED55: push    offset sub_43EB30; a4
0x43ED5A: push    4; size
0x43ED5C: push    18h; a2
0x43ED5E: lea     ecx, [esp+0E8h+a1]
0x43ED62: push    ecx; a1
0x43ED63: mov     edi, eax
0x43ED65: call    ArrayConstructor
0x43ED6A: mov     ecx, [esi+0B4h]
0x43ED70: lea     edx, [esp+0D8h+var_BC]
0x43ED74: push    edx
0x43ED75: mov     [esp+0DCh+var_4], 0
0x43ED80: call    sub_700790
0x43ED85: mov     eax, [eax]
0x43ED87: push    eax
0x43ED88: lea     ecx, [esp+0DCh+lpCriticalSection]
0x43ED8C: call    sub_405070
0x43ED91: lea     ecx, [esp+0D8h+var_BC]; this
0x43ED95: mov     byte ptr [esp+0D8h+var_4], 1
0x43ED9D: call    sub_7016A0
0x43EDA2: mov     ecx, [esp+0D8h+lpCriticalSection]
0x43EDA6: mov     eax, [esi]
0x43EDA8: mov     edx, [eax+8Ch]
0x43EDAE: push    ecx; lpCriticalSection
0x43EDAF: mov     ecx, esi
0x43EDB1: call    edx
0x43EDB3: lea     eax, [esp+0D8h+a1]
0x43EDB7: push    eax
0x43EDB8: mov     ecx, edi
0x43EDBA: call    sub_5221C0
0x43EDBF: push    offset aQueuedhelmetCh; "QueuedHelmet::CheckFinished()"
0x43EDC4: mov     ecx, offset stru_B39C80
0x43EDC9: call    NiEnterCriticalSection
0x43EDCE: cmp     byte ptr ds:0B120B4h, 0
0x43EDD5: jz      short loc_43EDF2
0x43EDD7: fld1
0x43EDD9: push    0; int
0x43EDDB: push    ecx
0x43EDDC: fstp    [esp+0E0h+var_E0]; float
0x43EDDF: push    esi; int
0x43EDE0: lea     ecx, [esp+0E4h+a1]
0x43EDE4: push    ecx; int
0x43EDE5: mov     ecx, [esp+0E8h+var_C4]
0x43EDE9: call    sub_558840
0x43EDEE: test    al, al
0x43EDF0: jz      short loc_43EE25
0x43EDF2: fld     dword ptr ds:0A3721Ch
0x43EDF8: push    ecx
0x43EDF9: lea     ecx, [esp+0DCh+var_B4]
0x43EDFD: fstp    [esp+0DCh+var_DC]; float
0x43EE00: call    sub_70FD80
0x43EE05: lea     edx, [esp+0D8h+var_B4]
0x43EE09: push    edx
0x43EE0A: lea     eax, [esp+0DCh+var_30]
0x43EE11: lea     edi, [esi+30h]
0x43EE14: push    eax
0x43EE15: mov     ecx, edi
0x43EE17: call    NiMAtrix33_Multiply
0x43EE1C: mov     ecx, 9
0x43EE21: mov     esi, eax
0x43EE23: rep movsd
0x43EE25: mov     ecx, offset stru_B39C80; lpCriticalSection
0x43EE2A: call    NiLeaveCriticalSection_0
0x43EE2F: lea     ecx, [esp+0D8h+lpCriticalSection]; this
0x43EE33: mov     byte ptr [esp+0D8h+var_4], 0
0x43EE3B: call    sub_7016A0
0x43EE40: push    offset sub_43ACE0; void (__thiscall *)(void *)
0x43EE45: push    4; int
0x43EE47: push    18h; unsigned int
0x43EE49: lea     ecx, [esp+0E4h+a1]
0x43EE4D: push    ecx; void *
0x43EE4E: mov     [esp+0E8h+var_4], 0FFFFFFFFh
0x43EE59: call    $LN21
0x43EE5E: mov     ecx, [ebp+2Ch]
0x43EE61: movzx   edx, word ptr [ecx+0B6h]
0x43EE68: add     ebx, 1
0x43EE6B: cmp     ebx, edx
0x43EE6D: jb      loc_43ECE0
0x43EE73: cmp     dword ptr [ebp+18h], 0
0x43EE77: jnz     short loc_43EE80
0x43EE79: mov     ecx, ebp
0x43EE7B: call    sub_4BD750
0x43EE80: mov     ecx, ebp
0x43EE82: call    sub_436F30
0x43EE87: mov     ecx, [esp+0D8h+var_C]
0x43EE8E: mov     large fs:0, ecx
0x43EE95: pop     ecx
0x43EE96: pop     edi
0x43EE97: pop     esi
0x43EE98: pop     ebp
0x43EE99: pop     ebx
0x43EE9A: add     esp, 0C4h
0x43EEA0: retn
